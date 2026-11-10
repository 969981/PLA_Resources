/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03324a90; name: FUN_03324a90
 */


void FUN_03324a90(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_03325040();
  *param_1 = &PTR_LAB_043503c0;
  param_1[3] = param_2;
  uVar2 = (**(code **)(*param_2 + 0x40))(param_2);
  param_1[4] = uVar2;
  iVar1 = 0x10000;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  FUN_0332498c(param_1 + 5,iVar1);
  FUN_032d645c(param_1[3]);
  return;
}


