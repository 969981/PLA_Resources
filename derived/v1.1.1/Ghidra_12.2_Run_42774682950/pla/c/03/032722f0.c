/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032722f0; name: _INIT_1286
 */


void _INIT_1286(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d2b8 & 1) == 0) {
    DAT_0443d2a8 = 0;
    DAT_0443d2b0 = 0;
    DAT_0444ac08 = &DAT_0443d298;
    DAT_0443d298 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d2a0 = &DAT_0432f4a0;
    DAT_0443d2b8 = 1;
  }
  return;
}


