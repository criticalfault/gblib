/*
Cemetery Area!
-Constructed by Critical
-Described and filled by Alice!

*/

inherit ROOM;

void create()
{
	set_light(1);
	set_short("Church Cemetery");
	set_long("Insert Description here!");
	set_exits( ([
	
	"north" : ({"areas/cemetery/cemetery4.c"}),
	"west"  : ({"areas/cemetery/cemetery7.c"}),
	"south" : ({"areas/cemetery/cemetery12.c"})
	
	
	]));
}
