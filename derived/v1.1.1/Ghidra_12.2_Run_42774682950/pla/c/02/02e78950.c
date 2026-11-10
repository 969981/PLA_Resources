/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e78950; name: FUN_02e78950
 */


undefined8
FUN_02e78950(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,void *param_6,uint param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  void *__dest;
  long lVar5;
  
  if (param_7 == 0) {
    uVar4 = FUN_02e7d510();
    lVar5 = FUN_02e7de5c(DAT_0440a128,0x34,uVar4);
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(*DAT_0442d138)(5,(ulong)param_7);
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    uVar4 = FUN_02e7d510();
    lVar5 = FUN_02e7de5c(DAT_0440a128,0x34,uVar4);
    memcpy(__dest,param_6,(ulong)param_7);
  }
  *(undefined4 *)(lVar5 + 4) = param_1;
  *(undefined8 *)(lVar5 + 8) = param_2;
  *(undefined4 *)(lVar5 + 0x10) = param_3;
  *(undefined4 *)(lVar5 + 0x14) = param_4;
  *(undefined4 *)(lVar5 + 0x18) = param_5;
  *(void **)(lVar5 + 0x1c) = __dest;
  *(uint *)(lVar5 + 0x24) = param_7;
  piVar1 = (int *)(DAT_0440a128 + 0x9c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return 1;
}


