#!/bin/bash
# Путь к модели и параметры
MODEL_PATH="/home/chitak/models/qwen3-0.6b-q4_0.gguf"
HOST="0.0.0.0"
PORT="3000"

# Запуск сервера, лог
nohup /home/chitak/llama.cpp/build/bin/llama-server -m $MODEL_PATH --host $HOST --port $PORT -c 1024 --parallel 2 >> /var/log/llama.log 2>&1 &

echo "Сервер запущен с PID: $!"
