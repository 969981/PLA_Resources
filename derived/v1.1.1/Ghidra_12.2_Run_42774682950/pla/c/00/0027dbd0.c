/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027dbd0; name: FUN_0027dbd0
 */


undefined8
FUN_0027dbd0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,long param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long local_60;
  undefined8 uStack_58;
  
  FUN_00877788(param_2,*(long *)(param_3 + 0x238) + 0x120);
  FUN_0087782c(param_2,*(long *)(param_3 + 0x238) + 0x148);
  FUN_0087768c(param_2,*(long *)(param_3 + 0x238) + 0x164);
  uVar3 = FUN_0027d350(param_1,param_2,param_3,param_4,param_6);
  FUN_0027d558(uVar3,param_2,param_3,param_4,param_6);
  uVar4 = FUN_00284758(*param_1,param_2,param_3,*(undefined4 *)(param_6 + 0x14),param_5,param_6);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x6f0);
    lVar8 = (long)*(int *)(param_3 + 0x28) << 4;
    uStack_58 = *(undefined8 *)(lVar6 + 0x1e0);
    local_60 = (**(long **)(param_3 + 0xc0) - *(long *)(lVar6 + 0x170)) + *(long *)(lVar6 + 0x1d8);
    FUN_00877a64(param_2,*(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3a4),&local_60,0x10,lVar8);
    lVar6 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar6 + 0x1e0);
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 8) - *(long *)(lVar6 + 0x170)) +
               *(long *)(lVar6 + 0x1d8);
    FUN_00877a64(param_2,*(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3a8),&local_60,0x10,lVar8);
    lVar6 = *(long *)(param_3 + 0x238);
    if (*(int *)(lVar6 + 0x3ac) != -1) {
      lVar7 = *(long *)(param_3 + 0x6f0);
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x10) - *(long *)(lVar7 + 0x170)) +
                 *(long *)(lVar7 + 0x1d8);
      FUN_00877a64(param_2,*(int *)(lVar6 + 0x3ac),&local_60,0x10,lVar8);
      lVar6 = *(long *)(param_3 + 0x238);
    }
    lVar7 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x20) - *(long *)(lVar7 + 0x170)) +
               *(long *)(lVar7 + 0x1d8);
    FUN_00877a64(param_2,*(undefined4 *)(lVar6 + 0x3b4),&local_60,0x10,lVar8);
    lVar6 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar6 + 0x1e0);
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x18) - *(long *)(lVar6 + 0x170)) +
               *(long *)(lVar6 + 0x1d8);
    FUN_00877a64(param_2,*(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3b0),&local_60,0x10,lVar8);
    lVar6 = *(long *)(param_3 + 0x238);
    if (*(int *)(lVar6 + 0x3b8) != -1) {
      lVar7 = *(long *)(param_3 + 0x6f0);
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x28) - *(long *)(lVar7 + 0x170)) +
                 *(long *)(lVar7 + 0x1d8);
      FUN_00877a64(param_2,*(int *)(lVar6 + 0x3b8),&local_60,0x10,lVar8);
      lVar6 = *(long *)(param_3 + 0x238);
    }
    if (*(int *)(lVar6 + 0x3bc) != -1) {
      lVar7 = *(long *)(param_3 + 0x6f0);
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x30) - *(long *)(lVar7 + 0x170)) +
                 *(long *)(lVar7 + 0x1d8);
      FUN_00877a64(param_2,*(int *)(lVar6 + 0x3bc),&local_60,0x10,lVar8);
      lVar6 = *(long *)(param_3 + 0x238);
    }
    if (*(int *)(lVar6 + 0x3c0) != -1) {
      lVar7 = *(long *)(param_3 + 0x6f0);
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x38) - *(long *)(lVar7 + 0x170)) +
                 *(long *)(lVar7 + 0x1d8);
      FUN_00877a64(param_2,*(int *)(lVar6 + 0x3c0),&local_60,0x10,lVar8);
      lVar6 = *(long *)(param_3 + 0x238);
    }
    if (*(int *)(lVar6 + 0x3c4) != -1) {
      lVar7 = *(long *)(param_3 + 0x6f0);
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x40) - *(long *)(lVar7 + 0x170)) +
                 *(long *)(lVar7 + 0x1d8);
      FUN_00877a64(param_2,*(int *)(lVar6 + 0x3c4),&local_60,0x10,lVar8);
      lVar6 = *(long *)(param_3 + 0x238);
    }
    if (*(int *)(lVar6 + 0x3c8) != -1) {
      lVar7 = *(long *)(param_3 + 0x6f0);
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x48) - *(long *)(lVar7 + 0x170)) +
                 *(long *)(lVar7 + 0x1d8);
      FUN_00877a64(param_2,*(int *)(lVar6 + 0x3c8),&local_60,0x10,lVar8);
      lVar6 = *(long *)(param_3 + 0x238);
    }
    if (*(int *)(lVar6 + 0x3cc) != -1) {
      lVar7 = *(long *)(param_3 + 0x6f0);
      uStack_58 = *(undefined8 *)(lVar7 + 0x1e0);
      local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x50) - *(long *)(lVar7 + 0x170)) +
                 *(long *)(lVar7 + 0x1d8);
      FUN_00877a64(param_2,*(int *)(lVar6 + 0x3cc),&local_60,0x10,lVar8);
      lVar6 = *(long *)(param_3 + 0x238);
    }
    plVar9 = *(long **)(lVar6 + 0x78);
    if ((plVar9 != (long *)0x0) && (iVar1 = (**(code **)(*plVar9 + 0x30))(plVar9), 0 < iVar1)) {
      iVar1 = 0;
      do {
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_60,iVar1);
        uVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,iVar1);
        uVar5 = (**(code **)(*plVar9 + 0x18))(plVar9,iVar1);
        FUN_00877a64(param_2,iVar1,&local_60,uVar3,uVar5);
        iVar1 = iVar1 + 1;
        iVar2 = (**(code **)(*plVar9 + 0x30))(plVar9);
      } while (iVar1 < iVar2);
    }
    FUN_00877904(param_2,*(long *)(param_3 + 0x238) + 0x370);
    if (*(char *)(*(long *)(param_3 + 0xa0) + 0x751) == '\0') {
      if (plVar9 == (long *)0x0) {
        FUN_0087750c(param_2,4,4,0,*(undefined4 *)(param_3 + 0x28),0);
      }
      else {
        (**(code **)(*plVar9 + 0x58))
                  (plVar9,param_2,*(undefined4 *)(param_3 + 0x28),*(undefined1 *)(param_3 + 8));
      }
    }
    else {
      FUN_0027e0cc(param_1,param_2,param_3);
    }
    uVar3 = 1;
  }
  return uVar3;
}


