/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a23a44; name: FUN_01a23a44
 */


void FUN_01a23a44(long *param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *local_88 [3];
  long *local_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_04382430;
  puVar6 = PTR_DAT_04382428;
  lVar13 = *(long *)(param_2 + 0x1f0);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar9 = *(int *)(lVar13 + 0xc);
    do {
      plVar15 = *(long **)(lVar13 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar10 = FUN_00ab38cc();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01a23a6c;
        if (plVar15 == (long *)puVar7) break;
        plVar15 = (long *)*plVar15;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            plVar15 = (long *)(lVar13 + -0x50);
            FUN_01bd4154(local_88,plVar15);
            puVar5 = local_88[0];
            puVar7 = PTR_DAT_0437a558;
            puVar6 = PTR_DAT_0437a550;
            if (local_88[0] == (undefined8 *)0x0) goto LAB_01a23b1c;
            if (*(int *)((long)local_88[0] + 0xc) == 0) goto LAB_01a23cf8;
            piVar1 = (int *)((long)local_88[0] + 0xc);
            iVar9 = *(int *)((long)local_88[0] + 0xc);
            goto LAB_01a23bcc;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  goto LAB_01a23a6c;
LAB_01a23bcc:
  do {
    plVar16 = (long *)puVar5[2];
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar10 = FUN_00aa0310();
      *(undefined8 *)puVar7 = uVar10;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) goto LAB_01a23cf8;
      if (plVar16 == (long *)puVar7) break;
      plVar16 = (long *)*plVar16;
    }
    iVar8 = *piVar1;
    if (iVar8 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar12 = puVar5[3];
        plVar16 = (long *)0x0;
        puVar5 = local_88[0];
        if (lVar12 != 0) {
          plVar16 = (long *)(lVar12 + -0x50);
        }
        goto joined_r0x01a23c10;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = iVar8;
  } while (iVar8 != 0);
LAB_01a23cf8:
  plVar16 = (long *)0x0;
  puVar5 = local_88[0];
joined_r0x01a23c10:
  local_88[0] = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *puVar5;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  if (plVar16 == (long *)0x0) {
LAB_01a23b1c:
    bVar4 = false;
  }
  else {
    FUN_00a9ecd4(local_88,plVar16);
    puVar5 = local_88[0];
    puVar7 = PTR_DAT_0437a130;
    puVar6 = PTR_DAT_0437a128;
    if (local_88[0] == (undefined8 *)0x0) {
      bVar4 = false;
    }
    else {
      if (*(int *)((long)local_88[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_88[0] + 0xc);
        iVar9 = *(int *)((long)local_88[0] + 0xc);
        do {
          plVar14 = (long *)puVar5[2];
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar8 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
                uVar10 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar7 = PTR_DAT_043795e0;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01a23e50;
            if (plVar14 == (long *)puVar7) break;
            plVar14 = (long *)*plVar14;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar12 = puVar5[3];
              plVar14 = (long *)0x0;
              puVar5 = local_88[0];
              if (lVar12 != 0) {
                plVar14 = (long *)(lVar12 + -0x50);
              }
              goto joined_r0x01a23e74;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar8;
        } while (iVar8 != 0);
      }
LAB_01a23e50:
      plVar14 = (long *)0x0;
      puVar5 = local_88[0];
joined_r0x01a23e74:
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = *puVar5;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      bVar4 = false;
      if (plVar14 != (long *)0x0) {
        FUN_02a4754c(local_88,PTR_DAT_0437a3d8);
        plVar11 = (long *)FUN_0289f734(plVar14,local_88);
        plVar11 = (long *)*plVar11;
        *param_1 = (long)plVar11;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        lVar12 = plVar14[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 1) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        bVar4 = true;
      }
    }
    lVar12 = plVar16[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    if (!bVar4) goto LAB_01a23b1c;
    bVar4 = true;
  }
  lVar13 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = iVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  if (bVar4) {
    return;
  }
LAB_01a23a6c:
  *param_1 = 0;
  return;
}


