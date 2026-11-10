/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327f55c; name: FUN_0327f55c
 */


undefined8 * FUN_0327f55c(long *param_1,uint param_2,undefined8 *param_3,uint param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong local_48;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar2 = (*param_5 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar2) {
    param_2 = uVar2;
  }
  FUN_032bd100(param_2,8,*param_5,&local_48);
  uVar2 = *param_5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
  if ((((0 < (int)param_4) && (*puVar1 = *param_3, param_4 != 1)) &&
      (puVar1[1] = param_3[1], param_4 != 2)) &&
     ((puVar1[2] = param_3[2], param_4 != 3 && (puVar1[3] = param_3[3], param_4 != 4)))) {
    lVar3 = (ulong)param_4 - 4;
    puVar4 = param_3 + 4;
    puVar5 = puVar1 + 4;
    do {
      lVar3 = lVar3 + -1;
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) << 3);
  }
  uVar2 = (uint)(local_48 >> 3);
  if (0x1fffffff7 < local_48) {
    uVar2 = 0x3fffffff;
  }
  *param_5 = uVar2;
  return puVar1;
}


