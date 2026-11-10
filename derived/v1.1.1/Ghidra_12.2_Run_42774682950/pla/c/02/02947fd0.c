/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02947fd0; name: FUN_02947fd0
 */


undefined8 FUN_02947fd0(long param_1,char param_2,short param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_740 [384];
  code *local_5c0;
  undefined1 auStack_5a0 [1376];
  short local_34 [2];
  
  if (*(char *)(param_1 + 0x130) == param_2) {
    if (((*PTR_DAT_043795f8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
    *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
    if (param_3 != 0) {
      FUN_02c4fb44(auStack_740,param_3);
      iVar5 = FUN_02c4fc60(auStack_740,0x14);
      if (iVar5 == 1) goto LAB_0294804c;
    }
    plVar7 = *(long **)(param_1 + 0x1e8);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_009463f0(auStack_740,plVar7 + 0xc);
    pcVar4 = local_5c0;
    FUN_00945e04(auStack_740);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (pcVar4 != (code *)0x0) {
      plVar7 = *(long **)(param_1 + 0x1e8);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_009463f0(auStack_740,plVar7 + 0xc);
      local_34[0] = param_3;
      (*local_5c0)(auStack_5a0,local_34);
      FUN_00945e04(auStack_740);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    uVar6 = 1;
  }
  else {
LAB_0294804c:
    uVar6 = 0;
  }
  return uVar6;
}


