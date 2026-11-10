/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0029843c; name: FUN_0029843c
 */


void FUN_0029843c(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 param_4,
                 undefined8 *param_5,long *param_6)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t __n;
  long lVar4;
  void *__dest;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *param_2;
  lVar4 = param_2[1];
  param_1[3] = lVar4;
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
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  plVar3 = (long *)FUN_00612290();
  param_1[0xe] = plVar3;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00298590 to 00298597 has its CatchHandler @ 00298598 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x59);
    *(char *)(param_1 + 0xb) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0029852c;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5,1);
    param_1[0xb] = uVar5 | 1;
    param_1[0xc] = __n;
    param_1[0xd] = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_0029852c:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00298534 to 0029853b has its CatchHandler @ 002985a0 */
  FUN_002985e8(param_1 + 0xf,param_4);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x19),true,0);
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = *param_5;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(bool *)((long)param_1 + 0x159) = *param_6 != 0;
  return;
}


