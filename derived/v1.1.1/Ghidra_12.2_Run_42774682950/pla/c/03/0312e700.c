/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e700; name: _INIT_581
 */


void _INIT_581(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432730 & 1) == 0) {
    DAT_04432720 = 0;
    DAT_04432728 = 0;
    DAT_0444ac08 = &DAT_04432710;
    DAT_04432710 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432718 = &DAT_042e0870;
    DAT_04432730 = 1;
  }
  return;
}


