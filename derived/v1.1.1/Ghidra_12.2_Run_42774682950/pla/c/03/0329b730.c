/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b730; name: _INIT_1521
 */


void _INIT_1521(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044400a0 & 1) == 0) {
    DAT_04440090 = 0;
    DAT_04440098 = 0;
    DAT_0444ac08 = &DAT_04440080;
    DAT_04440080 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04440088 = &DAT_043451a8;
    DAT_044400a0 = 1;
  }
  return;
}


