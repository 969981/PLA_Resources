/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e080; name: _INIT_557
 */


void _INIT_557(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432380 & 1) == 0) {
    DAT_04432370 = 0;
    DAT_04432378 = 0;
    DAT_0444ac08 = &DAT_04432360;
    DAT_04432360 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432368 = &DAT_042df110;
    DAT_04432380 = 1;
  }
  return;
}


