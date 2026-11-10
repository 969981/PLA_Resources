/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e000; name: _INIT_555
 */


void _INIT_555(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432330 & 1) == 0) {
    DAT_04432320 = 0;
    DAT_04432328 = 0;
    DAT_0444ac08 = &DAT_04432310;
    DAT_04432310 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432318 = &DAT_042def10;
    DAT_04432330 = 1;
  }
  return;
}


