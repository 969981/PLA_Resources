/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244a00; name: _INIT_961
 */


void _INIT_961(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439328 & 1) == 0) {
    DAT_04439318 = 0;
    DAT_04439320 = 0;
    DAT_0444ac08 = &DAT_04439308;
    DAT_04439308 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439310 = &DAT_04312f48;
    DAT_04439328 = 1;
  }
  return;
}


