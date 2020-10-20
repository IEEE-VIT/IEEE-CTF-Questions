FROM node:12

WORKDIR /app
COPY . /app
RUN npm install
RUN python -m http.server 3301 --bind 127.0.0.1 --directory /app/flag
CMD node app.js
EXPOSE 2640
