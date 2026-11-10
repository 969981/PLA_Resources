/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00548a10; name: FUN_00548a10
 */


void FUN_00548a10(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_40;
  long *plStack_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_2[1];
  local_40 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_2[3];
  local_30 = (undefined8 *)param_2[2];
  param_2[2] = 0;
                    /* try { // try from 00548a3c to 00548a47 has its CatchHandler @ 00548adc */
  FUN_00548e30(param_1,&local_40,1);
  puVar5 = local_30;
  local_30 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_002e2ea0(PTR_LAB_04373088,puVar5);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  param_1[7] = param_3;
  puVar4 = PTR_DAT_04374cc0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


