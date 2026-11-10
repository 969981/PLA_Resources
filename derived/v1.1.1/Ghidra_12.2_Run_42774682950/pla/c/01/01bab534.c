/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bab534; name: FUN_01bab534
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bab534(long *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  float fVar19;
  
  if (*(int *)((long)param_1 + 0x34) < (int)param_1[6]) {
    if (((*(char *)((long)param_1 + 0xb) != '\0') &&
        ((undefined1 *)param_1[3] != &DAT_cbf29ce484222645)) &&
       ((fVar19 = *(float *)(param_1 + 10), 0.0 < fVar19 || (0.0 < *(float *)((long)param_1 + 0x54))
        ))) {
      if (0.0 < fVar19) {
        *(float *)(param_1 + 10) = fVar19 + -0.033333335;
        if (0.0 < fVar19 + -0.033333335) {
          return;
        }
        FUN_01baddd0(2);
      }
      if (0.0 < *(float *)((long)param_1 + 0x54)) {
        fVar19 = *(float *)((long)param_1 + 0x54) + -0.033333335;
        *(float *)((long)param_1 + 0x54) = fVar19;
        if (0.0 < fVar19) {
          return;
        }
        FUN_01bad44c(param_1);
        return;
      }
    }
    lVar8 = *param_1;
    if (*(char *)(lVar8 + 0x4a0) == '\0') {
      puVar14 = *(undefined8 **)(lVar8 + 0x3c0);
      puVar15 = *(undefined8 **)(lVar8 + 0x3c8);
      if (puVar14 != puVar15) {
        while( true ) {
          plVar13 = (long *)*puVar14;
          cVar4 = DAT_00000101;
          if (plVar13 != (long *)0x0) {
            lVar8 = plVar13[0xb];
            if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01bab8dc;
            if (*(long *)(lVar8 + 0x10) == 0) {
              uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
              *(undefined8 *)(lVar8 + 0x10) = uVar7;
            }
            piVar1 = (int *)(lVar8 + 0xc);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            lVar8 = plVar13[0xb];
            piVar1 = (int *)(lVar8 + 0xc);
            cVar4 = *(char *)((long)plVar13 + 0x101);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar8 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
          if (cVar4 != '\0') break;
          puVar14 = puVar14 + 1;
          if (puVar14 == puVar15) {
            return;
          }
        }
        FUN_01b54e58(*param_1,0,0);
        lVar9 = *param_1;
        puVar15 = *(undefined8 **)(lVar9 + 0x3c8);
        puVar14 = *(undefined8 **)(lVar9 + 0x3c0);
        lVar17 = param_1[6];
        iVar2 = *(int *)((long)param_1 + 0x34);
        lVar8 = (long)puVar15 - (long)puVar14;
        lVar16 = lVar8 >> 3;
        if (lVar8 != 0) {
          do {
            plVar13 = (long *)*puVar14;
            if (plVar13 == (long *)0x0) {
              lVar16 = DAT_00000100 + lVar16 + -1;
            }
            else {
              lVar8 = plVar13[0xb];
              if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_01bab8dc:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar8 + 0x10) == 0) {
                uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
                *(undefined8 *)(lVar8 + 0x10) = uVar7;
              }
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              lVar16 = (char)plVar13[0x20] + lVar16 + -1;
              lVar8 = plVar13[0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar13 + 0x20))(plVar13);
              }
            }
            puVar14 = puVar14 + 1;
          } while (puVar14 != puVar15);
          lVar9 = *param_1;
        }
        uVar11 = (long)(int)lVar17 - (long)iVar2;
        uVar12 = *(int *)(lVar9 + 0x4a4) - lVar16;
        lVar8 = uVar12 - uVar11;
        if (uVar11 <= uVar12 && lVar8 != 0) {
          iVar2 = (int)uVar11 + (int)lVar16;
          if (*(long *)(lVar9 + 0x4c8) != 0) {
            *(int *)(*(long *)(lVar9 + 0x4c8) + 0x418) = iVar2;
            lVar9 = *param_1;
          }
          lVar17 = 0;
          *(int *)(lVar9 + 0x4a4) = iVar2;
          do {
            lVar16 = *param_1;
            lVar9 = *(long *)(lVar16 + 0x4c8) + lVar17 * 0x80;
            pcVar18 = (char *)(lVar9 + 0x43);
            if (*pcVar18 == '\0') {
              puVar15 = *(undefined8 **)(lVar16 + 0x3c8);
              for (puVar14 = *(undefined8 **)(lVar16 + 0x3c0); puVar14 != puVar15;
                  puVar14 = puVar14 + 1) {
                plVar13 = (long *)*puVar14;
                lVar16 = _DAT_00000140;
                if (plVar13 != (long *)0x0) {
                  lVar16 = plVar13[0xb];
                  if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01bab8dc;
                  if (*(long *)(lVar16 + 0x10) == 0) {
                    uVar7 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                    *(undefined8 *)(lVar16 + 0x10) = uVar7;
                  }
                  piVar1 = (int *)(lVar16 + 0xc);
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  lVar10 = plVar13[0xb];
                  piVar1 = (int *)(lVar10 + 0xc);
                  lVar16 = plVar13[0x28];
                  do {
                    iVar2 = *piVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar6) {
                      *piVar1 = iVar2 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar2 + -1 == 0) {
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    (**(code **)(*plVar13 + 0x20))(plVar13);
                  }
                }
                if (lVar16 == lVar9) goto LAB_01bab7fc;
              }
              lVar8 = lVar8 + -1;
              *pcVar18 = '\x01';
              if (lVar8 == 0) {
                return;
              }
            }
LAB_01bab7fc:
            lVar17 = lVar17 + 1;
          } while (lVar17 != 8);
        }
      }
    }
  }
  return;
}


