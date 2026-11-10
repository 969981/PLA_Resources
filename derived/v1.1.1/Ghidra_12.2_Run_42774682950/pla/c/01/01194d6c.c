/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01194d6c; name: FUN_01194d6c
 */


void FUN_01194d6c(undefined1 param_1 [16],float param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined2 uVar10;
  long lVar11;
  long *plVar12;
  code *pcVar13;
  long *plVar14;
  float fVar15;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  uint local_78;
  undefined1 local_74;
  long *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined4 local_48;
  long *local_38;
  
  uVar6 = FUN_00d5294c(*(undefined8 *)(param_3 + 0x1a8));
  puVar8 = (undefined8 *)FUN_00d4bf2c(*(undefined8 *)(param_3 + 0x1a8),uVar6);
  puVar9 = puVar8;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar9 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar9 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  lVar11 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar11;
  plVar14 = *(long **)(lVar11 + 0x280);
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    puVar9 = *(undefined8 **)(lVar11 + 0x18);
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      puVar9 = (undefined8 *)(**(code **)*puVar9)();
      *(undefined8 **)(lVar11 + 0x10) = puVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar3 = *(int *)(*(long *)(param_3 + 0x1a8) + 0x16c4);
  uVar7 = FUN_010dac08(puVar9,iVar3);
  if (iVar3 == 0) {
    plVar12 = plVar14 + 0xd;
joined_r0x0119509c:
    if (uVar7 <= (uint)puVar8) goto LAB_011950a0;
LAB_01194e2c:
    uVar10 = *(undefined2 *)((long)plVar12 + ((ulong)puVar8 & 0xffffffff) * 4 + 2);
  }
  else {
    if (iVar3 == 1) {
      plVar12 = (long *)((long)plVar14 + 0xaf4);
      if ((uint)puVar8 < uVar7) goto LAB_01194e2c;
    }
    else if (iVar3 == 2) {
      plVar12 = (long *)((long)plVar14 + 0xc84);
      goto joined_r0x0119509c;
    }
LAB_011950a0:
    uVar10 = 0;
  }
  uStack_b0 = 0x98967f00000000;
  local_a8 = 7;
  local_80 = &DAT_cbf29ce484222645;
  local_78 = 0;
  local_90 = &DAT_cbf29ce484222645;
  puStack_88 = &DAT_cbf29ce484222645;
  local_74 = 1;
  local_50 = (long *)0x0;
  local_48 = 0;
  local_b8 = CONCAT26(uVar10,0x100000000);
  local_a0 = (long *)0x0;
  puStack_98 = &DAT_cbf29ce484222645;
  local_70 = (long *)0x0;
  puStack_68 = &DAT_cbf29ce484222645;
  local_60 = &DAT_03996322;
  uStack_58 = 0;
  FUN_00d58a08(&local_38,*(undefined8 *)(param_3 + 0x1a8),0);
  plVar12 = local_a0;
  local_a0 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 10;
    do {
      iVar3 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  local_78 = local_78 & 0xffff0000;
  local_a0 = local_38;
  puStack_98 = (undefined1 *)0x9a1d19e7978dc06;
  local_80 = (undefined1 *)0x467b6652348728c;
  local_90 = (undefined1 *)0x9a1d29e7978ddb9;
  local_74 = 0;
  fVar15 = (float)FUN_00d5f79c(*(undefined8 *)(param_3 + 0x1a8),uVar6);
  local_48 = CONCAT22((short)(int)param_2,(short)(int)fVar15);
  FUN_00d66128(*(undefined8 *)(param_3 + 0x1c8),&local_b8);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    plVar12 = local_70 + 10;
    do {
      iVar3 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_a0 != (long *)0x0) {
    plVar12 = local_a0 + 10;
    do {
      iVar3 = (int)*plVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
      pcVar13 = *(code **)(param_3 + 0x1e8);
      goto joined_r0x01194fac;
    }
  }
  pcVar13 = *(code **)(param_3 + 0x1e8);
joined_r0x01194fac:
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(param_3 + 0x1f0) = 0;
    *(undefined8 *)(param_3 + 0x1f8) = 0;
    *(undefined8 *)(param_3 + 0x1e0) = 0;
    *(undefined8 *)(param_3 + 0x1e8) = 0;
    (*pcVar13)(param_3 + 0x200);
  }
  *(undefined1 **)(param_3 + 0x208) = &LAB_01197974;
  *(undefined8 *)(param_3 + 0x210) = 0;
  *(undefined1 **)(param_3 + 0x1f0) = &LAB_011997fc;
  *(undefined1 **)(param_3 + 0x1e0) = &LAB_011997dc;
  *(code **)(param_3 + 0x1e8) = FUN_011997f8;
  *(undefined1 **)(param_3 + 0x1f8) = &LAB_01199810;
  *(long *)(param_3 + 0x200) = param_3;
  FUN_00d4bd5c(*(undefined8 *)(param_3 + 0x1a8),0,0);
  FUN_0119e2f4(*(undefined8 *)(param_3 + 0x1a8));
  *(undefined8 *)(param_3 + 0x1d0) = 4;
  return;
}


