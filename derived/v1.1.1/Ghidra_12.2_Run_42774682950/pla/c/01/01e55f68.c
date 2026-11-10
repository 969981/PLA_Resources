/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e55f68; name: FUN_01e55f68
 */


void FUN_01e55f68(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *param_2;
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x208);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x1fc));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e55fd0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e55fd0:
  lVar6 = *(long *)(*(long *)(param_1 + 0xd0) + 0x78);
  lVar5 = lVar6;
  if (*(long *)(lVar6 + 0x1d0) != 0) {
    lVar5 = *(long *)(lVar6 + 0x1d0);
  }
  if (*(long *)(lVar6 + 0x1d8) != 0) {
    lVar6 = *(long *)(lVar6 + 0x1d8);
  }
  if (lVar5 == lVar6) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a70230(lVar8);
  lVar5 = *(long *)(param_1 + 0xe0);
  lVar6 = *(long *)(param_1 + 0xe8) - lVar5;
  uVar2 = 0;
  if (lVar6 != 0) {
    uVar2 = lVar6 * 0x40 - 1;
  }
  uVar7 = *(long *)(param_1 + 0x120) + *(long *)(param_1 + 0x118);
  if (uVar2 == uVar7) {
    FUN_01e5ee3c(param_1 + 0xd8);
    uVar7 = *(long *)(param_1 + 0x118) + *(long *)(param_1 + 0x120);
    lVar5 = *(long *)(param_1 + 0xe0);
    if (*(long *)(param_1 + 0xe8) == lVar5) goto LAB_01e56094;
  }
  else if (*(long *)(param_1 + 0xe8) == lVar5) {
LAB_01e56094:
    lVar5 = 0;
    goto LAB_01e56040;
  }
  lVar5 = *(long *)(lVar5 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8;
LAB_01e56040:
  FUN_01e5fc84(param_1 + 0x128,lVar5,param_2);
  *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  *(undefined8 *)(lVar8 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x1fc));
  return;
}


