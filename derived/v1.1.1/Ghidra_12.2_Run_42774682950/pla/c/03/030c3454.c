/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c3454; name: FUN_030c3454
 */


void FUN_030c3454(long param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x38d490) == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar10 + 0x38d490) = lVar19;
    lVar19 = *(long *)(lVar19 + 0x10);
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar10 + 0x38d490) + 0x10);
  }
  if (lVar19 != 0) {
    puVar2 = *(undefined8 **)(lVar19 + 8);
    uVar11 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar11 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "LtCreateSolverTask";
      puVar2[2] = "StSetupSolverIdTable";
      uVar14 = nn::os::GetSystemTick();
      puVar2[1] = uVar14;
    }
  }
  lVar20 = *(long *)(param_3 + 8);
  uVar3 = *(uint *)(param_2 + 1);
  uVar11 = (ulong)uVar3;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar20 + 0x4a8);
  uVar4 = *(uint *)(*(long *)(**(long **)(lVar20 + 0x140) + 0x4b0) + 0x1c);
  if (0 < (int)uVar4) {
    uVar13 = 0;
    puVar17 = (uint *)(lVar20 + 0x188);
    uVar15 = 0;
    do {
      uVar5 = *puVar17;
      if ((int)uVar5 < 2) {
        *(ulong *)(*(long *)(param_1 + 0x20) + uVar13 * 8) = uVar15;
        uVar16 = uVar15;
      }
      else {
        uVar16 = (ulong)(uVar5 + (int)uVar15);
        *(ulong *)(*(long *)(param_1 + 0x20) + uVar13 * 8) = uVar15 | (ulong)uVar5 << 0x20;
      }
      uVar13 = uVar13 + 1;
      puVar17 = puVar17 + 6;
      uVar15 = uVar16;
    } while (uVar4 != uVar13);
  }
  FUN_03015a60(lVar20 + 0x140,(undefined8 *)(param_1 + 0x58));
  if (lVar19 != 0) {
    puVar2 = *(undefined8 **)(lVar19 + 8);
    uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar13 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar13, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "StSetupSolverVelocities";
      uVar14 = nn::os::GetSystemTick();
      puVar2[1] = uVar14;
    }
  }
  puVar8 = PTR_PTR_0434a080;
  iVar6 = *(int *)(param_1 + 0x60);
  iVar7 = iVar6 * 0x20;
  if (*(int *)(lVar20 + 0x624) < iVar7) {
    if (*(long *)(lVar20 + 0x628) != 0) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*(long *)(lVar20 + 0x628),(long)*(int *)(lVar20 + 0x624) + 0x30);
      *(undefined4 *)(lVar20 + 0x624) = 0;
      *(undefined8 *)(lVar20 + 0x628) = 0;
    }
    uVar14 = (**(code **)(*(long *)puVar8 + 0x10))(puVar8,(long)(iVar7 + 0x30),0);
    *(undefined8 *)(lVar20 + 0x628) = uVar14;
    *(int *)(lVar20 + 0x624) = iVar7;
  }
  *(int *)(lVar20 + 0x620) = iVar7;
  puVar8 = PTR_PTR_0434a080;
  if (*(int *)(lVar20 + 0x634) < iVar7) {
    if (*(long *)(lVar20 + 0x638) != 0) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*(long *)(lVar20 + 0x638),(long)*(int *)(lVar20 + 0x634) + 0x30);
      *(undefined4 *)(lVar20 + 0x634) = 0;
      *(undefined8 *)(lVar20 + 0x638) = 0;
    }
    uVar14 = (**(code **)(*(long *)puVar8 + 0x10))(puVar8,(long)(iVar7 + 0x30),0);
    *(undefined8 *)(lVar20 + 0x638) = uVar14;
    *(int *)(lVar20 + 0x634) = iVar7;
  }
  *(int *)(lVar20 + 0x630) = iVar7;
  *(int *)(lVar20 + 0x640) = iVar6;
  if (*(long *)(lVar20 + 0x698) != 0) {
    if (lVar19 != 0) {
      puVar2 = *(undefined8 **)(lVar19 + 8);
      uVar13 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= *(ulong *)(lVar19 + 0x10)) &&
         (*(ulong *)(lVar19 + 8) = uVar13, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "StPrepareDeactivationInfo";
        uVar14 = nn::os::GetSystemTick();
        puVar2[1] = uVar14;
      }
    }
    iVar6 = *(int *)(lVar20 + 0x640);
    lVar12 = *(long *)(lVar10 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar10 + 0x38d490) = lVar12;
    }
    plVar9 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,0x140,0);
    FUN_0305a7ec(lVar10,iVar6,uVar11);
    if (0 < (int)uVar3) {
      lVar12 = *(long *)*param_2;
      *(undefined8 *)(lVar12 + 0x4b8) = *(undefined8 *)(lVar10 + 0x20);
      *(long *)(lVar12 + 0x4c8) = lVar10;
      if (uVar3 != 1) {
        lVar12 = *(long *)(*param_2 + 8);
        *(long *)(lVar12 + 0x4b8) = *(long *)(lVar10 + 0x20) + 0x20;
        *(long *)(lVar12 + 0x4c8) = lVar10;
        if (uVar3 != 2) {
          lVar12 = *(long *)(*param_2 + 0x10);
          *(long *)(lVar12 + 0x4b8) = *(long *)(lVar10 + 0x20) + 0x40;
          *(long *)(lVar12 + 0x4c8) = lVar10;
          if (uVar3 != 3) {
            lVar12 = *(long *)(*param_2 + 0x18);
            *(long *)(lVar12 + 0x4b8) = *(long *)(lVar10 + 0x20) + 0x60;
            *(long *)(lVar12 + 0x4c8) = lVar10;
            if (uVar3 != 4) {
              lVar12 = 0x400000000;
              uVar13 = 4;
              do {
                lVar1 = lVar12 >> 0x1b;
                lVar18 = *(long *)(*param_2 + uVar13 * 8);
                uVar13 = uVar13 + 1;
                lVar12 = lVar12 + 0x100000000;
                *(long *)(lVar18 + 0x4b8) = *(long *)(lVar10 + 0x20) + lVar1;
                *(long *)(lVar18 + 0x4c8) = lVar10;
              } while (uVar11 != uVar13);
            }
          }
        }
      }
      uVar4 = iVar6 + 7U & 0xfffffffc;
      FUN_02ff1f1c(*(undefined8 *)(*(long *)*param_2 + 0x4b8),0,uVar4,0);
      if ((((uVar3 != 1) &&
           (FUN_02ff1f1c(*(undefined8 *)(*(long *)(*param_2 + 8) + 0x4b8),0,uVar4,0), uVar3 != 2))
          && (FUN_02ff1f1c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x4b8),0,uVar4,0),
             uVar3 != 3)) &&
         (FUN_02ff1f1c(*(undefined8 *)(*(long *)(*param_2 + 0x18) + 0x4b8),0,uVar4,0), uVar3 != 4))
      {
        uVar13 = 4;
        do {
          FUN_02ff1f1c(*(undefined8 *)(*(long *)(*param_2 + uVar13 * 8) + 0x4b8),0,uVar4,0);
          uVar13 = uVar13 + 1;
        } while (uVar11 != uVar13);
      }
    }
  }
  if (lVar19 != 0) {
    puVar2 = *(undefined8 **)(lVar19 + 8);
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "StPopulateSolverStepInfo";
      uVar14 = nn::os::GetSystemTick();
      puVar2[1] = uVar14;
    }
  }
  lVar10 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar20 + 0x38);
  *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(lVar20 + 0x150);
  uVar14 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar10 + 0x60) = uVar14;
  *(ulong *)(lVar10 + 0x68) = *(long *)(lVar20 + 0x628) + 0x3fU & 0xffffffffffffffc0;
  uVar14 = 0;
  if (*(long *)(lVar20 + 0x698) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(lVar20 + 0x698) + 0x388);
  }
  *(undefined8 *)(lVar10 + 0x98) = uVar14;
  *(ulong *)(lVar10 + 0x90) = *(long *)(lVar20 + 0x638) + 0x3fU & 0xffffffffffffffc0;
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(param_1 + 0x58);
  if (lVar19 != 0) {
    puVar2 = *(undefined8 **)(lVar19 + 8);
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03922da5;
      uVar14 = nn::os::GetSystemTick();
      puVar2[1] = uVar14;
    }
  }
  return;
}


