/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f4be0; name: FUN_003f4be0
 */


undefined8 FUN_003f4be0(long param_1,void *param_2,size_t param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  void *__dest;
  
  param_4[2] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  if (param_1 != 0) {
    uVar1 = FUN_002ec2d0();
    *param_4 = uVar1;
  }
  if (param_3 != 0) {
    __dest = (void *)FUN_002ebd80(param_3);
    param_4[1] = __dest;
    param_4[2] = param_3;
    memcpy(__dest,param_2,param_3);
  }
  return 0;
}


