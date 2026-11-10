/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af738c; name: FUN_01af738c
 */


void FUN_01af738c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  undefined8 local_48;
  
  lVar8 = nn::os::GetCurrentThread();
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
            *plVar13 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01af73f4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar3) {
      *plVar13 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01af73f4:
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  lVar8 = *(long *)(param_1 + 0x738);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar6 = *(int *)(lVar8 + 0xc);
    do {
      plVar13 = *(long **)(lVar8 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar9 = FUN_00ad3750();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01af73fc;
        if (plVar13 == (long *)puVar5) break;
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
          lVar8 = *(long *)(lVar8 + 0x18);
          if (lVar8 != 0) {
            plVar13 = (long *)(lVar8 + -0x50);
            local_78 = (undefined8 *)0x0;
            pcStack_70 = (char *)0x0;
            FUN_01b0388c(&local_78,param_1 + 0x5e8);
            if (local_78 == (undefined8 *)0x0) {
              local_58 = (long *)0x0;
            }
            else {
              FUN_01990b54(&local_58);
              puVar12 = local_78;
              if (local_78 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_78 + 1);
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
                  local_78[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar11 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar11;
                  local_48 = *puVar12;
                  FUN_02a44274(lVar11 + 0xd8,&local_48);
                }
              }
            }
            puVar12 = (undefined8 *)0xe422a5d41bd84733;
            if (local_58 == (long *)0x0) {
LAB_01af7648:
              pcStack_70 = "loc_eff_bag_p2";
            }
            else {
              lVar10 = local_58[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              lVar11 = local_58[0x49];
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
                (**(code **)(*local_58 + 0x20))();
              }
              if ((char)lVar11 == '\x01') goto LAB_01af7648;
              puVar12 = (undefined8 *)0xe422a6d41bd848e6;
              pcStack_70 = "loc_eff_bag_p1";
            }
            local_68 = 0xe;
            local_60 = (long *)0x0;
            local_78 = puVar12;
            FUN_02c91f74(plVar13,&local_78);
            if (local_60 != (long *)0x0) {
              (**(code **)(*local_60 + 0x20))();
            }
            FUN_02c90b50(plVar13,0);
            lVar8 = *(long *)(lVar8 + 8);
            piVar1 = (int *)(lVar8 + 0xc);
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
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01af73fc:
  FUN_01a74a50(&local_78,param_1);
  if (local_78 == (undefined8 *)0x0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_58);
    puVar12 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
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
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_48 = *puVar12;
        FUN_02a44274(lVar8 + 0xd8,&local_48);
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
      lVar8 = local_58[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x918) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90c));
  return;
}


