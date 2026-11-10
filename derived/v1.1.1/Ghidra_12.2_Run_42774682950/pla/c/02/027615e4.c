/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027615e4; name: FUN_027615e4
 */


void FUN_027615e4(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = FUN_027616e0();
  if ((ulong)param_3[1] < lVar1 + param_3[2] + 2U) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_02761960(param_1,param_2,param_3);
  return;
}


