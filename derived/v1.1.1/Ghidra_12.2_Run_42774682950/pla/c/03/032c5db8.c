/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5db8; name: FUN_032c5db8
 */


long * FUN_032c5db8(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_2 < 1) {
    return param_1;
  }
  *(char *)((long)(int)param_1[1] + *param_1 + -1) = (char)param_3;
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((long)param_1 + 0xc);
  uVar3 = (uVar6 & 0x3fffffff) - 1;
  uVar1 = uVar5 + param_2;
  uVar7 = uVar1;
  if ((int)uVar3 <= (int)uVar1) {
    uVar7 = uVar3;
  }
  if ((int)param_1[0x12] == 0) {
    uVar1 = uVar7;
  }
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar1) {
    lVar4 = *param_1;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar6 = *(uint *)((long)param_1 + 0xc);
    }
    uVar7 = (uVar6 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar6 = uVar1;
    if ((int)uVar1 <= (int)uVar7) {
      uVar6 = uVar7;
    }
    lVar4 = FUN_032bd1d4(PTR_PTR_0434a090,uVar6,1,lVar4,uVar5);
    uVar5 = *(uint *)(param_1 + 1);
    *param_1 = lVar4;
    iVar2 = uVar5 - uVar1;
  }
  else {
    iVar2 = uVar5 - uVar1;
  }
  if ((int)uVar5 < (int)uVar1) {
    *(uint *)(param_1 + 1) = uVar1;
    memset((void *)(*param_1 + (long)(int)uVar5),param_3,(ulong)(uVar1 + ~uVar5) + 1);
    uVar5 = *(uint *)(param_1 + 1);
  }
  else if (uVar5 != uVar1 && iVar2 < 0 == SBORROW4(uVar5,uVar1)) {
    *(uint *)(param_1 + 1) = uVar1;
    uVar5 = uVar1;
  }
  *(undefined1 *)(*param_1 + (long)(int)uVar5 + -1) = 0;
  return param_1;
}


