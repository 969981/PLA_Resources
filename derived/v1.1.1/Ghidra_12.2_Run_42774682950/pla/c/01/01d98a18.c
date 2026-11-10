/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d98a18; name: FUN_01d98a18
 */


void FUN_01d98a18(long param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(long *)(param_1 + 0x1b8) == 0) {
    *(undefined8 *)(param_2 + 1) = 0x3f000000;
  }
  else {
    plVar9 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x5e8);
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = (int)*plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = FUN_02c6849c(plVar9[0x13]);
    plVar10 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x5e8);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = FUN_02c6f924(plVar10[0x13]);
    if ((*PTR_DAT_0437a708 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_0437a708);
      if (iVar6 != 0) {
        FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a708);
      }
    }
    uVar7 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar7;
    uVar8 = FUN_010ab4fc(uVar7,uVar4,uVar5,param_2);
    if ((uVar8 & 1) == 0) {
      *param_2 = 3;
      *(undefined8 *)(param_2 + 1) = 0x3d4ccccd3e99999a;
    }
    plVar1 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    param_2[1] = *(float *)(param_1 + 0x818) * (float)param_2[1];
    param_2[2] = *(float *)(param_1 + 0x818) * (float)param_2[2];
  }
  return;
}


