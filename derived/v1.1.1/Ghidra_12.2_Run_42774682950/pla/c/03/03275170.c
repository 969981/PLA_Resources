/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03275170; name: _INIT_1394
 */


void _INIT_1394(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e398 & 1) == 0) {
    DAT_0443e388 = 0;
    DAT_0443e390 = 0;
    DAT_0444ac08 = &DAT_0443e378;
    DAT_0443e378 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e380 = &DAT_04336bc0;
    DAT_0443e398 = 1;
  }
  return;
}


