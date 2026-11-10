/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae62b0; name: FUN_00ae62b0
 */


void FUN_00ae62b0(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  lVar10 = *param_2;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar7 = *(int *)(lVar10 + 0xc);
    do {
      plVar11 = *(long **)(lVar10 + 0x10);
      lVar8 = FUN_00a3edb8();
      while( true ) {
        if (plVar11 == (long *)0x0) goto LAB_00ae62cc;
        if (plVar11 == (long *)lVar8) break;
        plVar11 = (long *)*plVar11;
      }
      iVar4 = *piVar1;
      if (iVar4 == iVar7) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 != 0) {
            plVar11 = *(long **)(lVar10 + 0x1a0);
            if (plVar11 == (long *)0x0) {
              *param_1 = 0;
            }
            else {
              plVar2 = plVar11 + 10;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (((*PTR_DAT_0437a570 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar7 != 0)) {
                FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_0437a570);
              }
              plVar3 = (long *)PTR_DAT_0437a578;
              if (plVar11[0x19] != 0) {
                plVar3 = (long *)(plVar11[0x19] + 0x88);
              }
              lVar8 = *plVar3;
              if (lVar8 == 0) {
                *param_1 = 0;
              }
              else {
                piVar1 = (int *)(lVar8 + 0x50);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = *piVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                *param_1 = lVar8;
              }
              do {
                iVar7 = (int)*plVar2 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *(int *)plVar2 = iVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar7 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            uVar9 = FUN_02a43a5c(*(undefined8 *)(lVar10 + 8));
            if ((uVar9 & 1) == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x00ae6400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar10 + -0x50) + 0x20))((long *)(lVar10 + -0x50));
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar4;
    } while (iVar4 != 0);
  }
LAB_00ae62cc:
  *param_1 = 0;
  return;
}


