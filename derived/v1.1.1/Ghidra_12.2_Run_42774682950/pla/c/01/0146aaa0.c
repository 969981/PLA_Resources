/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146aaa0; name: FUN_0146aaa0
 */


void FUN_0146aaa0(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x6d0);
  uVar3 = 1L << (param_2 & 0x3f);
  uVar1 = uVar4 | uVar3;
  if ((param_3 & 1) == 0) {
    uVar1 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
  }
  *(ulong *)(param_1 + 0x6d0) = uVar1;
  if ((((param_4 & 1) == 0) || (*(char *)(param_1 + 0x6a0) == '\0')) ||
     (((uVar4 & 3) != 0) == ((uVar1 & 3) != 0))) {
    return;
  }
  if ((uVar1 & 3) != 0) {
    FUN_0146785c();
    return;
  }
  FUN_01466348();
  if ((*(byte *)(param_1 + 0x6d0) & 3) == 0) {
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_014610bc(*(undefined8 *)(lVar2 + 0x3f50));
  }
  FUN_014667f0(param_1);
  return;
}


