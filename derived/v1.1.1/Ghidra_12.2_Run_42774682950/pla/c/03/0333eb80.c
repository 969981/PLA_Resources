/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333eb80; name: _INIT_1667
 */


void _INIT_1667(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444b610 & 1) == 0) {
    DAT_0444b600 = 0;
    DAT_0444b608 = 0;
    DAT_0444ac08 = &DAT_0444b5f0;
    DAT_0444b5f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444b5f8 = &DAT_04350fe8;
    DAT_0444b610 = 1;
  }
  return;
}


