/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348050; name: _INIT_1761
 */


void _INIT_1761(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e960 & 1) == 0) {
    DAT_0444e950 = 0;
    DAT_0444e958 = 0;
    DAT_0444ac08 = &DAT_0444e940;
    DAT_0444e940 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e948 = &DAT_04362b90;
    DAT_0444e960 = 1;
  }
  return;
}


