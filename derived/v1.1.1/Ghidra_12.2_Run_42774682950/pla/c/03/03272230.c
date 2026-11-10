/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272230; name: _INIT_1283
 */


void _INIT_1283(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d240 & 1) == 0) {
    DAT_0443d230 = 0;
    DAT_0443d238 = 0;
    DAT_0444ac08 = &DAT_0443d220;
    DAT_0443d220 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d228 = &DAT_0432f170;
    DAT_0443d240 = 1;
  }
  return;
}


