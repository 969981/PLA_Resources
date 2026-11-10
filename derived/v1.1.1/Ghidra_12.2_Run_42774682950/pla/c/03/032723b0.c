/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032723b0; name: _INIT_1289
 */


void _INIT_1289(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d330 & 1) == 0) {
    DAT_0443d320 = 0;
    DAT_0443d328 = 0;
    DAT_0444ac08 = &DAT_0443d310;
    DAT_0443d310 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d318 = &DAT_0432f7a0;
    DAT_0443d330 = 1;
  }
  return;
}


