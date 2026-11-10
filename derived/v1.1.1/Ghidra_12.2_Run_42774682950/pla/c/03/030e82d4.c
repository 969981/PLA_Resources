/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030e82d4; name: FUN_030e82d4
 */


void FUN_030e82d4(long *param_1,undefined8 *param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *local_88;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  
  uVar17 = (ulong)(param_3 - 1);
  if ((0 < (int)param_3) && (plVar7 = (long *)param_1[0xfe], plVar7 != (long *)0x0)) {
    uVar11 = (ulong)param_3;
    puVar18 = param_2;
    while( true ) {
      uVar11 = uVar11 - 1;
      local_70 = *puVar18;
      local_67 = uVar17 == 0;
      local_78 = (undefined8 *)CONCAT26(local_78._6_2_,0x3402000020);
      local_68 = (undefined1)param_4;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
      }
      if (uVar11 == 0) break;
      plVar7 = (long *)param_1[0xfe];
      uVar17 = uVar17 - 1;
      puVar18 = puVar18 + 1;
    }
  }
  puVar5 = PTR_PTR_0434a090;
  local_78 = (undefined8 *)0x0;
  local_70 = 0x8000000000000000;
  if (0 < (int)param_3) {
    if (0x3fffffff < (int)param_3) {
      FUN_032bd0a8(param_3);
    }
    local_78 = (undefined8 *)FUN_032bd1d4(puVar5,param_3,8,0,0,(long)&local_70 + 4);
    uVar10 = param_3 & 3;
    puVar18 = local_78;
    if (2 < param_3 - 1) {
      iVar13 = uVar10 - param_3;
      puVar15 = local_78;
      do {
        *puVar15 = *param_2;
        puVar15[1] = param_2[1];
        puVar15[2] = param_2[2];
        puVar1 = param_2 + 3;
        puVar18 = puVar15 + 4;
        param_2 = param_2 + 4;
        iVar13 = iVar13 + 4;
        puVar15[3] = *puVar1;
        puVar15 = puVar18;
      } while (iVar13 != 0);
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar18 = *param_2;
      puVar18 = puVar18 + 1;
      param_2 = param_2 + 1;
    }
  }
  local_88 = local_78;
  local_70._0_4_ = param_3;
  lVar8 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((0 < (int)param_3) && (lVar8 != 0)) {
    plVar7 = (long *)(**(code **)(*param_1 + 0x58))(param_1);
    uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,param_1,local_88,param_3);
    uVar10 = local_70._4_4_;
    if ((int)uVar6 < (int)param_3) {
      if ((int)(local_70._4_4_ & 0x3fffffff) < (int)uVar6) {
        if (0x3fffffff < (int)uVar6) {
          FUN_032bd0a8(uVar6);
        }
        uVar10 = (uVar10 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar10) {
          uVar10 = 0x3fffffff;
        }
        uVar3 = uVar6;
        if ((int)uVar6 <= (int)uVar10) {
          uVar3 = uVar10;
        }
        local_88 = (undefined8 *)FUN_032bd1d4(puVar5,uVar3,8,local_88,param_3,(long)&local_70 + 4);
        param_3 = (uint)local_70;
        local_78 = local_88;
      }
      if (((int)param_3 < (int)uVar6) || ((int)uVar6 < (int)param_3)) {
        param_3 = uVar6;
        local_70._0_4_ = uVar6;
      }
    }
  }
  puVar4 = PTR_PTR_0434a080;
  lVar8 = param_1[0xa0];
  iVar13 = *(int *)(lVar8 + 0x948);
  uVar6 = *(uint *)(lVar8 + 0x94c);
  uVar10 = iVar13 + param_3;
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar10) {
    uVar9 = *(undefined8 *)(lVar8 + 0x940);
    if (0x3fffffff < (int)uVar10) {
      FUN_032bd0a8(uVar10);
      uVar6 = *(uint *)(lVar8 + 0x94c);
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    if ((int)uVar10 <= (int)uVar6) {
      uVar10 = uVar6;
    }
    uVar9 = FUN_032bd1d4(puVar4,uVar10,8,uVar9,iVar13,(uint *)(lVar8 + 0x94c));
    *(undefined8 *)(lVar8 + 0x940) = uVar9;
  }
  if (0 < (int)param_3) {
    uVar17 = (ulong)param_3;
    if (param_4 == 0) {
      puVar12 = (uint *)((long)local_88 + 4);
      do {
        uVar11 = (ulong)*puVar12 & 0xffffff;
        lVar14 = param_1[7];
        if ((((*(byte *)(lVar14 + uVar11 * 0xc0 + 0x88) & 1) != 0) &&
            (uVar16 = (ulong)puVar12[-1] & 0xffffff,
            (*(byte *)(lVar14 + uVar16 * 0xc0 + 0x88) & 1) != 0)) &&
           (*(int *)(lVar14 + uVar11 * 0xc0 + 0x80) != *(int *)(lVar14 + uVar16 * 0xc0 + 0x80))) {
          if ((*(byte *)(lVar14 + uVar11 * 0xc0 + 0x54) & 9) == 0) {
            FUN_03030748(param_1,*(undefined4 *)(lVar14 + uVar11 * 0xc0 + 0x50),0);
          }
          if ((*(byte *)(lVar14 + uVar16 * 0xc0 + 0x54) & 9) == 0) {
            FUN_03030748(param_1,*(undefined4 *)(lVar14 + uVar16 * 0xc0 + 0x50),0);
          }
          iVar13 = *(int *)(lVar8 + 0x948);
          *(int *)(lVar8 + 0x948) = iVar13 + 1;
          puVar2 = (undefined4 *)(*(long *)(lVar8 + 0x940) + (long)iVar13 * 8);
          puVar2[1] = *(undefined4 *)(lVar14 + uVar11 * 0xc0 + 0x50);
          *puVar2 = *(undefined4 *)(lVar14 + uVar16 * 0xc0 + 0x50);
        }
        uVar17 = uVar17 - 1;
        puVar12 = puVar12 + 2;
      } while (uVar17 != 0);
    }
    else {
      puVar12 = (uint *)((long)local_88 + 4);
      do {
        uVar11 = (ulong)*puVar12 & 0xffffff;
        lVar14 = param_1[7];
        if ((((*(byte *)(lVar14 + uVar11 * 0xc0 + 0x88) & 1) != 0) &&
            (uVar16 = (ulong)puVar12[-1] & 0xffffff,
            (*(byte *)(lVar14 + uVar16 * 0xc0 + 0x88) & 1) != 0)) &&
           (*(int *)(lVar14 + uVar11 * 0xc0 + 0x80) != *(int *)(lVar14 + uVar16 * 0xc0 + 0x80))) {
          iVar13 = *(int *)(lVar8 + 0x948);
          *(int *)(lVar8 + 0x948) = iVar13 + 1;
          puVar2 = (undefined4 *)(*(long *)(lVar8 + 0x940) + (long)iVar13 * 8);
          puVar2[1] = *(undefined4 *)(lVar14 + uVar11 * 0xc0 + 0x50);
          *puVar2 = *(undefined4 *)(lVar14 + uVar16 * 0xc0 + 0x50);
        }
        uVar17 = uVar17 - 1;
        puVar12 = puVar12 + 2;
      } while (uVar17 != 0);
    }
  }
  uVar10 = local_70._4_4_;
  uVar17 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar10) && (local_88 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_88,(uVar17 & 0x3fffffff) << 3);
  }
  return;
}


