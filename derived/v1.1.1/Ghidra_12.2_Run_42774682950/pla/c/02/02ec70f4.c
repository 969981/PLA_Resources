/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec70f4; name: FUN_02ec70f4
 */


void FUN_02ec70f4(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    FUN_02ec7038(*param_1);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x28) + -1;
    *(int *)(lVar2 + 0x28) = iVar1;
    if ((lVar2 != 0) && (iVar1 == 0)) {
      FUN_02ec69c0(lVar2);
      FUN_02f59e60(0,lVar2);
    }
    *param_1 = 0;
  }
  return;
}


