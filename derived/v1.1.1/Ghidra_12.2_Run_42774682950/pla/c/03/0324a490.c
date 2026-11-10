/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324a490; name: _INIT_1237
 */


void _INIT_1237(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443be48 & 1) == 0) {
    DAT_0443be38 = 0;
    DAT_0443be40 = 0;
    DAT_0444ac08 = &DAT_0443be28;
    DAT_0443be28 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443be30 = &DAT_043242c0;
    DAT_0443be48 = 1;
  }
  return;
}


