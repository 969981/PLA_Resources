/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032434c0; name: _INIT_911
 */


void _INIT_911(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438b58 & 1) == 0) {
    DAT_04438b48 = 0;
    DAT_04438b50 = 0;
    DAT_0444ac08 = &DAT_04438b38;
    DAT_04438b38 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438b40 = &DAT_0430fc70;
    DAT_04438b58 = 1;
  }
  return;
}


