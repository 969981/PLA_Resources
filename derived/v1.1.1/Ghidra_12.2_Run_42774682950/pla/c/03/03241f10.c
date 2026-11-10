/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241f10; name: _INIT_860
 */


void _INIT_860(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438360 & 1) == 0) {
    DAT_04438350 = 0;
    DAT_04438358 = 0;
    DAT_0444ac08 = &DAT_04438340;
    DAT_04438340 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438348 = &DAT_0430cb88;
    DAT_04438360 = 1;
  }
  return;
}


