/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae60c8; name: FUN_00ae60c8
 */


bool FUN_00ae60c8(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  lVar12 = *param_1;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      plVar14 = *(long **)(lVar12 + 0x10);
      plVar10 = (long *)FUN_00a3edb8(param_1);
      if (plVar14 == (long *)0x0) {
        return false;
      }
      while (plVar14 != plVar10) {
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          return false;
        }
      }
      iVar4 = *piVar1;
      if (iVar4 == iVar9) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return false;
          }
          plVar10 = *(long **)(lVar12 + 0x1a0);
          if (plVar10 == (long *)0x0) {
            bVar7 = false;
          }
          else {
            plVar14 = plVar10 + 10;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar7) {
                *(int *)plVar14 = (int)*plVar14 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (((*PTR_DAT_0437a570 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a570);
            }
            puVar3 = (undefined8 *)PTR_DAT_0437a578;
            if (plVar10[0x19] != 0) {
              puVar3 = (undefined8 *)(plVar10[0x19] + 0x88);
            }
            plVar13 = (long *)*puVar3;
            if (plVar13 == (long *)0x0) {
              bVar7 = false;
            }
            else {
              plVar2 = plVar13 + 10;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              sVar8 = FUN_02b68184(plVar13,param_2);
              bVar7 = -1 < sVar8;
              do {
                iVar9 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar9;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
            do {
              iVar9 = (int)*plVar14 + -1;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar5) {
                *(int *)plVar14 = iVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          uVar11 = FUN_02a43a5c(*(undefined8 *)(lVar12 + 8));
          if ((uVar11 & 1) != 0) {
            (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
          }
          return bVar7;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_1 = (long *)0x0;
      iVar9 = iVar4;
    } while (iVar4 != 0);
  }
  return false;
}


