/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032453e0; name: _INIT_1000
 */


void _INIT_1000(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439940 & 1) == 0) {
    DAT_04439930 = 0;
    DAT_04439938 = 0;
    DAT_0444ac08 = &DAT_04439920;
    DAT_04439920 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439928 = &DAT_04315970;
    DAT_04439940 = 1;
  }
  return;
}


