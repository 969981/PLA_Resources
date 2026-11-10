/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb7bec; name: FUN_02eb7bec
 */


undefined8 FUN_02eb7bec(long *param_1,long param_2,uint param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (*(int *)((long)param_1 + 0xc) - uVar5 < param_3) {
    uVar1 = param_3 + *(int *)((long)param_1 + 0xc) + 5;
    lVar4 = FUN_02f59e50(5,*param_1,(ulong)uVar1 << 5);
    if (lVar4 == 0) {
      return 0x34;
    }
    uVar5 = *(uint *)(param_1 + 1);
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  else if (param_3 == 0) {
    return 1;
  }
  uVar6 = (ulong)param_3;
  piVar7 = (int *)(param_2 + 4);
  do {
    puVar2 = (undefined8 *)(*param_1 + (ulong)uVar5 * 0x20);
    uVar8 = *(undefined8 *)(piVar7 + 1);
    uVar6 = uVar6 - 1;
    *puVar2 = *(undefined8 *)(piVar7 + -1);
    puVar2[1] = uVar8;
    iVar3 = *piVar7;
    puVar2[3] = param_5;
    *(int *)(puVar2 + 2) = iVar3 - param_4;
    uVar5 = (int)param_1[1] + 1;
    *(uint *)(param_1 + 1) = uVar5;
    piVar7 = piVar7 + 4;
  } while (uVar6 != 0);
  return 1;
}


