/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012858e0; name: FUN_012858e0
 */


void FUN_012858e0(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  long lVar11;
  float fVar12;
  long *local_c8 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74;
  long *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined4 local_48;
  undefined4 local_34;
  
  iVar7 = FUN_00d5294c(*(undefined8 *)(param_3 + 0x1a8));
  uVar8 = FUN_00d4bf2c(*(undefined8 *)(param_3 + 0x1a8),iVar7);
  local_b0 = 0x98967f00000000;
  local_a8 = 7;
  local_80 = &DAT_cbf29ce484222645;
  local_78 = 0;
  local_90 = &DAT_cbf29ce484222645;
  local_88 = &DAT_cbf29ce484222645;
  local_74 = 1;
  local_50 = (long *)0x0;
  local_48 = 0;
  local_b8 = 0x100000001;
  local_a0 = (long *)0x0;
  local_98 = &DAT_cbf29ce484222645;
  local_70 = (long *)0x0;
  puStack_68 = &DAT_cbf29ce484222645;
  local_60 = &DAT_03996322;
  uStack_58 = 0;
  FUN_00d58a08(local_c8,*(undefined8 *)(param_3 + 0x1a8),0);
  plVar3 = local_a0;
  local_a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  local_a0 = local_c8[0];
  local_78 = 0;
  local_74 = 0;
  local_b0 = CONCAT44(9999999,(undefined4)local_b0);
  local_a8 = 7;
  local_98 = (undefined1 *)0xb05a337b5a9cffa6;
  local_90 = (undefined1 *)0xb04cc47b5a91b8ad;
  local_88 = (undefined1 *)0xb04cbd7b5a91acc8;
  local_80 = (undefined1 *)0xb04cbe7b5a91ae7b;
  fVar12 = (float)FUN_00d5f79c(*(undefined8 *)(param_3 + 0x1a8),iVar7);
  local_34 = 0;
  local_48 = CONCAT22((short)(int)param_2,(short)(int)fVar12);
  if (iVar7 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(local_c8);
    FUN_010db7c0(local_c8[0],0,uVar8,&local_34);
    if (local_c8[0] != (long *)0x0) {
      lVar11 = local_c8[0][0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_01285b04;
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b0c(local_c8);
    plVar3 = local_c8[0];
    uVar9 = FUN_0111d41c(local_c8[0]);
    puVar10 = (undefined4 *)FUN_0111d434(plVar3,uVar9,uVar8);
    local_34 = *puVar10;
    if (local_c8[0] != (long *)0x0) {
      lVar11 = local_c8[0][0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01285b04:
      if (iVar7 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_c8[0] + 0x20))();
        uVar8 = local_34;
        goto joined_r0x01285b0c;
      }
    }
  }
  uVar8 = local_34;
joined_r0x01285b0c:
  local_34 = uVar8;
  if (((short)local_34 == 0) || (local_34._2_2_ = (short)((uint)uVar8 >> 0x10), local_34._2_2_ == 0)
     ) {
    FUN_01285cbc(param_3);
  }
  else {
    local_b8 = CONCAT26(local_34._2_2_,(undefined6)local_b8);
    FUN_02c4fb44(local_c8);
    uVar8 = FUN_02c4fc60(local_c8,3);
    local_b0 = CONCAT44(local_b0._4_4_,uVar8);
    FUN_02c4fc5c(local_c8);
    FUN_00d66128(*(undefined8 *)(param_3 + 0x1b0),&local_b8);
    FUN_00d4bd5c(*(undefined8 *)(param_3 + 0x1a8),0,0);
    lVar11 = FUN_01283b84(param_3);
    if (lVar11 != 0) {
      FUN_012827bc(lVar11,0);
    }
    *(undefined8 *)(param_3 + 0x1b8) = 3;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    plVar3 = local_70 + 10;
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_a0 != (long *)0x0) {
    plVar3 = local_a0 + 10;
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  return;
}


