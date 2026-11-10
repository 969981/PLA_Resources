/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00433b10; name: FUN_00433b10
 */


undefined8 FUN_00433b10(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = param_2;
  if ((int)param_3[1] <= (int)param_2[1]) {
    plVar1 = param_3;
    param_3 = param_2;
  }
  lVar2 = FUN_0040c660(param_1,(int)param_3[1]);
  if (lVar2 == 0) {
    return 0;
  }
  if ((int)plVar1[1] < 1) {
    uVar3 = 0;
    iVar4 = (int)param_3[1];
    if (iVar4 < 1) goto LAB_00433bc4;
  }
  else {
    lVar2 = *param_3;
    uVar3 = 0;
    lVar5 = *plVar1;
    lVar6 = *param_1;
    do {
      lVar7 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(uint *)(lVar6 + lVar7) = *(uint *)(lVar5 + lVar7) ^ *(uint *)(lVar2 + lVar7);
    } while ((long)uVar3 < (long)(int)plVar1[1]);
    iVar4 = (int)param_3[1];
    if (iVar4 <= (int)uVar3) goto LAB_00433bc4;
  }
  lVar2 = *param_3;
  uVar3 = uVar3 & 0xffffffff;
  lVar5 = *param_1;
  do {
    lVar6 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
    iVar4 = (int)param_3[1];
  } while ((int)uVar3 < iVar4);
LAB_00433bc4:
  *(int *)(param_1 + 1) = iVar4;
  FUN_0040c8f0(param_1);
  return 1;
}


