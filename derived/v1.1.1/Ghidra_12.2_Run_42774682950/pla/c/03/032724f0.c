/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032724f0; name: _INIT_1294
 */


void _INIT_1294(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d3f8 & 1) == 0) {
    DAT_0443d3e8 = 0;
    DAT_0443d3f0 = 0;
    DAT_0444ac08 = &DAT_0443d3d8;
    DAT_0443d3d8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d3e0 = &DAT_0432fe28;
    DAT_0443d3f8 = 1;
  }
  return;
}


