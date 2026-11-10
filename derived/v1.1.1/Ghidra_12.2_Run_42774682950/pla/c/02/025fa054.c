/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025fa054; name: FUN_025fa054
 */


void FUN_025fa054(long param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_40 [2];
  long *local_30;
  long *local_28;
  undefined8 local_18;
  
  bVar2 = *param_2;
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(undefined1 *)(param_1 + 900) = 0;
  *(byte *)(param_1 + 800) = bVar2 ^ 1;
  if ((*(long *)(param_1 + 0x2f0) != 0) &&
     (FUN_0095a2ac(&local_28,*(long *)(param_1 + 0x2f0)), local_28 != (long *)0x0)) {
    FUN_026bbdc4(local_40,local_28);
    if (local_40[0] == (undefined8 *)0x0) {
      local_30 = (long *)0x0;
    }
    else {
      FUN_025fa884(&local_30);
      if (local_40[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40[0] + 1);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          local_40[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_18 = *local_40[0];
          FUN_02a44274(lVar7 + 0xd8,&local_18);
        }
      }
    }
    if (local_30 != (long *)0x0) {
      FUN_026cc9a0(local_30,0);
      plVar5 = local_30;
      FUN_024474a4(local_30 + 0x16);
      *(undefined4 *)((long)plVar5 + 0xac) = 0;
      FUN_024474a4(plVar5 + 0x25);
      *(undefined4 *)(plVar5 + 0x24) = 0;
      if (local_30 != (long *)0x0) {
        lVar7 = local_30[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))(local_28);
        cVar3 = *(char *)(param_1 + 0x360);
        goto joined_r0x025fa088;
      }
    }
  }
  cVar3 = *(char *)(param_1 + 0x360);
joined_r0x025fa088:
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  if (*(char *)(param_1 + 0x340) != '\0') {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  return;
}


