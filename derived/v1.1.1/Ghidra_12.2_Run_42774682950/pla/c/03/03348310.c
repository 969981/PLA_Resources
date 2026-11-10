/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03348310; name: _INIT_1772
 */


void _INIT_1772(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444eb18 & 1) == 0) {
    DAT_0444eb08 = 0;
    DAT_0444eb10 = 0;
    DAT_0444ac08 = &DAT_0444eaf8;
    DAT_0444eaf8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444eb00 = &DAT_04363708;
    DAT_0444eb18 = 1;
  }
  return;
}


