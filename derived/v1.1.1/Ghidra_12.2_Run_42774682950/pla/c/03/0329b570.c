/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b570; name: _INIT_1514
 */


void _INIT_1514(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ff88 & 1) == 0) {
    DAT_0443ff78 = 0;
    DAT_0443ff80 = 0;
    DAT_0444ac08 = &DAT_0443ff68;
    DAT_0443ff68 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ff70 = &DAT_04344910;
    DAT_0443ff88 = 1;
  }
  return;
}


