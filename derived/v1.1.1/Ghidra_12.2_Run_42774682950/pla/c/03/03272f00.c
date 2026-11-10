/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272f00; name: _INIT_1316
 */


void _INIT_1316(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d768 & 1) == 0) {
    DAT_0443d758 = 0;
    DAT_0443d760 = 0;
    DAT_0444ac08 = &DAT_0443d748;
    DAT_0443d748 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d750 = &DAT_04331810;
    DAT_0443d768 = 1;
  }
  return;
}


