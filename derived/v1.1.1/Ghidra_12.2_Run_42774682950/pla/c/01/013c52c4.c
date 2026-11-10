/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c52c4; name: FUN_013c52c4
 */


void FUN_013c52c4(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x5bc) != 0) {
    return;
  }
  lVar2 = *param_2;
  if (lVar2 == 0x4e03765042541674) {
    uVar1 = 4;
  }
  else if (lVar2 == 0x4e037850425419da) {
    uVar1 = 2;
  }
  else {
    if (lVar2 != 0x4e03795042541b8d) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 0x5bc) = uVar1;
  return;
}


