/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca32c; name: FUN_02eca32c
 */


void FUN_02eca32c(ulong *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  plVar3 = (long *)FUN_02eca254(param_2);
  if (plVar3 == (long *)0x0) {
    uVar5 = 0;
    uVar2 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined4)plVar3[0xb];
    FUN_02eca440(auStack_58,plVar3 + 4);
    uVar5 = (undefined4)plVar3[7];
    uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
    param_2 = plVar3[2];
  }
  local_68 = *param_1;
  uStack_60 = param_1[1];
  if ((int)*param_1 == 0) {
    local_68._4_4_ = (int)(local_68 >> 0x20);
    local_68 = CONCAT44(local_68._4_4_,uVar6);
  }
  else {
    FUN_02ea4af8(uVar6);
  }
  FUN_02eca0c4(param_2,1);
  if ((uVar2 & 1) != 0) {
    DAT_0440a1b8 = local_68;
    DAT_0440a1c0 = uStack_60;
  }
  bVar1 = local_68._4_4_ == 0;
  if (bVar1) {
    FUN_02ec9f10(&local_68,(ulong)&local_68 | 4);
  }
  uVar4 = FUN_02e78670(local_68 & 0xffffffff,local_68._4_4_);
  FUN_02ec94a8(uVar4,&local_68,auStack_58,uVar5,uVar2 & 1,bVar1);
  return;
}


