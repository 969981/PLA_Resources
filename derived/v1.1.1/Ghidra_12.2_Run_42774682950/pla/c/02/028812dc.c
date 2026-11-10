/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028812dc; name: FUN_028812dc
 */


void FUN_028812dc(long param_1)

{
  SystemEventType *pSVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  byte *pbVar20;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_0287c530();
  FUN_02cac370();
  puVar8 = PTR_DAT_04379d58;
  puVar7 = PTR_DAT_04379d50;
  puVar6 = PTR_DAT_04379d48;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pSVar1 = (SystemEventType *)(param_1 + 0xd0);
    pbVar20 = PTR_DAT_0437b680;
    do {
      uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
      if ((uVar11 & 1) == 0) {
LAB_02881384:
        bVar3 = *puVar6;
      }
      else {
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        uVar11 = nn::os::TryWaitSystemEvent(pSVar1);
        if ((uVar11 & 1) == 0) goto LAB_02881384;
        FUN_02880418();
        bVar3 = *puVar6;
      }
      if (((bVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437ad08,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar6);
      }
      lVar15 = *(long *)puVar7;
      *(long *)puVar8 = lVar15;
      lVar12 = nn::os::GetCurrentThread();
      plVar13 = (long *)(lVar15 + 0x98);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x8c));
            while (*plVar13 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_028813dc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_028813dc:
      lVar12 = *(long *)(lVar15 + 0x50);
      if (*(long *)(lVar15 + 0x58) != lVar12) {
        uVar11 = 0;
        do {
          if ((*(byte *)(*(long *)(lVar12 + uVar11 * 8) + 0x68) & 1) == 0) {
            plVar13 = *(long **)(lVar15 + 0x58);
          }
          else {
            plVar14 = *(long **)(lVar15 + 0x58);
            plVar13 = (long *)(*(long *)(lVar15 + 0x50) + uVar11 * 8);
            plVar19 = plVar13 + 1;
            plVar17 = plVar13;
            if (plVar19 == plVar14) {
LAB_02881690:
              plVar19 = plVar19 + -1;
              plVar14 = (long *)*plVar19;
              if (plVar14 != (long *)0x0) {
                lVar12 = plVar14[0xb];
                piVar2 = (int *)(lVar12 + 0xc);
                do {
                  iVar9 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar9 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar9 + -1 == 0) goto LAB_02881734;
              }
LAB_028816b4:
              if (plVar19 != plVar13) {
                while( true ) {
                  plVar19 = plVar19 + -1;
                  plVar14 = (long *)*plVar19;
                  if (plVar14 == (long *)0x0) break;
                  lVar12 = plVar14[0xb];
                  piVar2 = (int *)(lVar12 + 0xc);
                  do {
                    iVar9 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                      *piVar2 = iVar9 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar9 + -1 != 0) break;
LAB_02881734:
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar14 + 0x20))();
                  if (plVar19 == plVar13) goto LAB_028816e4;
                }
                goto LAB_028816b4;
              }
            }
            else {
              do {
                plVar13 = (long *)*plVar17;
                *plVar17 = 0;
                if (plVar13 != (long *)0x0) {
                  lVar12 = plVar13[0xb];
                  piVar2 = (int *)(lVar12 + 0xc);
                  do {
                    iVar9 = *piVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar5) {
                      *piVar2 = iVar9 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar9 + -1 == 0) {
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    (**(code **)(*plVar13 + 0x20))();
                  }
                }
                lVar12 = *plVar19;
                plVar18 = plVar19 + 1;
                *plVar19 = 0;
                plVar13 = plVar17 + 1;
                *plVar17 = lVar12;
                plVar17 = plVar13;
                plVar19 = plVar18;
              } while (plVar18 != plVar14);
              plVar19 = *(long **)(lVar15 + 0x58);
              if (plVar19 != plVar13) goto LAB_02881690;
            }
LAB_028816e4:
            *(long **)(lVar15 + 0x58) = plVar13;
            pbVar20 = PTR_DAT_0437b680;
          }
          lVar12 = *(long *)(lVar15 + 0x50);
          uVar11 = uVar11 + 1;
        } while (uVar11 < (ulong)((long)plVar13 - lVar12 >> 3));
      }
      *(undefined8 *)(lVar15 + 0x98) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x8c));
      if (((DAT_043ec268 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_043ec268), iVar9 != 0)) {
        FUN_00100250(&LAB_0288ee34,&DAT_043ec258,&PTR_LOOP_0411a000);
        __cxa_guard_release(&DAT_043ec268);
      }
      DAT_043ec288 = DAT_043ec258;
      FUN_02a642bc();
      if (((*pbVar20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar20), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437e478,PTR_DAT_0437b688,&PTR_LOOP_0411a000);
        __cxa_guard_release(pbVar20);
      }
      *(undefined8 *)PTR_DAT_0437b690 = *(undefined8 *)PTR_DAT_0437b688;
      FUN_02a40d58();
      if (((*PTR_DAT_04379c28 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      lVar12 = *(long *)PTR_DAT_04379c30;
      *(long *)PTR_DAT_04379c38 = lVar12;
      plVar13 = *(long **)(*(long *)(lVar12 + 0x158) + 0x60);
      (**(code **)(*plVar13 + 0x40))(plVar13,1);
      if (((*PTR_DAT_04379e40 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar16 = *(undefined8 *)PTR_DAT_04379e48;
      *(undefined8 *)PTR_DAT_04379e50 = uVar16;
      lVar12 = (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),1);
      FUN_0292841c((float)((double)*(long *)(lVar12 + 8) / 1000000000.0),uVar16);
      iVar9 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
      plVar13 = *(long **)(param_1 + 0xb8);
      if (0 < iVar9) {
        (**(code **)(*plVar13 + 8))(plVar13,0,1);
        iVar9 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
        plVar13 = *(long **)(param_1 + 0xb8);
        if (1 < iVar9) {
          (**(code **)(*plVar13 + 8))(plVar13,1,1);
          iVar9 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
          plVar13 = *(long **)(param_1 + 0xb8);
          if (2 < iVar9) {
            (**(code **)(*plVar13 + 8))(plVar13,2,1);
            iVar9 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
            plVar13 = *(long **)(param_1 + 0xb8);
            if (3 < iVar9) {
              (**(code **)(*plVar13 + 8))(plVar13,3,1);
              iVar9 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
              plVar13 = *(long **)(param_1 + 0xb8);
              if (4 < iVar9) {
                iVar9 = 4;
                do {
                  (**(code **)(*plVar13 + 8))(plVar13,iVar9,1);
                  iVar9 = iVar9 + 1;
                  iVar10 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
                  plVar13 = *(long **)(param_1 + 0xb8);
                } while (iVar9 < iVar10);
              }
            }
          }
        }
      }
      (**(code **)(*plVar13 + 0x10))(plVar13,2,0);
      local_70 = *(undefined8 *)(param_1 + 0xb8);
      uStack_68 = 0;
      FUN_02a6adc8(DAT_043eef30,&local_70);
    } while (*(char *)(param_1 + 0xc0) == '\0');
  }
  FUN_02880648(param_1);
  return;
}


