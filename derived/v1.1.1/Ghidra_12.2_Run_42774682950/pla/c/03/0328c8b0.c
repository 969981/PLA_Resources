/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328c8b0; name: _INIT_1453
 */


void _INIT_1453(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ef08 & 1) == 0) {
    DAT_0443eef8 = 0;
    DAT_0443ef00 = 0;
    DAT_0444ac08 = &DAT_0443eee8;
    DAT_0443eee8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443eef0 = &DAT_0433c4b0;
    DAT_0443ef08 = 1;
  }
  return;
}


