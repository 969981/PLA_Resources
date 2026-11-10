/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03218f70; name: _INIT_835
 */


void _INIT_835(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434f40 & 1) == 0) {
    DAT_04434f30 = 0;
    DAT_04434f38 = 0;
    DAT_0444ac08 = &DAT_04434f20;
    DAT_04434f20 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434f28 = &DAT_042f2eb8;
    DAT_04434f40 = 1;
  }
  return;
}


