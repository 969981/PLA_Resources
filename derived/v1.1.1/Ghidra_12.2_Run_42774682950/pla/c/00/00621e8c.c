/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00621e8c; name: FUN_00621e8c
 */


void FUN_00621e8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined1 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 local_50;
  long *plStack_48;
  
  plVar6 = *(long **)(*(long *)(param_2 + 0x48) + 400);
  uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x198,8);
                    /* try { // try from 00621ed4 to 00621ed7 has its CatchHandler @ 0062201c */
  FUN_003c6e6c();
  local_50 = uVar4;
  plStack_48 = plVar6;
                    /* try { // try from 00621ee8 to 00621ef3 has its CatchHandler @ 00622008 */
  local_68 = FUN_00637e14(*(undefined8 *)(param_2 + 0x40),uVar4,param_3,
                          *(undefined8 *)(*(long *)(param_2 + 8) + 0xd8));
  local_c0 = *param_4;
  lVar5 = *(long *)(param_2 + 0x48);
  local_b8 = param_4[1];
  if (local_b8 != 0) {
    plVar1 = (long *)(local_b8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b0 = *(undefined8 *)(param_2 + 8);
  local_a8 = *(long *)(param_2 + 0x10);
  if (local_a8 != 0) {
    plVar1 = (long *)(local_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_a0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = *(long *)(param_2 + 0x20);
  if (local_98 != 0) {
    plVar1 = (long *)(local_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = *(undefined8 *)(param_2 + 0x28);
  local_88 = *(long *)(param_2 + 0x30);
  if (local_88 != 0) {
    plVar1 = (long *)(local_88 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_80 = *(undefined1 *)(param_2 + 0x38);
  local_78 = *(undefined8 *)(param_2 + 0x48);
  local_70 = *(long *)(param_2 + 0x50);
  if (local_70 != 0) {
    plVar1 = (long *)(local_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_60 = uVar4;
  local_58 = plVar6;
  FUN_00622210(param_1,&local_c0,*(undefined8 *)(lVar5 + 0x198),0x10000,
               *(undefined8 *)(lVar5 + 0x348));
  FUN_00622020(&local_c0);
  return;
}


