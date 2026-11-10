/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011971d0; name: FUN_011971d0
 */


void FUN_011971d0(undefined1 param_1 [16],float param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  float fVar12;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  uint local_68;
  undefined1 local_64;
  long *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined4 local_38;
  
  uVar4 = *(undefined4 *)(param_3[0x35] + 0x16ac);
  puVar8 = param_3;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar8 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar8 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar11 = *(long **)(lVar9 + 0x280);
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    puVar8 = *(undefined8 **)(lVar9 + 0x18);
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      puVar8 = (undefined8 *)(**(code **)*puVar8)();
      *(undefined8 **)(lVar9 + 0x10) = puVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_010dac08(puVar8,*(undefined4 *)(param_3[0x35] + 0x16c4));
  uStack_a0 = 0x98967f00000000;
  local_98 = 7;
  local_64 = 1;
  local_80 = &DAT_cbf29ce484222645;
  puStack_78 = &DAT_cbf29ce484222645;
  local_90 = (long *)0x0;
  puStack_88 = &DAT_cbf29ce484222645;
  local_70 = &DAT_cbf29ce484222645;
  local_68 = 0;
  local_40 = (long *)0x0;
  local_38 = 0;
  local_60 = (long *)0x0;
  puStack_58 = &DAT_cbf29ce484222645;
  local_50 = &DAT_03996322;
  uStack_48 = 0;
  local_a8 = CONCAT26((short)*(undefined4 *)(param_3 + 0x4f),0x100000000);
  FUN_00d58a08(&local_b0,param_3[0x35],0);
  plVar3 = local_90;
  local_90 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  local_68 = local_68 & 0xffff0000;
  local_90 = local_b0;
  puStack_88 = (undefined1 *)0x9a1d19e7978dc06;
  local_70 = (undefined1 *)0xf2276952e9a8d12c;
  local_80 = (undefined1 *)0x9a1d29e7978ddb9;
  local_64 = 0;
  fVar12 = (float)FUN_00d5f79c(param_3[0x35],uVar4);
  local_38 = CONCAT22((short)(int)param_2,(short)(int)fVar12);
  FUN_00d66128(param_3[0x39],&local_a8);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    plVar3 = local_60 + 10;
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar3 = local_90 + 10;
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
      pcVar10 = (code *)param_3[0x3d];
      goto joined_r0x011973e0;
    }
  }
  pcVar10 = (code *)param_3[0x3d];
joined_r0x011973e0:
  if (pcVar10 != (code *)0x0) {
    param_3[0x3e] = 0;
    param_3[0x3f] = 0;
    param_3[0x3c] = 0;
    param_3[0x3d] = 0;
    (*pcVar10)(param_3 + 0x40);
  }
  param_3[0x41] = &LAB_01197c5c;
  param_3[0x42] = 0;
  param_3[0x3e] = &LAB_011997fc;
  param_3[0x3c] = &LAB_011997dc;
  param_3[0x3d] = FUN_011997f8;
  param_3[0x3f] = &LAB_01199810;
  param_3[0x40] = param_3;
  FUN_00d4bd5c(param_3[0x35],0,0);
  param_3[0x3a] = 4;
  return;
}


