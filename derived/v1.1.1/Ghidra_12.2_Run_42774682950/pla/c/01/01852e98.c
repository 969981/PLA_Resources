/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01852e98; name: FUN_01852e98
 */


long * FUN_01852e98(long *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      param_2 = (long *)*param_2;
      if (*(float *)(param_2[2] + 0x298) < *(float *)(param_1[2] + 0x298)) {
        *(long *)(*param_2 + 8) = param_2[1];
        *(long *)param_2[1] = *param_2;
        *(long **)(*param_1 + 8) = param_2;
        *param_2 = *param_1;
        *param_1 = (long)param_2;
        param_2[1] = (long)param_1;
        param_1 = param_2;
      }
    }
    else {
      uVar8 = param_3 >> 1;
      plVar9 = param_1;
      if ((uVar8 != 0) && (plVar9 = (long *)param_1[1], 3 < param_3)) {
        plVar9 = (long *)plVar9[1];
        for (lVar3 = uVar8 - 2; 0 < lVar3; lVar3 = lVar3 + -1) {
          plVar9 = (long *)plVar9[1];
        }
      }
      param_1 = (long *)FUN_01852e98(param_1,plVar9,uVar8);
      plVar9 = (long *)FUN_01852e98(plVar9,param_2,param_3 - uVar8);
      if (*(float *)(plVar9[2] + 0x298) < *(float *)(param_1[2] + 0x298)) {
        for (plVar6 = (long *)plVar9[1]; plVar6 != param_2; plVar6 = (long *)plVar6[1]) {
          if (*(float *)(param_1[2] + 0x298) <= *(float *)(plVar6[2] + 0x298)) {
            plVar2 = plVar6;
            goto LAB_01853098;
          }
        }
        plVar2 = param_2;
LAB_01853098:
        lVar3 = *plVar2;
        *(undefined8 *)(*plVar9 + 8) = *(undefined8 *)(lVar3 + 8);
        **(long **)(lVar3 + 8) = *plVar9;
        plVar4 = (long *)param_1[1];
        *(long **)(*param_1 + 8) = plVar9;
        *plVar9 = *param_1;
        *param_1 = lVar3;
        *(long **)(lVar3 + 8) = param_1;
        param_1 = plVar9;
        if (plVar2 == plVar4) {
          return plVar9;
        }
      }
      else {
        plVar4 = (long *)param_1[1];
        plVar6 = plVar9;
        plVar2 = plVar9;
        if (plVar9 == plVar4) {
          return param_1;
        }
      }
      plVar9 = plVar6;
      do {
        if (plVar6 == param_2) {
          return param_1;
        }
        if (*(float *)(plVar6[2] + 0x298) < *(float *)(plVar4[2] + 0x298)) {
          for (plVar7 = (long *)plVar6[1]; plVar7 != param_2; plVar7 = (long *)plVar7[1]) {
            if (*(float *)(plVar4[2] + 0x298) <= *(float *)(plVar7[2] + 0x298)) {
              plVar5 = plVar7;
              goto LAB_01853018;
            }
          }
          plVar5 = param_2;
LAB_01853018:
          lVar3 = *plVar5;
          bVar1 = plVar2 != plVar6;
          *(undefined8 *)(*plVar6 + 8) = *(undefined8 *)(lVar3 + 8);
          **(long **)(lVar3 + 8) = *plVar6;
          plVar5 = (long *)plVar4[1];
          plVar2 = plVar7;
          if (bVar1) {
            plVar2 = plVar9;
          }
          *(long **)(*plVar4 + 8) = plVar6;
          *plVar6 = *plVar4;
          *plVar4 = lVar3;
          *(long **)(lVar3 + 8) = plVar4;
        }
        else {
          plVar5 = (long *)plVar4[1];
          plVar7 = plVar6;
          plVar2 = plVar9;
        }
        plVar6 = plVar7;
        plVar4 = plVar5;
        plVar9 = plVar2;
      } while (plVar5 != plVar2);
    }
  }
  return param_1;
}


