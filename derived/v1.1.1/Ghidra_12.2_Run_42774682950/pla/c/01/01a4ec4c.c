/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4ec4c; name: FUN_01a4ec4c
 */


void FUN_01a4ec4c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *local_70;
  long *local_68 [2];
  long *local_58;
  long local_48;
  
  puVar5 = PTR_DAT_0437a558;
  puVar4 = PTR_DAT_0437a550;
  if ((((char)param_1[0x114] == '\0') && (lVar12 = param_1[0x115], lVar12 != 0)) &&
     (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar7 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_00aa0310();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01a4ec7c;
        if (plVar13 == (long *)puVar5) break;
        plVar13 = (long *)*plVar13;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            FUN_00b08e00(local_68,lVar12 + 0x1a0);
            if (local_68[0] != (long *)0x0) {
              local_70 = local_68[0];
              lVar9 = local_68[0][0xb];
              if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar9 + 0x10) == 0) {
                uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                *(undefined8 *)(lVar9 + 0x10) = uVar8;
              }
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              (**(code **)(*param_1 + 0x380))(param_1,&local_70);
              if (local_70 != (long *)0x0) {
                lVar9 = local_70[0xb];
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
                  (**(code **)(*local_70 + 0x20))();
                }
              }
              if (local_68[0] != (long *)0x0) {
                lVar9 = local_68[0][0xb];
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
                  (**(code **)(*local_68[0] + 0x20))();
                }
              }
            }
            lVar9 = *(long *)(lVar12 + 8);
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
              (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01a4ec7c:
  (**(code **)(*param_1 + 0x390))(param_1);
  puVar5 = PTR_DAT_0437a558;
  puVar4 = PTR_DAT_0437a550;
  if (((*(char *)((long)param_1 + 0x8a1) == '\0') && (lVar12 = param_1[0x115], lVar12 != 0)) &&
     (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar7 = *(int *)(lVar12 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_00aa0310();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) {
          return;
        }
        if (plVar13 == (long *)puVar5) break;
        plVar13 = (long *)*plVar13;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          plVar11 = (long *)(lVar12 + -0x50);
          FUN_00a9ecd4(local_68,plVar11);
          FUN_009983e4(&local_58,local_68);
          plVar13 = local_68[0];
          if (local_68[0] != (long *)0x0) {
            plVar10 = local_68[0] + 1;
            do {
              iVar7 = (int)*plVar10 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *(int *)plVar10 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 == 0) {
              local_68[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar9 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar9;
              local_48 = *plVar13;
              FUN_02a44274(lVar9 + 0xd8,&local_48);
            }
          }
          if (local_58 == (long *)0x0) goto LAB_01a4efd8;
          plVar13 = (long *)local_58[0x4a];
          plVar10 = (long *)local_58[0x4b];
          if (plVar13 == plVar10) {
LAB_01a4f00c:
            if ((plVar13 == plVar10) || (*plVar13 == 0)) goto LAB_01a4ef98;
            FUN_009cda48(local_68,*plVar13,&local_48);
            if (local_68[0] != (long *)0x0) {
              FUN_028dd5bc(local_68[0],param_1 + 0x138);
              FUN_028dda8c(local_68[0],param_1 + 0x148);
              FUN_028ddb50(local_68[0],param_1 + 0x158);
              if (local_68[0] != (long *)0x0) {
                lVar9 = local_68[0][0xb];
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
                  (**(code **)(*local_68[0] + 0x20))();
                }
              }
            }
          }
          else {
            do {
              if (*(undefined1 **)(*plVar13 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01a4f00c;
              plVar13 = plVar13 + 1;
            } while (plVar10 != plVar13);
LAB_01a4ef98:
            local_68[0] = (long *)0x0;
          }
          (**(code **)(*param_1 + 0x3b8))(param_1);
          *(undefined1 *)((long)param_1 + 0x8a1) = 1;
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
LAB_01a4efd8:
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
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
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
  return;
}


