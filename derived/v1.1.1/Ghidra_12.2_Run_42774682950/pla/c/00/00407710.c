/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407710; name: FUN_00407710
 */


ulong FUN_00407710(uint *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long local_18;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    if (uVar1 != 0) {
      if (*(__compar_fn_t *)(param_1 + 6) == (__compar_fn_t)0x0) {
        if (0 < (int)uVar1) {
          uVar3 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 2) + uVar3 * 8) == param_2) {
              return uVar3 & 0xffffffff;
            }
            uVar3 = uVar3 + 1;
          } while (uVar1 != uVar3);
          return 0xffffffff;
        }
      }
      else {
        local_18 = param_2;
        if (param_1[4] == 0) {
          if (1 < (int)uVar1) {
            qsort(*(void **)(param_1 + 2),(long)(int)uVar1,8,*(__compar_fn_t *)(param_1 + 6));
          }
          param_1[4] = 1;
        }
        if ((param_2 != 0) &&
           (lVar2 = FUN_00408b00(&local_18,*(undefined8 *)(param_1 + 2),*param_1,8,
                                 *(undefined8 *)(param_1 + 6),2), lVar2 != 0)) {
          return (ulong)(lVar2 - *(long *)(param_1 + 2)) >> 3;
        }
      }
    }
  }
  return 0xffffffff;
}


