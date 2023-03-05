
# 🇮🇹 Appunti 

<h6>Se pensi che ció che leggi ti sia di aiuto, considera di lasciare una stella ⭐ (trovi il tasto in alto a destra della pagina).
La stella serve anche a far sí che questi Appunti raggiungano un piú ampio numero di studenti bisognosi!</h6>
<h3>Che cos'è una Virtual Machine?</h3>
<p>Una Virtual Machine (VM) è un software che crea un ambiente virtuale all'interno di un sistema operativo ospite in modo da consentire l'esecuzione di un sistema operativo ospite separato. In altre parole, una VM è un'istanza isolata di un sistema operativo completo, compresi i file di sistema, le applicazioni e le librerie, che viene eseguita all'interno di un altro sistema operativo ospite.</p>

<p>Questo ambiente, chiamato "macchina virtuale", viene creato dal software di virtualizzazione intercettando l'accesso a determinati componenti hardware e determinate funzionalità. Il computer fisico viene solitamente chiamato "host", mentre la macchina virtuale viene spesso chiamata "guest". La maggior parte del codice guest viene eseguito senza modifiche direttamente sul computer host e il sistema operativo guest "pensa" di essere in esecuzione su una macchina reale.</p>

<p>Le VM consentono ai programmatori di testare il software in un ambiente controllato e separato, senza dover installare un sistema operativo separato su un hardware fisico dedicato. Le VM sono utilizzate anche per la virtualizzazione del server, in cui una singola macchina fisica viene suddivisa in più VM per aumentare l'utilizzo delle risorse del server.</p>

<p>Le VM possono essere utilizzate anche per l'isolamento e la sicurezza, in cui il software viene eseguito all'interno di una VM che limita l'accesso alle risorse del sistema ospite. In questo modo, se il software nella VM viene compromesso, il sistema operativo ospitante rimane protetto.</p>

Ci sono diversi scenari che rendono la virtualizzazione allettante:
- Supporto del sistema operativo. Con un virtualizzatore come VirtualBox, è possibile eseguire software scritto per un sistema operativo su un altro (ad esempio, software Windows su Linux) senza dover riavviare.
- Consolidamento dell'infrastruttura. Poiché le prestazioni complete dei computer di oggi raramente sono necessarie a tempo pieno, invece di far funzionare molti di questi computer fisici, è possibile "imballare" molte macchine virtuali su pochi host potenti e bilanciare i carichi tra di loro. Ciò può risparmiare molti costi hardware: ad esempio, consolidando molti server in pochi.
- Test e ripristino in caso di disastro. Soprattutto con l'uso degli snapshot, è possibile sperimentare con un ambiente informatico eseguendolo come macchina virtuale. Se qualcosa va storto, è possibile tornare facilmente a uno snapshot precedente e evitare la necessità di frequenti backup e ripristini.</br>

<h3>Qual è lo scopo di una Virtual Machine?</h3>
Lo scopo principale di una Virtual Machine (VM) è quello di creare un ambiente virtuale che emuli un intero sistema informatico, incluso il sistema operativo, le applicazioni e le librerie, all'interno di un altro sistema operativo ospite. Ciò consente di eseguire più sistemi operativi su un singolo sistema fisico, consentendo l'isolamento e la gestione delle risorse del sistema, come CPU, RAM, storage e rete.

Ci sono molte ragioni per utilizzare una VM, tra cui:
- Testing: le VM consentono di testare il software in un ambiente controllato, senza dover installare un sistema operativo separato su un hardware dedicato.
- Sviluppo: le VM consentono di creare ambienti di sviluppo separati e isolati per diverse applicazioni e versioni del software.
Consolidamento dei server: le VM possono consolidare più server fisici in un singolo sistema fisico, migliorando l'utilizzo delle risorse e riducendo i costi di gestione.
- Migrazione: le VM possono essere utilizzate per migrare il software da un sistema operativo a un altro, senza dover reinstallare o configurare nuovamente il software.
- Sicurezza: le VM possono essere utilizzate per l'isolamento e la sicurezza, in cui il software viene eseguito all'interno di una VM che limita l'accesso alle risorse del sistema ospite.

In sintesi, una VM consente di creare ambienti di lavoro isolati e sicuri, migliorando l'efficienza e la gestione delle risorse del sistema.

