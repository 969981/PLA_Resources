/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d750; name: _INIT_522
 */


void _INIT_522(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431e08 & 1) == 0) {
    DAT_04431df8 = 0;
    DAT_04431e00 = 0;
    DAT_0444ac08 = &DAT_04431de8;
    DAT_04431de8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431df0 = &DAT_042dcdf0;
    DAT_04431e08 = 1;
  }
  return;
}


