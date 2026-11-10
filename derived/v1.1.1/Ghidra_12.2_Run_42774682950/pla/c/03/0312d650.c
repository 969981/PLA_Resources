/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d650; name: _INIT_518
 */


void _INIT_518(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431d68 & 1) == 0) {
    DAT_04431d58 = 0;
    DAT_04431d60 = 0;
    DAT_0444ac08 = &DAT_04431d48;
    DAT_04431d48 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431d50 = &DAT_042dca68;
    DAT_04431d68 = 1;
  }
  return;
}


