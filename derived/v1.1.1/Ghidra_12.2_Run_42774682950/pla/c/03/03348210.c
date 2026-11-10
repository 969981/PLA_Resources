/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348210; name: _INIT_1768
 */


void _INIT_1768(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444ea78 & 1) == 0) {
    DAT_0444ea68 = 0;
    DAT_0444ea70 = 0;
    DAT_0444ac08 = &DAT_0444ea58;
    DAT_0444ea58 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444ea60 = &DAT_04363260;
    DAT_0444ea78 = 1;
  }
  return;
}


