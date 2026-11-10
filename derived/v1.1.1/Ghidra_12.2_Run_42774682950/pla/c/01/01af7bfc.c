/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af7bfc; name: FUN_01af7bfc
 */


undefined8 FUN_01af7bfc(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01afedb4(&local_58,param_1 + 0x758);
  puVar4 = local_58;
  puVar6 = PTR_DAT_04382218;
  puVar5 = PTR_DAT_04382210;
  if (local_58 == (undefined8 *)0x0) {
LAB_01af7c30:
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_01aff02c(&local_58,param_1 + 0x768);
    puVar4 = local_58;
    puVar6 = PTR_DAT_04382230;
    puVar5 = PTR_DAT_04382228;
    if (local_58 != (undefined8 *)0x0) {
      if (*(int *)((long)local_58 + 0xc) != 0) {
        piVar1 = (int *)((long)local_58 + 0xc);
        iVar9 = *(int *)((long)local_58 + 0xc);
        do {
          plVar12 = (long *)puVar4[2];
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            uVar10 = FUN_018cf5f0();
            *(undefined8 *)puVar6 = uVar10;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_01af7fa8;
            if (plVar12 == (long *)puVar6) break;
            plVar12 = (long *)*plVar12;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar9) {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = puVar4[3];
              plVar12 = (long *)0x0;
              puVar4 = local_58;
              if (lVar11 != 0) {
                plVar12 = (long *)(lVar11 + -0x50);
              }
              goto joined_r0x01af7ebc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar8;
        } while (iVar8 != 0);
      }
LAB_01af7fa8:
      plVar12 = (long *)0x0;
      puVar4 = local_58;
joined_r0x01af7ebc:
      local_58 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *puVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      if (plVar12 != (long *)0x0) {
        if (plVar12[0x3e] == 0) {
          bVar7 = true;
        }
        else {
          bVar7 = *(int *)(plVar12[0x3e] + 0xc) == 0;
        }
        lVar11 = plVar12[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        if (!bVar7) goto LAB_01af7dbc;
      }
    }
    uVar10 = 0;
  }
  else {
    if (*(int *)((long)local_58 + 0xc) != 0) {
      piVar1 = (int *)((long)local_58 + 0xc);
      iVar9 = *(int *)((long)local_58 + 0xc);
      while ((plVar12 = (long *)puVar4[2], (*puVar5 & 1) != 0 ||
             (iVar8 = __cxa_guard_acquire(puVar5), iVar8 == 0))) {
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01af7dcc;
LAB_01af7cc0:
          if (plVar12 == (long *)puVar6) break;
          plVar12 = (long *)*plVar12;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = puVar4[3];
            plVar12 = (long *)0x0;
            puVar4 = local_58;
            if (lVar11 != 0) {
              plVar12 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01af7cf4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
        if (iVar8 == 0) goto LAB_01af7dcc;
      }
      uVar10 = FUN_018cf5f0();
      *(undefined8 *)puVar6 = uVar10;
      __cxa_guard_release(puVar5);
      if (plVar12 != (long *)0x0) goto LAB_01af7cc0;
    }
LAB_01af7dcc:
    plVar12 = (long *)0x0;
    puVar4 = local_58;
joined_r0x01af7cf4:
    local_58 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar12 == (long *)0x0) goto LAB_01af7c30;
    if ((plVar12[0x3e] == 0) || (*(int *)(plVar12[0x3e] + 0xc) == 0)) {
      lVar11 = plVar12[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      goto LAB_01af7c30;
    }
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 == 1) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
LAB_01af7dbc:
    uVar10 = 1;
  }
  return uVar10;
}


