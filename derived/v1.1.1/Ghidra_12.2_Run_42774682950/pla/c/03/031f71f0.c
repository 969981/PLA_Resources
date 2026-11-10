/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f71f0; name: FUN_031f71f0
 */


void FUN_031f71f0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28) * 8 + -8) + 0x194) =
       *(undefined4 *)(param_2 + 0x194);
  iVar1 = *(int *)(param_2 + 0x194);
  lVar3 = (long)*(int *)(param_1 + 0x28) + -1;
  iVar2 = (int)lVar3;
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 != iVar1) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3 * 8);
  }
  return;
}


