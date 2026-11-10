/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058e880; name: FUN_0058e880
 */


undefined8 FUN_0058e880(long *param_1,void *param_2,size_t *param_3)

{
  size_t __n;
  void *__src;
  long lVar1;
  long lVar2;
  long lVar3;
  size_t __n_00;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 == (size_t *)0x0) {
    return 0;
  }
  __src = (void *)*param_1;
  if (__src != (void *)0x0) {
    lVar1 = param_1[4];
    lVar2 = param_1[2];
    if (lVar1 != lVar2) {
      lVar3 = param_1[3];
      if (lVar3 == 8) {
        __n_00 = 0;
      }
      else {
        __n_00 = *param_3;
        if (8U - lVar3 <= *param_3) {
          __n_00 = 8U - lVar3;
        }
        memcpy(param_2,(void *)((long)param_1 + lVar3 + 8),__n_00);
        *param_3 = *param_3 - __n_00;
        lVar1 = param_1[3];
        param_1[3] = lVar1 + __n_00;
        if (lVar1 + __n_00 != 8) goto LAB_0058e968;
        lVar1 = param_1[4];
        param_2 = (void *)((long)param_2 + __n_00);
        lVar2 = param_1[2];
        __src = (void *)*param_1;
      }
      __n = lVar1 - lVar2;
      if (*param_3 <= (ulong)(lVar1 - lVar2)) {
        __n = *param_3;
      }
      memcpy(param_2,__src,__n);
      *param_1 = *param_1 + __n;
      __n_00 = __n + __n_00;
      param_1[2] = param_1[2] + __n;
      goto LAB_0058e968;
    }
  }
  __n_00 = 0;
LAB_0058e968:
  *param_3 = __n_00;
  return 1;
}


