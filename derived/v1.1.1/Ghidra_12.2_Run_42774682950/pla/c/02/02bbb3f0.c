/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbb3f0; name: FUN_02bbb3f0
 */


void FUN_02bbb3f0(long *param_1,long *param_2,long *param_3,long param_4,long param_5,long *param_6,
                 long param_7)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  
  if (param_5 != 0) {
    while ((param_7 < param_4 && (param_7 < param_5))) {
      if (param_4 == 0) {
        return;
      }
      lVar19 = -param_4;
      while (*(int *)(*param_1 + 0x19c) <= *(int *)(*param_2 + 0x19c)) {
        param_1 = param_1 + 1;
        bVar3 = lVar19 == -1;
        lVar19 = lVar19 + 1;
        if (bVar3) {
          return;
        }
      }
      param_4 = -lVar19;
      if (param_4 < param_5) {
        lVar20 = param_5;
        if (param_5 < 0) {
          lVar20 = param_5 + 1;
        }
        lVar20 = lVar20 >> 1;
        plVar9 = param_2 + lVar20;
        plVar12 = param_1;
        if ((long)param_2 - (long)param_1 != 0) {
          uVar4 = (long)param_2 - (long)param_1 >> 3;
          do {
            uVar13 = uVar4 >> 1;
            uVar14 = uVar4 + ~uVar13;
            uVar4 = uVar13;
            if (*(int *)(plVar12[uVar13] + 0x19c) <= *(int *)(*plVar9 + 0x19c)) {
              plVar12 = plVar12 + uVar13 + 1;
              uVar4 = uVar14;
            }
          } while (uVar4 != 0);
        }
        param_4 = (long)plVar12 - (long)param_1 >> 3;
      }
      else {
        if (lVar19 == -1) {
          lVar19 = *param_1;
          *param_1 = *param_2;
          *param_2 = lVar19;
          return;
        }
        if (param_4 < 0) {
          param_4 = param_4 + 1;
        }
        param_4 = param_4 >> 1;
        plVar12 = param_1 + param_4;
        if ((long)param_3 - (long)param_2 == 0) {
          plVar9 = param_2;
        }
        else {
          uVar4 = (long)param_3 - (long)param_2 >> 3;
          plVar8 = param_2;
          do {
            uVar14 = uVar4 >> 1;
            plVar9 = plVar8 + uVar14 + 1;
            uVar4 = uVar4 + ~uVar14;
            if (*(int *)(*plVar12 + 0x19c) <= *(int *)(plVar8[uVar14] + 0x19c)) {
              plVar9 = plVar8;
              uVar4 = uVar14;
            }
            plVar8 = plVar9;
          } while (uVar4 != 0);
        }
        lVar20 = (long)plVar9 - (long)param_2 >> 3;
      }
      if (plVar12 == param_2) {
        param_2 = plVar9;
      }
      else if (param_2 == plVar9) {
        param_2 = plVar12;
      }
      else if (plVar12 + 1 == param_2) {
        lVar5 = *plVar12;
        sVar2 = (long)plVar9 - (long)param_2;
        if (sVar2 != 0) {
          memmove(plVar12,param_2,sVar2);
        }
        plVar12[(long)sVar2 >> 3] = lVar5;
        param_2 = plVar12 + ((long)sVar2 >> 3);
      }
      else if (param_2 + 1 == plVar9) {
        lVar5 = plVar9[-1];
        sVar2 = (long)(plVar9 + -1) - (long)plVar12;
        if (sVar2 == 0) {
          *plVar12 = lVar5;
          param_2 = plVar9;
        }
        else {
          memmove((long *)((long)plVar9 - sVar2),plVar12,sVar2);
          *plVar12 = lVar5;
          param_2 = (long *)((long)plVar9 - sVar2);
        }
      }
      else {
        lVar5 = (long)param_2 - (long)plVar12 >> 3;
        lVar10 = (long)plVar9 - (long)param_2 >> 3;
        if (lVar5 == lVar10) {
          uVar14 = ((long)param_2 - (long)plVar12) - 8;
          uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
          uVar4 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) == 0) {
            plVar7 = param_2;
            plVar8 = plVar12;
          }
          else {
            plVar6 = param_2;
            plVar11 = plVar12;
            do {
              lVar5 = *plVar11;
              uVar4 = uVar4 - 1;
              plVar8 = plVar11 + 1;
              *plVar11 = *plVar6;
              plVar7 = plVar6 + 1;
              *plVar6 = lVar5;
              plVar6 = plVar7;
              plVar11 = plVar8;
            } while (uVar4 != 0);
          }
          if (0x17 < uVar14) {
            do {
              lVar5 = *plVar8;
              *plVar8 = *plVar7;
              *plVar7 = lVar5;
              lVar5 = plVar8[1];
              plVar8[1] = plVar7[1];
              plVar7[1] = lVar5;
              lVar5 = plVar8[2];
              plVar8[2] = plVar7[2];
              plVar7[2] = lVar5;
              lVar5 = plVar8[3];
              plVar8[3] = plVar7[3];
              plVar8 = plVar8 + 4;
              plVar7[3] = lVar5;
              plVar7 = plVar7 + 4;
            } while (plVar8 != param_2);
          }
        }
        else {
          lVar16 = lVar5;
          lVar15 = lVar10;
          do {
            lVar17 = lVar15;
            lVar15 = 0;
            if (lVar17 != 0) {
              lVar15 = lVar16 / lVar17;
            }
            lVar15 = lVar16 - lVar15 * lVar17;
            lVar16 = lVar17;
          } while (lVar15 != 0);
          if (lVar17 != 0) {
            plVar8 = plVar12 + lVar17;
            lVar16 = lVar17 * 8 + -8;
            if (((uint)lVar16 >> 3 & 1) == 0) {
              plVar8 = plVar8 + -1;
              lVar15 = *plVar8;
              plVar7 = plVar8 + lVar5;
              plVar6 = plVar8;
              do {
                plVar11 = plVar7;
                *plVar6 = *plVar11;
                lVar17 = (long)plVar9 - (long)plVar11 >> 3;
                plVar7 = plVar11 + lVar5;
                if (lVar17 <= lVar5) {
                  plVar7 = plVar12 + (lVar5 - lVar17);
                }
                plVar6 = plVar11;
              } while (plVar7 != plVar8);
              *plVar11 = lVar15;
            }
            if (lVar16 != 0) {
              do {
                plVar11 = plVar8 + -1;
                lVar16 = *plVar11;
                plVar7 = plVar11 + lVar5;
                plVar6 = plVar11;
                do {
                  plVar18 = plVar7;
                  *plVar6 = *plVar18;
                  lVar15 = (long)plVar9 - (long)plVar18 >> 3;
                  plVar7 = plVar18 + lVar5;
                  if (lVar15 <= lVar5) {
                    plVar7 = plVar12 + (lVar5 - lVar15);
                  }
                  plVar6 = plVar18;
                } while (plVar7 != plVar11);
                *plVar18 = lVar16;
                plVar8 = plVar8 + -2;
                lVar16 = *plVar8;
                plVar7 = plVar8 + lVar5;
                plVar6 = plVar8;
                do {
                  plVar11 = plVar7;
                  *plVar6 = *plVar11;
                  lVar15 = (long)plVar9 - (long)plVar11 >> 3;
                  plVar7 = plVar11 + lVar5;
                  if (lVar15 <= lVar5) {
                    plVar7 = plVar12 + (lVar5 - lVar15);
                  }
                  plVar6 = plVar11;
                } while (plVar7 != plVar8);
                *plVar11 = lVar16;
              } while (plVar8 != plVar12);
            }
          }
          param_2 = plVar12 + lVar10;
        }
      }
      if (param_4 + lVar20 < (param_5 - (param_4 + lVar20)) - lVar19) {
        FUN_02bbb3f0(param_1,plVar12,param_2,param_4,lVar20,param_6,param_7);
        lVar20 = param_5 - lVar20;
        param_1 = param_2;
        param_2 = plVar9;
        param_4 = -(param_4 + lVar19);
      }
      else {
        FUN_02bbb3f0(param_2,plVar9,param_3,-(param_4 + lVar19),param_5 - lVar20,param_6,param_7);
        param_3 = param_2;
        param_2 = plVar12;
      }
      param_5 = lVar20;
      if (lVar20 == 0) {
        return;
      }
    }
    if (param_5 < param_4) {
      if ((long)param_3 - (long)param_2 == 0) {
        return;
      }
      uVar14 = ((long)param_3 - (long)param_2) - 8;
      uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
      uVar4 = (ulong)uVar1 & 3;
      if ((uVar1 & 3) == 0) {
        plVar9 = param_6;
        plVar12 = param_2;
      }
      else {
        plVar8 = param_6;
        plVar7 = param_2;
        do {
          plVar12 = plVar7 + 1;
          uVar4 = uVar4 - 1;
          plVar9 = plVar8 + 1;
          *plVar8 = *plVar7;
          plVar8 = plVar9;
          plVar7 = plVar12;
        } while (uVar4 != 0);
      }
      if (0x17 < uVar14) {
        do {
          *plVar9 = *plVar12;
          plVar9[1] = plVar12[1];
          plVar9[2] = plVar12[2];
          plVar8 = plVar12 + 3;
          plVar12 = plVar12 + 4;
          plVar9[3] = *plVar8;
          plVar9 = plVar9 + 4;
        } while (plVar12 != param_3);
      }
      while( true ) {
        if (plVar9 == param_6) {
          return;
        }
        if (param_2 == param_1) break;
        lVar19 = param_2[-1];
        plVar12 = plVar9 + -1;
        if (*(int *)(*plVar12 + 0x19c) < *(int *)(lVar19 + 0x19c)) {
          param_3[-1] = lVar19;
          plVar12 = plVar9;
          param_2 = param_2 + -1;
        }
        else {
          param_3[-1] = *plVar12;
        }
        param_3 = param_3 + -1;
        plVar9 = plVar12;
      }
      uVar4 = (long)plVar9 + (-8 - (long)param_6);
      uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar19 = -((ulong)uVar1 & 3);
        lVar20 = 0;
        do {
          lVar5 = lVar20 + -8;
          bVar3 = lVar19 != -1;
          lVar19 = lVar19 + 1;
          *(undefined8 *)((long)param_3 + lVar20 + -8) = *(undefined8 *)((long)plVar9 + lVar20 + -8)
          ;
          lVar20 = lVar5;
        } while (bVar3);
        plVar9 = (long *)((long)plVar9 + lVar5);
        param_3 = (long *)((long)param_3 + lVar5);
      }
      if (uVar4 < 0x18) {
        return;
      }
      param_3 = param_3 + -2;
      do {
        param_3[1] = plVar9[-1];
        *param_3 = plVar9[-2];
        param_3[-1] = plVar9[-3];
        plVar9 = plVar9 + -4;
        param_3[-2] = *plVar9;
        param_3 = param_3 + -4;
      } while (param_6 != plVar9);
      return;
    }
    if (param_1 == param_2) {
      return;
    }
    uVar14 = (long)param_2 + (-8 - (long)param_1);
    uVar1 = ((uint)(uVar14 >> 3) & 0x1fffffff) + 1;
    uVar4 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) == 0) {
      plVar9 = param_6;
      plVar12 = param_1;
    }
    else {
      plVar8 = param_6;
      plVar7 = param_1;
      do {
        plVar12 = plVar7 + 1;
        uVar4 = uVar4 - 1;
        plVar9 = plVar8 + 1;
        *plVar8 = *plVar7;
        plVar8 = plVar9;
        plVar7 = plVar12;
      } while (uVar4 != 0);
    }
    if (0x17 < uVar14) {
      do {
        *plVar9 = *plVar12;
        plVar9[1] = plVar12[1];
        plVar9[2] = plVar12[2];
        plVar8 = plVar12 + 3;
        plVar12 = plVar12 + 4;
        plVar9[3] = *plVar8;
        plVar9 = plVar9 + 4;
      } while (plVar12 != param_2);
    }
    while (plVar9 != param_6) {
      if (param_2 == param_3) {
        if ((long)plVar9 - (long)param_6 == 0) {
          return;
        }
        memmove(param_1,param_6,(long)plVar9 - (long)param_6);
        return;
      }
      lVar19 = *param_6;
      if (*(int *)(*param_2 + 0x19c) < *(int *)(lVar19 + 0x19c)) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
      }
      else {
        param_6 = param_6 + 1;
        *param_1 = lVar19;
      }
      param_1 = param_1 + 1;
    }
  }
  return;
}


