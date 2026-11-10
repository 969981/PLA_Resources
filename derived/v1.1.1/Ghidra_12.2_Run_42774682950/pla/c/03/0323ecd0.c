/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0323ecd0; name: _INIT_840
 */


void _INIT_840(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438040 & 1) == 0) {
    DAT_04438030 = 0;
    DAT_04438038 = 0;
    DAT_0444ac08 = &DAT_04438020;
    DAT_04438020 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438028 = &DAT_0430b760;
    DAT_04438040 = 1;
  }
  return;
}


