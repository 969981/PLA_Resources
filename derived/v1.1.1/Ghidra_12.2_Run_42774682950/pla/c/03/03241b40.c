/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241b40; name: _INIT_845
 */


void _INIT_845(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438108 & 1) == 0) {
    DAT_044380f8 = 0;
    DAT_04438100 = 0;
    DAT_0444ac08 = &DAT_044380e8;
    DAT_044380e8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044380f0 = &DAT_0430bbe8;
    DAT_04438108 = 1;
  }
  return;
}


