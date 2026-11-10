/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a57e30; name: FUN_01a57e30
 */


undefined1  [16] FUN_01a57e30(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined1 auVar17 [16];
  long lVar18;
  float fVar19;
  long local_80;
  long lStack_78;
  long *local_70 [2];
  long *local_60;
  long local_58;
  
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar14 = *(long *)(param_1 + 0x8a8);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar8 = *(int *)(lVar14 + 0xc);
    do {
      plVar15 = *(long **)(lVar14 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01a57e58;
        if (plVar15 == (long *)puVar6) break;
        plVar15 = (long *)*plVar15;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01a57ea0;
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 != 0) {
          plVar13 = (long *)(lVar14 + -0x50);
          FUN_00a9ecd4(local_70,plVar13);
          FUN_009983e4(&local_60,local_70);
          plVar15 = local_70[0];
          if (local_70[0] != (long *)0x0) {
            plVar11 = local_70[0] + 1;
            do {
              iVar8 = (int)*plVar11 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *(int *)plVar11 = iVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 == 0) {
              local_70[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_58 = *plVar15;
              FUN_02a44274(lVar10 + 0xd8,&local_58);
            }
          }
          if (local_60 == (long *)0x0) {
LAB_01a581b4:
            bVar4 = false;
          }
          else {
            plVar15 = (long *)local_60[0x4a];
            plVar11 = (long *)local_60[0x4b];
            if (plVar15 == plVar11) {
LAB_01a57fe0:
              if ((plVar15 == plVar11) || (*plVar15 == 0)) goto LAB_01a5802c;
              FUN_01a05488(local_70,*plVar15,&local_58);
              plVar15 = local_60;
              if (local_70[0] == (long *)0x0) goto LAB_01a5803c;
              lVar10 = nn::os::GetCurrentThread();
              plVar11 = plVar15 + 0x42;
              do {
                if (*plVar11 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)((long)plVar15 + 0x204));
                    while (*plVar11 == 0) {
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                      if (bVar4) {
                        *plVar11 = lVar10;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                      if (cVar3 == '\0') goto LAB_01a58070;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar4) {
                  *plVar11 = lVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
LAB_01a58070:
              plVar11 = (long *)plVar15[0x4a];
              plVar12 = (long *)plVar15[0x4b];
              if (plVar11 == plVar12) {
LAB_01a580b4:
                fVar19 = 0.0;
                if ((plVar11 != plVar12) && (*plVar11 != 0)) {
                  fVar19 = *(float *)(*plVar11 + 400);
                }
              }
              else {
                fVar19 = 0.0;
                do {
                  if (*(undefined1 **)(*plVar11 + 0x158) == &DAT_afc4d6c05abef19e)
                  goto LAB_01a580b4;
                  plVar11 = plVar11 + 1;
                } while (plVar12 != plVar11);
              }
              plVar15[0x42] = 0;
              nn::os::SignalLightEvent((LightEventType *)((long)plVar15 + 0x204));
              if (fVar19 == 0.0) {
                lStack_78 = local_70[0][0x2f];
                local_80 = local_70[0][0x2e];
              }
              else {
                lVar18 = local_70[0][0x2f];
                lVar10 = local_70[0][0x2e];
                if (fVar19 <= 0.0) {
                  fVar19 = 1.0;
                }
                else {
                  fVar19 = 1.0 / (fVar19 / 0.033);
                }
                fVar16 = (float)FUN_01a58250(param_1);
                local_80 = CONCAT44((float)((ulong)lVar10 >> 0x20) * fVar19 * fVar16,
                                    (float)lVar10 * fVar19 * fVar16);
                lStack_78 = CONCAT44((float)((ulong)lVar18 >> 0x20) * fVar19 * fVar16,
                                     (float)lVar18 * fVar19 * fVar16);
              }
              if (local_70[0] != (long *)0x0) {
                lVar10 = local_70[0][0xb];
                piVar1 = (int *)(lVar10 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar8 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar8 == 1) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*local_70[0] + 0x20))();
                }
              }
              bVar4 = true;
            }
            else {
              do {
                if (*(undefined1 **)(*plVar15 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01a57fe0;
                plVar15 = plVar15 + 1;
              } while (plVar11 != plVar15);
LAB_01a5802c:
              local_70[0] = (long *)0x0;
LAB_01a5803c:
              bVar4 = false;
            }
            if (local_60 != (long *)0x0) {
              lVar10 = local_60[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar3 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar2) {
                  *piVar1 = iVar8 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*local_60 + 0x20))();
              }
            }
            if (!bVar4) goto LAB_01a581b4;
            bVar4 = true;
          }
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
          }
          if (bVar4) goto LAB_01a57e5c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01a57ea0:
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01a57e58:
  local_80 = 0;
  lStack_78 = 0;
LAB_01a57e5c:
  auVar17._8_8_ = lStack_78;
  auVar17._0_8_ = local_80;
  return auVar17;
}


