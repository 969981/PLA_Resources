/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0049cfd0; name: FUN_0049cfd0
 */


void FUN_0049cfd0(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  size_t __n;
  ulong __n_00;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    __n = 0x10 - lVar2;
    __dest = (void *)(param_1 + lVar2 + 0xd0);
    if (param_3 < __n) {
      memcpy(__dest,param_2,param_3);
      __n_00 = lVar2 + param_3;
      goto LAB_0049d084;
    }
    memcpy(__dest,param_2,__n);
    FUN_0049d0a0(param_1,param_1 + 0xd0,0x10,1);
    param_2 = (void *)((long)param_2 + __n);
    param_3 = param_3 - __n;
  }
  __n_00 = param_3 & 0xf;
  uVar1 = param_3 - __n_00;
  if (0xf < uVar1) {
    FUN_0049d0a0(param_1,param_2,uVar1,1);
    param_2 = (void *)((long)param_2 + uVar1);
  }
  if (__n_00 != 0) {
    memcpy((void *)(param_1 + 0xd0),param_2,__n_00);
  }
LAB_0049d084:
  *(ulong *)(param_1 + 0xe0) = __n_00;
  return;
}


