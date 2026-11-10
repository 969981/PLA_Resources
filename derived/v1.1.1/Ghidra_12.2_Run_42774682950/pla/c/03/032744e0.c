/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032744e0; name: _INIT_1359
 */


void _INIT_1359(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443de20 & 1) == 0) {
    DAT_0443de10 = 0;
    DAT_0443de18 = 0;
    DAT_0444ac08 = &DAT_0443de00;
    DAT_0443de00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443de08 = &DAT_043345a8;
    DAT_0443de20 = 1;
  }
  return;
}


