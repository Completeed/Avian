 #!/usr/bin/env bash

 # Execute this file to install the raven cli tools into your path on OS X

 CURRENT_LOC="$( cd "$(dirname "$0")" ; pwd -P )"
<<<<<<< HEAD
 LOCATION=${CURRENT_LOC%Avian-Qt.app*}
=======
 LOCATION=${CURRENT_LOC%Raven-Qt.app*}
>>>>>>> 5c221fd42c641eee3fbeae37afdd33a8d39efec4

 # Ensure that the directory to symlink to exists
 sudo mkdir -p /usr/local/bin

 # Create symlinks to the cli tools
<<<<<<< HEAD
 sudo ln -s ${LOCATION}/Avian-Qt.app/Contents/MacOS/aviand /usr/local/bin/aviand
 sudo ln -s ${LOCATION}/Avian-Qt.app/Contents/MacOS/avian-cli /usr/local/bin/avian-cli
=======
 sudo ln -s ${LOCATION}/Raven-Qt.app/Contents/MacOS/ravend /usr/local/bin/ravend
 sudo ln -s ${LOCATION}/Raven-Qt.app/Contents/MacOS/raven-cli /usr/local/bin/raven-cli
>>>>>>> 5c221fd42c641eee3fbeae37afdd33a8d39efec4
