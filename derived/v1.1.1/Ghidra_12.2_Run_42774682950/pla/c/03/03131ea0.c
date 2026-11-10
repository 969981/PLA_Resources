/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131ea0; name: _INIT_798
 */


void _INIT_798(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434918 & 1) == 0) {
    DAT_04434908 = 0;
    DAT_04434910 = 0;
    DAT_0444ac08 = &DAT_044348f8;
    DAT_044348f8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434900 = &DAT_042ee808;
    DAT_04434918 = 1;
  }
  return;
}


