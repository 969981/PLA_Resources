/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245c40; name: _INIT_1026
 */


void _INIT_1026(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439d50 & 1) == 0) {
    DAT_04439d40 = 0;
    DAT_04439d48 = 0;
    DAT_0444ac08 = &DAT_04439d30;
    DAT_04439d30 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439d38 = &DAT_04317290;
    DAT_04439d50 = 1;
  }
  return;
}


