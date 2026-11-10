/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339ba40; name: _INIT_1887
 */


void _INIT_1887(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04450d10 & 1) == 0) {
    DAT_04450d00 = 0;
    DAT_04450d08 = 0;
    DAT_0444ac08 = &DAT_04450cf0;
    DAT_04450cf0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04450cf8 = &DAT_0436fe70;
    DAT_04450d10 = 1;
  }
  return;
}


