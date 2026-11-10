/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e8660; name: FUN_006e8660
 */


void FUN_006e8660(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_00612290();
  param_1[2] = 0;
  param_1[3] = uVar1;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = FUN_00612290();
  param_1[6] = 0;
  param_1[7] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = FUN_006e86d0(param_1,param_2);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


