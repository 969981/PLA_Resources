/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877120; name: FUN_00877120
 */


undefined4 FUN_00877120(int param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 != 2) {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    uVar2 = 4;
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  bVar1 = (param_3 & 1) == 0;
  uVar2 = 6;
  if (bVar1) {
    uVar2 = 1;
  }
  uVar3 = 7;
  if (bVar1) {
    uVar3 = 5;
  }
  if ((param_2 & 1) != 0) {
    uVar2 = uVar3;
  }
  return uVar2;
}


