/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be57f0; name: _INIT_412
 */


void _INIT_412(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_043f2068 & 1) == 0) {
    DAT_043f2058 = 0;
    DAT_043f2060 = 0;
    DAT_0444ac08 = &DAT_043f2048;
    DAT_043f2048 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_043f2050 = &DAT_04287298;
    DAT_043f2068 = 1;
  }
  return;
}


