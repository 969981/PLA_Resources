/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017efa70; name: FUN_017efa70
 */


void FUN_017efa70(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_48;
  
  if (*param_1 != 0) {
    FUN_017f14fc(&local_70);
    lVar16 = *param_2;
    if (lVar16 != 0) goto LAB_017efcdc;
LAB_017efaa4:
    plVar13 = (long *)0x0;
joined_r0x017eff0c:
    if (local_70 != (long *)0x0) goto LAB_017efaac;
LAB_017eff10:
    if (plVar13 == (long *)0x0) {
      return;
    }
    goto LAB_017efab8;
  }
  local_70 = (long *)0x0;
  lVar16 = *param_2;
  if (lVar16 == 0) goto LAB_017efaa4;
LAB_017efcdc:
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (*(int *)(lVar16 + 0xc) != 0) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar8 = *(int *)(lVar16 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar16 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar12;
        __cxa_guard_release(puVar4);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_017eff38;
      while (puVar15 != (undefined8 *)puVar5) {
        puVar15 = (undefined8 *)*puVar15;
        if (puVar15 == (undefined8 *)0x0) goto LAB_017efaa4;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          if (*(long *)(lVar16 + 0x18) == 0) goto LAB_017eff38;
          plVar14 = (long *)(*(long *)(lVar16 + 0x18) + -8);
          plVar13 = (long *)param_2[2];
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          (**(code **)(*plVar14 + 0x18))(plVar14);
          goto joined_r0x017eff0c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar9;
    } while (iVar9 != 0);
    goto LAB_017efaa4;
  }
LAB_017eff38:
  plVar13 = (long *)0x0;
  if (local_70 == (long *)0x0) goto LAB_017eff10;
LAB_017efaac:
  if (plVar13 == (long *)0x0) goto LAB_017efacc;
  plVar14 = (long *)plVar13[1];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x10))(&local_68,plVar14);
    puVar4 = PTR_DAT_04379498;
    do {
      uVar12 = local_60;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_60,0x10);
      if (bVar3) {
        local_60 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    puVar6 = PTR_DAT_043794a8;
    puVar5 = PTR_DAT_043794a0;
    uVar10 = *(undefined8 *)PTR_DAT_043794a0;
    *(undefined8 *)PTR_DAT_043794a8 = uVar10;
    FUN_02a44e0c(&local_58,uVar10,uVar12);
    puVar15 = local_68;
    local_68 = (undefined8 *)0x0;
    if (puVar15 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar15 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar15[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_48 = *puVar15;
        FUN_02a44274(lVar16 + 0xd8,&local_48);
      }
    }
    puVar7 = local_58;
    puVar15 = local_68;
    if (local_58 != (undefined8 *)0x0) {
      local_58 = (undefined8 *)0x0;
    }
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        local_68[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_48 = *puVar15;
        FUN_02a44274(lVar16 + 0xd8,&local_48);
      }
    }
    if (puVar7 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)puVar7[3];
      if (puVar15 == (undefined8 *)0x0) {
LAB_017efd90:
        puVar17 = (undefined8 *)0x0;
      }
      else {
        puVar11 = (undefined8 *)(**(code **)*puVar15)(puVar15);
        if (((*PTR_DAT_043819a0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043819a0), iVar8 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar12;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043819a8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043819a0);
        }
        if (puVar11 == (undefined8 *)0x0) goto LAB_017efd90;
        do {
          if (puVar11 == (undefined8 *)PTR_DAT_043819a8) {
            puVar17 = puVar15 + -10;
            break;
          }
          puVar11 = (undefined8 *)*puVar11;
          puVar17 = (undefined8 *)0x0;
        } while (puVar11 != (undefined8 *)0x0);
      }
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar7[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)puVar5;
        *(long *)puVar6 = lVar16;
        local_68 = (undefined8 *)*puVar7;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
      }
      if (puVar17 != (undefined8 *)0x0) {
        FUN_017eff48(local_70,puVar17 + 0xd);
      }
    }
  }
LAB_017efab8:
  (**(code **)(*plVar13 + 0x18))();
  if (local_70 == (long *)0x0) {
    return;
  }
LAB_017efacc:
  lVar16 = local_70[0xb];
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_70 + 0x20))(local_70);
  }
  return;
}


