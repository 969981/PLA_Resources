/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03247d80; name: _INIT_1098
 */


void _INIT_1098(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a890 & 1) == 0) {
    DAT_0443a880 = 0;
    DAT_0443a888 = 0;
    DAT_0444ac08 = &DAT_0443a870;
    DAT_0443a870 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a878 = &DAT_0431b4e8;
    DAT_0443a890 = 1;
  }
  return;
}


