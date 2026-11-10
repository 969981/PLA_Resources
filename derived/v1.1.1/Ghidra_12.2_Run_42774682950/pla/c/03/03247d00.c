/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03247d00; name: _INIT_1096
 */


void _INIT_1096(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a840 & 1) == 0) {
    DAT_0443a830 = 0;
    DAT_0443a838 = 0;
    DAT_0444ac08 = &DAT_0443a820;
    DAT_0443a820 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a828 = &DAT_0431b338;
    DAT_0443a840 = 1;
  }
  return;
}


