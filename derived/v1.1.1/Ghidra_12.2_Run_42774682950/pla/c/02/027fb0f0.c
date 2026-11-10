/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fb0f0; name: FUN_027fb0f0
 */


void FUN_027fb0f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar7 = *(uint *)(param_1 + 0x17c);
  if (uVar7 < 2) {
    FUN_00d392d4(*(undefined8 *)(param_1 + 200));
    local_50 = &DAT_753f74378b49da9c;
    pcStack_48 = "View_Top";
    local_40 = 8;
    local_38 = (long *)0x0;
    lVar3 = FUN_027f4740(*(undefined8 *)(*(long *)(param_1 + 200) + 0x4c8),&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    lVar3 = FUN_00d2eb20(lVar3 + 0x180,"grid_panel");
    lVar3 = *(long *)(lVar3 + 0x468);
    iVar2 = *(int *)(lVar3 + 8);
    if (*(int *)(lVar3 + 0x1c) == 0) {
      iVar8 = *(int *)(lVar3 + 0xc);
      iVar6 = 0;
      if (iVar8 != 0) {
        iVar6 = iVar2 / iVar8;
      }
      iVar8 = iVar2 - iVar6 * iVar8;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x10);
      iVar8 = 0;
      if (iVar6 != 0) {
        iVar8 = iVar2 / iVar6;
      }
      iVar6 = iVar2 - iVar8 * iVar6;
    }
    if ((*(int *)(param_1 + 0x150) == iVar8) && (*(int *)(param_1 + 0x154) == iVar6)) {
      uVar7 = *(uint *)(param_1 + 0x17c);
    }
    else {
      local_50 = &DAT_753f74378b49da9c;
      pcStack_48 = "View_Top";
      local_40 = 8;
      local_38 = (long *)0x0;
      lVar3 = FUN_027f4740(*(undefined8 *)(*(long *)(param_1 + 200) + 0x4c8),&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      lVar3 = FUN_00d2eb20(lVar3 + 0x180,"grid_panel");
      lVar3 = *(long *)(lVar3 + 0x468);
      iVar2 = *(int *)(lVar3 + 8);
      if (*(int *)(lVar3 + 0x1c) == 0) {
        iVar8 = *(int *)(lVar3 + 0xc);
        iVar6 = 0;
        if (iVar8 != 0) {
          iVar6 = iVar2 / iVar8;
        }
        iVar8 = iVar2 - iVar6 * iVar8;
      }
      else {
        iVar6 = *(int *)(lVar3 + 0x10);
        iVar8 = 0;
        if (iVar6 != 0) {
          iVar8 = iVar2 / iVar6;
        }
        iVar6 = iVar2 - iVar8 * iVar6;
      }
      *(ulong *)(param_1 + 0x150) = CONCAT44(iVar6,iVar8);
      FUN_00d39d38(*(undefined8 *)(param_1 + 0x138));
      uVar7 = *(uint *)(param_1 + 0x17c);
    }
    if (uVar7 == 0) {
      plVar4 = *(long **)(param_1 + 0x138);
      lVar3 = plVar4[0x99];
      if (lVar3 != 0) {
        puVar9 = *(undefined8 **)(lVar3 + 0x70);
        puVar1 = *(undefined8 **)(lVar3 + 0x78);
        if (puVar9 != puVar1) {
          FUN_00d42438(*puVar9,0,1);
          if ((((puVar9 + 1 != puVar1) && (FUN_00d42438(puVar9[1],0,1), puVar9 + 2 != puVar1)) &&
              (FUN_00d42438(puVar9[2],0,1), puVar9 + 3 != puVar1)) &&
             ((FUN_00d42438(puVar9[3],0,1), puVar9 + 4 != puVar1 &&
              (FUN_00d42438(puVar9[4],0,1), puVar9 + 5 != puVar1)))) {
            FUN_00d42438(puVar9[5],0,1);
            for (puVar9 = puVar9 + 6; puVar9 != puVar1; puVar9 = puVar9 + 1) {
              FUN_00d42438(*puVar9,0,1);
            }
          }
          plVar4 = *(long **)(param_1 + 0x138);
        }
      }
      (**(code **)(*plVar4 + 0x48))();
      iVar2 = *(int *)(*(long *)(param_1 + 0x138) + 0x4c0);
      uVar7 = *(uint *)(param_1 + 0x17c);
      if (iVar2 == 8 || iVar2 == 6) {
        uVar7 = uVar7 + 1;
        *(uint *)(param_1 + 0x17c) = uVar7;
      }
    }
    if (uVar7 == 1) {
      (**(code **)(**(long **)(param_1 + 0x138) + 0x60))();
      *(undefined8 *)(*(long *)(param_1 + 0x138) + 0x560) = 0;
      if (*(int *)(*(long *)(param_1 + 0x138) + 0x4c0) != 5) {
        return;
      }
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379690), iVar2 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      lVar3 = *(long *)PTR_DAT_04379698;
      *(long *)PTR_DAT_043796a0 = lVar3;
      uVar5 = FUN_02867ae0(*(undefined8 *)(lVar3 + 0x50));
      if ((uVar5 & 1) != 0) {
        return;
      }
      uVar5 = FUN_027f89f4(param_1);
      if ((uVar5 & 1) != 0) goto LAB_027fb2f8;
      uVar7 = *(int *)(param_1 + 0x17c) + 1;
      *(uint *)(param_1 + 0x17c) = uVar7;
    }
  }
  if (uVar7 != 2) {
    return;
  }
  FUN_027f89f4(param_1);
  if (*(long *)(param_1 + 0x138) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x148) == 0) {
    return;
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379690), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar3 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar3;
  uVar5 = FUN_02867ae0(*(undefined8 *)(lVar3 + 0x50));
  if ((uVar5 & 1) != 0) {
    return;
  }
LAB_027fb2f8:
  FUN_027f8d40(param_1);
  *(undefined4 *)(param_1 + 0x130) = 2;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  return;
}


