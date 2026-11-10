/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02022520; name: FUN_02022520
 */


undefined8 FUN_02022520(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00150310();
  if (iVar1 == 0) {
    *param_3 = 1;
    param_3[1] = param_3[1] + 1;
    return 0;
  }
  uVar2 = FUN_02021fe8(param_1,param_2,param_3);
  return uVar2;
}


