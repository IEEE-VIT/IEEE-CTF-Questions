FROM disconnect3d/nsjail
WORKDIR /jailed
COPY ./jailed .
RUN chmod -R 755 .
CMD nsjail -Ml --port 9003 --disable_proc --chroot /jailed -- /bin/bash
