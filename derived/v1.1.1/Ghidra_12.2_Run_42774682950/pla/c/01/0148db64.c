/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148db64; name: FUN_0148db64
 */


void FUN_0148db64(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  int local_f8;
  undefined2 local_f4;
  undefined8 local_f2;
  undefined4 local_ea;
  undefined8 local_e6;
  undefined4 local_de;
  undefined8 local_da;
  undefined8 local_d2;
  undefined8 local_ca;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_ba;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  long *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined1 auStack_58 [8];
  
  local_a0[0] = 0;
  local_98 = (long *)0x0;
  uStack_90 = 0;
  local_88 = &DAT_cbf29ce484222645;
  uStack_80 = 0;
  local_70 = 0;
  local_6c = 0;
  local_79 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_62 = 0;
  uStack_60 = 0;
  uVar13 = *(ulong *)(param_1 + 11000);
  if (999 < uVar13) {
    FUN_0148d838(param_1 + 0x2ab0);
    uVar13 = *(ulong *)(param_1 + 11000);
  }
  lVar11 = *(long *)(param_1 + 0x2ab8);
  lVar10 = *(long *)(param_1 + 0x2ac0) - lVar11;
  uVar13 = *(long *)(param_1 + 0x2af0) + uVar13;
  uVar3 = 0;
  if (lVar10 != 0) {
    uVar3 = (lVar10 >> 3) * 0x38 - 1;
  }
  if (uVar3 == uVar13) {
    FUN_01494c08(param_1 + 0x2ab0);
    uVar13 = *(long *)(param_1 + 0x2af0) + *(long *)(param_1 + 11000);
    lVar11 = *(long *)(param_1 + 0x2ab8);
    if (*(long *)(param_1 + 0x2ac0) == lVar11) goto LAB_0148ddbc;
  }
  else if (*(long *)(param_1 + 0x2ac0) == lVar11) {
LAB_0148ddbc:
    lVar10 = 0;
    goto LAB_0148dc3c;
  }
  lVar10 = *(long *)(lVar11 + (uVar13 / 0x38) * 8) + (uVar13 % 0x38) * 0x48;
LAB_0148dc3c:
  FUN_01495a54(param_1 + 0x2b00,lVar10,local_a0);
  lVar10 = *(long *)(param_1 + 11000);
  *(long *)(param_1 + 11000) = lVar10 + 1;
  uVar13 = *(long *)(param_1 + 0x2af0) + lVar10;
  lVar10 = *(long *)(*(long *)(param_1 + 0x2ab8) + (uVar13 / 0x38) * 8);
  uVar13 = uVar13 % 0x38;
  if (*(long *)(param_2 + 0x10) == 0) {
    local_f8 = *(int *)(param_2 + 0x40);
    if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_120 = 0;
    local_110 = 0xffffffffffffffff;
    uStack_108 = 0x3ffffffff;
    local_f2 = 0xffff00ff00010000;
    local_ea = 0x1ffffff;
    local_c0 = 0xffff;
    local_118 = 0;
    local_100 = 0xffffffffffffffff;
    local_bc = 0;
    local_de = 0xffffffff;
    local_da = 0;
    local_ba = 0xffff01000100;
    local_e6 = 0xffffffffffffffff;
    local_d2 = 0;
    local_ca = 0;
    local_f4 = *(undefined2 *)(param_2 + 0x44);
    plVar8 = *(long **)(param_1 + 8);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0xb8,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_02c651c0(lVar9,plVar8,&local_120);
    *(long **)(lVar9 + 8) = plVar8;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0xb8;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar14 = (long *)(lVar10 + uVar13 * 0x48 + 8);
    plVar8 = (long *)*plVar14;
    *plVar14 = 0;
    if (plVar8 != (long *)0x0) {
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
    }
    *plVar14 = lVar9;
  }
  else {
    local_120 = *(undefined8 *)(param_1 + 8);
    local_a8 = 0;
    local_ac = 0;
    lVar11 = FUN_014829d4(auStack_58,local_120,&local_120,(long)&local_a8 + 4,&local_a8,&local_ac);
    if (lVar11 != 0) {
      piVar2 = (int *)(lVar11 + 0x50);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar14 = (long *)(lVar10 + uVar13 * 0x48 + 8);
    plVar8 = (long *)*plVar14;
    *plVar14 = 0;
    if (plVar8 != (long *)0x0) {
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
    }
    *plVar14 = lVar11;
    FUN_02c653d0(lVar11,*(undefined8 *)(param_2 + 0x10));
  }
  puVar12 = (undefined1 *)(lVar10 + uVar13 * 0x48);
  *(undefined4 *)(puVar12 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(puVar12 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(puVar12 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  puVar12[0x2c] = *(undefined1 *)(param_2 + 0x2c);
  puVar12[0x2e] = *(undefined1 *)(param_2 + 0x2e);
  *(undefined4 *)(puVar12 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  puVar12[0x34] = *(undefined1 *)(param_2 + 0x34);
  *(undefined4 *)(puVar12 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *puVar12 = 2;
  *(undefined4 *)(puVar12 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined2 *)(puVar12 + 0x44) = *(undefined2 *)(param_2 + 0x44);
  *(undefined4 *)(puVar12 + 0x3c) = 0;
  if (local_98 != (long *)0x0) {
    plVar8 = local_98 + 10;
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
      (**(code **)(*local_98 + 0x10))();
    }
  }
  return;
}


