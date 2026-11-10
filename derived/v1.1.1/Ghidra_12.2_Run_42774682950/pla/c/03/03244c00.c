/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244c00; name: _INIT_969
 */


void _INIT_969(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439468 & 1) == 0) {
    DAT_04439458 = 0;
    DAT_04439460 = 0;
    DAT_0444ac08 = &DAT_04439448;
    DAT_04439448 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439450 = &DAT_04313790;
    DAT_04439468 = 1;
  }
  return;
}


