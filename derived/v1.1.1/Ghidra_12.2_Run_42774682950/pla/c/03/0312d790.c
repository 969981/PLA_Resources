/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d790; name: _INIT_523
 */


void _INIT_523(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431e30 & 1) == 0) {
    DAT_04431e20 = 0;
    DAT_04431e28 = 0;
    DAT_0444ac08 = &DAT_04431e10;
    DAT_04431e10 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431e18 = &DAT_042dcef8;
    DAT_04431e30 = 1;
  }
  return;
}


