docker build -t aryan9600/ieeectf-pwn:latest -t aryan9600/ieeectf-pwn:$SHA -f ./Misc/locked-binary/Dockerfile ./Misc/locked-binary

docker build -t aryan9600/ieeectf-dontbesobrutal:latest -t aryan9600/ieeectf-dontbesobrutal:$SHA -f ./Misc/dont-be-so-brutal/Dockerfile ./Misc/dont-be-so-brutal

docker build -t aryan9600/ieeectf-nodejs-vm:latest -t aryan9600/ieeectf-nodejs-vm:$SHA -f ./WEB/Ajmal\ NodeJS\ VM/Dockerfile ./WEB/Ajmal\ NodeJS\ VM

docker build -t aryan9600/ieeectf-haunted:latest -t aryan9600/ieeectf-haunted:$SHA -f ./WEB/haunted-house/Dockerfile ./WEB/haunted-house

# docker build -t aryan9600/ieeectf-advertisment:latest -t aryan9600/ieeectf-advertisment:$SHA -f ./WEB/advertisment-auth/Dockerfile ./WEB/advertisment-auth

docker build -t aryan9600/ieeectf-ssrf:latest -t aryan9600/ieeectf-ssrf:$SHA -f ./WEB/Ajmal\ SSRF/Dockerfile ./WEB/Ajmal\ SSRF

docker build -t aryan9600/ieeectf-jail:latest -t aryan9600/ieeectf-jail:$SHA -f ./Misc/Poornesh-chrootjails/jail/Dockerfile ./Misc/Poornesh-chrootjails/jail

docker build -t aryan9600/ieeectf-jailed:latest -t aryan9600/ieeectf-jailed:$SHA -f ./Misc/Poornesh-chrootjails/jailed/Dockerfile ./Misc/Poornesh-chrootjails/jailed

docker build -t aryan9600/ieeectf-re:latest -t aryan9600/ieeectf-re:$SHA -f ./Reverse\ Engineering/ubuntu-re/Dockerfile ./Reverse\ Engineering/ubuntu-re

docker build -t aryan9600/ieeectf-pyjail:latest -t aryan9600/ieeectf-pyjail:$SHA -f ./Misc/pyjail/Dockerfile ./Misc/pyjail

docker push aryan9600/ieeectf-pwn:latest
docker push aryan9600/ieeectf-dontbesobrutal:latest
docker push aryan9600/ieeectf-nodejs-vm:latest
docker push aryan9600/ieeectf-haunted:latest
# docker push aryan9600/ieeectf-advertisment:latest
docker push aryan9600/ieeectf-ssrf:latest
docker push aryan9600/ieeectf-jail:latest
docker push aryan9600/ieeectf-jailed:latest
docker push aryan9600/ieeectf-re:latest
docker push aryan9600/ieeectf-pyjail:latest


docker push aryan9600/ieeectf-pwn:$SHA
docker push aryan9600/ieeectf-dontbesobrutal:$SHA
docker push aryan9600/ieeectf-nodejs-vm:$SHA
docker push aryan9600/ieeectf-haunted:$SHA
# docker push aryan9600/ieeectf-advertisment:$SHA
docker push aryan9600/ieeectf-ssrf:$SHA
docker push aryan9600/ieeectf-jail:$SHA
docker push aryan9600/ieeectf-jailed:$SHA
docker push aryan9600/ieeectf-re:$SHA
docker push aryan9600/ieeectf-pyjail:latest


kubectl apply -f k8s
kubectl patch configmap tcp-services --patch "$(cat k8s/patch.json)"
# kubectl patch configmap ingress-nginx-controller --patch "$(cat k8s/ingress-nginx-configmap.yaml)"
kubectl patch deployment ingress-nginx-controller --patch "$(cat k8s/ingress-nginx-controller-patch.yaml)"
kubectl patch svc ingress-nginx-controller --patch "$(cat k8s/ingress-nginx-svc-patch.yaml)"

# kubectl set image deployments/advertisment-auth-deployment advertisment-auth=aryan9600/ieeectf-advertisment:$SHA
kubectl set image deployments/dbsb-deployment dbsb=aryan9600/ieeectf-dontbesobrutal:$SHA
kubectl set image deployments/node-vm-deployment node-vm=aryan9600/ieeectf-nodejs-vm:$SHA
kubectl set image deployments/php-deployment php-server=aryan9600/ieeectf-haunted:$SHA
kubectl set image deployments/ssrf-deployment ssrf=aryan9600/ieeectf-ssrf:$SHA
kubectl set image deployments/pwn-deployment pwn=aryan9600/ieeectf-pwn:$SHA
kubectl set image deployments/re-deployment re=aryan9600/ieeectf-re:$SHA
kubectl set image deployments/jail-deployment jail=aryan9600/ieeectf-jail:$SHA
kubectl set image deployments/jailed-deployment jailed=aryan9600/ieeectf-jailed:$SHA
kubectl set image deployments/pyjail-deployment pyjail=aryan9600/ieeectf-pyjail:$SHA
