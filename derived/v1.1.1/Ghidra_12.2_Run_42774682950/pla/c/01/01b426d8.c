/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b426d8; name: FUN_01b426d8
 */


void FUN_01b426d8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined8 local_38;
  
  FUN_01a92c54(&local_60);
  if (local_60 == (undefined8 *)0x0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_40);
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *local_60;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
  }
  if (local_40 != (long *)0x0) {
    local_60 = (undefined8 *)0x37fed20247df0d0;
    pcStack_58 = "PLAY_BA_SYS_BALL_RETURN";
    local_50 = 0x17;
    local_48 = (long *)0x0;
    FUN_0290b66c(local_40,&local_60,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_40 != (long *)0x0) {
      lVar7 = local_40[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  local_60 = (undefined8 *)0x0;
  pcStack_58 = (char *)0x0;
  FUN_01a6a07c(&local_60,param_1 + 0x5f8);
  puVar5 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    if (*(int *)((long)local_60 + 0xc) != 0) {
      piVar1 = (int *)((long)local_60 + 0xc);
      iVar6 = *(int *)((long)local_60 + 0xc);
      do {
        plVar8 = (long *)puVar5[2];
        lVar7 = FUN_018e43a0();
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_01b42964;
          if (plVar8 == (long *)lVar7) break;
          plVar8 = (long *)*plVar8;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = puVar5[3];
            plVar8 = (long *)0x0;
            puVar5 = local_60;
            if (lVar7 != 0) {
              plVar8 = (long *)(lVar7 + -0x50);
            }
            goto joined_r0x01b428c0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar2;
      } while (iVar2 != 0);
    }
LAB_01b42964:
    plVar8 = (long *)0x0;
    puVar5 = local_60;
joined_r0x01b428c0:
    local_60 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_026105ec(plVar8);
      lVar7 = plVar8[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
  }
  return;
}


