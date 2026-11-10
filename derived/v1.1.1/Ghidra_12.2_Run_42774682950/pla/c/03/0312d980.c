/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d980; name: _INIT_530
 */


void _INIT_530(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431f48 & 1) == 0) {
    DAT_04431f38 = 0;
    DAT_04431f40 = 0;
    DAT_0444ac08 = &DAT_04431f28;
    DAT_04431f28 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431f30 = &DAT_042dd600;
    DAT_04431f48 = 1;
  }
  return;
}


