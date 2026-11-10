/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348250; name: _INIT_1769
 */


void _INIT_1769(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444eaa0 & 1) == 0) {
    DAT_0444ea90 = 0;
    DAT_0444ea98 = 0;
    DAT_0444ac08 = &DAT_0444ea80;
    DAT_0444ea80 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444ea88 = &DAT_04363300;
    DAT_0444eaa0 = 1;
  }
  return;
}


