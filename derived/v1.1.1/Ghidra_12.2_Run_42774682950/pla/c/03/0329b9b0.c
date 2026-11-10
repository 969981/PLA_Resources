/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b9b0; name: _INIT_1531
 */


void _INIT_1531(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04440230 & 1) == 0) {
    DAT_04440220 = 0;
    DAT_04440228 = 0;
    DAT_0444ac08 = &DAT_04440210;
    DAT_04440210 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04440218 = &DAT_04345e38;
    DAT_04440230 = 1;
  }
  return;
}


