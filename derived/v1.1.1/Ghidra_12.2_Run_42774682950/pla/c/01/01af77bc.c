/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af77bc; name: FUN_01af77bc
 */


void FUN_01af77bc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  undefined8 local_48;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x918);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90c));
        while (*plVar13 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01af7824;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01af7824:
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar9 = *(long *)(param_1 + 0x738);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar7 = *(int *)(lVar9 + 0xc);
    do {
      plVar13 = *(long **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        uVar10 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01af782c;
        if (plVar13 == (long *)puVar5) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 != 0) {
            plVar13 = (long *)(lVar9 + -0x50);
            local_78 = (undefined8 *)0x0;
            pcStack_70 = (char *)0x0;
            FUN_01b0388c(&local_78,param_1 + 0x5e8);
            if (local_78 == (undefined8 *)0x0) {
              local_58 = (long *)0x0;
              goto LAB_01af7a38;
            }
            FUN_01990b54(&local_58);
            puVar6 = local_78;
            if (local_78 == (undefined8 *)0x0) goto LAB_01af7a38;
            piVar1 = (int *)(local_78 + 1);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar12 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar12;
              local_48 = *puVar6;
              FUN_02a44274(lVar12 + 0xd8,&local_48);
              if (local_58 != (long *)0x0) goto LAB_01af7a40;
LAB_01af7a68:
              local_78 = (undefined8 *)0xe422a5d41bd84733;
              pcStack_70 = "loc_eff_bag_p2";
            }
            else {
LAB_01af7a38:
              if (local_58 == (long *)0x0) goto LAB_01af7a68;
LAB_01af7a40:
              lVar11 = local_58[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              lVar12 = local_58[0x49];
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_58 + 0x20))();
                if ((char)lVar12 != '\x01') goto LAB_01af7b04;
                goto LAB_01af7a68;
              }
              if ((char)lVar12 == '\x01') goto LAB_01af7a68;
LAB_01af7b04:
              local_78 = (undefined8 *)0xe422a6d41bd848e6;
              pcStack_70 = "loc_eff_bag_p1";
            }
            local_68 = 0xe;
            local_60 = (long *)0x0;
            FUN_02c91f74(plVar13,&local_78);
            if (local_60 != (long *)0x0) {
              (**(code **)(*local_60 + 0x20))();
            }
            FUN_02c90b50(plVar13,0);
            lVar9 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01af782c:
  FUN_01a74a50(&local_78,param_1);
  if (local_78 == (undefined8 *)0x0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_58);
    puVar6 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_48 = *puVar6;
        FUN_02a44274(lVar9 + 0xd8,&local_48);
      }
    }
  }
  if (local_58 != (long *)0x0) {
    local_78 = (undefined8 *)0x7c17b9e6b9182d8c;
    pcStack_70 = "PLAY_PL_CP_INTO_BAG";
    local_68 = 0x13;
    local_60 = (long *)0x0;
    FUN_0290b66c(local_58,&local_78,0);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x918) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90c));
  return;
}


