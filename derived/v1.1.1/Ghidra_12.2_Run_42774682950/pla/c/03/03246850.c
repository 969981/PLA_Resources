/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246850; name: _INIT_1059
 */


void _INIT_1059(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a278 & 1) == 0) {
    DAT_0443a268 = 0;
    DAT_0443a270 = 0;
    DAT_0444ac08 = &DAT_0443a258;
    DAT_0443a258 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a260 = &DAT_04319230;
    DAT_0443a278 = 1;
  }
  return;
}


