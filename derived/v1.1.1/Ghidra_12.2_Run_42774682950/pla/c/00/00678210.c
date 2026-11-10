/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00678210; name: FUN_00678210
 */


void FUN_00678210(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_60 [8];
  long *local_58;
  
  plVar6 = *(long **)(*param_6 + 400);
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0xb8,8);
  puVar1 = PTR_DAT_04375a18 + 0x10;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar6;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  FUN_00676ae4(plVar4 + 4,param_2,param_3,param_4,param_5,param_6);
  FUN_006de1d0(auStack_60,plVar4[0x15]);
  if (local_58 != (long *)0x0) {
    plVar6 = local_58 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar4 + 4;
  param_1[1] = plVar4;
  return;
}


