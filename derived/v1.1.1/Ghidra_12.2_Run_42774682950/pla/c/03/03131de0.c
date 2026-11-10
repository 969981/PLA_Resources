/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03131de0; name: _INIT_795
 */


void _INIT_795(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044348a0 & 1) == 0) {
    DAT_04434890 = 0;
    DAT_04434898 = 0;
    DAT_0444ac08 = &DAT_04434880;
    DAT_04434880 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434888 = &DAT_042ee3f8;
    DAT_044348a0 = 1;
  }
  return;
}


