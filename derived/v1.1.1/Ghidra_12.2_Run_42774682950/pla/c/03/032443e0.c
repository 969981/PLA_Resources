/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032443e0; name: _INIT_944
 */


void _INIT_944(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439080 & 1) == 0) {
    DAT_04439070 = 0;
    DAT_04439078 = 0;
    DAT_0444ac08 = &DAT_04439060;
    DAT_04439060 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439068 = &DAT_04311c10;
    DAT_04439080 = 1;
  }
  return;
}