<h3>Quali sono le differenze base tra CentOS e Debian come sistemi operativi?</h3>
CentOS e Debian sono entrambi sistemi operativi basati su Linux, ma ci sono alcune differenze fondamentali tra di loro:

- Origine: CentOS è basato su Red Hat Enterprise Linux (RHEL), mentre Debian è stato sviluppato indipendentemente.
- Ciclo di rilascio: CentOS ha un ciclo di rilascio molto più lento rispetto a Debian. CentOS ha una politica di supporto a lungo termine (LTS) e ogni versione è supportata per 10 anni. Debian ha un ciclo di rilascio più rapido e ogni versione ha un supporto di circa 5 anni.
- Gestore di pacchetti: CentOS utilizza il gestore di pacchetti YUM (Yellowdog Updater Modified), mentre Debian utilizza il gestore di pacchetti APT (Advanced Package Tool).
- Comunità di sviluppo: Debian è sviluppato da una comunità di volontari, mentre CentOS è principalmente sviluppato da Red Hat.
- Supporto hardware: CentOS ha un forte supporto per hardware server di fascia alta, mentre Debian ha un supporto più ampio per hardware generico.
- Installazione e configurazione: L'installazione di Debian è generalmente considerata più complessa rispetto a CentOS. Tuttavia, Debian offre una maggiore flessibilità nella configurazione del sistema operativo rispetto a CentOS.
- Stabilità: Entrambi i sistemi operativi sono noti per la loro stabilità e affidabilità, ma CentOS è generalmente considerato il sistema operativo più stabile e affidabile, in particolare per l'uso su server aziendali critici.

In sintesi, entrambi i sistemi operativi sono robusti e affidabili, ma CentOS è generalmente considerato la scelta migliore per le aziende che cercano una piattaforma stabile e sicura per i loro server, mentre Debian è più flessibile e adatto per gli utenti più avanzati che hanno bisogno di un alto grado di personalizzazione e controllo del loro sistema operativo.
Che cosa é un SSH service?
Un SSH (Secure Shell) service è un servizio di rete che permette di stabilire una connessione sicura e cifrata tra due dispositivi tramite un protocollo di comunicazione chiamato SSH.

In pratica, SSH consente a un utente di connettersi ad un server remoto in modo sicuro, autenticandosi con una coppia di chiavi (una pubblica e una privata), e di accedere al prompt della shell del server per eseguire comandi come se fosse sul dispositivo locale.

L'utilizzo di SSH è particolarmente importante per la sicurezza delle connessioni remote, in quanto crittografa il traffico dati scambiato tra i due dispositivi, rendendo impossibile per un malintenzionato intercettare e decodificare i dati trasmessi. Inoltre, SSH offre anche una varietà di funzionalità utili, come la copia sicura di file e la gestione delle chiavi di accesso.

**Controlla che il SSH service é avviato.**

<<<<<<< HEAD
>root@misidori42:/home/misidori# sudo service ssh status<br>
● ssh.service - OpenBSD Secure Shell server<br>
     Loaded: loaded (/lib/systemd/system/ssh.service; enabled; vendor preset: enabled)<br>
    Active: active (running) since Mon 2023-02-27 04:33:07 CET; 44min ago<br>
       Docs: man:sshd(8)<br>
             man:sshd_config(5)<br>
    Process: 33866 ExecStartPre=/usr/sbin/sshd -t (code=exited, status=0/SUCCESS)<br>
   Main PID: 33867 (sshd)<br>
      Tasks: 1 (limit: 1125)<br>
     Memory: 2.4M<br>
        CPU: 45ms<br>
     CGroup: /system.slice/ssh.service<br>
             └─33867 sshd: /usr/sbin/sshd -D [listener] 0 of 10-100 startups<br>
<br>
Feb 27 04:33:07 misidori42 systemd[1]: Starting OpenBSD Secure Shell server...<br>
Feb 27 04:33:07 misidori42 sshd[33867]: Server listening on 0.0.0.0 port 4242.<br>
Feb 27 04:33:07 misidori42 sshd[33867]: Server listening on :: port 4242.<br>
Feb 27 04:33:07 misidori42 systemd[1]: Started OpenBSD Secure Shell server.<br>

<h3>Che cos'é un firewall?</h3>
Un firewall è un software o un hardware che agisce come una barriera di sicurezza tra una rete di computer e Internet. Il suo scopo principale è quello di proteggere la rete bloccando l'accesso non autorizzato da parte di utenti esterni o di programmi dannosi.

