#!/usr/bin/env bash

# Vérifie si le module est présent en port série usb
# Quitte si rien n'est trouvé

if [[ $(ls -l /dev/ttyUSB* 2> /dev/null) ]]
then
    ls -l /dev/ttyUSB* | awk '{print $10}'
else
    echo "[ERREUR] Aucun module trouvé en port série usb !"
    exit 1
fi

# Ajoute le groupe de l'utilisateur à tout les modules

sudo chown :$USER /dev/ttyUSB*

# Vérifie que l'utilisateur soit bien affecté aux modules

if [[ $(ls -l /dev/ttyUSB* | grep $USER) ]]
then
    echo "[SUCCÈS] Tout est bon !"
else
    echo "[ERREUR] Un problème a été rencontré lors de l'affectation."
fi

