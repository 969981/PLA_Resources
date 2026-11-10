/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272430; name: _INIT_1291
 */


void _INIT_1291(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d380 & 1) == 0) {
    DAT_0443d370 = 0;
    DAT_0443d378 = 0;
    DAT_0444ac08 = &DAT_0443d360;
    DAT_0443d360 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d368 = &DAT_0432fad0;
    DAT_0443d380 = 1;
  }
  return;
}


