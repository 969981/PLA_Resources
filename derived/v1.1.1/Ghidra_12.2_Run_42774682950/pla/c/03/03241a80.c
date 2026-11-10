/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241a80; name: _INIT_842
 */


void _INIT_842(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438090 & 1) == 0) {
    DAT_04438080 = 0;
    DAT_04438088 = 0;
    DAT_0444ac08 = &DAT_04438070;
    DAT_04438070 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438078 = &DAT_0430b8d0;
    DAT_04438090 = 1;
  }
  return;
}


