/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00210478; name: FUN_00210478
 */


void FUN_00210478(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (*(int *)(param_1 + 4) != -1)) {
    iVar1 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      FUN_0020c75c(param_1[1],param_1,*param_1);
      return;
    }
  }
  return;
}


