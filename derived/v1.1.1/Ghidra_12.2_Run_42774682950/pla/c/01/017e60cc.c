/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e60cc; name: FUN_017e60cc
 */


undefined8 FUN_017e60cc(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 400);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x184));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_017e6130;
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
LAB_017e6130:
  lVar6 = *(long *)(param_1 + 0xc0);
  lVar5 = param_1 + 0xb8;
  if (lVar5 != lVar6) {
    lVar7 = lVar6;
    do {
      lVar8 = *(long *)(lVar7 + 0x10);
      if (((*(int *)(lVar8 + 0x78) == param_2) && (*(int *)(lVar8 + 0x7c) == 0)) &&
         (*(char *)(lVar8 + 0x71) != '\0')) goto LAB_017e61d4;
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar5 != lVar7);
    do {
      if ((*(int *)(*(long *)(lVar6 + 0x10) + 0x78) == param_2) &&
         (iVar2 = *(int *)(*(long *)(lVar6 + 0x10) + 0x7c), iVar2 != 0)) {
        if (iVar2 != 1 && iVar2 != 4) goto LAB_017e61d4;
        break;
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar5 != lVar6);
  }
  uVar9 = 0;
LAB_017e61ac:
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x184));
  return uVar9;
LAB_017e61d4:
  uVar9 = 1;
  goto LAB_017e61ac;
}


