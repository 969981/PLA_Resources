/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092f04c; name: FUN_0092f04c
 */


void FUN_0092f04c(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long *local_70;
  long *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar11 = (ulong)param_3;
  uVar9 = 1;
  piVar7 = &DAT_041c2068;
  for (piVar10 = &DAT_041b8860; *piVar10 != param_2; piVar10 = piVar10 + 0x14) {
    if (uVar9 == 0x3cd) goto LAB_0092f0c0;
    if (piVar10[10] == param_2) goto LAB_0092f0b0;
    uVar9 = uVar9 + 2;
  }
  uVar9 = uVar9 - 1;
LAB_0092f0b0:
  piVar7 = (int *)((uVar9 & 0xffffffff) * 0x28 + 0x41b8868);
LAB_0092f0c0:
  local_50 = *piVar7;
  local_48 = *(undefined8 *)(piVar7 + 2);
  uStack_40 = *(undefined8 *)(piVar7 + 4);
  local_38 = *(undefined8 *)(piVar7 + 6);
  if (local_50 == 2) {
    plVar12 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_009303d4(&local_68,plVar12);
    plVar1 = local_68;
    if (plVar12 == (long *)0x0) goto joined_r0x0092f2d0;
    plVar6 = plVar12 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (local_50 != 1) {
      plVar1 = (long *)0x0;
      goto joined_r0x0092f2d0;
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_009302a8(&local_68,plVar12);
    plVar1 = local_68;
    if (plVar12 == (long *)0x0) goto joined_r0x0092f2d0;
    plVar6 = plVar12 + 10;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar5 == 0) {
    local_68 = (long *)0x0;
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
joined_r0x0092f2d0:
  if (param_3 < 0xe) {
    local_68 = (long *)(&DAT_041b8688)[uVar11 * 4];
    puStack_60 = (&PTR_DAT_041b8690)[uVar11 * 4];
    local_58 = (&DAT_041b8698)[uVar11 * 4];
  }
  else {
    local_58 = 0;
    local_68 = (long *)&DAT_cbf29ce484222645;
    puStack_60 = &DAT_03996322;
  }
  FUN_00930500(&local_70,&local_48,&local_68);
  if (local_70 == (long *)0x0) {
    plVar12 = (long *)PTR_DAT_04379c88;
  }
  else {
    plVar12 = local_70 + 0xb;
  }
  lVar8 = plVar1[0x16];
  if (lVar8 != 0) {
    plVar6 = *(long **)(lVar8 + 0x270);
    if (plVar6 != *(long **)(lVar8 + 0x278)) {
      iVar5 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar2 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar2 == *plVar12) goto LAB_0092f268;
        plVar6 = plVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar8 + 0x278) != plVar6);
    }
  }
  iVar5 = 0;
LAB_0092f268:
  FUN_02c2e33c(plVar1,iVar5,*(undefined8 *)(param_1 + 0x70));
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (plVar1 != (long *)0x0) {
    plVar12 = plVar1 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  return;
}


