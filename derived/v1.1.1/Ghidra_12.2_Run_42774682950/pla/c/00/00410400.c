/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00410400; name: FUN_00410400
 */


undefined8 FUN_00410400(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == param_2) {
    lVar2 = FUN_0040c660(param_1,(int)param_1[1] + 1);
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = (int)param_2[1];
  }
  else {
    *(int *)(param_1 + 2) = (int)param_2[2];
    lVar2 = FUN_0040c660(param_1,(int)param_2[1] + 1);
    if (lVar2 == 0) {
      return 0;
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
    iVar1 = (int)param_2[1];
  }
  if (iVar1 < 1) {
    return 1;
  }
  lVar3 = *param_1;
  lVar2 = 0;
  uVar4 = 0;
  lVar5 = *param_2;
  do {
    lVar6 = lVar2 * 4;
    lVar2 = lVar2 + 1;
    iVar1 = *(int *)(lVar5 + lVar6);
    *(uint *)(lVar3 + lVar6) = uVar4 | iVar1 << 1;
    uVar4 = -(iVar1 >> 0x1f);
  } while ((int)lVar2 < (int)param_2[1]);
  if (uVar4 != 0) {
    *(undefined4 *)(lVar3 + lVar2 * 4) = 1;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return 1;
}


