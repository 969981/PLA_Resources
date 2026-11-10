/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03132260; name: _INIT_806
 */


void _INIT_806(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434a58 & 1) == 0) {
    DAT_04434a48 = 0;
    DAT_04434a50 = 0;
    DAT_0444ac08 = &DAT_04434a38;
    DAT_04434a38 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434a40 = &DAT_042ef030;
    DAT_04434a58 = 1;
  }
  return;
}


