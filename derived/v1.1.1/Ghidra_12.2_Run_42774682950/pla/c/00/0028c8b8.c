/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028c8b8; name: FUN_0028c8b8
 */


undefined8 FUN_0028c8b8(undefined4 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  *param_1 = 0;
  param_1[1] = param_4;
  local_40 = 0;
  FUN_00876ba8(&local_40);
  local_40 = CONCAT44(0x10,(undefined4)local_40);
  lVar1 = FUN_00877190(param_2,&local_40);
  *(ulong *)(param_1 + 10) = (param_3 + lVar1) - 1U & -lVar1;
  uVar2 = FUN_00271670();
  uVar3 = FUN_0028d284(param_1 + 0xe,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  FUN_00877434(param_1 + 0xe,param_1 + 0x72);
  uVar2 = FUN_00271670();
  uVar3 = FUN_0028d284(param_1 + 0x7a,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
  if ((uVar3 & 1) == 0) {
LAB_0028c9c0:
    uVar2 = 0;
  }
  else {
    FUN_00877434(param_1 + 0x7a,param_1 + 0xde);
    if (param_1[1] == 3) {
      uVar2 = FUN_00271670();
      uVar3 = FUN_0028d284(param_1 + 0xe6,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
      if ((uVar3 & 1) == 0) goto LAB_0028c9c0;
      FUN_00877434(param_1 + 0xe6,param_1 + 0x14a);
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return uVar2;
}


