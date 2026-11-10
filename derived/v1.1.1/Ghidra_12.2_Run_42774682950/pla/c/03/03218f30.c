/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03218f30; name: _INIT_834
 */


void _INIT_834(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434f18 & 1) == 0) {
    DAT_04434f08 = 0;
    DAT_04434f10 = 0;
    DAT_0444ac08 = &DAT_04434ef8;
    DAT_04434ef8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434f00 = &DAT_042f3130;
    DAT_04434f18 = 1;
  }
  return;
}


