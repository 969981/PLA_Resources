/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd437c; name: FUN_02cd437c
 */


void FUN_02cd437c(ulong *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[0x16];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_02cd5c94(param_1 + 0x10,param_1[0x11]);
  if ((param_1[0xc] & 1) != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],param_1[0xe],param_1[0xc] & 0xfffffffffffffffe,1);
  }
  FUN_006d9cd8(param_1 + 0xb);
  if ((param_1[7] & 1) == 0) {
    bVar2 = (byte)*param_1;
  }
  else {
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[9],param_1[7] & 0xfffffffffffffffe,1);
    bVar2 = (byte)*param_1;
  }
  if ((bVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02cd445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


