/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03276f30; name: _INIT_1424
 */


void _INIT_1424(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443e848 & 1) == 0) {
    DAT_0443e838 = 0;
    DAT_0443e840 = 0;
    DAT_0444ac08 = &DAT_0443e828;
    DAT_0443e828 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443e830 = &DAT_04338750;
    DAT_0443e848 = 1;
  }
  return;
}


