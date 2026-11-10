/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087e9d4; name: FUN_0087e9d4
 */


void FUN_0087e9d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [128];
  
  (**(code **)PTR_DAT_04378a30)(auStack_b0,*param_3);
  FUN_0087c39c(auStack_b0,param_4);
  uVar1 = (**(code **)PTR_DAT_04378aa8)(auStack_b0);
  *param_1 = uVar1;
  uVar1 = (**(code **)PTR_DAT_04378ab0)(auStack_b0);
  *param_2 = uVar1;
  return;
}


