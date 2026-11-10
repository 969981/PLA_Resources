/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e7d78; name: FUN_019e7d78
 */


void FUN_019e7d78(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x240);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x234));
        while (*plVar11 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_019e7de4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_019e7de4:
  FUN_00cf6d78(&local_60,param_2);
  if (local_60 == (long *)0x0) {
LAB_019e7f74:
    *(undefined8 *)(param_1 + 0x240) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x234));
    return;
  }
  plVar11 = *(long **)(param_1 + 0x200);
  do {
    if (plVar11 == *(long **)(param_1 + 0x208)) goto joined_r0x019e7f54;
    FUN_00cf6d78(&local_68,plVar11);
    if (local_68 != (long *)0x0) {
      if (*plVar11 == *param_2) {
        plVar14 = *(long **)(param_1 + 0x208);
        plVar12 = plVar11 + 2;
        plVar13 = plVar12;
        if (plVar12 == plVar14) goto LAB_019e7e60;
        FUN_00b5fc1c(plVar11,plVar12);
        if (plVar11 + 4 != plVar14) {
          do {
            plVar12 = plVar13 + 2;
            FUN_00b5fc1c(plVar13,plVar12);
            plVar11 = plVar13 + 4;
            plVar13 = plVar12;
          } while (plVar11 != plVar14);
        }
        plVar13 = *(long **)(param_1 + 0x208);
        plVar11 = plVar12;
        if (plVar13 != plVar12) {
LAB_019e7e60:
          plVar12 = plVar11;
          puVar7 = PTR_DAT_043794a8;
          puVar6 = PTR_DAT_043794a0;
          puVar5 = PTR_DAT_04379498;
          plVar13 = plVar13 + -2;
          puVar15 = (undefined8 *)*plVar13;
          puVar4 = PTR_LAB_04379590;
          puVar8 = PTR_LAB_04379590;
          if (puVar15 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar15 + 1);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar4 = PTR_LAB_04379590;
            puVar8 = PTR_LAB_04379590;
            if (iVar9 + -1 == 0) {
              puVar15[2] = 0;
              if (((*puVar5 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)puVar6;
              *(long *)puVar7 = lVar10;
              local_58 = *puVar15;
              FUN_02a44274(lVar10 + 0xd8,&local_58);
              puVar4 = PTR_LAB_04379590;
              puVar8 = PTR_LAB_04379590;
            }
          }
          while( true ) {
            PTR_LAB_04379590 = puVar8;
            puVar8 = PTR_LAB_04379590;
            PTR_LAB_04379590 = puVar4;
            if (plVar13 == plVar12) break;
            plVar13 = plVar13 + -2;
            puVar15 = (undefined8 *)*plVar13;
            if (puVar15 != (undefined8 *)0x0) {
              piVar1 = (int *)(puVar15 + 1);
              do {
                iVar9 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              puVar4 = PTR_LAB_04379590;
              if (iVar9 + -1 == 0) {
                puVar15[2] = 0;
                if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
                  FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar5);
                }
                lVar10 = *(long *)puVar6;
                *(long *)puVar7 = lVar10;
                local_58 = *puVar15;
                FUN_02a44274(lVar10 + 0xd8,&local_58);
                puVar4 = PTR_LAB_04379590;
              }
            }
          }
        }
        *(long **)(param_1 + 0x208) = plVar12;
        if (local_68 != (long *)0x0) {
          lVar10 = local_68[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
joined_r0x019e7f54:
        if (local_60 != (long *)0x0) {
          lVar10 = local_60[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
        goto LAB_019e7f74;
      }
      lVar10 = local_68[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
    plVar11 = plVar11 + 2;
  } while( true );
}


