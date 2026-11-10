/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b770; name: _INIT_1522
 */


void _INIT_1522(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044400c8 & 1) == 0) {
    DAT_044400b8 = 0;
    DAT_044400c0 = 0;
    DAT_0444ac08 = &DAT_044400a8;
    DAT_044400a8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044400b0 = &DAT_043452b0;
    DAT_044400c8 = 1;
  }
  return;
}


