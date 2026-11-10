/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdeef4; name: FUN_02fdeef4
 */


long * FUN_02fdeef4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  
  if (param_2 != param_1) {
    lVar12 = 0;
    if (*param_2 != 0) {
      lVar12 = *param_2 + (long)param_2;
    }
    uVar9 = *(uint *)(param_2 + 1);
    uVar11 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    lVar14 = *param_1;
    uVar4 = uVar11;
    if ((int)uVar11 <= (int)uVar9) {
      uVar4 = uVar9;
    }
    if (lVar12 == 0 || uVar4 == 0) {
      iVar5 = (int)param_1[1];
      if (0 < iVar5) {
        lVar12 = 0;
        if (lVar14 != 0) {
          lVar12 = lVar14 + (long)param_1;
        }
        plVar8 = (long *)(lVar12 + (long)iVar5 * 8);
        iVar15 = 0;
        do {
          plVar8 = plVar8 + -1;
          if (((*plVar8 != 0) && (plVar2 = (long *)(*plVar8 + (long)plVar8), plVar2 != (long *)0x0))
             && (plVar2[1] != 0)) {
            plVar1 = plVar2 + 2;
            do {
              lVar12 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != iVar5);
      }
      if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
        uVar11 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
        if ((int)uVar11 <= (int)*(uint *)(param_1 + 1)) {
          uVar11 = *(uint *)(param_1 + 1);
        }
        lVar12 = 0;
        if (*param_1 != 0) {
          lVar12 = *param_1 + (long)param_1;
        }
        lVar14 = tpidr_el0;
        lVar10 = *(long *)(lVar14 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar10;
        }
        plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,(ulong)uVar11 << 3);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      uVar16 = *(uint *)(param_1 + 1);
      lVar10 = 0;
      if (lVar14 != 0) {
        lVar10 = lVar14 + (long)param_1;
      }
      if (0 < (int)uVar16) {
        plVar8 = (long *)(lVar10 + (long)(int)uVar16 * 8);
        uVar11 = 0;
        do {
          plVar8 = plVar8 + -1;
          if (((*plVar8 != 0) && (plVar2 = (long *)(*plVar8 + (long)plVar8), plVar2 != (long *)0x0))
             && (plVar2[1] != 0)) {
            plVar1 = plVar2 + 2;
            do {
              lVar14 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar14 + -1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar16);
        uVar9 = *(uint *)(param_2 + 1);
        uVar11 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        uVar16 = *(uint *)(param_1 + 1);
      }
      if ((int)uVar11 <= (int)uVar9) {
        uVar11 = uVar9;
      }
      uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      if ((int)uVar3 <= (int)uVar16) {
        uVar3 = uVar16;
      }
      if (uVar11 != uVar3) {
        lVar14 = tpidr_el0;
        if ((int)*(uint *)((long)param_1 + 0xc) < 0) {
          lVar10 = 0;
          if (*param_1 != 0) {
            lVar10 = *param_1 + (long)param_1;
          }
          lVar13 = *(long *)(lVar14 + 0x38d490);
          if (lVar13 == 0) {
            lVar13 = FUN_0333d16c(0,1,(ulong)uVar3 << 3);
            *(long *)(lVar14 + 0x38d490) = lVar13;
          }
          plVar8 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,(ulong)uVar3 << 3);
        }
        lVar10 = *(long *)(lVar14 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar14 + 0x38d490) = lVar10;
        }
        plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
        lVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,(ulong)uVar4 << 3,0);
        uVar9 = *(uint *)(param_2 + 1);
      }
      if (0 < (int)uVar9) {
        uVar17 = (ulong)uVar9;
        lVar14 = lVar10;
        do {
          FUN_02ff9844(lVar14,lVar12);
          uVar17 = uVar17 - 1;
          lVar12 = lVar12 + 8;
          lVar14 = lVar14 + 8;
        } while (uVar17 != 0);
      }
      lVar12 = 0;
      if (lVar10 != 0) {
        lVar12 = lVar10 - (long)param_1;
      }
      *param_1 = lVar12;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar11 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
      if ((int)uVar11 <= (int)*(uint *)(param_2 + 1)) {
        uVar11 = *(uint *)(param_2 + 1);
      }
      *(uint *)((long)param_1 + 0xc) = uVar11 | 0x80000000;
    }
  }
  return param_1;
}


