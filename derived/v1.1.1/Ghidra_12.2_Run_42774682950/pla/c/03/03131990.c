/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131990; name: _INIT_778
 */


void _INIT_778(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044345f8 & 1) == 0) {
    DAT_044345e8 = 0;
    DAT_044345f0 = 0;
    DAT_0444ac08 = &DAT_044345d8;
    DAT_044345d8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044345e0 = &DAT_042ed260;
    DAT_044345f8 = 1;
  }
  return;
}


