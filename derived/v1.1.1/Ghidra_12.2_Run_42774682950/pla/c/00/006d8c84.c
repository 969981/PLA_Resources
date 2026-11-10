/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d8c84; name: FUN_006d8c84
 */


void FUN_006d8c84(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  size_t __n;
  void *__dest;
  long lVar5;
  char *__s;
  ulong uVar6;
  
  plVar3 = *(long **)(param_2 + 0x10);
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0x50,8);
  *param_1 = lVar4;
  param_1[1] = (long)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 2) = 0;
  __s = (char *)*param_3;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  plVar3 = (long *)FUN_00612290();
  *(long **)(lVar4 + 0x38) = plVar3;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006d8d9c to 006d8da3 has its CatchHandler @ 006d8da4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)(lVar4 + 0x21);
    *(char *)(lVar4 + 0x20) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_006d8d54;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar6,1);
    *(ulong *)(lVar4 + 0x20) = uVar6 | 1;
    *(size_t *)(lVar4 + 0x28) = __n;
    *(void **)(lVar4 + 0x30) = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_006d8d54:
  *(undefined1 *)((long)__dest + __n) = 0;
  *(undefined8 *)(lVar4 + 0x40) = *param_4;
  lVar5 = param_4[1];
  *(long *)(lVar4 + 0x48) = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


