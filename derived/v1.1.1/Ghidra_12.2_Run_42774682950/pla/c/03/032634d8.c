/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032634d8; name: FUN_032634d8
 */


void FUN_032634d8(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  
  puVar5 = (uint *)((long)param_1 + 0xc);
  uVar4 = *puVar5;
  uVar1 = (((int)param_1[2] >> 5) + 1) * param_2;
  if ((int)(uVar4 & 0x3fffffff) < (int)uVar1) {
    lVar6 = *param_1;
    lVar3 = param_1[1];
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar4 = *puVar5;
    }
    uVar4 = (uVar4 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar4) {
      uVar4 = 0x3fffffff;
    }
    uVar2 = uVar1;
    if ((int)uVar1 <= (int)uVar4) {
      uVar2 = uVar4;
    }
    lVar3 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,4,lVar6,(int)lVar3,puVar5);
    *param_1 = lVar3;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if ((int)uVar4 < (int)uVar1) {
    *(uint *)(param_1 + 1) = uVar1;
    memset((void *)(*param_1 + (long)(int)uVar4 * 4),0,(ulong)(uVar1 + ~uVar4) * 4 + 4);
    return;
  }
  if ((int)uVar1 < (int)uVar4) {
    *(uint *)(param_1 + 1) = uVar1;
  }
  return;
}


