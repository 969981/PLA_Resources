/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241f50; name: _INIT_861
 */


void _INIT_861(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438388 & 1) == 0) {
    DAT_04438378 = 0;
    DAT_04438380 = 0;
    DAT_0444ac08 = &DAT_04438368;
    DAT_04438368 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438370 = &DAT_0430cc90;
    DAT_04438388 = 1;
  }
  return;
}


