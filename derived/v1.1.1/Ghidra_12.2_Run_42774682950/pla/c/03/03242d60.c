/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242d60; name: _INIT_896
 */


void _INIT_896(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438900 & 1) == 0) {
    DAT_044388f0 = 0;
    DAT_044388f8 = 0;
    DAT_0444ac08 = &DAT_044388e0;
    DAT_044388e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044388e8 = &DAT_0430edd0;
    DAT_04438900 = 1;
  }
  return;
}


