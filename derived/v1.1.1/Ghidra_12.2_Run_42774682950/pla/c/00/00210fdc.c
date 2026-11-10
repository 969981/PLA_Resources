/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00210fdc; name: FUN_00210fdc
 */


undefined8 FUN_00210fdc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0x100;
  lVar1 = FUN_0020c76c(param_2,0x100,8);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    uVar2 = 0;
    param_1[2] = 0;
  }
  return uVar2;
}


