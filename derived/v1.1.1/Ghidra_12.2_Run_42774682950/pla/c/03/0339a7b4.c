/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a7b4; name: FUN_0339a7b4
 */


int FUN_0339a7b4(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  
  if (param_2 < 0x101) {
    param_2 = 0x100;
  }
  uVar7 = *(uint *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x28);
  uVar1 = param_2 + iVar2 + 1;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar7 = *(uint *)(param_1 + 0x34);
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar3 = uVar1;
    if ((int)uVar1 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    lVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar3,1,lVar8,iVar2);
    *(long *)(param_1 + 0x28) = lVar5;
  }
  else {
    lVar5 = lVar8;
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  iVar4 = FUN_032af29c(*(undefined8 *)(param_1 + 0x38),lVar5 + iVar2,param_2);
  iVar4 = iVar2 + iVar4;
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)iVar4) = 0;
  iVar6 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) != iVar4) {
    *(int *)(param_1 + 0x30) = iVar4;
    iVar6 = iVar4;
  }
  if (*(long *)(param_1 + 0x28) != lVar8) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x28) + (*(long *)(param_1 + 0x20) - lVar8);
  }
  return iVar6 - iVar2;
}


