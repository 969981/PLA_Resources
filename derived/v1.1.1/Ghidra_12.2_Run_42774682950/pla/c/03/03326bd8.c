/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03326bd8; name: FUN_03326bd8
 */


void FUN_03326bd8(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ThreadType *pTVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  undefined4 local_64;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((undefined8 *)param_1[3] != param_1) {
    local_70 = *param_1;
    local_80[0] = 0;
    local_68 = 5;
    local_66 = 0;
    local_64 = 0;
    pTVar6 = (ThreadType *)nn::os::GetCurrentThread();
    local_60 = nn::os::GetThreadId(pTVar6);
    local_58 = 0;
    local_67 = 0xff;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    if (*(int *)(param_1 + 7) != 0) {
      plVar7 = (long *)param_1[6];
      lVar11 = (long)*(int *)(param_1 + 7) << 3;
      do {
        plVar13 = (long *)*plVar7;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x20))(plVar13,local_80);
        }
        plVar7 = plVar7 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    uVar12 = param_1[3];
    lVar14 = (long)DAT_0444b3b8;
    lVar11 = tpidr_el0;
    lVar9 = *(long *)(lVar11 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar9;
    }
    uVar5 = local_58;
    *(undefined8 *)(lVar9 + lVar14 * 8 + 0x18) = uVar12;
    if ((local_58 & 1) != 0) {
      lVar9 = *(long *)(lVar11 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar11 + 0x38d490) = lVar9;
      }
      plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      puVar10 = (undefined8 *)(uVar5 - 0x11);
      *puVar10 = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar10,(long)*(int *)(uVar5 - 9) + 0x10);
      iVar2 = *(int *)(param_1 + 7);
      goto joined_r0x03326ce8;
    }
  }
  iVar2 = *(int *)(param_1 + 7);
joined_r0x03326ce8:
  if (iVar2 != 0) {
    plVar13 = (long *)param_1[6];
    plVar7 = plVar13 + iVar2;
    do {
      while( true ) {
        plVar7 = plVar7 + -1;
        plVar8 = (long *)*plVar7;
        if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) break;
LAB_03326d1c:
        if (plVar7 == plVar13) goto LAB_03326c7c;
      }
      plVar1 = plVar8 + 2;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 + -1 != 0) goto LAB_03326d1c;
      (**(code **)(*plVar8 + 0x18))();
    } while (plVar7 != plVar13);
  }
LAB_03326c7c:
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,param_1[6],
               ((ulong)*(uint *)((long)param_1 + 0x3c) & 0x3fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  return;
}


