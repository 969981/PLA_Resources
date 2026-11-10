/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f1bbc; name: FUN_027f1bbc
 */


undefined8 FUN_027f1bbc(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00150310(param_1,2);
  if (iVar1 == 0) {
    *param_2 = 1;
    param_2[1] = param_2[1] + 1;
    return 0;
  }
  uVar2 = FUN_027e740c(param_1,2,param_2);
  return uVar2;
}


