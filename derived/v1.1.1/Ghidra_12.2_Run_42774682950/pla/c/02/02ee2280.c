/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee2280; name: FUN_02ee2280
 */


void FUN_02ee2280(undefined8 param_1,undefined8 param_2,long param_3,int param_4,float *param_5,
                 float *param_6)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 local_54;
  
  if (*(int *)(param_3 + 0x4c) == 3) {
    *param_5 = 1.0;
    *param_6 = 1.0;
    uVar2 = *(uint *)(param_3 + 0x58);
    if (uVar2 != 0) {
      lVar3 = *(long *)(param_3 + 0x50);
      lVar4 = lVar3;
      if (*(int *)(lVar3 + 4) == param_4) goto LAB_02ee2314;
      lVar5 = lVar3;
      while (lVar4 = lVar5 + 0x20, lVar4 != lVar3 + (ulong)uVar2 * 0x20) {
        piVar1 = (int *)(lVar5 + 0x24);
        lVar5 = lVar4;
        if (*piVar1 == param_4) {
LAB_02ee2314:
          local_54 = *(undefined4 *)(lVar4 + 0x18);
          fVar6 = (float)FUN_02e74568(param_2,lVar4 + 8,&local_54);
          *(undefined4 *)(lVar4 + 0x18) = local_54;
          *param_6 = *param_6 * fVar6;
          local_54 = *(undefined4 *)(lVar4 + 0x18);
          fVar6 = (float)FUN_02e74568(param_1,lVar4 + 8,&local_54);
          *(undefined4 *)(lVar4 + 0x18) = local_54;
          *param_5 = *param_5 * fVar6;
          lVar3 = *(long *)(param_3 + 0x50);
          uVar2 = *(uint *)(param_3 + 0x58);
          lVar5 = lVar4;
        }
      }
    }
  }
  else {
    *param_5 = 0.0;
    *param_6 = 0.0;
    uVar2 = *(uint *)(param_3 + 0x58);
    if (uVar2 != 0) {
      lVar3 = *(long *)(param_3 + 0x50);
      lVar4 = lVar3;
      if (*(int *)(lVar3 + 4) == param_4) goto LAB_02ee239c;
      lVar5 = lVar3;
      while (lVar4 = lVar5 + 0x20, lVar4 != lVar3 + (ulong)uVar2 * 0x20) {
        piVar1 = (int *)(lVar5 + 0x24);
        lVar5 = lVar4;
        if (*piVar1 == param_4) {
LAB_02ee239c:
          local_54 = *(undefined4 *)(lVar4 + 0x18);
          fVar6 = (float)FUN_02e74568(param_2,lVar4 + 8,&local_54);
          *(undefined4 *)(lVar4 + 0x18) = local_54;
          *param_6 = *param_6 + fVar6;
          local_54 = *(undefined4 *)(lVar4 + 0x18);
          fVar6 = (float)FUN_02e74568(param_1,lVar4 + 8,&local_54);
          *(undefined4 *)(lVar4 + 0x18) = local_54;
          *param_5 = *param_5 + fVar6;
          lVar3 = *(long *)(param_3 + 0x50);
          uVar2 = *(uint *)(param_3 + 0x58);
          lVar5 = lVar4;
        }
      }
    }
  }
  return;
}


