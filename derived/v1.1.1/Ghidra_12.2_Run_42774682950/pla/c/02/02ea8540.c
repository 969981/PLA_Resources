/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea8540; name: FUN_02ea8540
 */


undefined8 FUN_02ea8540(undefined4 *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *__dest;
  
  if (*(long *)(param_1 + 2) != 0) {
    FUN_02f59e60(1);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (param_3 != 0) {
    __dest = (void *)(*DAT_0442d138)(1,(ulong)param_3);
    *(void **)(param_1 + 2) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    memcpy(__dest,param_2,(ulong)param_3);
  }
  *param_1 = param_4;
  return 1;
}


