/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031314d0; name: _INIT_759
 */


void _INIT_759(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434300 & 1) == 0) {
    DAT_044342f0 = 0;
    DAT_044342f8 = 0;
    DAT_0444ac08 = &DAT_044342e0;
    DAT_044342e0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044342e8 = &DAT_042ebcc8;
    DAT_04434300 = 1;
  }
  return;
}


