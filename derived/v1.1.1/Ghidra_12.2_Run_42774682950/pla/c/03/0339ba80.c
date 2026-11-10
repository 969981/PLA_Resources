/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339ba80; name: _INIT_1888
 */


void _INIT_1888(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450d38 & 1) == 0) {
    DAT_04450d28 = 0;
    DAT_04450d30 = 0;
    DAT_0444ac08 = &DAT_04450d18;
    DAT_04450d18 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450d20 = &DAT_0436ff50;
    DAT_04450d38 = 1;
  }
  return;
}


