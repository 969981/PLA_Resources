/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00322db4; name: FUN_00322db4
 */


long * FUN_00322db4(long *param_1,long *param_2)

{
  ulong uVar1;
  size_t __n;
  long lVar2;
  long *__dest;
  int local_24;
  long *local_18;
  
  param_1[4] = (long)param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x7fffffff;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_18,&local_24);
  if ((uVar1 & 1) == 0) {
    __dest = param_1 + 5;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = (long)__dest;
    param_1[1] = (long)__dest;
    param_1[2] = 0;
  }
  else {
    __n = (size_t)local_24;
    *(int *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - local_24;
    if (local_24 < 0x11) {
      param_1[2] = (long)(param_1 + 5);
      *param_1 = (long)(param_1 + 7);
      param_1[1] = (long)(param_1 + 7);
      __dest = (long *)((long)(param_1 + 5) + (0x20 - __n));
      memcpy(__dest,local_18,__n);
    }
    else {
      param_1[2] = (long)(param_1 + 5);
      *(int *)((long)param_1 + 0x1c) = (*(int *)((long)param_1 + 0x1c) - local_24) + 0x10;
      lVar2 = (long)local_18 + (__n - 0x10);
      *param_1 = lVar2;
      param_1[1] = lVar2;
      __dest = local_18;
      if (param_1[9] == 1) {
        param_1[9] = 2;
      }
    }
  }
  return __dest;
}


