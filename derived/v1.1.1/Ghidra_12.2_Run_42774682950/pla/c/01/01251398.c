/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01251398; name: FUN_01251398
 */


void FUN_01251398(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = FUN_012510b8();
  uVar1 = FUN_0281a4fc();
  param_1 = param_1 + (long)param_2 * 8;
  *(undefined4 *)(param_1 + 0x12e8) = uVar1;
  uVar1 = FUN_0281a508(uVar2);
  *(undefined4 *)(param_1 + 0x12ec) = uVar1;
  return;
}


