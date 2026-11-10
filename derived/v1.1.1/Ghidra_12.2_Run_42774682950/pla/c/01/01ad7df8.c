/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad7df8; name: FUN_01ad7df8
 */


void FUN_01ad7df8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  local_60 = (long *)0x0;
  local_58 = 0;
  FUN_00ac3fa4(&local_60,param_2 + 0x248);
  FUN_0099c748(&local_68,&local_60);
  plVar12 = local_60;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  if (local_60 != (long *)0x0) {
    plVar14 = local_60 + 1;
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      local_60[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar7;
      *(long *)puVar8 = lVar11;
      local_78 = (undefined8 *)*plVar12;
      FUN_02a44274(lVar11 + 0xd8,&local_78);
    }
  }
  if (local_68 == (long *)0x0) {
LAB_01ad8110:
    bVar3 = false;
  }
  else {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_01a2bf84(&local_78,local_68 + 0xb9);
    if (local_78 == (undefined8 *)0x0) goto LAB_01ad8110;
    if (*(int *)((long)local_78 + 0xc) == 0) {
      bVar3 = false;
      puVar5 = local_78;
    }
    else {
      if (local_78 == (undefined8 *)0x0) {
        local_80 = (long *)0x0;
      }
      else {
        FUN_00b9e8a4(&local_80);
      }
      local_60 = (long *)0x0;
      local_58 = 0;
      FUN_008802f0(&local_60,local_80 + 0xb);
      *param_1 = 0;
      param_1[1] = 0;
      do {
        lVar11 = local_58;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_58,0x10);
        if (bVar3) {
          local_58 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      uVar10 = *(undefined8 *)puVar7;
      *(undefined8 *)puVar8 = uVar10;
      FUN_02a44e0c(&local_50,uVar10,lVar11);
      plVar12 = local_60;
      local_60 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        plVar14 = plVar12 + 1;
        do {
          iVar9 = (int)*plVar14 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *(int *)plVar14 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          plVar12[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_48 = *plVar12;
          FUN_02a44274(lVar13 + 0xd8,&local_48);
        }
      }
      plVar12 = (long *)*param_1;
      *param_1 = 0;
      if (local_50 == (long *)0x0) {
        lVar11 = 0;
        if (plVar12 != (long *)0x0) {
          plVar14 = plVar12 + 1;
          do {
            lVar11 = *plVar14;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = (int)lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar11 == 1) {
            plVar12[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)puVar7;
            *(long *)puVar8 = lVar11;
            local_48 = *plVar12;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
          lVar11 = 0;
        }
      }
      else {
        plVar14 = local_50;
        if (plVar12 != (long *)0x0) {
          plVar14 = plVar12 + 1;
          do {
            iVar9 = (int)*plVar14 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *(int *)plVar14 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            plVar12[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_48 = *plVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_48);
          }
          plVar14 = local_50;
        }
        local_50 = (long *)0x0;
        *param_1 = plVar14;
      }
      plVar12 = local_50;
      param_1[1] = lVar11;
      if (local_50 != (long *)0x0) {
        plVar14 = local_50 + 1;
        do {
          iVar9 = (int)*plVar14 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *(int *)plVar14 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_50[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar7;
          *(long *)puVar8 = lVar11;
          local_48 = *plVar12;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      plVar12 = local_60;
      if (local_60 != (long *)0x0) {
        plVar14 = local_60 + 1;
        do {
          iVar9 = (int)*plVar14 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *(int *)plVar14 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_60[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar7;
          *(long *)puVar8 = lVar11;
          local_48 = *plVar12;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
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
      bVar3 = true;
      puVar5 = local_78;
    }
    local_78 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar5[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)puVar7;
        *(long *)puVar8 = lVar11;
        local_60 = (long *)*puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_60);
      }
    }
    if (!bVar3) goto LAB_01ad8110;
    bVar3 = true;
  }
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
      if (bVar3) {
        return;
      }
      goto LAB_01ad80f4;
    }
  }
  if (bVar3) {
    return;
  }
LAB_01ad80f4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


