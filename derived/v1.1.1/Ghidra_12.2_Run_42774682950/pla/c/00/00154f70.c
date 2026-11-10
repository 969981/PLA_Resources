/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00154f70; name: FUN_00154f70
 */


void FUN_00154f70(long *param_1)

{
  void *__src;
  void *__dest;
  undefined4 uVar1;
  long lVar2;
  size_t local_38;
  
  lVar2 = param_1[3];
  __src = (void *)FUN_00150da0(lVar2,0xffffffff,&local_38);
  if ((long *)*param_1 != param_1 + 4) {
    FUN_0014ff70(lVar2,0xfffffffe,1);
  }
  if (local_38 != 0) {
    __dest = (void *)FUN_00154c30(param_1,local_38);
    memcpy(__dest,__src,local_38);
    param_1[2] = param_1[2] + local_38;
  }
  uVar1 = 0xfffffffe;
  if ((long *)*param_1 == param_1 + 4) {
    uVar1 = 0xffffffff;
  }
  FUN_0014ff70(lVar2,uVar1,0xffffffff);
  FUN_0014ff10(lVar2,0xfffffffe);
  return;
}


