/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046e2d0; name: FUN_0046e2d0
 */


undefined8 FUN_0046e2d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_64 [64];
  undefined4 local_24;
  
  if ((((*param_1 == 0) || (iVar1 = FUN_00444b90(param_1[1],auStack_64,&local_24), iVar1 == 0)) ||
      (iVar1 = FUN_00444d20(param_1[1],param_1[3]), iVar1 == 0)) ||
     ((iVar1 = FUN_00444ad0(param_1[1],auStack_64,local_24), iVar1 == 0 ||
      (iVar1 = FUN_00444b90(param_1[1],param_2,param_3), iVar1 == 0)))) {
    return 0;
  }
  return 1;
}


