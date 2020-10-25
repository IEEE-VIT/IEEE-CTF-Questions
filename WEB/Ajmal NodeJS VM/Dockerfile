FROM node:alpine
WORKDIR '/app'
COPY ./package.json ./
RUN npm install
COPY . .
RUN addgroup -g 1001 -S ctf && adduser -u 1001 -S ctf -G ctf
RUN chmod 555 /app
USER ctf
EXPOSE 2640
CMD ["node", "app.js"]
