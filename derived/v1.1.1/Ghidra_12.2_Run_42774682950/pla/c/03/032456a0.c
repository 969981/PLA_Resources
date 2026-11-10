/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032456a0; name: _INIT_1011
 */


void _INIT_1011(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439af8 & 1) == 0) {
    DAT_04439ae8 = 0;
    DAT_04439af0 = 0;
    DAT_0444ac08 = &DAT_04439ad8;
    DAT_04439ad8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439ae0 = &DAT_04316500;
    DAT_04439af8 = 1;
  }
  return;
}


