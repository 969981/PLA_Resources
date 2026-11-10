/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242e90; name: _INIT_900
 */


void _INIT_900(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044389a0 & 1) == 0) {
    DAT_04438990 = 0;
    DAT_04438998 = 0;
    DAT_0444ac08 = &DAT_04438980;
    DAT_04438980 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438988 = &DAT_0430f1a8;
    DAT_044389a0 = 1;
  }
  return;
}


