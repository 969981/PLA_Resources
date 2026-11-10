/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012842f8; name: FUN_012842f8
 */


void FUN_012842f8(undefined1 param_1 [16],float param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  float fVar14;
  long *local_b8;
  undefined4 local_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined8 local_a8;
  undefined4 local_a0;
  long *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  uint local_70;
  undefined1 local_6c;
  long *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined4 local_40;
  undefined4 local_34;
  
  iVar6 = FUN_00d5294c(*(undefined8 *)(param_3 + 0x1a8));
  uVar7 = FUN_00d4bf2c(*(undefined8 *)(param_3 + 0x1a8),iVar6);
  local_34 = 0;
  if (iVar6 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(&local_b0);
    FUN_010db7c0(CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0)),0,uVar7,&local_34);
    plVar11 = (long *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01284408;
    }
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b0c(&local_b0);
    uVar5 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    uVar8 = FUN_0111d41c(uVar5);
    puVar10 = (undefined4 *)FUN_0111d434(uVar5,uVar8,uVar7);
    local_34 = *puVar10;
    plVar11 = (long *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    if (plVar11 != (long *)0x0) {
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01284408:
      if (iVar9 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
        uVar7 = local_34;
        goto joined_r0x01284630;
      }
    }
  }
  uVar7 = local_34;
joined_r0x01284630:
  local_34 = uVar7;
  if ((short)local_34 == 0) {
    FUN_012841f4(param_3);
  }
  else {
    local_a8 = 0x98967f00000000;
    local_a0 = 7;
    local_88 = &DAT_cbf29ce484222645;
    puStack_80 = &DAT_cbf29ce484222645;
    local_78 = &DAT_cbf29ce484222645;
    local_98 = (long *)0x0;
    puStack_90 = &DAT_cbf29ce484222645;
    local_70 = 0;
    local_6c = 1;
    local_48 = (long *)0x0;
    local_40 = 0;
    local_b0 = 0;
    uStack_ac = 1;
    local_68 = (long *)0x0;
    puStack_60 = &DAT_cbf29ce484222645;
    local_34._2_2_ = (undefined2)((uint)uVar7 >> 0x10);
    uStack_aa = local_34._2_2_;
    local_58 = &DAT_03996322;
    uStack_50 = 0;
    FUN_00d58a08(&local_b8,*(undefined8 *)(param_3 + 0x1a8),0);
    plVar11 = local_98;
    local_98 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 10;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    local_70 = local_70 & 0xffff0000;
    local_98 = local_b8;
    puStack_90 = (undefined1 *)0xb05a337b5a9cffa6;
    local_78 = (undefined1 *)0xb0493a7b5a8e9858;
    local_88 = (undefined1 *)0xb05a3e7b5a9d1257;
    local_6c = 0;
    fVar14 = (float)FUN_00d5f79c(*(undefined8 *)(param_3 + 0x1a8),iVar6);
    local_40 = CONCAT22((short)(int)param_2,(short)(int)fVar14);
    FUN_00d66128(*(undefined8 *)(param_3 + 0x1b8),&local_b0);
    pcVar13 = *(code **)(param_3 + 0x1d8);
    if (pcVar13 != (code *)0x0) {
      *(undefined8 *)(param_3 + 0x1e0) = 0;
      *(undefined8 *)(param_3 + 0x1e8) = 0;
      *(undefined8 *)(param_3 + 0x1d0) = 0;
      *(undefined8 *)(param_3 + 0x1d8) = 0;
      (*pcVar13)(param_3 + 0x1f0);
    }
    *(undefined1 **)(param_3 + 0x1f8) = &LAB_012846c8;
    *(undefined8 *)(param_3 + 0x200) = 0;
    *(undefined1 **)(param_3 + 0x1e0) = &LAB_01284e44;
    *(undefined1 **)(param_3 + 0x1d0) = &LAB_01284e24;
    *(code **)(param_3 + 0x1d8) = FUN_01284e40;
    *(undefined1 **)(param_3 + 0x1e8) = &LAB_01284e58;
    *(long *)(param_3 + 0x1f0) = param_3;
    FUN_00d4bd5c(*(undefined8 *)(param_3 + 0x1a8),0,0);
    FUN_0128bdb4(*(undefined8 *)(param_3 + 0x1a8));
    *(undefined8 *)(param_3 + 0x1c0) = 3;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_68 != (long *)0x0) {
      plVar11 = local_68 + 10;
      do {
        iVar6 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    if (local_98 != (long *)0x0) {
      plVar11 = local_98 + 10;
      do {
        iVar6 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
  }
  return;
}


