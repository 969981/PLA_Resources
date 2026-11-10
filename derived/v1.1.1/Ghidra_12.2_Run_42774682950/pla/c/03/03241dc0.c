/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241dc0; name: _INIT_855
 */


void _INIT_855(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438298 & 1) == 0) {
    DAT_04438288 = 0;
    DAT_04438290 = 0;
    DAT_0444ac08 = &DAT_04438278;
    DAT_04438278 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438280 = &DAT_0430c580;
    DAT_04438298 = 1;
  }
  return;
}


