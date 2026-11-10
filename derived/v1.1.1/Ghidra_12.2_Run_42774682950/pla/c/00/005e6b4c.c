/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e6b4c; name: FUN_005e6b4c
 */


void FUN_005e6b4c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  *param_1 = (long)&PTR_LAB_0418e668;
                    /* try { // try from 005e6b6c to 005e6b6f has its CatchHandler @ 005e6c7c */
  FUN_002e4a10(param_1[0x19]);
  if ((param_1[6] & 1U) == 0) {
    plVar7 = param_1 + 7;
LAB_005e6b88:
    uVar9 = (ulong)param_1[6] >> 1;
    plVar6 = plVar7 + uVar9 * 0x12 + -1;
    lVar5 = uVar9 + 1;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      lVar4 = *plVar6;
      plVar6 = plVar6 + -0x12;
                    /* try { // try from 005e6bac to 005e6baf has its CatchHandler @ 005e6c98 */
      FUN_002e4a10(lVar4);
    }
    memset(plVar7,0xab,uVar9 * 0x90);
    if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_005e6bec;
    lVar5 = param_1[7];
  }
  else {
    plVar7 = (long *)param_1[7];
    if (plVar7 != (long *)0x0) goto LAB_005e6b88;
    lVar5 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar5);
LAB_005e6bec:
  puVar3 = PTR_DAT_04374a00;
  puVar8 = (undefined8 *)param_1[5];
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    FUN_002e2ea0(PTR_LAB_04373088,puVar8);
  }
  plVar7 = (long *)param_1[4];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 1;
    do {
      lVar5 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


