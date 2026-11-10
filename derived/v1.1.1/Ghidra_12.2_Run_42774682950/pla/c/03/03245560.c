/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245560; name: _INIT_1006
 */


void _INIT_1006(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439a30 & 1) == 0) {
    DAT_04439a20 = 0;
    DAT_04439a28 = 0;
    DAT_0444ac08 = &DAT_04439a10;
    DAT_04439a10 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439a18 = &DAT_04315fc0;
    DAT_04439a30 = 1;
  }
  return;
}


