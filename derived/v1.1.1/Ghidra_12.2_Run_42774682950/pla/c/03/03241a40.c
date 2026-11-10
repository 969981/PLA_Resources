/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241a40; name: _INIT_841
 */


void _INIT_841(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438068 & 1) == 0) {
    DAT_04438058 = 0;
    DAT_04438060 = 0;
    DAT_0444ac08 = &DAT_04438048;
    DAT_04438048 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438050 = &DAT_0430b818;
    DAT_04438068 = 1;
  }
  return;
}


