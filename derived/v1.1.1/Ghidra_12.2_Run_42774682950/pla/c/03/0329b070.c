/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b070; name: _INIT_1494
 */


void _INIT_1494(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443fc68 & 1) == 0) {
    DAT_0443fc58 = 0;
    DAT_0443fc60 = 0;
    DAT_0444ac08 = &DAT_0443fc48;
    DAT_0443fc48 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443fc50 = &DAT_04343290;
    DAT_0443fc68 = 1;
  }
  return;
}


