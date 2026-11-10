/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064f424; name: FUN_0064f424
 */


void FUN_0064f424(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar3 = (long *)FUN_00612290();
  param_1[5] = plVar3;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0064f500 to 0064f507 has its CatchHandler @ 0064f508 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x11);
    *(char *)(param_1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0064f4e8;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
    param_1[2] = uVar5 | 1;
    param_1[3] = __n;
    param_1[4] = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_0064f4e8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


