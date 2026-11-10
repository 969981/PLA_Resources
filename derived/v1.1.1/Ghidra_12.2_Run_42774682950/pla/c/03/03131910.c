/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131910; name: _INIT_776
 */


void _INIT_776(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044345a8 & 1) == 0) {
    DAT_04434598 = 0;
    DAT_044345a0 = 0;
    DAT_0444ac08 = &DAT_04434588;
    DAT_04434588 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434590 = &DAT_042ed120;
    DAT_044345a8 = 1;
  }
  return;
}


