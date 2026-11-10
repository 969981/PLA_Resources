/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070f410; name: FUN_0070f410
 */


void FUN_0070f410(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  cVar1 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = FUN_00612290();
  param_1[2] = 0;
  param_1[3] = uVar2;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = FUN_00612290();
  param_1[6] = 0;
  param_1[7] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((cVar1 != '\0') && (uVar3 = FUN_0070f010(param_1,param_2), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


