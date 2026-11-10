/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130540; name: _INIT_699
 */


void _INIT_699(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044339a0 & 1) == 0) {
    DAT_04433990 = 0;
    DAT_04433998 = 0;
    DAT_0444ac08 = &DAT_04433980;
    DAT_04433980 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04433988 = &DAT_042e7e18;
    DAT_044339a0 = 1;
  }
  return;
}


