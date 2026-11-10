/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a4ad8; name: FUN_009a4ad8
 */


void FUN_009a4ad8(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_009630f4(&local_78,param_2 + 0x510);
  puVar4 = local_78;
  puVar8 = PTR_DAT_04379fd0;
  puVar7 = PTR_DAT_04379fc8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  plVar13 = (long *)0x0;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar9 = *(int *)((long)local_78 + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_009a4df0;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_78;
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x009a4d6c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_009a4df0:
    plVar13 = (long *)0x0;
    puVar4 = local_78;
joined_r0x009a4d6c:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar4[2] = 0;
        local_78 = puVar4;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
  }
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_01901488(&local_78,plVar13 + 0x1c);
  if (local_78 == (undefined8 *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_009ac698(&local_80);
    puVar4 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_68 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_68);
      }
    }
  }
  FUN_01a14e8c(local_80);
  local_78 = (undefined8 *)0x0;
  lVar11 = FUN_009bb5dc(&local_68,*(undefined8 *)(param_2 + 8),&local_78);
  *param_1 = lVar11;
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_80 != (long *)0x0) {
    lVar11 = local_80[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


