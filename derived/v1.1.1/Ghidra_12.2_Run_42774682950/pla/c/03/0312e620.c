/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e620; name: _INIT_578
 */


void _INIT_578(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044326b8 & 1) == 0) {
    DAT_044326a8 = 0;
    DAT_044326b0 = 0;
    DAT_0444ac08 = &DAT_04432698;
    DAT_04432698 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044326a0 = &DAT_042e05f0;
    DAT_044326b8 = 1;
  }
  return;
}


