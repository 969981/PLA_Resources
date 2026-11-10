/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166fb0; name: FUN_00166fb0
 */


void FUN_00166fb0(long *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  if (*(int *)((long)param_1 + 0x24) < (int)param_1[4]) {
    lVar6 = (long)(int)param_1[4] + -1;
    uVar4 = *(uint *)(*(long *)(*param_1 + 0x38) + lVar6 * 4);
    if ((uVar4 & 0x3f) == 4) {
      uVar5 = uVar4 >> 6 & 0xff;
      iVar1 = uVar5 + (uVar4 >> 0x17);
      iVar2 = param_3 + param_2;
      if (((int)uVar5 <= (int)param_2 && (int)param_2 <= iVar1 + 1) ||
         ((int)param_2 <= (int)uVar5 && (int)uVar5 <= iVar2)) {
        if ((int)param_2 <= (int)uVar5) {
          uVar5 = param_2;
        }
        iVar3 = iVar2 + 0x1ff;
        if (iVar2 <= iVar1) {
          iVar3 = iVar1;
        }
        *(uint *)(*(long *)(*param_1 + 0x38) + lVar6 * 4) =
             uVar4 & 0x7fc000 | uVar4 & 0x3f | (uVar5 & 0xff) << 6 | (iVar3 - uVar5) * 0x800000;
        return;
      }
    }
  }
  FUN_001674a0(param_1,param_3 * 0x800000 - 0x800000U | param_2 << 6 | 4);
  return;
}