Il firewall può essere configurato per bloccare il traffico in base a determinati criteri, come l'indirizzo IP di origine, il tipo di protocollo o la porta utilizzata per la connessione. In questo modo, il firewall può prevenire attacchi informatici come hacking, malware e phishing, proteggendo la rete e i dati sensibili che contiene.

Il firewall può anche essere configurato per limitare l'accesso a determinati siti web o applicazioni da parte degli utenti della rete, aiutando così a controllare l'uso della rete e migliorare la produttività dei dipendenti. In generale, il firewall è un componente importante della sicurezza informatica e della protezione della privacy online.

<h3>Che cos'é il UFW firewall?</h3>
UFW (Uncomplicated Firewall) è un firewall basato su IPtables che fornisce un'interfaccia semplificata per configurare le regole di filtraggio dei pacchetti su un sistema Linux.

UFW viene installato di default in alcune distribuzioni Linux, come ad esempio Ubuntu, e può essere gestito tramite il comando "ufw" da riga di comando o tramite GUI.

Le regole di UFW consentono di specificare quali porte e protocolli di rete sono aperti o chiusi, e di impostare le politiche di default per le connessioni in entrata e in uscita. È possibile anche configurare regole più avanzate per permettere o bloccare il traffico di rete da o verso specifici indirizzi IP o sottoreti.

UFW è utile per migliorare la sicurezza del sistema, in quanto permette di bloccare l'accesso non autorizzato alle porte di rete e di limitare il traffico di rete entrante e uscente. Tuttavia, è importante ricordare che UFW è solo uno strumento di sicurezza tra molti altri che dovrebbero essere utilizzati per proteggere un sistema Linux.

<h3>A cosa serve il comando ufw status?</h3>
Il comando ufw status è un comando utilizzato per verificare lo stato del firewall UFW (Uncomplicated Firewall) su un sistema Linux. UFW è un frontend semplificato per iptables e consente agli amministratori di sistema di configurare rapidamente e facilmente il firewall di sistema.

Il comando ufw status restituisce lo stato corrente del firewall UFW, inclusi i profili attivi e le regole configurate.

Controlla che il UFW service é avviato.

root@misidori42:~#  /usr/sbin/ufw status
Status: active

To                             Action            From
--                                ------               ----
4242                       ALLOW       Anywhere                  
4242 (v6)                ALLOW       Anywhere (v6)

In questo esempio, il firewall UFW è attivo e ci sono alcune regole configurate che consentono il traffico attraverso le porte 4242.

Il comando ufw status è utile per verificare lo stato del firewall UFW e per identificare eventuali problemi di configurazione o errori nelle regole del firewall.

Per aggiungere una porta:
sudo ufw allow 8080
Esempio:
root@misidori42:/home/misidori# sudo ufw allow 8080
Rule added
Rule added (v6)
root@misidori42:/home/misidori# sudo ufw status
Status: active

To                         Action      From
--                         ------      ----
4242                       ALLOW       Anywhere                  
8080                       ALLOW       Anywhere                  
4242 (v6)                  ALLOW       Anywhere (v6)             
8080 (v6)                  ALLOW       Anywhere (v6)

Per chiudere una porta:
sudo ufw deny 8080
Esempio:
root@misidori42:/home/misidori# sudo ufw deny 8080
Rule updated
Rule updated (v6)
root@misidori42:/home/misidori# sudo ufw status
Status: active

To                         Action      From
--                         ------      ----
4242                       ALLOW       Anywhere                  
8080                       DENY        Anywhere                  
4242 (v6)                  ALLOW       Anywhere (v6)             
8080 (v6)                  DENY        Anywhere (v6)

Per eliminare una porta:
sudo ufw delete deny 8080
root@misidori42:/home/misidori# sudo ufw status
Status: active

To                         Action      From
--                         ------      ----
4242                       ALLOW       Anywhere                  
4242 (v6)                  ALLOW       Anywhere (v6) 

<h3>Per verificare il sistema operativo montato:</h3>
root@misidori42:/home/misidori# head -n 2 /etc/os-release
PRETTY_NAME="Debian GNU/Linux 11 (bullseye)"
NAME="Debian GNU/Linux"

oppure
root@misidori42:/home/misidori# uname -v
#1 SMP Debian 5.10.162-1 (2023-01-21)
Comandi da sapere:

