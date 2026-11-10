/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274870; name: _INIT_1373
 */


void _INIT_1373(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e050 & 1) == 0) {
    DAT_0443e040 = 0;
    DAT_0443e048 = 0;
    DAT_0444ac08 = &DAT_0443e030;
    DAT_0443e030 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e038 = &DAT_04335360;
    DAT_0443e050 = 1;
  }
  return;
}


