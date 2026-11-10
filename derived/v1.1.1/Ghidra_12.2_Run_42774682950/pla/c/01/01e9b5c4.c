/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e9b5c4; name: FUN_01e9b5c4
 */


void FUN_01e9b5c4(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  
  puVar6 = PTR_DAT_0437aea0;
  puVar5 = PTR_DAT_0437ae98;
  if ((param_2 != 0) && (*(int *)(param_2 + 0xc) != 0)) {
    piVar1 = (int *)(param_2 + 0xc);
    iVar9 = *(int *)(param_2 + 0xc);
    do {
      plVar15 = *(long **)(param_2 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar11 = FUN_00ab38cc();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) {
          return;
        }
        if (plVar15 == (long *)puVar6) break;
        plVar15 = (long *)*plVar15;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        puVar7 = PTR_DAT_04382ec0;
        if (cVar3 == '\0') {
          lVar12 = *(long *)(param_2 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          lVar14 = *param_1;
          if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) goto LAB_01e9b6bc;
          piVar1 = (int *)(lVar14 + 0xc);
          iVar9 = *(int *)(lVar14 + 0xc);
          goto LAB_01e9b714;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return;
LAB_01e9b714:
  plVar15 = *(long **)(lVar14 + 0x10);
  FUN_01eace9c();
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_01e9b6bc;
    if (plVar15 == (long *)puVar7) break;
    plVar15 = (long *)*plVar15;
  }
  iVar8 = *piVar1;
  if (iVar8 == iVar9) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar14 = *(long *)(lVar14 + 0x18);
      if (lVar14 != 0) {
        if (*(char *)(lVar14 + 0x5e0) == '\0') {
          FUN_00956dac(&local_80,lVar12 + 0x158);
          lVar10 = FUN_00b13c20(local_80 + 0x1e,&local_68);
          if (local_80 != (long *)0x0) {
            lVar13 = local_80[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_80 + 0x20))();
            }
          }
          if (lVar10 != 0) {
            local_70 = (long *)0x0;
            FUN_00d7e99c(lVar10,&local_70,1);
            if (local_70 != (long *)0x0) {
              lVar10 = local_70[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*local_70 + 0x20))();
              }
            }
          }
          local_80 = (long *)0x0;
          uStack_78 = 0;
          FUN_00aeb228(&local_80,lVar12 + 0x358);
          plVar15 = local_80;
          puVar6 = PTR_DAT_0437a6e0;
          puVar5 = PTR_DAT_0437a6d8;
          if (local_80 != (long *)0x0) {
            if (*(int *)((long)local_80 + 0xc) == 0) {
LAB_01e9b954:
              plVar15 = (long *)0x0;
              plVar16 = local_80;
            }
            else {
              piVar1 = (int *)((long)local_80 + 0xc);
              iVar9 = *(int *)((long)local_80 + 0xc);
              while( true ) {
                plVar16 = (long *)plVar15[2];
                if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
                  uVar11 = FUN_00ad3750();
                  *(undefined8 *)puVar6 = uVar11;
                  __cxa_guard_release(puVar5);
                  if (plVar16 != (long *)0x0) goto LAB_01e9b904;
                  goto LAB_01e9b954;
                }
                while( true ) {
                  if (plVar16 == (long *)0x0) goto LAB_01e9b954;
LAB_01e9b904:
                  if (plVar16 == (long *)puVar6) break;
                  plVar16 = (long *)*plVar16;
                }
                iVar8 = *piVar1;
                if (iVar8 == iVar9) break;
                ClearExclusiveLocal();
LAB_01e9b8ec:
                iVar9 = iVar8;
                if (iVar8 == 0) goto LAB_01e9b954;
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_01e9b8ec;
              lVar10 = plVar15[3];
              plVar15 = (long *)0x0;
              plVar16 = local_80;
              if (lVar10 != 0) {
                plVar15 = (long *)(lVar10 + -0x50);
              }
            }
            local_80 = plVar16;
            if (plVar16 != (long *)0x0) {
              plVar2 = plVar16 + 1;
              do {
                iVar9 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *(int *)plVar2 = iVar9;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 == 0) {
                plVar16[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_68 = *plVar16;
                FUN_02a44274(lVar10 + 0xd8,&local_68);
              }
            }
            if (plVar15 != (long *)0x0) {
              FUN_02c90d40(plVar15);
              lVar10 = plVar15[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar9 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar9 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15);
              }
            }
          }
          FUN_00956dac(&local_80,lVar12 + 0x158);
          lVar10 = FUN_009aff90(local_80 + 0x1e,&local_68);
          if (local_80 != (long *)0x0) {
            lVar13 = local_80[0xb];
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar9 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_80 + 0x20))();
            }
          }
          if (lVar10 != 0) {
            FUN_01836814(lVar10,0);
          }
        }
        lVar10 = *(long *)(lVar14 + 8);
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
        }
      }
      goto LAB_01e9b6bc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
LAB_01e9b6bc:
    lVar14 = *(long *)(lVar12 + 8);
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
      return;
    }
    return;
  }
  goto LAB_01e9b714;
}


