<h3>METODO</h3>
Il mio progetto push_swap si basa sul motto latimo "Divide et impera".
<p>L'obiettivo é scomporre la lista in blocchi ed ordinarli progressivamente, cosí da avere degli spazi di "navigazione" (quando vado a cercare i numeri) piú piccoli, facendo meno mosse.</p>

<h3>ESECUZIONE/h3>
Una volta riempiti i nodi della mia lista con i valori inseriti da tastiera, mi creo una terza lista "stack_copy" dove vado a copiare tutti i valori disordinati in A e li ordino velocemente senza seguire le mosse date dal progetto. 
<p>Cosí facendo mi creo una lista ordinata dove andare a cercare i numeri chiavi (che da ora in poi chiameró "pivot"), intorno ai quali creare questi miei blocchi di numeri (io scelto di divire in 12 blocchi, dopo aver fatto diversi tentativi, ma possono cambiare di codice in codice).</p>
<p>I pivot sono i valori che si trovano in corrispondenza del limite alto di ciascun blocco. Quindi se ad esempio se la mia lista disordinata A fosse di 120 elementi, i miei pivot saranno i valori delle posizioni 10, 20, 30, 40, ..., 110 della mia lista "stack_copy"ordinata. In questo modo io andró a cercare i numeri piú piccoli del primo pivot (10) e li manderó in B. Poi cercheró i numeri compresi tra 11 e 20 e li manderó in B, e cosí via fino ad arrivare al blocco dei numeri tra 101 e 110. Quello sará l'ultimo blocco, l'undicesimo, ad essere mandato in B.</p>
<p>Dopodiché ordineró l'unico blocco rimasto in A che conterrá i numeri piú grandi della lista A ee che quindi andrá a costituire le fondamenta dell'ordinamento della lista A. Da qui cominceró a lavorare sull'ultimo blocco inviato in B, andando a cercare il suo valore piú grande, per poi mandarlo in A, fino a che quel blocco non verrá sversato (in ordine decrescente) in A e cosí via finché lo stack B non sará esaurito.
<p>Con 100 numeri il sistema ordina lo stack A in circa 800 mosse, mentre 500 numeri in circa 7000 mosse. Sta a voi, se vorrete intraprendere questo metodo, ottimizzarlo ancor di piú.</p>
<p>La sfida é aperta!</p>

![gif_push_swap](https://github.com/misidori/42_cursus/assets/123883959/4c1ca74f-5c54-480a-9a97-996b80e6a948)
