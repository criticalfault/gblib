/* socket.c

 Tacitus @ LPUniversity
 05-MAY-06
 Socket related simul-efuns

*/

string dump_socket_status() {
    string ret =
"Fd    State      Mode       Local Address          Remote Address            PROGRAM\n"
"--  ---------  --------  ---------------------  --------------------- ---------------------\n";

    foreach (array item in socket_status())
    {
        if (item[0] < 0 && item[1] == "CLOSED") continue;
        ret += sprintf("%2d  %|9s  %|8s  %-21s  %-21s %-21O\n", item[0], item[1], item[2], item[3], item[4], objectp(item[5]) ? item[5] : 0 );
    }

    return ret;
}