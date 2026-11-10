/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af9350; name: FUN_01af9350
 */


void FUN_01af9350(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  long *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01b00e04(&local_58,param_1 + 0x6f8);
  puVar4 = local_58;
  puVar5 = PTR_DAT_043795e0;
  if (local_58 != (undefined8 *)0x0) {
    if (*(int *)((long)local_58 + 0xc) != 0) {
      piVar1 = (int *)((long)local_58 + 0xc);
      plVar11 = (long *)PTR_DAT_04382618;
      pbVar12 = PTR_DAT_04382610;
      iVar6 = *(int *)((long)local_58 + 0xc);
      while ((plVar13 = (long *)puVar4[2], (*pbVar12 & 1) != 0 ||
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04382610), plVar11 = (long *)PTR_DAT_04382618,
             pbVar12 = PTR_DAT_04382610, iVar7 == 0))) {
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01af9954;
LAB_01af9878:
          if (plVar13 == plVar11) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = puVar4[3];
            plVar11 = (long *)0x0;
            puVar4 = local_58;
            if (lVar10 != 0) {
              plVar11 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x01af98ac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar7;
        if (iVar7 == 0) goto LAB_01af9954;
      }
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar7 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      plVar11 = (long *)PTR_DAT_04382618;
      *(undefined **)PTR_DAT_04382618 = puVar5;
      pbVar12 = PTR_DAT_04382610;
      __cxa_guard_release(PTR_DAT_04382610);
      if (plVar13 != (long *)0x0) goto LAB_01af9878;
    }
LAB_01af9954:
    plVar11 = (long *)0x0;
    puVar4 = local_58;
joined_r0x01af98ac:
    local_58 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    if (plVar11 != (long *)0x0) {
      *(byte *)(plVar11 + 0x3e) = param_2 & 1;
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01b0043c(&local_58,param_1 + 0x668);
  FUN_01aeb948(&local_60,&local_58);
  puVar4 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *puVar4;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  if (local_60 != (long *)0x0) {
    uVar8 = local_60[0x4b] | 4;
    if ((param_2 & 1) == 0) {
      uVar8 = local_60[0x4b] & 0xfffffffffffffffb;
    }
    local_60[0x4b] = uVar8;
    lVar10 = local_60[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01b00924(&local_58,param_1 + 0x688);
  if (local_58 == (undefined8 *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_60);
    puVar4 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
  }
  if (local_60 != (long *)0x0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_01a2bf84(&local_58,local_60 + 0xb9);
    if (local_58 == (undefined8 *)0x0) {
      local_68 = (long *)0x0;
      plVar11 = local_68;
    }
    else {
      FUN_009cf990(&local_68);
      puVar4 = local_58;
      plVar11 = local_68;
      if (local_58 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_58 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_48 = *puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_48);
          plVar11 = local_68;
        }
      }
    }
    local_68 = plVar11;
    if (plVar11 != (long *)0x0) {
      uVar8 = FUN_01a518ec(plVar11);
      if ((uVar8 & 1) != 0) {
        uVar8 = FUN_01a5badc(plVar11,plVar11 + 0x97);
        if (((uVar8 & 0xff) != 0) && ((uVar8 & 0xffffffff00000000) == 0x300000000)) {
          FUN_01a51334(plVar11,plVar11 + 0x97,1);
        }
      }
      if (local_68 != (long *)0x0) {
        lVar10 = local_68[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    if (local_60 != (long *)0x0) {
      lVar10 = local_60[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01b00b94(&local_58,param_1 + 0x6e8);
  if (local_58 == (undefined8 *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_009bd2d4(&local_60);
    puVar4 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
  }
  if (local_60 != (long *)0x0) {
    uVar8 = local_60[0x56] | 2;
    if ((param_2 & 1) == 0) {
      uVar8 = local_60[0x56] & 0xfffffffffffffffd;
    }
    local_60[0x56] = uVar8;
    lVar10 = local_60[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return;
}


