/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244a80; name: _INIT_963
 */


void _INIT_963(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439378 & 1) == 0) {
    DAT_04439368 = 0;
    DAT_04439370 = 0;
    DAT_0444ac08 = &DAT_04439358;
    DAT_04439358 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439360 = &DAT_043130b8;
    DAT_04439378 = 1;
  }
  return;
}


