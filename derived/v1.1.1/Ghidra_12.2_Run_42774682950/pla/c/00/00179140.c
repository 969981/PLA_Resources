/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00179140; name: FUN_00179140
 */


ulong FUN_00179140(ulong *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  void *__src;
  ulong uVar1;
  ulong local_38;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar1 = *param_1;
  if (uVar1 == 0) goto LAB_001791a4;
  do {
    __src = (void *)param_1[1];
    while( true ) {
      __n = uVar1;
      if (param_3 <= uVar1) {
        __n = param_3;
      }
      memcpy(param_2,__src,__n);
      uVar1 = *param_1 - __n;
      param_2 = (void *)((long)param_2 + __n);
      param_3 = param_3 - __n;
      *param_1 = uVar1;
      param_1[1] = param_1[1] + __n;
      if (param_3 == 0) {
        return 0;
      }
      if (uVar1 != 0) break;
LAB_001791a4:
      __src = (void *)(*(code *)param_1[2])(param_1[4],param_1[3],&local_38);
      if (__src == (void *)0x0) {
        return param_3;
      }
      if (local_38 == 0) {
        return param_3;
      }
      *param_1 = local_38;
      param_1[1] = (ulong)__src;
      uVar1 = local_38;
    }
  } while( true );
}


