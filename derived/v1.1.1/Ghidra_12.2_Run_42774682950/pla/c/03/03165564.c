/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03165564; name: FUN_03165564
 */


undefined8 FUN_03165564(long param_1,ulong param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_e8;
  float *local_e0;
  uint *puStack_d8;
  undefined1 local_d0;
  float local_c8;
  undefined4 local_c4;
  uint auStack_c0 [2];
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x28) == 0)) {
    return 1;
  }
  uVar1 = (uint)param_2 & 0x3fffff;
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) +
                             (param_2 >> 0x16 & 0x3ff) * 0xf0) + 0x20);
  iVar2 = *(int *)(lVar7 + 0x60);
  uVar8 = uVar1 - *(int *)(lVar7 + 0x30);
  if ((int)uVar1 < *(int *)(lVar7 + 0x30)) {
    if (*(int *)(lVar7 + 0x78) == 0) {
      uVar8 = uVar1;
    }
    else {
      uVar8 = *(uint *)(*(long *)(lVar7 + 0x70) + (ulong)uVar1 * 4);
      if (uVar8 == 0xffffffff) {
        lVar5 = *(long *)(lVar7 + 0x58) + (long)(int)(iVar2 * uVar1) * 4;
        lVar7 = *(long *)(lVar7 + 0x28) + (ulong)uVar1 * 0x14;
        lVar6 = lVar5 + (long)iVar2 * 4;
        goto LAB_03165628;
      }
    }
    lVar5 = *(long *)(lVar7 + 0x130) + (long)(int)(uVar8 * iVar2) * 4;
    lVar7 = *(long *)(lVar7 + 0xc0);
  }
  else {
    lVar5 = *(long *)(lVar7 + 0x150) + (long)(int)(iVar2 * uVar8) * 4;
    lVar7 = *(long *)(lVar7 + 0xe0);
  }
  lVar6 = lVar5 + (long)iVar2 * 4;
  lVar7 = lVar7 + (long)(int)uVar8 * 0x14;
LAB_03165628:
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      return 1;
    }
  }
  else if (((*(byte *)(lVar7 + 0x10) >> 4 & 1) == 0) &&
          (uVar4 = (**(code **)(*plVar3 + 0x28))
                             (plVar3,*(undefined8 *)(param_1 + 0x30),param_2 & 0xffffffff,lVar7,
                              lVar5,lVar6), (uVar4 & 1) == 0)) {
    return 0;
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != (long *)0x0) {
    local_88 = 0;
    uStack_80 = 0;
    puStack_d8 = auStack_c0;
    local_78 = 0;
    local_90 = 0xffffffff;
    local_98 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_a0 = 0;
    local_c8 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
    local_c4 = *(undefined4 *)(param_1 + 0x44);
    local_e8 = *(undefined8 *)(param_1 + 0x30);
    local_e0 = &local_c8;
    local_d0 = param_3;
    auStack_c0[0] = (uint)param_2;
    local_b8 = lVar7;
    lStack_b0 = lVar5;
    local_a8 = lVar6;
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,&local_e8);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


