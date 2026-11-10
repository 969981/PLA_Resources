/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be5880; name: _INIT_414
 */


void _INIT_414(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_043f20b8 & 1) == 0) {
    DAT_043f20a8 = 0;
    DAT_043f20b0 = 0;
    DAT_0444ac08 = &DAT_043f2098;
    DAT_043f2098 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_043f20a0 = &DAT_042873c8;
    DAT_043f20b8 = 1;
  }
  return;
}


