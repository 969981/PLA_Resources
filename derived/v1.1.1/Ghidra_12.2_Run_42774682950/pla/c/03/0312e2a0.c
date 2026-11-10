/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e2a0; name: _INIT_565
 */


void _INIT_565(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044324c0 & 1) == 0) {
    DAT_044324b0 = 0;
    DAT_044324b8 = 0;
    DAT_0444ac08 = &DAT_044324a0;
    DAT_044324a0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044324a8 = &DAT_042df958;
    DAT_044324c0 = 1;
  }
  return;
}


