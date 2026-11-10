/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032494c0; name: _INIT_1180
 */


void _INIT_1180(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b560 & 1) == 0) {
    DAT_0443b550 = 0;
    DAT_0443b558 = 0;
    DAT_0444ac08 = &DAT_0443b540;
    DAT_0443b540 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b548 = &DAT_04320860;
    DAT_0443b560 = 1;
  }
  return;
}


