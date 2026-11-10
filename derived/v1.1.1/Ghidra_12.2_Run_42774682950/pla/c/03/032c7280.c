/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7280; name: _INIT_1560
 */


void _INIT_1560(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04444cd0 & 1) == 0) {
    DAT_04444cc0 = 0;
    DAT_04444cc8 = 0;
    DAT_0444ac08 = &DAT_04444cb0;
    DAT_04444cb0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04444cb8 = &DAT_04349110;
    DAT_04444cd0 = 1;
  }
  return;
}


