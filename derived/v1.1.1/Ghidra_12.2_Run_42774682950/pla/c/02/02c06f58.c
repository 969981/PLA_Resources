/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c06f58; name: FUN_02c06f58
 */


void FUN_02c06f58(long param_1,undefined4 param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_70;
  ulong uStack_68;
  void *local_60;
  undefined8 local_58;
  
  puVar9 = PTR_PTR_0434a080;
  lVar15 = *(long *)(param_1 + 8);
  iVar3 = *(int *)(lVar15 + 0x30);
  iVar4 = *(int *)(lVar15 + 0x34);
  local_60 = (void *)0x0;
  local_58 = -0x8000000000000000;
  iVar5 = iVar4 * iVar3;
  if (iVar5 < 1) {
    if (iVar5 != 0) goto LAB_02c06fe0;
  }
  else {
    if (0x3fffffff < iVar5) {
      FUN_032bd0a8(iVar5);
    }
    local_60 = (void *)FUN_032bd1d4(puVar9,iVar5,4,0,0,(long)&local_58 + 4);
    if ((int)local_58 != iVar5) {
LAB_02c06fe0:
      local_58 = CONCAT44(local_58._4_4_,iVar5);
    }
  }
  memcpy(local_60,*(void **)(lVar15 + 0x38),(long)iVar3 * (long)iVar4 * 4);
  pauVar1 = (undefined1 (*) [16])(lVar15 + 0x10);
  local_70 = *(undefined8 *)*pauVar1;
  auVar16 = NEON_ext(*pauVar1,*pauVar1,8,1);
  uStack_68 = (ulong)auVar16._0_4_;
  lVar8 = tpidr_el0;
  lVar14 = *(long *)(lVar8 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar14;
  }
  plVar11 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x68,0);
  FUN_02c0764c(plVar11,iVar3,iVar4,&local_60,*(undefined8 *)(lVar15 + 0x98),param_2);
  lVar15 = *(long *)(lVar8 + 0x38d490);
  if (lVar15 == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar15;
  }
  plVar12 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xc0,0);
  FUN_02fa386c(plVar12,plVar11,&local_70,3,0);
  if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
    plVar13 = plVar12 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar13 = (long *)*param_3;
  *param_3 = (long)plVar12;
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    plVar2 = plVar13 + 2;
    do {
      lVar15 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))();
      lVar15 = plVar11[1];
      goto joined_r0x02c070e0;
    }
  }
  lVar15 = plVar11[1];
joined_r0x02c070e0:
  if (lVar15 != 0) {
    plVar13 = plVar11 + 2;
    do {
      lVar15 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  if (plVar12[1] != 0) {
    plVar11 = plVar12 + 2;
    do {
      lVar15 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  lVar15 = local_58;
  uVar10 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_60 != (void *)0x0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_60,uVar10 << 2);
  }
  return;
}


