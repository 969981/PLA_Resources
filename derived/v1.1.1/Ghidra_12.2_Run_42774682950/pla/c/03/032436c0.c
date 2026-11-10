/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032436c0; name: _INIT_919
 */


void _INIT_919(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438c98 & 1) == 0) {
    DAT_04438c88 = 0;
    DAT_04438c90 = 0;
    DAT_0444ac08 = &DAT_04438c78;
    DAT_04438c78 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438c80 = &DAT_043103b8;
    DAT_04438c98 = 1;
  }
  return;
}


