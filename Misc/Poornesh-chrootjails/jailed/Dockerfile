FROM ubuntu:16.04
RUN apt-get update && apt-get install -y openssh-server
RUN mkdir /var/run/sshd

RUN useradd -M jailer
RUN echo 'jailer:keyissecret' | chpasswd

RUN sed -i 's/PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config

# SSH login fix. Otherwise user is kicked off after login
RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd
RUN chmod go-rx /usr/bin/passwd

WORKDIR /jailed
COPY ./jailed .
RUN chown -R root:root /jailed
RUN chmod -R 755 .
RUN chmod 1733 /tmp /var/tmp /dev/shm

RUN chsh -s /bin/bash jailer
RUN echo "Match User jailer" >> /etc/ssh/sshd_config
RUN echo "  ChrootDirectory /jailed" >> /etc/ssh/sshd_config
EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]
