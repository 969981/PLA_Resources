/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fcb1fc; name: FUN_02fcb1fc
 */


void FUN_02fcb1fc(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *local_188;
  undefined8 local_180;
  undefined4 local_178 [64];
  long local_78;
  undefined8 local_70;
  
  if ((int)*(uint *)((long)param_2 + 0xc) < 0) {
    uVar14 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    if ((int)uVar14 <= (int)*(uint *)(param_2 + 1)) {
      uVar14 = *(uint *)(param_2 + 1);
    }
    lVar11 = 0;
    if (*param_2 != 0) {
      lVar11 = *param_2 + (long)param_2;
    }
    lVar13 = tpidr_el0;
    lVar8 = *(long *)(lVar13 + 0x38d490);
    if (lVar8 == 0) {
      lVar8 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar8;
    }
    plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar11,(ulong)uVar14 * 0x30);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_02fc7c84(param_2,*(int *)((long)param_1 + 0x14) << 1);
  puVar4 = PTR_PTR_0434a080;
  if (*(int *)((long)param_1 + 0x1c) == 0) goto LAB_02fcb554;
  local_78 = 0;
  local_70 = -0x8000000000000000;
  iVar1 = (int)param_1[1];
  if (iVar1 < 1) {
    local_70._0_4_ = 0;
LAB_02fcb364:
    if (iVar1 < (int)(uint)local_70) {
      local_70 = CONCAT44(local_70._4_4_,iVar1);
    }
  }
  else {
    if (0x3fffffff < iVar1) {
      FUN_032bd0a8(iVar1);
    }
    local_78 = FUN_032bd1d4(puVar4,iVar1,4,0,0,(long)&local_70 + 4);
    if (iVar1 <= (int)(uint)local_70) goto LAB_02fcb364;
    lVar11 = (long)(int)(uint)local_70;
    uVar14 = ~(uint)local_70;
    local_70 = CONCAT44(local_70._4_4_,iVar1);
    memset((void *)(local_78 + lVar11 * 4),0,(ulong)(iVar1 + uVar14) * 4 + 4);
  }
  local_178[0] = 0;
  local_188 = local_178;
  lVar11 = 0;
  local_180 = 0x8000004000000001;
  uVar14 = *(uint *)((long)param_1 + 0x1c);
  do {
    while( true ) {
      lVar13 = 0;
      if (*param_1 != 0) {
        lVar13 = *param_1 + (long)param_1;
      }
      puVar10 = (undefined8 *)(lVar13 + (ulong)uVar14 * 0x30);
      uVar16 = puVar10[1];
      uVar15 = *puVar10;
      uVar18 = puVar10[3];
      uVar17 = puVar10[2];
      uVar7 = *(uint *)(local_78 + (long)(int)uVar14 * 4);
      uVar2 = *(uint *)(param_2 + 2);
      if (uVar2 == 0) {
        FUN_02fc7c84(param_2,1);
        uVar2 = *(uint *)(param_2 + 2);
      }
      uVar5 = local_180;
      lVar8 = *param_2 + (long)param_2;
      lVar9 = 0;
      if (*param_2 != 0) {
        lVar9 = lVar8;
      }
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar8 + (long)(int)uVar2 * 0x30);
      puVar10 = (undefined8 *)(lVar9 + (ulong)uVar2 * 0x30);
      puVar10[1] = uVar16;
      *puVar10 = uVar15;
      puVar10[3] = uVar18;
      puVar10[2] = uVar17;
      *(uint *)(puVar10 + 4) = uVar7;
      puVar12 = (uint *)((long)param_2 + 0x1c);
      if (uVar7 != 0) {
        lVar8 = 0;
        if (*param_2 != 0) {
          lVar8 = *param_2 + (long)param_2;
        }
        puVar12 = (uint *)(lVar8 + (ulong)uVar7 * 0x30 + lVar11 * 4 + 0x24);
      }
      *puVar12 = uVar2;
      lVar13 = lVar13 + (ulong)uVar14 * 0x30;
      uVar14 = *(uint *)(lVar13 + 0x24);
      iVar1 = *(int *)(lVar13 + 0x28);
      if (uVar14 == 0) break;
      *(uint *)(local_78 + (long)(int)uVar14 * 4) = uVar2;
      *(uint *)(local_78 + (long)iVar1 * 4) = uVar2;
      uVar2 = (int)local_180 + 1;
      if ((int)(local_180._4_4_ & 0x3fffffff) <= (int)local_180) {
        if (0x3ffffffe < (int)local_180) {
          FUN_032bd0a8(uVar2);
        }
        uVar7 = (local_180._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar7) {
          uVar7 = 0x3fffffff;
        }
        uVar3 = uVar2;
        if ((int)uVar2 <= (int)uVar7) {
          uVar3 = uVar7;
        }
        local_188 = (undefined4 *)
                    FUN_032bd1d4(puVar4,uVar3,4,local_188,uVar5 & 0xffffffff,(long)&local_180 + 4);
      }
      lVar11 = 0;
      local_188[(int)local_180] = iVar1;
      local_180 = CONCAT44(local_180._4_4_,uVar2);
      if (uVar14 == 0) goto LAB_02fcb504;
    }
    lVar9 = lVar9 + (ulong)uVar2 * 0x30;
    *(undefined4 *)(lVar9 + 0x24) = 0;
    *(int *)(lVar9 + 0x28) = iVar1;
    uVar14 = local_188[(long)(int)local_180 + -1];
    lVar11 = 1;
    local_180 = CONCAT44(local_180._4_4_,(int)((long)(int)local_180 + -1));
  } while (uVar14 != 0);
LAB_02fcb504:
  uVar5 = local_180;
  uVar14 = local_180._4_4_;
  local_180 = (ulong)local_180._4_4_ << 0x20;
  if ((-1 < (long)uVar5) && (local_188 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_188,uVar14 << 2);
  }
  lVar11 = local_70;
  uVar14 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_78 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_78,uVar14 << 2);
  }
LAB_02fcb554:
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *(int *)(param_2 + 3) = (int)param_1[3];
  return;
}


