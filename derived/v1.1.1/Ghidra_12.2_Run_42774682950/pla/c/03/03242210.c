/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242210; name: _INIT_872
 */


void _INIT_872(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438540 & 1) == 0) {
    DAT_04438530 = 0;
    DAT_04438538 = 0;
    DAT_0444ac08 = &DAT_04438520;
    DAT_04438520 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438528 = &DAT_0430d708;
    DAT_04438540 = 1;
  }
  return;
}


