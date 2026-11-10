/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec73c8; name: FUN_02ec73c8
 */


void FUN_02ec73c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar2 = (long *)param_2[2];
  param_1[2] = plVar2;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((((plVar2 != (long *)0x0) && (DAT_0440a158 != 0)) && (*plVar2 != 0)) &&
     (iVar1 = FUN_02edc8a0(), iVar1 == 1)) {
    param_1[7] = *(undefined8 *)param_1[2];
  }
  return;
}


