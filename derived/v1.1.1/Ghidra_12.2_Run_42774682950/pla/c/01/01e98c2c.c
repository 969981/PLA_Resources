/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e98c2c; name: FUN_01e98c2c
 */


void FUN_01e98c2c(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *local_88;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_2 + 0x220);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0xc) == 0) {
LAB_01e98d98:
      bVar4 = false;
      goto LAB_01e98c80;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    iVar10 = *(int *)(lVar12 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      if (puVar15 == (undefined8 *)0x0) goto LAB_01e98d98;
      while (puVar15 != (undefined8 *)puVar8) {
        puVar15 = (undefined8 *)*puVar15;
        if (puVar15 == (undefined8 *)0x0) goto LAB_01e98c5c;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          plVar14 = (long *)(lVar12 + -0x50);
          if (lVar12 == 0) goto LAB_01e98d98;
          FUN_0199c220(&local_78,plVar14);
          puVar15 = local_78;
          puVar8 = PTR_DAT_0437a0f0;
          puVar7 = PTR_DAT_0437a0e8;
          if (local_78 == (undefined8 *)0x0) {
            bVar4 = false;
            goto joined_r0x01e98d6c;
          }
          if (*(int *)((long)local_78 + 0xc) == 0) goto LAB_01e98f58;
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar10 = *(int *)((long)local_78 + 0xc);
          goto LAB_01e98e04;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01e98c5c:
  bVar4 = false;
  goto LAB_01e98c80;
LAB_01e98e04:
  do {
    plVar16 = (long *)puVar15[2];
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar11 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)puVar8 = puVar6;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar16 == (long *)0x0) goto LAB_01e98f58;
      if (plVar16 == (long *)puVar8) break;
      plVar16 = (long *)*plVar16;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar13 = puVar15[3];
        plVar16 = (long *)0x0;
        puVar15 = local_78;
        if (lVar13 != 0) {
          plVar16 = (long *)(lVar13 + -0x50);
        }
        goto joined_r0x01e98e48;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_01e98f58:
  plVar16 = (long *)0x0;
  puVar15 = local_78;
joined_r0x01e98e48:
  local_78 = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar15 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      puVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = *puVar15;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  if (plVar16 == (long *)0x0) {
LAB_01e99008:
    bVar4 = false;
  }
  else {
    if (*(long *)(param_2 + 0x250) == 0) {
      local_80 = (long *)0x0;
LAB_01e98eb4:
      bVar4 = false;
    }
    else {
      FUN_009b3e90(&local_80);
      if (local_80 == (long *)0x0) goto LAB_01e98eb4;
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_009ab200(&local_78,local_80 + 0x68);
      if (local_78 == (undefined8 *)0x0) {
        local_88 = (long *)0x0;
LAB_01e99184:
        bVar4 = false;
      }
      else {
        FUN_00b907c8(&local_88);
        puVar15 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            local_78[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *puVar15;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (local_88 == (long *)0x0) goto LAB_01e99184;
        FUN_01a73650(&local_78);
        FUN_00956dac(param_1,&local_78);
        puVar15 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            local_78[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *puVar15;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (*param_1 == 0) goto LAB_01e99184;
        bVar4 = true;
      }
      if (local_88 != (long *)0x0) {
        lVar13 = local_88[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
      if (!bVar4) goto LAB_01e98eb4;
      bVar4 = true;
    }
    if (local_80 != (long *)0x0) {
      lVar13 = local_80[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    lVar13 = plVar16[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
    if (!bVar4) goto LAB_01e99008;
    bVar4 = true;
  }
joined_r0x01e98d6c:
  if (plVar14 != (long *)0x0) {
    lVar12 = *(long *)(lVar12 + 8);
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
      if (bVar4) {
        return;
      }
      goto LAB_01e98c84;
    }
  }
LAB_01e98c80:
  if (bVar4) {
    return;
  }
LAB_01e98c84:
  *param_1 = 0;
  return;
}


