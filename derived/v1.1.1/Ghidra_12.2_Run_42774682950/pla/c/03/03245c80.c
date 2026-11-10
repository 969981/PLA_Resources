/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245c80; name: _INIT_1027
 */


void _INIT_1027(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439d78 & 1) == 0) {
    DAT_04439d68 = 0;
    DAT_04439d70 = 0;
    DAT_0444ac08 = &DAT_04439d58;
    DAT_04439d58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439d60 = &DAT_043173b0;
    DAT_04439d78 = 1;
  }
  return;
}


