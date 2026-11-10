/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0139a8c0; name: FUN_0139a8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0139a8c0(long *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined1 local_5c [4];
  undefined8 local_58;
  long *local_50;
  long lStack_48;
  long *local_40;
  long *local_38;
  long local_28;
  
  (**(code **)(*(long *)param_1[0x6d] + 0x10))(&local_40);
  local_50 = (long *)0x0;
  lStack_48 = 0;
  FUN_01160f90(&local_50,&local_40);
  plVar8 = local_40;
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 1;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      local_40[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *plVar8;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  lVar10 = FUN_0139f570(&local_50);
  plVar8 = local_50;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 1;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_40 = (long *)*plVar8;
      FUN_02a44274(lVar11 + 0xd8,&local_40);
    }
  }
  if (lVar10 == 0) {
LAB_0139b004:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  switch(*(undefined4 *)((long)param_1 + 0x72c)) {
  case 3:
    if (((DAT_043c2750 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043c2750), iVar5 != 0)) {
      DAT_043c2740 = 0;
      DAT_043c2748 = 0;
      __cxa_guard_release(&DAT_043c2750);
    }
    if (((DAT_043c2770 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043c2770), iVar5 != 0)) {
      uRam00000000043c2768 = DAT_0388a298;
      _DAT_043c2760 = DAT_0388a290;
      __cxa_guard_release(&DAT_043c2770);
    }
    if (((*PTR_DAT_04379e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e28);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379e30;
    *(undefined8 *)PTR_DAT_04379e38 = uVar6;
    FUN_00d264cc(uVar6,0,0,&DAT_043c2740,&DAT_043c2760,2,0,0);
    uVar9 = 4;
    break;
  case 4:
    if (((*PTR_DAT_04379e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e28);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379e30;
    *(undefined8 *)PTR_DAT_04379e38 = uVar6;
    uVar7 = FUN_00d26428(uVar6,0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    uVar9 = 5;
    break;
  case 5:
    if ((param_1[0xea] == 0) || (uVar7 = FUN_02a43a8c(), (uVar7 & 1) != 0)) {
      if (((*PTR_DAT_04379690 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379690);
      }
      lVar11 = *(long *)PTR_DAT_04379698;
      *(long *)PTR_DAT_043796a0 = lVar11;
      if (((lVar11 != 0) && (FUN_0286b7f4(&local_40), local_40 != (long *)0x0)) &&
         (FUN_027fd7ec(local_40,0), local_40 != (long *)0x0)) {
        lVar11 = local_40[0xb];
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          iVar5 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_40 + 0x20))();
        }
      }
      local_50 = param_1;
      lStack_48 = lVar10;
      FUN_0139d518(&local_40,&local_50);
      FUN_013a359c(param_1 + 0xec,&local_40);
      local_58 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x88);
      local_5c[0] = 0;
      FUN_0139d640(&local_50,param_1,local_58,&local_58,local_5c,param_1 + 0xed);
      FUN_0138dba8(param_1 + 0xea,&local_50);
      plVar8 = local_50;
      if (local_50 != (long *)0x0) {
        plVar1 = local_50 + 1;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          local_50[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_28 = *plVar8;
          FUN_02a44274(lVar10 + 0xd8,&local_28);
        }
      }
      *(undefined4 *)((long)param_1 + 0x72c) = 6;
      if (local_38 == (long *)0x0) {
        return 0;
      }
      plVar8 = local_38 + 10;
      do {
        iVar5 = (int)*plVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_38 + 0x10))();
        return 0;
      }
      return 0;
    }
    goto LAB_0139b004;
  case 6:
    if ((param_1[0xea] != 0) && (uVar7 = FUN_02a43a8c(), (uVar7 & 1) == 0)) {
      return 0;
    }
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar10 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar10;
    if (((lVar10 == 0) || (FUN_0286b7f4(&local_40), local_40 == (long *)0x0)) ||
       (FUN_027fd7ec(local_40,1), local_40 == (long *)0x0)) {
LAB_0139acac:
      cVar3 = (char)param_1[0xec];
    }
    else {
      lVar10 = local_40[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 != 0) goto LAB_0139acac;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
      cVar3 = (char)param_1[0xec];
    }
    if (cVar3 != '\0') {
      plVar8 = (long *)param_1[0xee];
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(undefined1 *)(param_1 + 0xec) = 0;
    }
    if (((*PTR_DAT_04379e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e28);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379e30;
    *(undefined8 *)PTR_DAT_04379e38 = uVar6;
    FUN_00d26570(uVar6,2);
    uVar9 = 7;
    break;
  case 7:
    uVar9 = 8;
    break;
  case 8:
    if (((*PTR_DAT_04379e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379e28), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437a500,PTR_DAT_04379e30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e28);
    }
    uVar6 = *(undefined8 *)PTR_DAT_04379e30;
    *(undefined8 *)PTR_DAT_04379e38 = uVar6;
    uVar7 = FUN_00d26428(uVar6,0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    return 1;
  default:
    return 1;
  }
  *(undefined4 *)((long)param_1 + 0x72c) = uVar9;
  return 0;
}


