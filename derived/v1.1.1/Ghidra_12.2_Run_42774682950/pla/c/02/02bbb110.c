/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbb110; name: FUN_02bbb110
 */


void FUN_02bbb110(long *param_1,long *param_2,undefined8 param_3,ulong param_4,long *param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      if (*(int *)(param_2[-1] + 0x19c) < *(int *)(*param_1 + 0x19c)) {
        *param_5 = param_2[-1];
        lVar3 = *param_1;
      }
      else {
        *param_5 = *param_1;
        lVar3 = param_2[-1];
      }
      param_5[1] = lVar3;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        plVar5 = param_1 + 1;
        *param_5 = *param_1;
        if (plVar5 != param_2) {
          lVar3 = 0;
          plVar4 = param_5;
          do {
            if (*(int *)(*plVar5 + 0x19c) < *(int *)(*plVar4 + 0x19c)) {
              plVar4[1] = *plVar4;
              if (plVar4 != param_5) {
                lVar6 = 0;
                do {
                  lVar8 = ((long *)((long)plVar4 + lVar6))[-1];
                  plVar7 = (long *)((long)plVar4 + lVar6);
                  if (*(int *)(lVar8 + 0x19c) <= *(int *)(*plVar5 + 0x19c)) goto LAB_02bbb21c;
                  *(long *)((long)plVar4 + lVar6) = lVar8;
                  lVar6 = lVar6 + -8;
                } while (lVar3 != lVar6);
              }
              plVar7 = param_5;
LAB_02bbb21c:
              *plVar7 = *plVar5;
            }
            else {
              plVar4[1] = *plVar5;
            }
            plVar5 = plVar5 + 1;
            lVar3 = lVar3 + -8;
            plVar4 = plVar4 + 1;
          } while (plVar5 != param_2);
        }
      }
    }
    else {
      uVar9 = param_4 >> 1;
      plVar7 = param_1 + uVar9;
      FUN_02bbae20(param_1,plVar7,param_3,uVar9,param_5,uVar9);
      FUN_02bbae20(plVar7,param_2,param_3,param_4 - uVar9,param_5 + uVar9,param_4 - uVar9);
      plVar5 = plVar7;
      plVar4 = param_1;
      if (uVar9 != 0) {
        do {
          if (plVar5 == param_2) {
            if (plVar4 == plVar7) {
              return;
            }
            uVar9 = (long)param_1 + (uVar9 * 8 - (long)plVar4) + -8;
            uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
            if ((uVar1 & 3) != 0) {
              lVar6 = 0;
              lVar3 = -((ulong)uVar1 & 3);
              do {
                bVar2 = lVar3 != -1;
                lVar3 = lVar3 + 1;
                *(undefined8 *)((long)param_5 + lVar6) = *(undefined8 *)((long)plVar4 + lVar6);
                lVar6 = lVar6 + 8;
              } while (bVar2);
              param_5 = (long *)((long)param_5 + lVar6);
              plVar4 = (long *)((long)plVar4 + lVar6);
            }
            if (uVar9 < 0x18) {
              return;
            }
            do {
              *param_5 = *plVar4;
              param_5[1] = plVar4[1];
              param_5[2] = plVar4[2];
              plVar5 = plVar4 + 3;
              plVar4 = plVar4 + 4;
              param_5[3] = *plVar5;
              param_5 = param_5 + 4;
            } while (plVar4 != plVar7);
            return;
          }
          lVar3 = *plVar4;
          if (*(int *)(*plVar5 + 0x19c) < *(int *)(lVar3 + 0x19c)) {
            *param_5 = *plVar5;
            plVar5 = plVar5 + 1;
          }
          else {
            plVar4 = plVar4 + 1;
            *param_5 = lVar3;
          }
          param_5 = param_5 + 1;
        } while (plVar4 != plVar7);
      }
      if (plVar5 != param_2) {
        uVar9 = (long)param_2 + (-8 - (long)plVar5);
        uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar3 = -((ulong)uVar1 & 3);
          plVar4 = plVar5;
          plVar7 = param_5;
          do {
            plVar5 = plVar4 + 1;
            bVar2 = lVar3 != -1;
            lVar3 = lVar3 + 1;
            param_5 = plVar7 + 1;
            *plVar7 = *plVar4;
            plVar4 = plVar5;
            plVar7 = param_5;
          } while (bVar2);
        }
        if (0x17 < uVar9) {
          do {
            *param_5 = *plVar5;
            param_5[1] = plVar5[1];
            param_5[2] = plVar5[2];
            plVar4 = plVar5 + 3;
            plVar5 = plVar5 + 4;
            param_5[3] = *plVar4;
            param_5 = param_5 + 4;
          } while (plVar5 != param_2);
        }
      }
    }
  }
  return;
}


