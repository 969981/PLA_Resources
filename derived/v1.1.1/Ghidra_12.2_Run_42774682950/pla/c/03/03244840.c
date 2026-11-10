/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244840; name: _INIT_954
 */


void _INIT_954(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439210 & 1) == 0) {
    DAT_04439200 = 0;
    DAT_04439208 = 0;
    DAT_0444ac08 = &DAT_044391f0;
    DAT_044391f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044391f8 = &DAT_04312540;
    DAT_04439210 = 1;
  }
  return;
}


