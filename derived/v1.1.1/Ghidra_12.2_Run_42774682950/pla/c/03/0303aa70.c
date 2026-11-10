/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303aa70; name: FUN_0303aa70
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0303aa70(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = tpidr_el0;
  if (*(long *)(lVar12 + 0x38d490) == 0) {
    lVar13 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar13;
    lVar13 = *(long *)(lVar13 + 0x10);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
  }
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtPostSolve";
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
  }
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x540);
  lVar14 = *(long *)(*(long *)(param_1 + 0x4a8) + 0x10);
  uVar9 = *(undefined8 *)(lVar14 + 0x110);
  if (*(long *)(lVar14 + 0xa0) == 0) {
    lVar5 = *(long *)(lVar14 + 0x50);
  }
  else {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,*(long *)(lVar14 + 0xa0),(long)*(int *)(lVar14 + 0xa8));
    *(undefined8 *)(lVar14 + 0xa0) = 0;
    *(undefined4 *)(lVar14 + 0xa8) = 0;
    lVar5 = *(long *)(lVar14 + 0x50);
  }
  if (lVar5 == 0) {
    lVar5 = *(long *)(lVar14 + 0xf0);
  }
  else {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,lVar5,(long)*(int *)(lVar14 + 0x58));
    *(undefined8 *)(lVar14 + 0x50) = 0;
    *(undefined4 *)(lVar14 + 0x58) = 0;
    lVar5 = *(long *)(lVar14 + 0xf0);
  }
  if (lVar5 == 0) {
    plVar11 = *(long **)(param_1 + 0x698);
  }
  else {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,lVar5,(long)*(int *)(lVar14 + 0xf8));
    *(undefined8 *)(lVar14 + 0xf0) = 0;
    *(undefined4 *)(lVar14 + 0xf8) = 0;
    plVar11 = *(long **)(param_1 + 0x698);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(**(long **)(*plVar11 + 0x4c0) + 0x40))
              (*(long **)(*plVar11 + 0x4c0),plVar11[100],(int)plVar11[0x65],4);
    *(undefined4 *)(plVar11 + 0x65) = 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x130) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x130) + 8) = 0;
  lVar7 = *(long *)(param_1 + 0x130);
  iVar8 = *(int *)(lVar7 + 4);
  if (0 < iVar8) {
    if (0xff < iVar8) {
      iVar8 = 0x100;
    }
    lVar15 = 0;
    do {
      lVar1 = lVar15 * 4;
      lVar15 = lVar15 + 1;
      *(undefined4 *)(lVar7 + lVar1 + 0x10) = 0xffffff;
      lVar7 = *(long *)(param_1 + 0x130);
    } while (lVar15 < iVar8);
  }
  *(undefined4 *)(lVar7 + 4) = 0;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  while (lVar5 != 0) {
    lVar15 = *(long *)(lVar5 + 8);
    lVar7 = *(long *)(lVar12 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar7;
    }
    plVar11 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar5,0x410);
    lVar5 = lVar15;
  }
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtDispatchCommands";
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
  }
  FUN_0301cc80(uVar9,param_2,*(undefined8 *)(param_1 + 0x7e8));
  (**(code **)(**(long **)(param_1 + 0x8f8) + 0x30))();
  FUN_030d4910(*(undefined8 *)(param_1 + 0x900));
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
  }
  cVar4 = *(char *)(*(long *)(param_1 + 0x500) + 0xaa0);
  if ((cVar4 != '\0') && (lVar12 = *(long *)(param_1 + 0x500) + 0xab0, cVar4 != '\0')) {
    if (lVar13 != 0) {
      puVar2 = *(undefined8 **)(lVar13 + 8);
      uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
         (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "TtCopyContactCaches";
        uVar10 = nn::os::GetSystemTick();
        puVar2[1] = uVar10;
      }
    }
    FUN_032beab0(lVar12,*(undefined8 *)(param_2 + 0x4e0));
    uVar3 = *(uint *)(lVar14 + 0x108);
    if (0 < (int)uVar3) {
      lVar5 = *(long *)(lVar14 + 0x100);
      FUN_032bec88(lVar12,*(undefined8 *)(param_2 + 0x4e0),lVar5 + 0x100);
      FUN_032bec88(lVar12,*(undefined8 *)(param_2 + 0x4e0),lVar5 + 0x200);
      if (uVar3 != 1) {
        lVar5 = *(long *)(lVar14 + 0x100);
        FUN_032bec88(lVar12,*(undefined8 *)(param_2 + 0x4e0),lVar5 + 0x600);
        FUN_032bec88(lVar12,*(undefined8 *)(param_2 + 0x4e0),lVar5 + 0x700);
        if (uVar3 != 2) {
          lVar7 = (ulong)uVar3 - 2;
          lVar5 = 0xc00;
          do {
            lVar15 = *(long *)(lVar14 + 0x100) + lVar5;
            FUN_032bec88(lVar12,*(undefined8 *)(param_2 + 0x4e0),lVar15 + -0x100);
            FUN_032bec88(lVar12,*(undefined8 *)(param_2 + 0x4e0),lVar15);
            lVar7 = lVar7 + -1;
            lVar5 = lVar5 + 0x500;
          } while (lVar7 != 0);
        }
      }
    }
    if (lVar13 != 0) {
      puVar2 = *(undefined8 **)(lVar13 + 8);
      uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
         (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_0390f40e;
        uVar10 = nn::os::GetSystemTick();
        puVar2[1] = uVar10;
      }
    }
  }
  *(int *)(param_1 + 0x5b8) = *(int *)(param_1 + 0x5b8) + 1;
  if (3 < *(ulong *)(param_1 + 0x7e0)) {
    if (lVar13 != 0) {
      puVar2 = *(undefined8 **)(lVar13 + 8);
      uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
         (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "TtPostSolveSignal";
        uVar10 = nn::os::GetSystemTick();
        puVar2[1] = uVar10;
      }
    }
    FUN_0302d690(param_1 + 0x7e0,param_1);
    if (lVar13 != 0) {
      puVar2 = *(undefined8 **)(lVar13 + 8);
      uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
         (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_0390f40e;
        uVar10 = nn::os::GetSystemTick();
        puVar2[1] = uVar10;
      }
    }
  }
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtClearSimulationContext";
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x4a8) + 0x10);
  uVar3 = *(uint *)(lVar12 + 0x108);
  if (0 < (int)uVar3) {
    uVar10 = *(undefined8 *)(param_2 + 0x4e0);
    lVar14 = *(long *)(lVar12 + 0x100);
    FUN_032be7c0(lVar14 + 0x100,uVar10);
    FUN_032be7c0(lVar14 + 0x200,uVar10);
    FUN_032be7c0(lVar14,uVar10);
    FUN_032be7c0(lVar14 + 0x300,uVar10);
    FUN_032be7c0(lVar14 + 0x400,uVar10);
    if (uVar3 != 1) {
      lVar14 = *(long *)(lVar12 + 0x100);
      FUN_032be7c0(lVar14 + 0x600,uVar10);
      FUN_032be7c0(lVar14 + 0x700,uVar10);
      FUN_032be7c0(lVar14 + 0x500,uVar10);
      FUN_032be7c0(lVar14 + 0x800,uVar10);
      FUN_032be7c0(lVar14 + 0x900,uVar10);
      if (uVar3 != 2) {
        lVar5 = (ulong)uVar3 - 2;
        lVar14 = 0xe00;
        do {
          lVar7 = *(long *)(lVar12 + 0x100) + lVar14;
          FUN_032be7c0(lVar7 + -0x300,uVar10);
          FUN_032be7c0(lVar7 + -0x200,uVar10);
          FUN_032be7c0(lVar7 + -0x400,uVar10);
          FUN_032be7c0(lVar7 + -0x100,uVar10);
          FUN_032be7c0(lVar7,uVar10);
          lVar5 = lVar5 + -1;
          lVar14 = lVar14 + 0x500;
        } while (lVar5 != 0);
      }
    }
  }
  FUN_0301c144(uVar9);
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_0390f40e;
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
  }
  *(undefined4 *)(param_1 + 0x808) = 1;
  if (lVar13 != 0) {
    puVar2 = *(undefined8 **)(lVar13 + 8);
    uVar6 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar13 + 0x10)) &&
       (*(ulong *)(lVar13 + 8) = uVar6, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "EtPostSolve";
      uVar9 = nn::os::GetSystemTick();
      puVar2[1] = uVar9;
    }
  }
  return;
}


