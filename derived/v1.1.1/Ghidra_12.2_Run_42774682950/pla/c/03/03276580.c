/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03276580; name: _INIT_1413
 */


void _INIT_1413(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e690 & 1) == 0) {
    DAT_0443e680 = 0;
    DAT_0443e688 = 0;
    DAT_0444ac08 = &DAT_0443e670;
    DAT_0443e670 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e678 = &DAT_04337d60;
    DAT_0443e690 = 1;
  }
  return;
}


