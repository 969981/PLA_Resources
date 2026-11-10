/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c71b0; name: _INIT_1557
 */


void _INIT_1557(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444c58 & 1) == 0) {
    DAT_04444c48 = 0;
    DAT_04444c50 = 0;
    DAT_0444ac08 = &DAT_04444c38;
    DAT_04444c38 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444c40 = &DAT_04349250;
    DAT_04444c58 = 1;
  }
  return;
}