<h3>Creare un nuovo utente:</h3>
sudo adduser "name_user"
Esempio:
root@misidori42:/home/misidori# sudo adduser scabbol
Adding user `scabbol' ...
Adding new group `scabbol' (1002) ...
Adding new user `scabbol' (1001) with group `scabbol' ...
Creating home directory `/home/scabbol' ...
Copying files from `/etc/skel' ...
New password: ****
Retype new password: **** 
passwd: password updated successfully
Changing the user information for scabbol

<h3>Vedere la lista degli utenti:</h3>
cat /etc/passwd

<h3>Creare un nuovo gruppo:</h3>
sudo addgroup "group_name"

<h3>Aggiungere un utente in un gruppo:</h3>
sudo adduser name_user group_name
Esempio:
root@misidori42:/home/misidori# sudo adduser scabbol user42
Adding user `scabbol' to group `user42' ...
Adding user scabbol to group user42
Done.

<h3>Vedere la lista di utenti di un gruppo:</h3>
getent group group_name
Esempio:
root@misidori42:/home/misidori# getent group user42
user42:x:1001:misidori,scabbol

<h3>Eliminare un utente:</h3>
sudo deluser user_name
Esempio:
root@misidori42:/home/misidori# sudo deluser scabbol
Removing user `scabbol' ...
Warning: group `scabbol' has no more members.
Done.
Lanciando pero' il comando 
root@misidori42:/home/misidori# sudo groupdel scabbol
groupdel: group 'scabbol' does not exist
scabbol non esiste piú neanche come gruppo.
Eliminare un utente da un gruppo:
sudo deluser name_user group_name
Esempio:
root@misidori42:/home/misidori# sudo deluser scabbol user42
Removing user `scabbol' from group `user42' ...
Done.

<h3>Eliminare un gruppo:</h3>
sudo groupdel group_name
Esempio:
root@misidori42:/home/misidori# sudo groupdel user42

<h3>Vedere il nome dell'host:</h3>
root@misidori42:/home/misidori# hostname
misidori42

<h3>Modificare il nome dell'host:</h3>
sudo nano /etc/hostname
Esempio:

<h3>Cambiare password dell'utente root:</h3>
sudo passwd root


Per connettersi via SSH dalla macchina ospitante alla macchina virtuale ospite, si usa il comando:
ssh misidori@localhost -p 4242
verrá chiesta la password dell'utente con cui stiamo cercando di loggarci sulla virtual machine. Una volta che la password verrá immessa, il login verrá effettuato e il nome dell'utente apparirá verde, a significare che la connessione é stata stabilita correttamente.



<h3>monitoring.sh</h3>
#!/bin/bash

# ARCH
arch=$(uname -a)

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

# RAM
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

# DISK
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} { disk_t += $2} END {printf("%d"), disk_u/disk_t*100}')

# CPU LOAD
cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpu_op=$(expr 100 - $cpul)
cpu_fin=$(printf "%.1f" %cpu_op)

# LAST BOOT
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')

# LVM USE
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

# TCP CONNECTIONS
tcpc=$(ss -ta | grep ESTAB | wc -l)

# USER LOG
ulog=$(users | wc -w)

# NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

# SUDO
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall	"	
#Architecture: $arch
		#CPU physical: $cpuf
		#vCPU: $cpuv
		#Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
		#Disk Usage: $disk_use/${disk_total} ($disk_percent%)
		#CPU load: $cpu_fin%
		#Last boot: $lb
		#LVM use: $lvmu
		#Connections TCP: $tcpc ESTABLISHED
		#User log: $ulog
		#Network: IP $ip ($mac)
		#Sudo: $cmnd cmd"

In output si avrá:

Broadcast message from root@misidori42 (somewhere) (Mon Feb 27 03:00:02 2023): 
                                                                               
	#Architecture: Linux misidori42 5.10.0-21-amd64 #1 SMP Debian 5.10.162-1 (2023-01-21) x86_64 GNU/Linux
		#CPU physical: 1
		#vCPU: 1
		#Memory Usage: 171/1024MB (16.70%)
		#Disk Usage: 1997/25.7Gb (7%)
		#CPU load: 0.0%
		#Last boot: 2023-02-26 22:19
		#LVM use: yes
		#Connections TCP: 2 ESTABLISHED
		#User log: 3
		#Network: IP 10.0.2.15  (08:00:27:f0:28:67)
		#Sudo: 108 cmd

