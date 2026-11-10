/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbae20; name: FUN_02bbae20
 */


void FUN_02bbae20(long *param_1,long *param_2,undefined8 param_3,ulong param_4,long *param_5,
                 long param_6)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      if (*(int *)(param_2[-1] + 0x19c) < *(int *)(*param_1 + 0x19c)) {
        lVar5 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = lVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (plVar4 = param_1 + 1, plVar4 != param_2)) {
        lVar5 = 0;
        do {
          lVar6 = *plVar4;
          if (plVar4 != param_1) {
            lVar8 = lVar5;
            do {
              if (*(int *)(*(long *)((long)param_1 + lVar8) + 0x19c) <= *(int *)(lVar6 + 0x19c)) {
                plVar7 = (long *)((long)param_1 + lVar8 + 8);
                goto LAB_02bbaea0;
              }
              *(long *)((long)param_1 + lVar8 + 8) = *(long *)((long)param_1 + lVar8);
              bVar3 = lVar8 != 0;
              lVar8 = lVar8 + -8;
            } while (bVar3);
          }
          plVar7 = param_1;
LAB_02bbaea0:
          plVar4 = plVar4 + 1;
          lVar5 = lVar5 + 8;
          *plVar7 = lVar6;
        } while (plVar4 != param_2);
      }
    }
    else {
      uVar9 = param_4 >> 1;
      plVar4 = param_1 + uVar9;
      if (param_6 < (long)param_4) {
        FUN_02bbae20();
        FUN_02bbae20(plVar4,param_2,param_3,param_4 - uVar9,param_5,param_6);
        FUN_02bbb3f0(param_1,plVar4,param_2,uVar9,param_4 - uVar9,param_5,param_6);
        return;
      }
      FUN_02bbb110(param_1,plVar4,param_3,uVar9);
      plVar7 = param_5 + uVar9;
      FUN_02bbb110(plVar4,param_2,param_3,param_4 - uVar9,plVar7);
      plVar2 = param_5 + param_4;
      plVar4 = plVar7;
      do {
        if (plVar4 == plVar2) {
          if (param_5 == plVar7) {
            return;
          }
          uVar9 = (long)plVar7 + (-8 - (long)param_5);
          uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 3) != 0) {
            lVar6 = 0;
            lVar5 = -((ulong)uVar1 & 3);
            do {
              bVar3 = lVar5 != -1;
              lVar5 = lVar5 + 1;
              *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_5 + lVar6);
              lVar6 = lVar6 + 8;
            } while (bVar3);
            param_5 = (long *)((long)param_5 + lVar6);
            param_1 = (long *)((long)param_1 + lVar6);
          }
          if (uVar9 < 0x18) {
            return;
          }
          do {
            *param_1 = *param_5;
            param_1[1] = param_5[1];
            param_1[2] = param_5[2];
            plVar4 = param_5 + 3;
            param_5 = param_5 + 4;
            param_1[3] = *plVar4;
            param_1 = param_1 + 4;
          } while (param_5 != plVar7);
          return;
        }
        lVar5 = *param_5;
        if (*(int *)(*plVar4 + 0x19c) < *(int *)(lVar5 + 0x19c)) {
          *param_1 = *plVar4;
          plVar4 = plVar4 + 1;
        }
        else {
          param_5 = param_5 + 1;
          *param_1 = lVar5;
        }
        param_1 = param_1 + 1;
      } while (param_5 != plVar7);
      if (plVar4 != plVar2) {
        uVar9 = (long)plVar2 + (-8 - (long)plVar4);
        uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar6 = 0;
          lVar5 = -((ulong)uVar1 & 3);
          do {
            bVar3 = lVar5 != -1;
            lVar5 = lVar5 + 1;
            *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)plVar4 + lVar6);
            lVar6 = lVar6 + 8;
          } while (bVar3);
          plVar4 = (long *)((long)plVar4 + lVar6);
          param_1 = (long *)((long)param_1 + lVar6);
        }
        if (0x17 < uVar9) {
          do {
            *param_1 = *plVar4;
            param_1[1] = plVar4[1];
            param_1[2] = plVar4[2];
            plVar7 = plVar4 + 3;
            plVar4 = plVar4 + 4;
            param_1[3] = *plVar7;
            param_1 = param_1 + 4;
          } while (plVar4 != plVar2);
        }
      }
    }
  }
  return;
}


