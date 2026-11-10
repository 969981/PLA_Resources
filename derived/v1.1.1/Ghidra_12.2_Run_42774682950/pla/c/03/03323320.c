/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03323320; name: _INIT_1656
 */


void _INIT_1656(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444b310 & 1) == 0) {
    DAT_0444b300 = 0;
    DAT_0444b308 = 0;
    DAT_0444ac08 = &DAT_0444b2f0;
    DAT_0444b2f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444b2f8 = &DAT_043500e0;
    DAT_0444b310 = 1;
  }
  return;
}


