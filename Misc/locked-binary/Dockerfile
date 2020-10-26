FROM disconnect3d/nsjail
WORKDIR /jail
COPY ./jail .
RUN chmod -R 755 . && chmod +x locked
CMD nsjail -Ml -e -E FLAG="IEEECTF{5Y5t3M_m3M0rY_C0rRuPT3d}" --port 9000 --disable_proc --chroot /jail -- /bin/bash
