/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032461a0; name: _INIT_1039
 */


void _INIT_1039(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439f58 & 1) == 0) {
    DAT_04439f48 = 0;
    DAT_04439f50 = 0;
    DAT_0444ac08 = &DAT_04439f38;
    DAT_04439f38 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439f40 = &DAT_04317f68;
    DAT_04439f58 = 1;
  }
  return;
}


