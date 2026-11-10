/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329b870; name: _INIT_1526
 */


void _INIT_1526(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04440168 & 1) == 0) {
    DAT_04440158 = 0;
    DAT_04440160 = 0;
    DAT_0444ac08 = &DAT_04440148;
    DAT_04440148 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04440150 = &DAT_043456d0;
    DAT_04440168 = 1;
  }
  return;
}


