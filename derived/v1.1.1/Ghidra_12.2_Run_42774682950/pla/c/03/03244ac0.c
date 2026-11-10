/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244ac0; name: _INIT_964
 */


void _INIT_964(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044393a0 & 1) == 0) {
    DAT_04439390 = 0;
    DAT_04439398 = 0;
    DAT_0444ac08 = &DAT_04439380;
    DAT_04439380 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439388 = &DAT_04313198;
    DAT_044393a0 = 1;
  }
  return;
}


