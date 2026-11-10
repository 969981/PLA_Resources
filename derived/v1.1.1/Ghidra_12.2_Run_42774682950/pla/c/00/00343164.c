/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00343164; name: FUN_00343164
 */


undefined8 FUN_00343164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 extraout_x1;
  
  iVar3 = FUN_00364cf4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),param_1,param_2);
  uVar1 = extraout_x1;
  if (iVar3 != 5) {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (iVar3 == 5) {
    uVar2 = uVar1;
  }
  return uVar2;
}