Che cos'è il comando awk?
Awk è un potente strumento di manipolazione di testo che viene utilizzato principalmente per l'estrazione e l'elaborazione di dati strutturati in file di testo. 

Awk legge il file di input riga per riga e applica un insieme di regole specificate dall'utente, chiamate "pattern-action", per elaborare i dati. I pattern sono espressioni regolari che corrispondono a un certo tipo di righe nel file di input, mentre l'action definisce l'azione da eseguire su tali righe. L'azione può includere l'elaborazione dei dati, la stampa di output e la manipolazione delle variabili di Awk.

Che cosa fa il simbolo $ in bash?
Il simbolo "$?" è una variabile shell speciale in Bash (e in altre shell Unix-like) che contiene il codice di uscita dell'ultimo comando eseguito.

Che cosa fa il comando grep?
grep è un comando di ricerca di testo utilizzato nei sistemi operativi Unix e Unix-like, incluso Linux. Il nome "grep" è l'abbreviazione di "global regular expression print". Il comando grep cerca all'interno di uno o più file (o dell'output di un altro comando) per un pattern specificato dall'utente e stampa le righe che contengono corrispondenze con il pattern.
L'opzione -v del comando grep indica di selezionare tutte le righe che NON contengono il pattern cercato.

Vediamo il codice passo per passo:

#!/bin/bash
questa è la dichiarazione del tipo di shell che verrà utilizzata per eseguire lo script.

# ARCH
arch=$(uname -a)
Questa variabile contiene la stringa di output del comando "uname -a" che restituisce informazioni sull'architettura del sistema operativo.

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)
questa variabile contiene il numero di CPU fisiche presenti nel sistema operativo. Per ottenere questa informazione, lo script cerca la stringa "physical id" nel file /proc/cpuinfo e conta il numero di occorrenze trovate con il comando "wc -l".

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)
questa variabile contiene il numero di CPU virtuali presenti nel sistema operativo. Per ottenere questa informazione, lo script cerca la stringa "processor" nel file /proc/cpuinfo e conta il numero di occorrenze trovate con il comando "wc -l".

# RAM
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')
questa sezione raccoglie informazioni sulla memoria RAM. 
La variabile "ram_total" contiene la quantità totale di RAM installata nel sistema, ottenuta dal comando "free --mega" e filtrata con il comando "awk". 
Il comando free --mega restituisce informazioni sulla memoria del sistema. In particolare, l'opzione --mega indica di mostrare i risultati in Megabyte invece di Kilobyte.
La variabile "ram_use" contiene la quantità di RAM attualmente utilizzata. La variabile "ram_percent" contiene la percentuale di RAM utilizzata.

# DISK
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} { disk_t += $2} END {printf("%d"), disk_u/disk_t*100}')
Il comando df -m viene utilizzato per estrarre la quantità totale di spazio su disco disponibile e la quantità di spazio su disco utilizzata. Queste informazioni vengono quindi utilizzate per calcolare la percentuale di spazio su disco utilizzato.
questa sezione raccoglie informazioni sulle unità di disco presenti nel sistema. La variabile "disk_total" contiene la quantità totale di spazio disponibile sui dischi, ottenuta dal comando "df -m" e filtrata con il comando "awk". 
END viene utilizzato con il comando awk per eseguire un'operazione (ad esempio, un calcolo o una stampa di output) dopo che awk ha analizzato completamente il file di input. In particolare, il comando awk '{disk_t += $2} END {printf("%.1fGb\n"), disk_t/1024}' viene utilizzato per sommare le dimensioni dei file system individuati dal comando df -m e convertire il risultato da megabyte a gigabyte.
La variabile "disk_use" contiene la quantità di spazio attualmente utilizzata. La variabile "disk_percent" contiene la percentuale di spazio utilizzato.

# CPU LOAD
cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpu_op=$(expr 100 - $cpul)
cpu_fin=$(printf "%.1f" %cpu_op)
questa sezione raccoglie informazioni sulla cpu. La variabile "cpu_fin" contiene la percentuale di utilizzo della CPU approssimata a una cifra decimale.
Il comando "vmstat 1 2" viene eseguito per leggere le statistiche di memoria 2 volte a distanza di un secondo.
Il comando "tail -1" estrae l'ultima riga dell'output di vmstat, ovvero la riga che contiene le statistiche di memoria aggiornate.
Il comando expr esegue l'aritmetica di shell. In questo caso, l'operazione eseguita è la sottrazione tra il valore 100 e il contenuto della variabile $cpul.

