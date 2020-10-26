FROM nikolaik/python-nodejs:python3.7-nodejs12-slim

WORKDIR /app
COPY . /app
RUN npm install
RUN chmod +x run.sh
CMD ./run.sh
EXPOSE 2640
