/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070067c; name: FUN_0070067c
 */


void FUN_0070067c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = *(long **)(*param_3 + 400);
  plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x38,8);
  *plVar4 = (long)(PTR_DAT_04376230 + 0x10);
  plVar4[1] = 0;
  puVar1 = PTR_DAT_04376238;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar6;
  plVar4[4] = (long)(puVar1 + 0x10);
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar7 = *(long **)(*param_3 + 400);
  plVar6 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x78,8);
  puVar1 = PTR_DAT_04376240 + 0x10;
  plVar6[2] = 0;
  plVar6[3] = (long)plVar7;
  *plVar6 = (long)puVar1;
  plVar6[1] = 0;
  FUN_006f7270(plVar6 + 4,param_2,param_3);
  plVar7 = (long *)plVar4[6];
  plVar4[5] = (long)(plVar6 + 4);
  plVar4[6] = (long)plVar6;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4[4] = (long)(PTR_DAT_04376248 + 0x10);
  *param_1 = plVar4 + 4;
  param_1[1] = plVar4;
  return;
}


