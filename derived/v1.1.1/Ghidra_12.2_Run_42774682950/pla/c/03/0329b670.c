/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b670; name: _INIT_1518
 */


void _INIT_1518(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04440028 & 1) == 0) {
    DAT_04440018 = 0;
    DAT_04440020 = 0;
    DAT_0444ac08 = &DAT_04440008;
    DAT_04440008 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04440010 = &DAT_04344eb8;
    DAT_04440028 = 1;
  }
  return;
}


