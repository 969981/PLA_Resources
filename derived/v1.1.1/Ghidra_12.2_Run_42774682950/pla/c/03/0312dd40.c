/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312dd40; name: _INIT_545
 */


void _INIT_545(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044321a0 & 1) == 0) {
    DAT_04432190 = 0;
    DAT_04432198 = 0;
    DAT_0444ac08 = &DAT_04432180;
    DAT_04432180 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432188 = &DAT_042de3f8;
    DAT_044321a0 = 1;
  }
  return;
}


