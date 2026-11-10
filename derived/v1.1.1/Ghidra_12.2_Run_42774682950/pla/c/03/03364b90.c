/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364b90; name: _INIT_1819
 */


void _INIT_1819(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fc20 & 1) == 0) {
    DAT_0444fc10 = 0;
    DAT_0444fc18 = 0;
    DAT_0444ac08 = &DAT_0444fc00;
    DAT_0444fc00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fc08 = &DAT_0436a748;
    DAT_0444fc20 = 1;
  }
  return;
}


