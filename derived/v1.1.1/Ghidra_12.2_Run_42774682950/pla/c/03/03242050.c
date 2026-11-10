/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242050; name: _INIT_865
 */


void _INIT_865(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438428 & 1) == 0) {
    DAT_04438418 = 0;
    DAT_04438420 = 0;
    DAT_0444ac08 = &DAT_04438408;
    DAT_04438408 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438410 = &DAT_0430d140;
    DAT_04438428 = 1;
  }
  return;
}


