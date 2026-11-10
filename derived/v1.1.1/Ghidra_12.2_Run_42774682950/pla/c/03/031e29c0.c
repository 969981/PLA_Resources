/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e29c0; name: FUN_031e29c0
 */


void FUN_031e29c0(undefined4 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 1);
  if ((uVar3 & 1) == 0) {
    lVar2 = *param_2;
    iVar1 = uVar3 + 1;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= (int)uVar3) {
      lVar2 = FUN_031e2e94(PTR_PTR_0434a090,iVar1);
      uVar3 = *(uint *)(param_2 + 1);
      *param_2 = lVar2;
    }
    *(undefined4 *)(lVar2 + (long)(int)uVar3 * 4) = *param_1;
    *(int *)(param_2 + 1) = iVar1;
  }
  return;
}


