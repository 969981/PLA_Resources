/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242250; name: _INIT_873
 */


void _INIT_873(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438568 & 1) == 0) {
    DAT_04438558 = 0;
    DAT_04438560 = 0;
    DAT_0444ac08 = &DAT_04438548;
    DAT_04438548 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438550 = &DAT_0430d7e0;
    DAT_04438568 = 1;
  }
  return;
}


