/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181b198; name: FUN_0181b198
 */


void FUN_0181b198(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long *local_70;
  undefined8 uStack_68;
  undefined8 *local_60 [2];
  long *local_48;
  
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x240) == '\0') {
    return;
  }
  FUN_0181d68c(local_60,param_1);
  puVar5 = local_60[0];
  puVar7 = PTR_DAT_0437de28;
  puVar6 = PTR_DAT_0437de20;
  if (local_60[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar2 = (int *)((long)local_60[0] + 0xc);
      iVar8 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar13 = (long *)puVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar10 = FUN_00fd7558();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0181b488;
          if (plVar13 == (long *)puVar7) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar8) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = puVar5[3];
            plVar13 = (long *)0x0;
            puVar5 = local_60[0];
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x0181b3a0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0181b488:
    plVar13 = (long *)0x0;
    puVar5 = local_60[0];
joined_r0x0181b3a0:
    local_60[0] = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar5 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = (long *)*puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar13 != (long *)0x0) {
      if (((int)plVar13[0xd] == 2) && (*(char *)((long)plVar13 + 0x3ec) != '\0')) {
        *(undefined2 *)((long)plVar13 + 0x3ec) = 0x100;
      }
      lVar11 = plVar13[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
        cVar3 = *(char *)(param_1 + 0x240);
        goto joined_r0x0181b448;
      }
    }
  }
  cVar3 = *(char *)(param_1 + 0x240);
joined_r0x0181b448:
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x240) = 0;
  }
  *(undefined1 *)(param_1 + 0x418) = 0;
  if (*(code **)(param_1 + 0x2b0) != (code *)0x0) {
    (**(code **)(param_1 + 0x2b0))(param_1 + 0x2d0);
    pcVar12 = *(code **)(param_1 + 0x2b8);
    if (pcVar12 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      (*pcVar12)(param_1 + 0x2d0);
    }
  }
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_00ac3fa4(&local_70,param_1 + 0x1f0);
  FUN_01819ff0(&local_48,local_70);
  plVar13 = local_70;
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_60[0] = (undefined8 *)*plVar13;
      FUN_02a44274(lVar11 + 0xd8,local_60);
    }
  }
  plVar13 = local_48;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x48))(local_48);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  FUN_0181c08c(*(undefined8 *)(param_1 + 0x408),0);
  return;
}


