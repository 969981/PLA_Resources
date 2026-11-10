/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272770; name: _INIT_1304
 */


void _INIT_1304(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d588 & 1) == 0) {
    DAT_0443d578 = 0;
    DAT_0443d580 = 0;
    DAT_0444ac08 = &DAT_0443d568;
    DAT_0443d568 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d570 = &DAT_04330ab8;
    DAT_0443d588 = 1;
  }
  return;
}


