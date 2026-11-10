/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119d180; name: FUN_0119d180
 */


void FUN_0119d180(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    uVar12 = 0;
    uVar6 = 0;
  }
  else {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar10 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar10;
    plVar8 = *(long **)(lVar10 + 0xd0);
    if (plVar8 != (long *)0x0) {
      plVar11 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)*plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar11 = (long *)plVar8[0xb];
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    if (param_2 == 2) {
      param_2 = 0;
    }
    lVar10 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)param_2 * 0x28);
    lVar10 = *(long *)(lVar10 + 0x8b0);
    piVar2 = (int *)(lVar10 + 0x20);
    if (*(int *)(lVar10 + 0x28) != 0) {
      piVar2 = (int *)(lVar10 + 0x24);
    }
    uVar3 = *(int *)(lVar10 + 0x14) + *piVar2 * *(int *)(lVar10 + 0x10);
    if (uVar3 < *(byte *)(plVar11 + 0x11)) {
      lVar10 = (**(code **)(*plVar11 + 0x58))(plVar11,uVar3);
      uVar9 = FUN_02c6cf3c(*(undefined8 *)(lVar10 + 0x98));
      uVar6 = 0;
      if ((uVar9 & 1) == 0) {
        uVar12 = 0;
        if ((*(ushort *)(*(long *)(*(long *)(lVar10 + 0x98) + 0x10) + 4) >> 2 & 1) == 0) {
          if (**(int **)(param_1 + 0x1648) == 0) {
            uVar6 = FUN_011a9a80(*(undefined8 *)(param_1 + 0x16b8),uVar3,0);
          }
          else {
            uVar6 = 0;
          }
          uVar12 = param_3;
        }
      }
      else {
        uVar12 = 0;
      }
    }
    else {
      uVar6 = 0;
      uVar12 = 0;
    }
    plVar8 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  FUN_011ab3b8(*(undefined8 *)(param_1 + 0x16b8),uVar12 & 1,uVar6 & 1);
  local_60 = 0x6bb64670ff82ebad;
  pcStack_58 = "InputStatus";
  local_50 = 0xb;
  uStack_48 = 0;
  FUN_00d4d788(param_1,&local_60,uVar12 & 1);
  local_60 = 0x196b24f645dd42e8;
  pcStack_58 = "InputEvolution";
  local_50 = 0xe;
  uStack_48 = 0;
  FUN_00d4d788(param_1,&local_60,uVar6 & uVar12 & 1);
  return;
}


