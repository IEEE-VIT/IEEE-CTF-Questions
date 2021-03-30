<p align="center"><img src="https://github.com/IEEE-VIT/ieee-vit.github.io/blob/master/images/outreach/ctf-2020/ctf-logo.png"/></p>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
[![Build Status](https://api.travis-ci.com/IEEE-VIT/IEEE-CTF-Questions.svg?token=HEwMzfqWgtaQD8EVgQn4&branch=master&style=flat-square)](https://travis-ci.com/aryan9600/IEEE-CTF-Questions)
![Dependencies](https://img.shields.io/badge/dependencies-up%20to%20date-brightgreen.svg?style=flat-square)
[![GitHub Issues](https://img.shields.io/github/issues/aryan9600/IEEE-CTF-Questions.svg)](https://github.com/IEEE-VIT/IEEE-CTF-Questions/issues)
![Contributions welcome](https://img.shields.io/badge/contributions-welcome-orange.svg?style=flat-square)
[![License](https://img.shields.io/badge/license-MIT-blue.svg?style=flat-square)](https://opensource.org/licenses/MIT)
[![All Contributors](https://img.shields.io/badge/all_contributors-6-yellow.svg?st)](https://github.com/IEEE-VIT/IEEE-CTF-Questions/tree/master#contributors-)

## About
This repository contains all the challenges for `IEEE-CTF 2020` along with all the config files that were used to deploy them on a k8s cluster hosted on GKE.

The challenges belong to the following categories:
* pwn
* web
* crypto
* forensics
* reverse engineering
* jails
* misc


## Getting Started
The challenges are supposed to be of moderate difficulty (barring a few exceptions). Challenges are made using a variety of tehcnologies/languages like Django, Ruby on Rails, node.js, C with GDB, etc. If you'd like to contribute to any existing challenge, please familiarise yourself with the corresponding technology first. You could also contribute to the `crypto` and `forensics` challenges as well.

To get started:
* Clone the repo.
`git clone https://github.com/ieee-vit/IEEE-CTF-Questions`
* Checkout to a new branch.
`git checkout -b my-amazing-challenge`
* Make some amazing changes.
* `git add .`
* `git commit -m "A short description about the feature."`
* `git push origin my-amazing-challenge`
* Open a pull request :)

## Guidelines

### Flag
* The flag format is `IEEECTF{my-super-secret-flag}`.
* They can contain alphanumeric characters along with the special characters: "@", "$", "!".
* Try to make it seem cool :)

### Challenge Directory Structure
* One directory shall store all the files necesary for one challenge.
* Each directory must have a `README.md` present.
* If it's a `web` challenge or a challenge that requires _remote code execution_, please include a `Dockerfile` and a `.dockerignore` file as well.
* The `Dockerfile` should be enough to set up the container with the challenge, making it easy to deploy on the k8s cluster.
* Please refer to the `README-CHALLENGE.md` template while writing the challenge `README.md`.

> Note: Please feel free to refer to the Dockerfiles of the existing challenges to get a good idea of how to write one for your challenge.

## Contributing
To start contributing, check out [`CONTRIBUTING.md`](https://github.com/aryan9600/IEEE-CTF-Questions/tree/master/CONTRIBUTING.md) . New contributors are always welcome to support this project. If you want something gentle to start with, check out issues labelled as easy or good-first-issue.

## Contributors ✨

Thanks goes to these wonderful people ([emoji key](https://allcontributors.org/docs/en/emoji-key)):

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tr>
    <td align="center"><a href="https://github.com/aryan9600"><img src="https://avatars0.githubusercontent.com/u/43110940?s=460&u=8a10a5d6d3407128d666fe58a181ebf6ca6ccb1b?v=4" width="100px;" alt=""/><br /><sub><b>Sanskar Jaiswal</b></sub></a><br /> <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=aryan9600" title="Documentation">📖 <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=aryan9600" title="Code"> 💻 </a><a href="#infra-aryan9600" title="Infrastructure (Hosting, Build-Tools, etc)"> 🚇 </a>
    <td align="center"><a href="https://github.com/Tesla369"><img src="https://avatars3.githubusercontent.com/u/56352298?s=460&v=4" width="100px;" alt=""/><br /><sub><b>Poornesh Adhithya</b></sub></a><br /><a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=Tesla369" title="Documentation">📖 <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=Tesla369" title="Code"> 💻 </a></td>
    <td align="center"><a href="https://github.com/ShubhamPalriwala"><img src="https://avatars2.githubusercontent.com/u/55556994?s=460&u=09c77c2529f1773f61fbe6f340a354bdfeaca371&v=4" width="100px;" alt=""/><br /><sub><b>Shubham Palriwala</b></sub></a><br /><a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=ShubhamPalriwala" title="Documentation">📖 <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=ShubhamPalriwala" title="Code"> 💻 </a></td>
    <td align="center"><a href="https://github.com/DarthBenro008"><img src="https://avatars0.githubusercontent.com/u/31009634?s=460&u=664a0a0d459612ff4f0c2911be08e1789ddbfc72&v=4" width="100px;" alt=""/><br /><sub><b>Hemanth Krishna</b></sub></a><br /> <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=DarthBenro008" title="Documentation">>📖 <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=DarthBenro008" title="Code"> 💻 </a><a href="#infra-DarthBenro008" title="Infrastructure (Hosting, Build-Tools, etc)"> 🚇 </a>
    <td align="center"><a href="https://github.com/pwned-17"><img src="https://avatars1.githubusercontent.com/u/61360833?s=460&v=4" width="100px;" alt=""/><br /><sub><b>Shaik Ajmal</b></sub></a><br /><a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=pwned-17" title="Documentation">📖 <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=pwned-17" title="Code"> 💻 </a></td>
    <td align="center"><a href="https://github.com/hsrambo07 "><img src="https://avatars1.githubusercontent.com/u/60664245?s=460&u=1ac2ad98a7e07f0f3dc0734e1199c7a1586ce3b4&v=4" width="100px;" alt=""/><br /><sub><b>Harsh Singhal</b></sub></a><br /><a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=hsrambo07 " title="Documentation">📖 <a href="https://github.com/ieee-vit/IEEE-CTF-Questions/commits?author=hsrambo07 " title="Code"> 💻 </a></td>
