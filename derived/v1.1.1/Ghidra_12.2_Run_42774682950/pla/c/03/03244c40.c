/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244c40; name: _INIT_970
 */


void _INIT_970(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439490 & 1) == 0) {
    DAT_04439480 = 0;
    DAT_04439488 = 0;
    DAT_0444ac08 = &DAT_04439470;
    DAT_04439470 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439478 = &DAT_04313898;
    DAT_04439490 = 1;
  }
  return;
}