# LAST BOOT
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')
Il comando who mostra gli utenti attualmente connessi al sistema e l'ultima volta che hanno effettuato il login.
questa variabile contiene la data e l'ora dell'ultimo avvio del sistema. Per ottenere questa informazione, lo script cerca la stringa "system" nel file /var/log/wtmp e utilizza il comando "awk" per estrarre la data e l'ora.
L'opzione -b del comando who mostra l'ultima volta che il sistema è stato avviato, ovvero la data e l'ora di boot del sistema.

# LVM USE
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)
questa variabile indica se il sistema utilizza la gestione logica dei volumi (LVM) per la gestione dello spazio su disco. 
Se il sistema utilizza LVM, la variabile è impostata su "yes", altrimenti su "no". Per determinare se il sistema utilizza LVM, lo script utilizza il comando "lsblk" (che elenca tutte le unità di archiviazione presenti nel sistema, come dischi rigidi, partizioni, dispositivi USB, ecc.), quindi cerca la stringa "lvm" e conta il numero di occorrenze trovate.

# TCP CONNECTIONS
tcpc=$(ss -ta | grep ESTAB | wc -l)
questa variabile contiene il numero di connessioni TCP in stato ESTABLISHED nel sistema. Per ottenere questa informazione, lo script utilizza il comando "ss" per visualizzare le informazioni sulle connessioni di rete, quindi cerca la stringa "ESTAB" e conta il numero di occorrenze trovate.
ss -ta è un comando che utilizza il comando ss per mostrare tutte le connessioni TCP attive, sia in ingresso che in uscita, inclusi i socket di ascolto. La flag -t specifica che devono essere mostrate solo le connessioni TCP, mentre la flag -a specifica di mostrare anche le connessioni in ascolto.

# USER LOG
ulog=$(users | wc -w)
questa variabile contiene il numero di utenti connessi al sistema. Per ottenere questa informazione, lo script utilizza il comando "users" per visualizzare i nomi degli utenti connessi, quindi conta il numero di parole trovate con il comando "wc -w".

# NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')
questa sezione raccoglie informazioni sulla rete. La variabile "ip" contiene l'indirizzo IP del sistema, ottenuto dal comando "hostname -I". La variabile "mac" contiene l'indirizzo MAC dell'interfaccia di rete, ottenuto dal comando "ip link".

# SUDO
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)
questa variabile contiene il numero di comandi eseguiti con il comando "sudo" nel sistema. 
Questo comando è composto da tre parti:

journalctl _COMM=sudo: questo comando esegue una ricerca nel registro di sistema (journalctl) per tutte le voci in cui il comando sudo è stato eseguito. _COMM è un filtro che limita la ricerca solo alle voci contenenti il comando specificato.
grep COMMAND: questo comando cerca solo le voci che contengono la parola "COMMAND". In questo modo, viene identificata la riga corrispondente all'esecuzione del comando sudo.
wc -l: infine, il comando wc conta il numero di linee che corrispondono alla ricerca precedente. 
Quindi, la variabile cmnd contiene il numero di comandi eseguiti con sudo nel registro di sistema.

"wall": questo comando visualizza il messaggio a video utilizzando il comando "wall". Il messaggio contiene le informazioni raccolte dalle variabili precedenti, formattate in modo da essere facilmente leggibili.

Il comando wall in Bash è un'utilità che consente di inviare un messaggio a tutti gli utenti collegati ad un sistema Unix o Linux. La parola "wall" è l'abbreviazione di "write all" e il comando permette di scrivere un messaggio su tutti i terminali degli utenti collegati.

Il modo più semplice per utilizzare il comando wall è il seguente:
wall "Messaggio da inviare a tutti gli utenti"

Una volta eseguito il comando, il messaggio verrà inviato a tutti gli utenti collegati al sistema. Il messaggio verrà visualizzato sui loro terminali in modo simile a quanto segue:

Broadcast message from user@hostname
        Messaggio da inviare a tutti gli utenti
È importante notare che per utilizzare il comando wall è necessario avere i privilegi di amministratore o di superutente.

Il codice è uno script di bash che raccoglie informazioni sul sistema operativo e le visualizza a video tramite il comando "wall".


