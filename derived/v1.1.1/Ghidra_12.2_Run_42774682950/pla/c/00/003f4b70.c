/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f4b70; name: FUN_003f4b70
 */


undefined8 FUN_003f4b70(long param_1,char *param_2,undefined8 *param_3)

{
  size_t __n;
  undefined8 uVar1;
  void *__dest;
  
  __n = strlen(param_2);
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_002ec2d0(param_1);
    *param_3 = uVar1;
  }
  if (__n != 0) {
    __dest = (void *)FUN_002ebd80(__n);
    param_3[1] = __dest;
    param_3[2] = __n;
    memcpy(__dest,param_2,__n);
  }
  return 0;
}


