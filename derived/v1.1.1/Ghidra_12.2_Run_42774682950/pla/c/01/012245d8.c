/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012245d8; name: FUN_012245d8
 */


uint FUN_012245d8(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = FUN_00d5294c();
  uVar2 = FUN_00d4bf2c(param_1,uVar1);
  uVar3 = FUN_0122413c(param_1,uVar1,uVar2);
  if (**(int **)(param_1 + 0x1648) == 1) {
    FUN_01215c54(param_1,uVar1,uVar2);
  }
  iVar4 = FUN_00d53034(param_1,uVar1,uVar2);
  if (iVar4 != -1) {
    FUN_00d5437c(param_1,uVar1,uVar2,iVar4);
  }
  return uVar3 & 1;
}


