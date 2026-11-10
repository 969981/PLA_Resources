/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245460; name: _INIT_1002
 */


void _INIT_1002(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439990 & 1) == 0) {
    DAT_04439980 = 0;
    DAT_04439988 = 0;
    DAT_0444ac08 = &DAT_04439970;
    DAT_04439970 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439978 = &DAT_04315b60;
    DAT_04439990 = 1;
  }
  return;
}


