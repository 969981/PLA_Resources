/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032460e0; name: _INIT_1036
 */


void _INIT_1036(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439ee0 & 1) == 0) {
    DAT_04439ed0 = 0;
    DAT_04439ed8 = 0;
    DAT_0444ac08 = &DAT_04439ec0;
    DAT_04439ec0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439ec8 = &DAT_04317bc0;
    DAT_04439ee0 = 1;
  }
  return;
}


