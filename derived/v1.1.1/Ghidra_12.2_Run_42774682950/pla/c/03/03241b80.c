/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241b80; name: _INIT_846
 */


void _INIT_846(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438130 & 1) == 0) {
    DAT_04438120 = 0;
    DAT_04438128 = 0;
    DAT_0444ac08 = &DAT_04438110;
    DAT_04438110 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438118 = &DAT_0430bcf0;
    DAT_04438130 = 1;
  }
  return;
}


