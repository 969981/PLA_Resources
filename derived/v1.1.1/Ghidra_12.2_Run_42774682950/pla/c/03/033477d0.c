/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033477d0; name: _INIT_1727
 */


void _INIT_1727(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444e410 & 1) == 0) {
    DAT_0444e400 = 0;
    DAT_0444e408 = 0;
    DAT_0444ac08 = &DAT_0444e3f0;
    DAT_0444e3f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444e3f8 = &DAT_04360968;
    DAT_0444e410 = 1;
  }
  return;
}


