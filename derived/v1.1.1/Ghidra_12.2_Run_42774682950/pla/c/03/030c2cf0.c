/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c2cf0; name: FUN_030c2cf0
 */


void FUN_030c2cf0(undefined8 *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  void *__s;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  *param_1 = &PTR_LAB_042b4998;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  lVar22 = tpidr_el0;
  lVar12 = *(long *)(lVar22 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar12;
  }
  lVar21 = *(long *)(lVar12 + 0x10);
  if (lVar21 != 0) {
    puVar13 = *(undefined8 **)(lVar21 + 8);
    uVar15 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar21 + 0x10)) &&
       (*(ulong *)(lVar21 + 8) = uVar15, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "TtPrepareSolverTaskInit";
      uVar19 = nn::os::GetSystemTick();
      puVar13[1] = uVar19;
      lVar12 = *(long *)(lVar22 + 0x38d490);
    }
  }
  uVar5 = *(uint *)(param_2 + 1);
  lVar18 = *(long *)(*(long *)*param_2 + 8);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar12;
  }
  plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
  __s = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,(long)(int)uVar5 << 10,0);
  param_1[8] = __s;
  if (0 < (int)uVar5) {
    memset(__s,0,0x400);
    *(undefined8 *)(*(long *)*param_2 + 0x4d8) = param_1[8];
    if (uVar5 != 1) {
      memset((void *)(param_1[8] + 0x400),0,0x400);
      *(long *)(*(long *)(*param_2 + 8) + 0x4d8) = param_1[8] + 0x400;
      if (uVar5 != 2) {
        memset((void *)(param_1[8] + 0x800),0,0x400);
        *(long *)(*(long *)(*param_2 + 0x10) + 0x4d8) = param_1[8] + 0x800;
        if (uVar5 != 3) {
          memset((void *)(param_1[8] + 0xc00),0,0x400);
          *(long *)(*(long *)(*param_2 + 0x18) + 0x4d8) = param_1[8] + 0xc00;
          if (uVar5 != 4) {
            memset((void *)(param_1[8] + 0x1000),0,0x400);
            *(long *)(*(long *)(*param_2 + 0x20) + 0x4d8) = param_1[8] + 0x1000;
            if (uVar5 != 5) {
              uVar15 = 5;
              lVar12 = 0x1400;
              do {
                memset((void *)(param_1[8] + lVar12),0,0x400);
                lVar2 = param_1[8] + lVar12;
                lVar16 = uVar15 * 8;
                uVar15 = uVar15 + 1;
                lVar12 = lVar12 + 0x400;
                *(long *)(*(long *)(*param_2 + lVar16) + 0x4d8) = lVar2;
              } while (uVar5 != uVar15);
            }
          }
        }
      }
    }
  }
  puVar6 = PTR_PTR_0434a080;
  uVar20 = *(uint *)((long)param_1 + 0x2c);
  uVar11 = uVar20 & 0x3fffffff;
  uVar3 = *(uint *)(*(long *)(lVar18 + 0x4b0) + 0x1c);
  if ((int)uVar11 < (int)uVar3) {
    puVar13 = (undefined8 *)param_1[4];
    uVar4 = *(uint *)(param_1 + 5);
    uVar15 = (ulong)uVar4;
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
      uVar20 = *(uint *)((long)param_1 + 0x2c);
      uVar11 = uVar20 & 0x3fffffff;
    }
    uVar9 = (uVar20 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    local_7c = uVar3;
    if ((int)uVar3 <= (int)uVar9) {
      local_7c = uVar9;
    }
    local_88 = (ulong)local_7c << 3;
    if (((int)local_7c < (int)uVar11) || (0x3fffffff < (int)local_7c)) {
      local_78 = 1;
      puStack_68 = &local_7c;
      local_70 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_78);
      uVar20 = *(uint *)((long)param_1 + 0x2c);
      uVar11 = uVar20 & 0x3fffffff;
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x10))(puVar6,local_88,&local_88);
    if (0 < (int)uVar4) {
      puVar14 = puVar8;
      puVar17 = puVar13;
      do {
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar17;
        puVar14 = puVar14 + 1;
        puVar17 = puVar17 + 1;
      } while (uVar15 != 0);
    }
    if (-1 < (int)uVar20) {
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6,puVar13,(ulong)uVar11 << 3);
    }
    if (local_88 < 0x1fffffff8) {
      uVar10 = (undefined4)(local_88 >> 3);
    }
    else {
      uVar10 = 0x3fffffff;
    }
    *(undefined4 *)((long)param_1 + 0x2c) = uVar10;
    param_1[4] = puVar8;
  }
  puVar1 = (uint *)((long)param_1 + 0x3c);
  if (*(uint *)(param_1 + 5) != uVar3) {
    *(uint *)(param_1 + 5) = uVar3;
  }
  uVar11 = *puVar1;
  if ((int)(uVar11 & 0x3fffffff) < (int)uVar3) {
    uVar19 = param_1[6];
    uVar10 = *(undefined4 *)(param_1 + 7);
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
      uVar11 = *puVar1;
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar20 = uVar3;
    if ((int)uVar3 <= (int)uVar11) {
      uVar20 = uVar11;
    }
    uVar19 = FUN_032bd1d4(puVar6,uVar20,8,uVar19,uVar10,puVar1);
    param_1[6] = uVar19;
  }
  if (*(uint *)(param_1 + 7) != uVar3) {
    *(uint *)(param_1 + 7) = uVar3;
  }
  if (0 < *(int *)(param_1 + 5)) {
    *(undefined8 *)param_1[4] = 0xffffffff;
    *(undefined8 *)param_1[6] = param_1[4];
    if (1 < *(int *)(param_1 + 5)) {
      *(undefined8 *)(param_1[4] + 8) = 0xffffffff;
      *(long *)(param_1[6] + 8) = param_1[4] + 8;
      if (2 < *(int *)(param_1 + 5)) {
        *(undefined8 *)(param_1[4] + 0x10) = 0xffffffff;
        *(long *)(param_1[6] + 0x10) = param_1[4] + 0x10;
        if (3 < *(int *)(param_1 + 5)) {
          *(undefined8 *)(param_1[4] + 0x18) = 0xffffffff;
          *(long *)(param_1[6] + 0x18) = param_1[4] + 0x18;
          if (4 < *(int *)(param_1 + 5)) {
            *(undefined8 *)(param_1[4] + 0x20) = 0xffffffff;
            *(long *)(param_1[6] + 0x20) = param_1[4] + 0x20;
            if (5 < *(int *)(param_1 + 5)) {
              *(undefined8 *)(param_1[4] + 0x28) = 0xffffffff;
              *(long *)(param_1[6] + 0x28) = param_1[4] + 0x28;
              if (6 < *(int *)(param_1 + 5)) {
                lVar12 = 0;
                lVar16 = 6;
                do {
                  *(undefined8 *)(param_1[4] + lVar12 + 0x30) = 0xffffffff;
                  lVar2 = param_1[4] + lVar12;
                  lVar12 = lVar12 + 8;
                  *(long *)(param_1[6] + lVar16 * 8) = lVar2 + 0x30;
                  lVar16 = lVar16 + 1;
                } while (lVar16 < *(int *)(param_1 + 5));
              }
            }
          }
        }
      }
    }
  }
  lVar12 = *(long *)(lVar22 + 0x38d490);
  if (lVar12 == 0) {
    lVar12 = FUN_0333d16c(0,1);
    *(long *)(lVar22 + 0x38d490) = lVar12;
  }
  plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0xa0,0);
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  param_1[9] = plVar7;
  plVar7[2] = lVar18 + 0x530;
  *plVar7 = (long)param_2;
  plVar7[1] = param_3;
  plVar7[3] = *(long *)(lVar18 + 0x4b0);
  lVar22 = *(long *)(lVar18 + 0x4e0);
  plVar7[5] = *(long *)(lVar18 + 0x4e8);
  plVar7[4] = lVar22;
  lVar12 = *(long *)(lVar18 + 0x4f8);
  lVar22 = *(long *)(lVar18 + 0x4f0);
  plVar7[0xf] = param_3 + 0xb0;
  plVar7[0x10] = param_3 + 0x10;
  plVar7[7] = lVar12;
  plVar7[6] = lVar22;
  plVar7[0x11] = param_3 + 0x60;
  *(uint *)(param_1 + 3) = uVar5;
  if ((((0 < (int)uVar5) && (*(undefined8 *)(*(long *)*param_2 + 0x4c0) = param_1[9], uVar5 != 1))
      && (*(undefined8 *)(*(long *)(*param_2 + 8) + 0x4c0) = param_1[9], uVar5 != 2)) &&
     ((*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x4c0) = param_1[9], uVar5 != 3 &&
      (*(undefined8 *)(*(long *)(*param_2 + 0x18) + 0x4c0) = param_1[9], uVar5 != 4)))) {
    uVar15 = 4;
    do {
      lVar22 = uVar15 * 8;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(*(long *)(*param_2 + lVar22) + 0x4c0) = param_1[9];
    } while (uVar5 != uVar15);
  }
  if (lVar21 != 0) {
    puVar13 = *(undefined8 **)(lVar21 + 8);
    uVar15 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= *(ulong *)(lVar21 + 0x10)) &&
       (*(ulong *)(lVar21 + 8) = uVar15, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = &DAT_0390f40e;
      uVar19 = nn::os::GetSystemTick();
      puVar13[1] = uVar19;
    }
  }
  return;
}


