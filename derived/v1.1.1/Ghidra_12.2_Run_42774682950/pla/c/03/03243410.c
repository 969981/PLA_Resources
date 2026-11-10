/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243410; name: _INIT_909
 */


void _INIT_909(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438b08 & 1) == 0) {
    DAT_04438af8 = 0;
    DAT_04438b00 = 0;
    DAT_0444ac08 = &DAT_04438ae8;
    DAT_04438ae8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438af0 = &DAT_0430fad8;
    DAT_04438b08 = 1;
  }
  return;
}


