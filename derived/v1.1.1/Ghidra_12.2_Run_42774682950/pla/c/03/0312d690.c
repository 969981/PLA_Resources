/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d690; name: _INIT_519
 */


void _INIT_519(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431d90 & 1) == 0) {
    DAT_04431d80 = 0;
    DAT_04431d88 = 0;
    DAT_0444ac08 = &DAT_04431d70;
    DAT_04431d70 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431d78 = &DAT_042dcb78;
    DAT_04431d90 = 1;
  }
  return;
}


