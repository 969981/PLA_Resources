/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244420; name: _INIT_945
 */


void _INIT_945(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044390a8 & 1) == 0) {
    DAT_04439098 = 0;
    DAT_044390a0 = 0;
    DAT_0444ac08 = &DAT_04439088;
    DAT_04439088 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439090 = &DAT_04311d30;
    DAT_044390a8 = 1;
  }
  return;
}


