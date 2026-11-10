/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032738c0; name: _INIT_1329
 */


void _INIT_1329(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d970 & 1) == 0) {
    DAT_0443d960 = 0;
    DAT_0443d968 = 0;
    DAT_0444ac08 = &DAT_0443d950;
    DAT_0443d950 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d958 = &DAT_04332440;
    DAT_0443d970 = 1;
  }
  return;
}


