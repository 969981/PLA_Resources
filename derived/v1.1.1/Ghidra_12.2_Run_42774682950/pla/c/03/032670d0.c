/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032670d0; name: FUN_032670d0
 */


void FUN_032670d0(long param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    if ((~(uint)param_3 & 0xffff) == 0) {
      return;
    }
    if ((~(uint)param_2 & 0xffff) == 0) {
      return;
    }
    piVar1 = (int *)(*(long *)(param_1 + 0x100) + (param_3 & 0xffff) * 0x20);
    piVar2 = (int *)(*(long *)(param_1 + 0x100) + (param_2 & 0xffff) * 0x20);
    iVar3 = piVar1[1] - *piVar1;
    iVar4 = piVar2[1] - *piVar2;
    iVar3 = (iVar3 * 2 & 0x10000U) + iVar3;
    iVar4 = (iVar4 * 2 & 0x10000U) + iVar4;
    if ((int)(short)iVar4 * (iVar3 >> 0x10) <= (iVar4 >> 0x10) * (int)(short)iVar3) {
      return;
    }
  }
  else {
    if ((~(uint)param_2 & 0xffff) != 0) {
      FUN_03266ea0(param_1,param_2,**(undefined2 **)(param_1 + 0xb8));
    }
    if ((~(uint)param_3 & 0xffff) == 0) {
      return;
    }
    param_2 = (ulong)*(ushort *)
                      (*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xc0) * 2 + -2);
  }
  FUN_03266ea0(param_1,param_2,param_3 & 0xffffffff);
  return;
}


