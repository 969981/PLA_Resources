/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026c06ec; name: FUN_026c06ec
 */


undefined8 FUN_026c06ec(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 5) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (param_3 < 5) {
    *param_1 = 0;
    param_1[1] = 0;
    uVar1 = FUN_00cf9db0(param_1,param_2 + (long)(int)param_3 * 0x10 + 0x88);
    return uVar1;
  }
  FUN_026c2060();
  return *(undefined8 *)PTR_DAT_0437b4c8;
}


