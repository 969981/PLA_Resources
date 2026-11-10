/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032457e0; name: _INIT_1016
 */


void _INIT_1016(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439bc0 & 1) == 0) {
    DAT_04439bb0 = 0;
    DAT_04439bb8 = 0;
    DAT_0444ac08 = &DAT_04439ba0;
    DAT_04439ba0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439ba8 = &DAT_04316960;
    DAT_04439bc0 = 1;
  }
  return;
}


