/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0150935c; name: FUN_0150935c
 */


uint FUN_0150935c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(long *)(param_1 + 0xf8) == 0) || (uVar2 = FUN_00d37ad4(), (uVar2 & 1) != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  lVar3 = FUN_015093c0(param_1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar1 = FUN_0150fad0();
  return uVar4 & uVar1;
}


