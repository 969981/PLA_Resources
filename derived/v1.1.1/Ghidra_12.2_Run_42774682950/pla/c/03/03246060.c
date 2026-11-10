/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03246060; name: _INIT_1034
 */


void _INIT_1034(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439e90 & 1) == 0) {
    DAT_04439e80 = 0;
    DAT_04439e88 = 0;
    DAT_0444ac08 = &DAT_04439e70;
    DAT_04439e70 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439e78 = &DAT_04317a40;
    DAT_04439e90 = 1;
  }
  return;
}


