/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274560; name: _INIT_1361
 */


void _INIT_1361(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443de70 & 1) == 0) {
    DAT_0443de60 = 0;
    DAT_0443de68 = 0;
    DAT_0444ac08 = &DAT_0443de50;
    DAT_0443de50 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443de58 = &DAT_04334788;
    DAT_0443de70 = 1;
  }
  return;
}


