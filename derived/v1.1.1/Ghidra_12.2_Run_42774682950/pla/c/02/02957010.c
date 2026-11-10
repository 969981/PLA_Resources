/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02957010; name: FUN_02957010
 */


uint FUN_02957010(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_1;
  uVar1 = 0;
  if ((uVar3 & 7) == 2) {
    uVar1 = uVar3 >> 8 & 0x3f;
  }
  uVar2 = uVar3 >> 8 & 0x3f;
  if ((uVar3 & 7) != 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}


