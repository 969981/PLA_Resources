/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a17dc; name: FUN_011a17dc
 */


void FUN_011a17dc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  
  FUN_0119b610(param_1,*(int *)(param_1 + 0x16c4) == 0);
  uVar1 = *(undefined4 *)(param_1 + 0x16cc);
  uVar2 = *(undefined4 *)(param_1 + 0x16d0);
  FUN_00d51c38(param_1,param_1 + 0x16cc,param_1 + 0x16d0,0);
  FUN_00d51790(param_1,0,uVar1,uVar2);
  if (*(int *)(param_1 + 0x6d8) != 0) {
    FUN_00d4f240(param_1,0);
    FUN_00d4f240(param_1,1);
    local_28 = 0;
    FUN_00d51c38(param_1,(long)&local_28 + 4,&local_28,1);
    FUN_00d52f90(param_1,local_28._4_4_,local_28 & 0xffffffff,1,0);
    FUN_00d4be50(param_1,1,1);
  }
  lVar3 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8);
  FUN_011a4a5c(param_1,*(int *)(*(long *)(lVar3 + 0x8b0) + 0x10) * 5);
  return;
}


