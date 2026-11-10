/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032422d0; name: _INIT_875
 */


void _INIT_875(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044385b8 & 1) == 0) {
    DAT_044385a8 = 0;
    DAT_044385b0 = 0;
    DAT_0444ac08 = &DAT_04438598;
    DAT_04438598 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044385a0 = &DAT_0430d998;
    DAT_044385b8 = 1;
  }
  return;
}


