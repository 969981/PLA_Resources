/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03392f70; name: FUN_03392f70
 */


void FUN_03392f70(long *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  iVar2 = (int)param_1[1];
  iVar3 = 0;
  if ((long)param_2 != 0) {
    iVar3 = (int)((ulong)(long)iVar2 / (ulong)(long)param_2);
  }
  iVar3 = iVar2 - iVar3 * param_2;
  uVar4 = param_2 - iVar3;
  if (iVar3 != 0 && uVar4 != 0) {
    uVar7 = *(uint *)((long)param_1 + 0xc);
    lVar6 = *param_1;
    uVar1 = uVar4 + iVar2;
    if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar7 = *(uint *)((long)param_1 + 0xc);
      }
      uVar7 = (uVar7 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
      uVar5 = uVar1;
      if ((int)uVar1 <= (int)uVar7) {
        uVar5 = uVar7;
      }
      lVar6 = FUN_032bd1d4(PTR_PTR_0434a080,uVar5,1,lVar6,iVar2);
      *param_1 = lVar6;
    }
    if (0 < (int)uVar4) {
      memset((void *)(lVar6 + iVar2),0,(ulong)uVar4);
    }
    *(uint *)(param_1 + 1) = uVar1;
  }
  iVar2 = *param_3;
  if (*param_3 <= param_2) {
    iVar2 = param_2;
  }
  *param_3 = iVar2;
  return;
}


