/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03397ff8; name: FUN_03397ff8
 */


void FUN_03397ff8(long param_1,int param_2)

{
  undefined8 uVar1;
  
  param_2 = *(int *)(param_1 + 0x298) + param_2;
  if ((int)(*(uint *)(param_1 + 0x29c) & 0x3fffffff) < param_2) {
    uVar1 = FUN_03398570(PTR_PTR_0434a080,param_2,*(undefined8 *)(param_1 + 0x290),
                         *(int *)(param_1 + 0x298),param_1 + 0x29c);
    *(undefined8 *)(param_1 + 0x290) = uVar1;
  }
  return;
}


