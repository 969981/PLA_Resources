/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf8b10; name: FUN_02bf8b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf8b10(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined4 uVar18;
  ulong *puVar19;
  long *plVar20;
  long local_e0;
  code *local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [104];
  long *local_58;
  
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0xc) != 0)) {
    cVar3 = DAT_00000068;
    if (*param_2 != 0) {
      FUN_02bdbfc4(&local_58);
      cVar3 = (char)local_58[0xd];
      if (local_58 != (long *)0x0) {
        lVar10 = local_58[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
          if (cVar3 == '\0') {
            return;
          }
          goto LAB_02bf8b94;
        }
      }
    }
    if (cVar3 != '\0') {
LAB_02bf8b94:
      nn::os::LockMutex((MutexType *)(param_1 + 0x128));
      puVar11 = *(undefined8 **)(param_1 + 0x68);
      plVar20 = (long *)*puVar11;
LAB_02bf8bb4:
      if (plVar20 == (long *)puVar11[1]) goto LAB_02bf8fcc;
      plVar13 = (long *)*plVar20;
      if (plVar13 != (long *)0x0) {
        lVar10 = plVar13[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*param_2 == 0) {
        if (plVar13 == (long *)0x0) {
          uVar7 = *(undefined8 *)(param_1 + 8);
          uVar18 = 0xffffffff;
          plVar16 = (long *)&DAT_00000100;
          uVar14 = 0xffffffff;
          goto LAB_02bf8da8;
        }
LAB_02bf8c48:
        lVar10 = plVar13[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
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
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
      else {
        FUN_02bdbfc4(&local_58);
        plVar16 = local_58;
        uVar18 = _DAT_0000006c;
        if (local_58 != (long *)0x0) {
          lVar10 = local_58[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar18 = _DAT_0000006c;
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))(local_58);
            uVar18 = _DAT_0000006c;
          }
        }
        _DAT_0000006c = uVar18;
        if (plVar13 == plVar16) {
          plVar16 = plVar13 + 0x20;
          uVar7 = *(undefined8 *)(param_1 + 8);
          if (*param_2 == 0) {
            uVar18 = 0xffffffff;
            uVar14 = 0xffffffff;
            goto LAB_02bf8da8;
          }
          if (*(int *)(*param_2 + 0xc) == 0) {
            lVar10 = *param_2;
            uVar18 = 0xffffffff;
            goto joined_r0x02bf8d30;
          }
          if (*param_2 == 0) {
            local_58 = (long *)0x0;
            goto LAB_02bf8d44;
          }
          FUN_02bdbfc4(&local_58);
          uVar18 = *(undefined4 *)((long)local_58 + 0x6c);
          if (local_58 == (long *)0x0) goto LAB_02bf8d44;
          lVar10 = local_58[0xb];
          piVar1 = (int *)(lVar10 + 0xc);
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
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
            lVar10 = *param_2;
            if (lVar10 == 0) goto LAB_02bf8da4;
LAB_02bf8d4c:
            if (*(int *)(lVar10 + 0xc) == 0) goto LAB_02bf8da4;
            if (*param_2 == 0) {
              local_58 = (long *)0x0;
              uVar14 = _DAT_00000070;
            }
            else {
              FUN_02bdbfc4(&local_58);
              uVar14 = *(uint *)(local_58 + 0xe);
              if (local_58 != (long *)0x0) {
                lVar10 = local_58[0xb];
                piVar1 = (int *)(lVar10 + 0xc);
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
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*local_58 + 0x20))();
                }
              }
            }
          }
          else {
LAB_02bf8d44:
            lVar10 = *param_2;
joined_r0x02bf8d30:
            if (lVar10 != 0) goto LAB_02bf8d4c;
LAB_02bf8da4:
            uVar14 = 0xffffffff;
          }
LAB_02bf8da8:
          puVar8 = (ulong *)FUN_03038700(uVar7,uVar18,(ulong)uVar14 | 0x8000000000000000);
          local_d0 = 0;
          lStack_c8 = 0;
          local_e0 = 0;
          local_d8 = (code *)0x0;
          if ((code *)plVar13[0x22] != (code *)0x0) {
            (*(code *)plVar13[0x22])(plVar13 + 0x24,auStack_c0);
            local_e0 = *plVar16;
            local_d8 = (code *)plVar16[1];
            local_d0 = plVar16[2];
            lStack_c8 = plVar16[3];
          }
          plVar16 = (long *)(*puVar8 & 0xfffffffffffffffc);
          pcVar5 = local_d8;
          if (plVar16 != (long *)0x0) {
            puVar19 = puVar8;
            do {
              if ((plVar16[2] == 0) &&
                 (iVar6 = (**(code **)(*plVar16 + 0x10))(plVar16,&local_e0,0x80), iVar6 != 0)) {
                if ((*puVar8 & 3) == 0) {
                  *puVar19 = plVar16[1] & 0xfffffffffffffffcU | *puVar19 & 3;
                  (**(code **)(*plVar16 + 8))(plVar16);
                  pcVar5 = local_d8;
                }
                else {
                  plVar16[1] = plVar16[1] & 0xfffffffffffffffcU | 1;
                  pcVar5 = local_d8;
                }
                break;
              }
              puVar19 = (ulong *)(plVar16 + 1);
              plVar16 = (long *)(*puVar19 & 0xfffffffffffffffc);
              pcVar5 = local_d8;
            } while (plVar16 != (long *)0x0);
          }
          local_d8 = pcVar5;
          if (pcVar5 != (code *)0x0) {
            local_d0 = 0;
            lStack_c8 = 0;
            local_e0 = 0;
            local_d8 = (code *)0x0;
            (*pcVar5)(auStack_c0);
          }
          lVar10 = *(long *)(param_1 + 0x68);
          plVar16 = plVar20 + 1;
          plVar17 = *(long **)(lVar10 + 8);
          plVar9 = plVar20;
          if (plVar16 != plVar17) {
            do {
              plVar20 = (long *)*plVar9;
              *plVar9 = 0;
              if (plVar20 != (long *)0x0) {
                lVar12 = plVar20[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
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
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar20 + 0x20))();
                }
              }
              lVar12 = *plVar16;
              plVar15 = plVar16 + 1;
              *plVar16 = 0;
              plVar20 = plVar9 + 1;
              *plVar9 = lVar12;
              plVar16 = plVar15;
              plVar9 = plVar20;
            } while (plVar15 != plVar17);
            plVar16 = *(long **)(lVar10 + 8);
            goto LAB_02bf8f68;
          }
          do {
            plVar16 = plVar16 + -1;
            plVar9 = (long *)*plVar16;
            if (plVar9 != (long *)0x0) {
              lVar12 = plVar9[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
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
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))();
              }
            }
LAB_02bf8f68:
          } while (plVar16 != plVar20);
          *(long **)(lVar10 + 8) = plVar20;
          if (plVar13 != (long *)0x0) {
            lVar10 = plVar13[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
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
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
LAB_02bf8fcc:
          nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
          return;
        }
        if (plVar13 != (long *)0x0) goto LAB_02bf8c48;
      }
      puVar11 = *(undefined8 **)(param_1 + 0x68);
      plVar20 = plVar20 + 1;
      goto LAB_02bf8bb4;
    }
  }
  return;
}


