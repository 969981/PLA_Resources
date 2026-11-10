/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a4238; name: FUN_026a4238
 */


undefined8 FUN_026a4238(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  
  plVar11 = *(long **)(param_1 + 0x1f0);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar13 = plVar11[0xb];
  if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
    uVar12 = (ulong)param_2;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar13 = nn::os::GetCurrentThread();
    plVar14 = (long *)(param_1 + 0x208);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1fc));
          while (*plVar14 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_026a42dc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_026a42dc:
    if (*(uint *)(plVar11 + 0xf) < 2) {
      plVar14 = (long *)plVar11[(ulong)*(uint *)(plVar11 + 0xf) + 0xd];
      if (plVar14 != (long *)0x0) {
        lVar13 = plVar14[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_026a44f8;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      iVar6 = FUN_026a6894(plVar11,uVar12);
      (**(code **)(*plVar14 + 0x70))(plVar14,uVar12,iVar6 == 3);
      if (plVar14 != (long *)0x0) {
        lVar13 = plVar14[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      if (iVar6 != 3) {
        uVar7 = 0;
LAB_026a4430:
        *(undefined8 *)(param_1 + 0x208) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1fc));
        lVar13 = plVar11[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
        return uVar7;
      }
      if (*(uint *)(plVar11 + 0xf) < 2) {
        plVar14 = (long *)plVar11[(ulong)*(uint *)(plVar11 + 0xf) + 0xd];
        uVar8 = plVar14[0x11];
        if ((uVar8 & uVar8 - 1) == 0) {
          plVar9 = *(long **)(plVar14[0x10] + (ulong)((int)uVar8 - 1U & param_2) * 8);
          do {
            do {
              plVar9 = (long *)*plVar9;
            } while (plVar9[1] != uVar12);
          } while (*(uint *)(plVar9 + 2) != param_2);
        }
        else {
          uVar10 = uVar12;
          if (uVar8 <= uVar12) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar12 / uVar8;
            }
            uVar10 = uVar12 - uVar10 * uVar8;
          }
          plVar9 = *(long **)(plVar14[0x10] + uVar10 * 8);
          do {
            do {
              plVar9 = (long *)*plVar9;
            } while (plVar9[1] != uVar12);
          } while (*(uint *)(plVar9 + 2) != param_2);
        }
        uVar3 = *(uint *)((long)plVar9 + 0x14);
        (**(code **)(*plVar14 + 0x78))();
        if (*(uint *)(plVar11 + 0xf) < 2) {
          (**(code **)(*(long *)plVar11[(ulong)*(uint *)(plVar11 + 0xf) + 0xd] + 0x58))();
          *(int *)((long)plVar11 + 0x7c) = (int)plVar11[0xf];
          if (uVar3 < 2) {
            (**(code **)(*(long *)plVar11[(ulong)uVar3 + 0xd] + 0x40))();
            *(uint *)(plVar11 + 0xf) = uVar3;
            uVar7 = 1;
            goto LAB_026a4430;
          }
        }
      }
    }
    FUN_026a6c00();
  }
LAB_026a44f8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


