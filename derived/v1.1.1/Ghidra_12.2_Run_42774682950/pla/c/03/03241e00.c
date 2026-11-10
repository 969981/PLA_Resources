/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241e00; name: _INIT_856
 */


void _INIT_856(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044382c0 & 1) == 0) {
    DAT_044382b0 = 0;
    DAT_044382b8 = 0;
    DAT_0444ac08 = &DAT_044382a0;
    DAT_044382a0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044382a8 = &DAT_0430c698;
    DAT_044382c0 = 1;
  }
  return;
}


