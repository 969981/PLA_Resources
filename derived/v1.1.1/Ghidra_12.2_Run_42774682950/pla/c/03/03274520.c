/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274520; name: _INIT_1360
 */


void _INIT_1360(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443de48 & 1) == 0) {
    DAT_0443de38 = 0;
    DAT_0443de40 = 0;
    DAT_0444ac08 = &DAT_0443de28;
    DAT_0443de28 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443de30 = &DAT_04334690;
    DAT_0443de48 = 1;
  }
  return;
}


