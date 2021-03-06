# Edge Impulse CLI Installation guide

## To install the cli on ubuntu 20.10 or raspbian os - follow this guide to avoid breaking your sudo command:

### Option 1- Installation on Ubuntu 20.10:

```bash
$ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
```

```bash
$ sudo apt-get install -y nodejs
```

Check if the version is v14 or above
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
Type the above command and check if it returns **usr** back on your terminal. 
if it does, you are good to go ahead! If it returns **usr/local**, head onto option 2. Make sure you have Python3.7 and above to execute all the functions.



```bash
$ sudo chown -R $(whoami) $(npm config get prefix)/{lib/node_modules,bin,share}
```

```bash
$ npm install -g edge-impulse-cli
```
This installs the Edge-impulse-cli and so, you can go ahead and execute the commands to configure mcu with the Edge impulse dashboard.

#### Bingo! Now you have installed the cli on Ubuntu 20.10



## Option 2: Installation on Raspbian OS:
The installation on the Raspbian OS is a bit longer than ubuntu, because you need to change the installation path so that you do not require **root/administrator** permissions while execution of the CLI. Go ahead and follow the instructions for installation.
### Instructions for manually changing default directory

To minimize the chance of permissions errors, you can configure npm to use a different directory. In this example, you will create and use hidden directory in your home directory.

- Back up your computer.
- On the command line, in your home directory, create a directory for global installations:


```bash
$ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -
```

```bash
$ sudo apt-get install -y nodejs
```

Check if the version is v14 or above
```bash
$ node -v
```


```bash
$ curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
```


#### The above script installs arduino cli


If it returns that the directory is not on path, type 
```bash
npm config get prefix
```
Whatever output you get, add in place of home/dave/work
```bash
export PATH=/home/dave/work:$PATH
```

```bash
$ npm config get prefix
```
This command should return **usr/local**. Now follow the below steps, to set it on path so you do not require administrative permisiions

```bash
$ mkdir ~/.npm-global
```

Configure npm to use the new directory path:
```bash
$ npm config set prefix '~/.npm-global'
```

In your preferred text editor, open or create a ~/.profile file and add this line:
```bash
export PATH=~/.npm-global/bin:$PATH
```

On the command line, update your system variables:
```bash
$ source ~/.profile
```
Now install the cli:
```bash
$ npm install -g edge-impulse-cli
```
This installs the Edge-impulse-cli and so, you can go ahead and execute the commands to configure mcu with the Edge impulse dashboard.

#### Bingo! Now you have installed the cli on Raspbian OS

If there are any error you come across, create an issue and I will help solve it :)

Source: 
-https://docs.npmjs.com/resolving-eacces-permissions-errors-when-installing-packages-globally
-https://github.com/KraigM/homebridge-harmonyhub/issues/97
