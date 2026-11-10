/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246c40; name: _INIT_1067
 */


void _INIT_1067(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a3b8 & 1) == 0) {
    DAT_0443a3a8 = 0;
    DAT_0443a3b0 = 0;
    DAT_0444ac08 = &DAT_0443a398;
    DAT_0443a398 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a3a0 = &DAT_04319920;
    DAT_0443a3b8 = 1;
  }
  return;
}


