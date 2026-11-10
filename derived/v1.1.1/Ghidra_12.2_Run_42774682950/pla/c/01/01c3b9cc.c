/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3b9cc; name: FUN_01c3b9cc
 */


void FUN_01c3b9cc(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 in_d3;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50 [2];
  undefined1 *local_38;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_2 + 0x560);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x554));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01c3ba34;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01c3ba34:
  if (*(char *)(param_2 + 0x420) == '\0') {
    FUN_009c69bc(&local_70,param_2);
    (**(code **)(*local_70 + 0x40))();
    local_50[0] = in_d3;
    if (local_70 != (long *)0x0) {
      lVar5 = local_70[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    local_38 = &DAT_cbf29ce484222645;
    (**(code **)(param_2 + 0x2c0))(&local_70,param_2 + 0x2e0,local_50,&local_38);
    if (*(char *)(param_2 + 0x420) == '\0') {
      *(long **)(param_2 + 0x428) = local_70;
      *(undefined8 *)(param_2 + 0x430) = uStack_68;
      *(undefined8 *)(param_2 + 0x438) = local_60;
      *(long **)(param_2 + 0x440) = local_58;
      *(undefined1 *)(param_2 + 0x420) = 1;
      plVar6 = local_58;
    }
    else {
      *(long **)(param_2 + 0x428) = local_70;
      *(undefined8 *)(param_2 + 0x430) = uStack_68;
      plVar6 = *(long **)(param_2 + 0x440);
      *(undefined8 *)(param_2 + 0x440) = 0;
      *(undefined8 *)(param_2 + 0x438) = local_60;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
        local_70 = *(long **)(param_2 + 0x428);
      }
      *(long **)(param_2 + 0x440) = local_58;
      plVar6 = local_58;
    }
    if (local_70 == (long *)&DAT_cbf29ce484222645) {
      local_58 = (long *)0x0;
      if (*(char *)(param_2 + 0x420) != '\0') {
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        *(undefined1 *)(param_2 + 0x420) = 0;
      }
      *param_1 = &DAT_cbf29ce484222645;
      param_1[1] = &DAT_03996322;
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_01c3bafc;
    }
    local_58 = (long *)0x0;
    *param_1 = local_70;
    param_1[1] = *(undefined8 *)(param_2 + 0x430);
    param_1[2] = *(undefined8 *)(param_2 + 0x438);
    param_1[3] = plVar6;
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x428);
    param_1[1] = *(undefined8 *)(param_2 + 0x430);
    param_1[2] = *(undefined8 *)(param_2 + 0x438);
    plVar6 = *(long **)(param_2 + 0x440);
    param_1[3] = plVar6;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
LAB_01c3bafc:
  *(undefined8 *)(param_2 + 0x560) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x554));
  return;
}


