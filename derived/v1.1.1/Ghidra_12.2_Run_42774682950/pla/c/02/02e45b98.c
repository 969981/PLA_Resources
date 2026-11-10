/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e45b98; name: thunk_FUN_02e45b9c
 */


void thunk_FUN_02e45b9c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_02e45d64();
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_02f59e60(10);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_02f59e60(10);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  uVar2 = uStack_58._4_4_;
  iVar4 = (int)param_1[7];
  plVar1 = param_1 + 6;
  if (iVar4 == 0) {
    plStack_60 = (long *)0x0;
    uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
    lStack_50 = 0;
  }
  else {
    uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
    lStack_50 = *(long *)*plVar1;
    uStack_48 = 0;
    if (lStack_50 == 0) {
      if (iVar4 - 1U != 0) {
        uVar5 = 0;
        do {
          lStack_50 = ((long *)*plVar1)[uVar5 + 1];
          if (lStack_50 != 0) goto LAB_02e45d14;
          uVar5 = uVar5 + 1;
        } while (iVar4 - 1U != uVar5);
        lStack_50 = 0;
LAB_02e45d14:
        iVar4 = (int)uVar5 + 1;
      }
      uStack_58 = CONCAT44(uVar2,iVar4);
    }
    plStack_60 = plVar1;
    if (lStack_50 != 0) {
      do {
        lVar3 = lStack_50;
        FUN_02e48b54(lStack_50,param_1 + 0xc);
        FUN_02e455f0(&plStack_80,plVar1,&plStack_60);
        plStack_60 = plStack_80;
        uStack_58 = lStack_78;
        lStack_50 = lStack_70;
        uStack_48 = uStack_68;
        FUN_02e481dc(lVar3);
        FUN_02e46eb0(param_1 + 0xb,lVar3);
      } while (lStack_50 != 0);
    }
  }
  *(int *)(param_1[0xd] + 0x48) = *(int *)(param_1[0xd] + 0x48) + -1;
  param_1[0xd] = 0;
  lVar3 = param_1[0xe];
  while (lVar3 != 0) {
    FUN_02e45218(param_1);
    lVar3 = param_1[0xe];
  }
  if (*plVar1 != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_02f59e60(10);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  return;
}


