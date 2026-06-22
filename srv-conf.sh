#!/bin/bash

MODEL_PATH="/home/chitak/models/qwen2.5-coder-1.5b-instruct-q8_0.gguf"
HOST="0.0.0.0"
PORT="8080"

# Папка для логов
LOG_DIR="/home/chitak/Documents/курсовая/srv-logs"
mkdir -p "$LOG_DIR"

# Лог-файл с датой
LOG_FILE="$LOG_DIR/llama-server-$(date +%Y%m%d_%H%M%S).log"

# Получаем IP-адрес
IP=$(ip -4 addr show enp6s0 | grep -oP '(?<=inet\s)\d+(\.\d+){3}' | head -1)

# Запуск сервера
nohup /home/chitak/LLAMA/llama.cpp/build-pc/bin/llama-server \
    -m "$MODEL_PATH" \
    --host "$HOST" \
    --port "$PORT" \
    -c 4096 \
    -ngl 33 \
    --threads 4 \
    --parallel 2 \
    > "$LOG_FILE" 2>&1 &

PID=$!
echo $PID > /tmp/llama-server.pid

echo "Server start with PID: $PID"
echo "Web-interface: http://localhost:$PORT"
echo "Log: $LOG_FILE"
echo "For stop: kill $PID"
