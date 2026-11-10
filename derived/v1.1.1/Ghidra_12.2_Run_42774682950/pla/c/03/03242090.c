/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242090; name: _INIT_866
 */


void _INIT_866(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438450 & 1) == 0) {
    DAT_04438440 = 0;
    DAT_04438448 = 0;
    DAT_0444ac08 = &DAT_04438430;
    DAT_04438430 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438438 = &DAT_0430d188;
    DAT_04438450 = 1;
  }
  return;
}


