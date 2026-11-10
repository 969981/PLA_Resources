/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03130440; name: _INIT_695
 */


void _INIT_695(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04433900 & 1) == 0) {
    DAT_044338f0 = 0;
    DAT_044338f8 = 0;
    DAT_0444ac08 = &DAT_044338e0;
    DAT_044338e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044338e8 = &DAT_042e79f0;
    DAT_04433900 = 1;
  }
  return;
}


