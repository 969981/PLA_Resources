/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032433d0; name: _INIT_908
 */


void _INIT_908(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438ae0 & 1) == 0) {
    DAT_04438ad0 = 0;
    DAT_04438ad8 = 0;
    DAT_0444ac08 = &DAT_04438ac0;
    DAT_04438ac0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438ac8 = &DAT_0430f9b8;
    DAT_04438ae0 = 1;
  }
  return;
}


