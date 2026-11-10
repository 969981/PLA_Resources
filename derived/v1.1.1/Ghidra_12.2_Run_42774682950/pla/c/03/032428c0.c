/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032428c0; name: _INIT_891
 */


void _INIT_891(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438838 & 1) == 0) {
    DAT_04438828 = 0;
    DAT_04438830 = 0;
    DAT_0444ac08 = &DAT_04438818;
    DAT_04438818 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438820 = &DAT_0430e998;
    DAT_04438838 = 1;
  }
  return;
}


