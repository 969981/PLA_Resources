/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241ac0; name: _INIT_843
 */


void _INIT_843(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044380b8 & 1) == 0) {
    DAT_044380a8 = 0;
    DAT_044380b0 = 0;
    DAT_0444ac08 = &DAT_04438098;
    DAT_04438098 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044380a0 = &DAT_0430b9d8;
    DAT_044380b8 = 1;
  }
  return;
}


