/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c1470; name: FUN_011c1470
 */


void FUN_011c1470(long *param_1,long *param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 != 0) {
    FUN_011c15cc(param_1,param_3);
    FUN_011c16dc(param_1,param_3);
    if ((int)param_2[5] == 0) {
      plVar4 = *(long **)(*param_1 + 0x148);
      lVar6 = *(long *)(*param_1 + 0x150);
      if ((lVar6 != 0) && (*plVar4 != 0x41aa05066c847341)) {
        plVar5 = plVar4 + lVar6 * 6;
        lVar6 = lVar6 * 0x30;
        do {
          lVar6 = lVar6 + -0x30;
          if (lVar6 == 0) {
            plVar4 = plVar5;
            break;
          }
          plVar2 = plVar4 + 6;
          plVar1 = plVar4 + 6;
          plVar4 = plVar2;
        } while (*plVar1 != 0x41aa05066c847341);
      }
      *(byte *)(plVar4[4] + 0x58) = *(byte *)(plVar4[4] + 0x58) & 0xfe | *(byte *)(param_1 + 8);
      goto LAB_011c14f8;
    }
  }
  plVar4 = *(long **)(*param_1 + 0x148);
  lVar6 = *(long *)(*param_1 + 0x150);
  if ((lVar6 != 0) && (*plVar4 != 0x41aa05066c847341)) {
    plVar5 = plVar4 + lVar6 * 6;
    lVar6 = lVar6 * 0x30;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) {
        plVar4 = plVar5;
        break;
      }
      plVar2 = plVar4 + 6;
      plVar1 = plVar4 + 6;
      plVar4 = plVar2;
    } while (*plVar1 != 0x41aa05066c847341);
  }
  *(byte *)(plVar4[4] + 0x58) = *(byte *)(plVar4[4] + 0x58) & 0xfe;
LAB_011c14f8:
  lVar6 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = lVar6;
  lVar7 = param_2[4];
  lVar6 = param_2[2];
  lVar3 = param_2[5];
  param_1[5] = param_2[3];
  param_1[6] = lVar7;
  param_1[4] = lVar6;
  *(int *)(param_1 + 7) = (int)lVar3;
  *(int *)((long)param_1 + 0x3c) = param_3;
  return;
}


