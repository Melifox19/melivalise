#!/usr/bin/env bash

# Vérifie la présence des dépendances
STRACE_PATH=$(which strace 2> /dev/null)
if [[ "/usr/bin/strace" = $STRACE_PATH || "/bin/strace" = $STRACE_PATH ]]
then
    echo "[SUCCÈS] Dépendances de 'strace' satisfaite"
elif [[ 1  ]]
then
    echo "[ERREUR] Dépendances de 'strace' non satisfaite"
    exit 1
fi

# Détermine l'architecture de la machine

if [[ $(uname -a | egrep -io 'x86_64') ]]
then
    MELI_ARCH="melivalise-x86_64"
elif [[ $(uname -a | egrep -io 'arm') ]]
then
    MELI_ARCH="melivalise-arm"
fi

# Vérifie que le programme melivalise est en cours d'exécution
MELIVALISE_PID=$(pidof -s $MELI_ARCH)
if [[ -z "$MELIVALISE_PID" ]]
then
    echo "[ERREUR] Pas d'exécution de Mélivalise trouvée"
    exit 1
elif [[ $(echo $MELIVALISE_PID | egrep '\ ') ]]
then
    echo "[ERREUR] Plusieurs exécution de Mélivalise trouvée"
    echo "         Veuillez en laisser qu'une seule."
  printf "         %b\n ", $MELIVA
    exit 1
elif [[ $(echo $MELIVALISE_PID | egrep '[0-9]+') ]]
then
  printf "[SUCCÈS] Hijacking du PID %b\n" $MELIVALISE_PID
  sudo strace -ewrite -p $MELIVALISE_PID
  echo "Hijacking terminé"
  exit 0
fi

