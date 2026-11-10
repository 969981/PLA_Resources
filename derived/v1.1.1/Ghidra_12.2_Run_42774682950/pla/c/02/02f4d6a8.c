/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4d6a8; name: FUN_02f4d6a8
 */


undefined8 FUN_02f4d6a8(long *param_1,int param_2,long *param_3,char *param_4)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_3 + 1);
  uVar8 = *(uint *)((long)param_3 + 0xc);
  if (uVar8 <= uVar3) {
    iVar1 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar1 = 1;
    }
    uVar8 = iVar1 + uVar8;
    lVar4 = (*DAT_0442d148)(0,*param_3,(ulong)uVar8 << 3);
    if (lVar4 == 0) {
      return 2;
    }
    *param_3 = lVar4;
    *(uint *)((long)param_3 + 0xc) = uVar8;
  }
  if (uVar8 <= uVar3) {
    return 2;
  }
  plVar2 = (long *)(*param_3 + (ulong)*(uint *)(param_3 + 1) * 8);
  *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  *plVar2 = (long)param_1;
  if ((int)param_1[2] == param_2) {
    *param_4 = '\x01';
    return 1;
  }
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((uVar5 & 1) == 0) {
    if (*param_4 != '\0') {
      return 1;
    }
    if ((int)param_1[5] != 0) {
      puVar7 = (undefined8 *)param_1[4];
      do {
        uVar6 = FUN_02f4d6a8(*puVar7,param_2,param_3,param_4);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        if (*param_4 != '\0') {
          return 1;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != (undefined8 *)(param_1[4] + (ulong)*(uint *)(param_1 + 5) * 8));
    }
  }
  else if (*param_4 != '\0') {
    return 1;
  }
  *(int *)(param_3 + 1) = (int)param_3[1] + -1;
  return 1;
}


