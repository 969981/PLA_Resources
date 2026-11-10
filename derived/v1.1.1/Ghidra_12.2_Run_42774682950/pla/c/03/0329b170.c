/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b170; name: _INIT_1498
 */


void _INIT_1498(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fd08 & 1) == 0) {
    DAT_0443fcf8 = 0;
    DAT_0443fd00 = 0;
    DAT_0444ac08 = &DAT_0443fce8;
    DAT_0443fce8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fcf0 = &DAT_04343780;
    DAT_0443fd08 = 1;
  }
  return;
}


