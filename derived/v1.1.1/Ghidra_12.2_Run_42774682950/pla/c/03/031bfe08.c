/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bfe08; name: FUN_031bfe08
 */


void FUN_031bfe08(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  
  if (((*(uint *)(param_1 + 0x128) & 0x7fffffff) != 0) && (iVar2 = (int)param_2[1], 1 < iVar2)) {
    uVar4 = iVar2 - 1;
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < (int)uVar4) {
      lVar5 = FUN_031c0844(PTR_PTR_0434a080,uVar4,*param_3,(int)param_3[1]);
      *param_3 = lVar5;
    }
    iVar3 = (int)param_3[1];
    if (iVar3 < (int)uVar4) {
      *(uint *)(param_3 + 1) = uVar4;
      memset((void *)(*param_3 + (long)iVar3 * 4),0xff,(ulong)((iVar2 - iVar3) - 2) * 4 + 4);
    }
    else if (iVar2 <= iVar3) {
      *(uint *)(param_3 + 1) = uVar4;
    }
    uVar7 = 0;
    do {
      lVar5 = *param_2;
      local_58[0] = *(undefined4 *)(lVar5 + uVar7 * 4 + 4);
      uVar1 = uVar7 + 1;
      local_60[0] = 0xffffffff;
      puVar6 = (uint *)FUN_031c08cc(param_1 + 0x120,local_58,local_60);
      if (*puVar6 != 0xffffffff) {
        *(uint *)(*param_3 + uVar7 * 4) = *(uint *)(lVar5 + uVar7 * 4) & 0xffc00000 | *puVar6;
      }
      uVar7 = uVar1;
    } while (uVar4 != uVar1);
  }
  return;
}


