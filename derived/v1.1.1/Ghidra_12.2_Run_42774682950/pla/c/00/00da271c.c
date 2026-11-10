/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da271c; name: FUN_00da271c
 */


void FUN_00da271c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  
  if ((*(byte *)(param_1 + 0x7a) & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x79) & 1) != 0) {
    FUN_00da28bc(param_2);
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x90);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x84));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00da27a0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00da27a0:
  if ((*(byte *)(param_1 + 0x79) & 1) == 0) {
    local_58 = *param_2;
    local_50 = (long *)param_2[1];
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[0xb];
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar7;
      }
      piVar2 = (int *)(lVar6 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_48 = param_3;
    FUN_00da2924(param_1 + 0xd0,&local_58);
    if (local_50 != (long *)0x0) {
      lVar6 = local_50[0xb];
      piVar2 = (int *)(lVar6 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
  }
  else {
    FUN_00da28bc(param_2);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x84));
  return;
}


