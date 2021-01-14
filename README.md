# Edge Impulse CLI Installation guide

## To install the cli on ubuntu 20.10 or raspbian os - follow this guide to avoide breaking your sudo system:

### Option 1- Installation on Ubuntu 20.10:

```bash
$ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
```

```bash
$ sudo apt-get install -y nodejs
```

```bash
$ node -v
```

```bash
$ curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
```

#### The above script installs arduino cli

```bash
$ npm config get prefix
```

#### Type the above command and check if it returns ```usr``` back. 
#### if it does, you are good to go ahead! If it returns ```usr/local```, head onto option 2:


```bash
$ sudo chown -R $(whoami) $(npm config get prefix)/{lib/node_modules,bin,share}
```

```bash
$ npm install -g edge-impulse-cli
```

#### Bingo! Now you have installed the cli on Ubuntu 20.10



## Option 2: Installation on Raspbian OS:

```
https://docs.npmjs.com/resolving-eacces-permissions-errors-when-installing-packages-globally
https://github.com/KraigM/homebridge-harmonyhub/issues/97
