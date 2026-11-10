/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2ba64; name: FUN_02b2ba64
 */


void FUN_02b2ba64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *local_38;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x1a0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x194));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02b2bac8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02b2bac8:
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar6 = 0;
    do {
      FUN_02b3343c(&local_38,*(undefined8 *)(param_1 + 0x58),
                   *(long *)(param_1 + 0xd8) + uVar6 * 0x28);
      FUN_02b2bb6c(param_1,&local_38);
      if (local_38 != (long *)0x0) {
        plVar1 = local_38 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulong *)(param_1 + 0x110));
  }
  FUN_02b2bb6c(param_1,param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x194));
  return;
}


