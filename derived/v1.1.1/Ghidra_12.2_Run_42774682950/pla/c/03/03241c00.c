/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241c00; name: _INIT_848
 */


void _INIT_848(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438180 & 1) == 0) {
    DAT_04438170 = 0;
    DAT_04438178 = 0;
    DAT_0444ac08 = &DAT_04438160;
    DAT_04438160 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438168 = &DAT_0430bf90;
    DAT_04438180 = 1;
  }
  return;
}


