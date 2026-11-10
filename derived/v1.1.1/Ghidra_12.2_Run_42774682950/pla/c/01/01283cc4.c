/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01283cc4; name: FUN_01283cc4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01283cc4(undefined1 param_1 [16],float param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  ulong uVar15;
  undefined1 **ppuVar16;
  uint uVar17;
  code *pcVar18;
  long lVar19;
  float fVar20;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined1 **local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  uint local_90;
  undefined1 local_8c;
  long *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined4 local_60;
  undefined4 local_44;
  long *local_40;
  long *local_38;
  
  puVar6 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148e38(&local_38);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
  FUN_01148b0c(&local_40);
  iVar9 = FUN_00d5294c(*(undefined8 *)(param_3 + 0x1a8));
  uVar10 = FUN_00d4bf2c(*(undefined8 *)(param_3 + 0x1a8),iVar9);
  plVar1 = local_40;
  local_44 = 0;
  if (iVar9 == 0) {
    FUN_010db7c0(local_38,0,uVar10,&local_44);
    uVar15 = FUN_0111d5d4(local_40,(short)local_44,1);
    uVar12 = 0;
    if ((uVar15 & 1) == 0) {
LAB_01283db0:
    }
    else {
      local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffff00000000);
      local_d8 = 0;
      uVar15 = FUN_0111d464(local_40,(short)local_44,&local_d0,&local_d8);
      if ((uVar15 & 1) != 0) {
        lVar19 = FUN_0111d434(local_40,(ulong)local_d0 & 0xffffffff,local_d8);
        uVar17 = 999 - *(ushort *)(lVar19 + 2);
        goto LAB_012840e0;
      }
      uVar12 = local_44 >> 0x10;
    }
  }
  else {
    uVar11 = FUN_0111d41c(local_40);
    puVar14 = (uint *)FUN_0111d434(plVar1,uVar11,uVar10);
    local_44 = *puVar14;
    uVar15 = FUN_010db41c(local_38,local_44 & 0xffff,1,0xffffffff);
    if ((uVar15 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = FUN_010db1ac(local_38,(short)local_44);
      iVar13 = FUN_010da868(local_38,(short)local_44);
      if (iVar13 == 0) {
        if (local_44 >> 0x10 <= uVar12) {
          uVar12 = local_44 >> 0x10;
        }
        goto LAB_01283db0;
      }
      uVar17 = uVar12 - iVar13;
LAB_012840e0:
      uVar12 = (uint)local_44._2_2_;
      if ((int)uVar17 <= (int)(uint)local_44._2_2_) {
        uVar12 = uVar17;
      }
    }
  }
  if ((short)local_44 == 0) {
    FUN_012841f4(param_3);
    goto joined_r0x01284100;
  }
  if (uVar12 == 0) {
    local_a8 = FUN_012841f4;
    puStack_a0 = (undefined1 *)0x0;
    local_d0 = &LAB_01284e24;
    local_c8 = FUN_01284e40;
    local_c0 = &LAB_01284e44;
    local_b8 = (undefined1 **)&LAB_01284e58;
    local_b0 = param_3;
    FUN_01284244(param_3,0xb05a3b7b5a9d0d3e,&local_d0);
    pcVar18 = local_c8;
    bVar5 = local_c8 == (code *)0x0;
    local_c8 = (code *)0x0;
    if (bVar5) goto joined_r0x01284100;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 **)0x0;
    ppuVar16 = &local_b0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
  }
  else {
    local_c8 = (code *)0x98967f00000000;
    uVar15 = (ulong)local_c0 >> 0x20;
    local_c0 = (undefined1 *)CONCAT44((int)uVar15,7);
    local_a8 = (code *)&DAT_cbf29ce484222645;
    puStack_a0 = &DAT_cbf29ce484222645;
    local_98 = &DAT_cbf29ce484222645;
    local_b8 = (undefined1 **)0x0;
    local_b0 = &DAT_cbf29ce484222645;
    local_90 = 0;
    local_8c = 1;
    local_68 = (long *)0x0;
    local_60 = 0;
    local_d0 = (undefined1 *)CONCAT26((short)uVar12,0x100000000);
    local_88 = (long *)0x0;
    puStack_80 = &DAT_cbf29ce484222645;
    local_78 = &DAT_03996322;
    uStack_70 = 0;
    FUN_00d58a08(&local_d8,*(undefined8 *)(param_3 + 0x1a8),0);
    ppuVar16 = local_b8;
    local_b8 = (undefined1 **)0x0;
    if (ppuVar16 != (undefined1 **)0x0) {
      plVar1 = (long *)(ppuVar16 + 10);
      do {
        iVar13 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar13 == 0) {
        (**(code **)((long)*ppuVar16 + 0x10))();
      }
    }
    local_b8 = (undefined1 **)CONCAT44(uStack_d4,local_d8);
    local_90 = local_90 & 0xffff0000;
    local_b0 = (undefined1 *)0xb05a337b5a9cffa6;
    local_98 = (undefined1 *)0xb04cbc7b5a91ab15;
    local_a8 = (code *)0xb05a3e7b5a9d1257;
    local_8c = 0;
    fVar20 = (float)FUN_00d5f79c(*(undefined8 *)(param_3 + 0x1a8),iVar9);
    local_60 = CONCAT22((short)(int)param_2,(short)(int)fVar20);
    FUN_00d66128(*(undefined8 *)(param_3 + 0x1b8),&local_d0);
    pcVar18 = *(code **)(param_3 + 0x1d8);
    if (pcVar18 != (code *)0x0) {
      *(undefined8 *)(param_3 + 0x1e0) = 0;
      *(undefined8 *)(param_3 + 0x1e8) = 0;
      *(undefined8 *)(param_3 + 0x1d0) = 0;
      *(undefined8 *)(param_3 + 0x1d8) = 0;
      (*pcVar18)(param_3 + 0x1f0);
    }
    *(undefined1 **)(param_3 + 0x1f8) = &LAB_0128494c;
    *(undefined8 *)(param_3 + 0x200) = 0;
    *(undefined1 **)(param_3 + 0x1e0) = &LAB_01284e44;
    *(undefined1 **)(param_3 + 0x1d0) = &LAB_01284e24;
    *(code **)(param_3 + 0x1d8) = FUN_01284e40;
    *(undefined1 **)(param_3 + 0x1e8) = &LAB_01284e58;
    *(undefined1 **)(param_3 + 0x1f0) = param_3;
    FUN_00d4bd5c(*(undefined8 *)(param_3 + 0x1a8),0,0);
    FUN_0128bdb4(*(undefined8 *)(param_3 + 0x1a8));
    *(undefined8 *)(param_3 + 0x1c0) = 3;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    ppuVar16 = local_b8;
    if (local_88 != (long *)0x0) {
      plVar1 = local_88 + 10;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_88 + 0x10))();
        ppuVar16 = local_b8;
      }
    }
    local_b8 = ppuVar16;
    if (ppuVar16 == (undefined1 **)0x0) goto joined_r0x01284100;
    ppuVar2 = ppuVar16 + 10;
    do {
      iVar9 = *(int *)ppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar5) {
        *(int *)ppuVar2 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 != 0) goto joined_r0x01284100;
    pcVar18 = *(code **)(*ppuVar16 + 0x10);
  }
  (*pcVar18)(ppuVar16);
joined_r0x01284100:
  if (local_40 != (long *)0x0) {
    lVar19 = local_40[0xb];
    piVar3 = (int *)(lVar19 + 0xc);
    do {
      iVar9 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar19 = local_38[0xb];
    piVar3 = (int *)(lVar19 + 0xc);
    do {
      iVar9 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


