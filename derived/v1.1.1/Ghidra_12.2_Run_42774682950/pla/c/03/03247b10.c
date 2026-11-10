/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03247b10; name: _INIT_1089
 */


void _INIT_1089(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a728 & 1) == 0) {
    DAT_0443a718 = 0;
    DAT_0443a720 = 0;
    DAT_0444ac08 = &DAT_0443a708;
    DAT_0443a708 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a710 = &DAT_0431ad50;
    DAT_0443a728 = 1;
  }
  return;
}


