/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006eb9b0; name: FUN_006eb9b0
 */


void FUN_006eb9b0(long param_1,char *param_2)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  void *__dest;
  ulong uVar3;
  ulong local_50;
  size_t sStack_48;
  void *local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  sStack_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
  plVar1 = (long *)FUN_00612290();
  local_38 = plVar1;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006ebaac to 006ebab3 has its CatchHandler @ 006ebab4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_50 = CONCAT71(local_50._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_50 | 1);
    if (__n == 0) goto LAB_006eba60;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    local_50 = uVar3 | 1;
    sStack_48 = __n;
    local_40 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_006eba60:
  *(undefined1 *)((long)__dest + __n) = 0;
  lVar2 = *(long *)(param_1 + 0x48);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x38));
  *(undefined1 *)(lVar2 + 0x78) = 1;
  *(long **)(lVar2 + 0x70) = local_38;
  *(void **)(lVar2 + 0x68) = local_40;
  *(size_t *)(lVar2 + 0x60) = sStack_48;
  *(ulong *)(lVar2 + 0x58) = local_50;
  nn::os::SignalEvent((EventType *)(lVar2 + 0x10));
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x38));
  return;
}


