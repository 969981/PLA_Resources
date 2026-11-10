/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f080; name: FUN_0014f080
 */


long FUN_0014f080(undefined8 param_1,ulong param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  if (DAT_0438e190 == 0) {
    do {
      iVar3 = DAT_0438e180;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
      if (bVar2) {
        DAT_0438e180 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 != 0) {
      uVar6 = 0;
LAB_0014f0ec:
      if (DAT_0438e180 == 0) {
        do {
          iVar3 = DAT_0438e180;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x438e180,0x10);
          if (bVar2) {
            DAT_0438e180 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) goto LAB_0014f114;
      }
      uVar6 = uVar6 + 1;
      if ((uVar6 & 0x3f) == 0) {
        sched_yield();
      }
      goto LAB_0014f0ec;
    }
LAB_0014f114:
    if (DAT_0438e190 == 0) {
      DAT_0438e198 = 0x1000;
      DAT_0438e1a0 = 0x10000;
      DAT_0438e1a8 = 0x40000;
      DAT_0438e1b0 = 0x200000;
      DAT_0438e1b8 = 7;
      DAT_0438e530 = 7;
      uVar4 = time((time_t *)0x0);
      DAT_0438e190 = uVar4 & 0xfffffffffffffff0 ^ 0x55555558;
    }
    DAT_0438e180 = 0;
  }
  if ((param_2 < 0x401) || (-DAT_0438e198 - 0x400U <= param_2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0014ee60(param_1,param_2);
    *(undefined4 *)(lVar5 + 0x390) = 8;
    uVar6 = *(uint *)(lVar5 + 0x370) & 0xfffffffd;
    if (param_3 != 0) {
      uVar6 = *(uint *)(lVar5 + 0x370) | 2;
    }
    *(uint *)(lVar5 + 0x370) = uVar6;
  }
  return lVar5;
}


