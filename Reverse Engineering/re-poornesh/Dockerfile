FROM disconnect3d/nsjail
WORKDIR /jail
COPY ./jail .
RUN chmod -R 755 . && chmod +x Unbreakable_Lock
RUN export FLG="zzdiuwo{a4ana4_ddk4bh_t0q3e3h}" && export FCMP=Unknown_FLG_CoMParis0n
CMD nsjail -e -E FLG=zzdiuwo{a4ana4_ddk4bh_t0q3e3h} -E FCMP=Unknown_FLG_CoMParis0n -Ml --port 8999 --disable_proc --chroot /jail -- /bin/bash
EXPOSE 8999
