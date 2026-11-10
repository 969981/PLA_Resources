/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03276540; name: _INIT_1412
 */


void _INIT_1412(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e668 & 1) == 0) {
    DAT_0443e658 = 0;
    DAT_0443e660 = 0;
    DAT_0444ac08 = &DAT_0443e648;
    DAT_0443e648 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e650 = &DAT_04337c40;
    DAT_0443e668 = 1;
  }
  return;
}


