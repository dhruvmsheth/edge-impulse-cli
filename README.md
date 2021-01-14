# Edge Impulse CLI Installation guide

> To install the cli on ubuntu or linux - follow this guide to avoide breaking your sudo system:

``` py
$ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -

$ sudo apt-get install -y nodejs

$ node -v

$ curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh

$ sudo chown -R $(whoami) $(npm config get prefix)/{lib/node_modules,bin,share}

$ npm install -g edge-impulse-cli

$ npm config get prefix
```
https://docs.npmjs.com/resolving-eacces-permissions-errors-when-installing-packages-globally
https://github.com/KraigM/homebridge-harmonyhub/issues/97
