/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008a6cac; name: FUN_008a6cac
 */


void FUN_008a6cac(long param_1,undefined2 *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *local_198;
  char *pcStack_190;
  undefined8 local_188;
  long *local_180;
  long *local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined4 local_164;
  undefined7 local_148;
  undefined1 uStack_141;
  undefined6 uStack_140;
  undefined1 local_13a;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  long *local_f0;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined7 local_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  long *local_58;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  uVar3 = *(undefined1 *)(*(long *)(param_3 + 0x18) + 0x7d);
  uVar8 = FUN_02950844();
  uVar9 = FUN_00923ca8(*(undefined8 *)(param_1 + 0x68));
  FUN_00928240(&local_f0,uVar9,uVar3);
  plVar1 = local_f0;
  uVar6 = FUN_02c601b8(uVar8);
  FUN_02c601c0(plVar1,uVar6);
  plVar1 = local_f0;
  uVar6 = FUN_02c5fbd4(uVar8);
  FUN_02c5fc04(plVar1,uVar6);
  if (local_f0 != (long *)0x0) {
    plVar1 = local_f0 + 10;
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
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  uVar8 = FUN_00923bc4(*(undefined8 *)(param_1 + 0x68));
  local_f0 = (long *)CONCAT71(local_f0._1_7_,*(undefined1 *)(*(long *)(param_3 + 0x18) + 0x7d));
  FUN_00998db0(&local_58,uVar8,&local_f0);
  if (local_58 != (long *)0x0) {
    local_f0 = (long *)0x0;
    local_e8 = 0;
    local_e4 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c1 = 0;
    uStack_c0 = 0;
    local_a8 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 1;
    local_74 = 0x3f800000;
    local_5c = 2;
    local_60 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_98 = &DAT_cbf29ce484222645;
    puStack_90 = &DAT_cbf29ce484222645;
    local_70 = 0;
    uStack_68 = 0;
    lVar10 = FUN_008a7e50(local_58 + 0x1e,&local_170);
    if (lVar10 != 0) {
      local_170 = 0;
      local_168 = 0;
      local_164 = 0;
      local_124 = 0;
      local_120 = 0;
      local_148 = 0;
      uStack_141 = 0;
      uStack_140 = 0;
      local_13a = 0;
      local_128 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 1;
      local_f4 = 0x3f800000;
      local_138 = 0;
      uStack_130 = 0;
      local_118 = &DAT_cbf29ce484222645;
      puStack_110 = &DAT_cbf29ce484222645;
      FUN_0190527c(&local_170,lVar10);
      uVar3 = *(undefined1 *)(*(long *)(param_3 + 0x18) + 0x7d);
      FUN_02950844();
      uVar8 = FUN_00923ca8(*(undefined8 *)(param_1 + 0x68));
      FUN_00928240(&local_198,uVar8,uVar3);
      FUN_0190548c(&local_170,local_198);
      if (local_198 != (long *)0x0) {
        plVar1 = local_198 + 10;
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
          (**(code **)(*local_198 + 0x10))();
        }
      }
      FUN_0190573c(&local_170,*(undefined2 *)(param_3 + 0x20));
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
        FUN_00100250(&LAB_008a836c,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01148a98(&local_178);
      local_198 = (long *)0x52daf76250fe632a;
      pcStack_190 = "WSYS_U_RANK";
      local_188 = 0xb;
      local_180 = (long *)0x0;
      uVar6 = FUN_010f5878(local_178,&local_198);
      local_170 = CONCAT44(local_170._4_4_,uVar6);
      if (local_180 != (long *)0x0) {
        (**(code **)(*local_180 + 0x20))();
      }
      if (local_178 != (long *)0x0) {
        lVar11 = local_178[0xb];
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_178 + 0x20))();
        }
      }
      lVar11 = FUN_00923bb4(*(undefined8 *)(param_1 + 0x68));
      local_13a = *(undefined1 *)(lVar11 + 0x3d0);
      FUN_01905800(&local_f0,&local_170);
    }
    while (iVar7 = FUN_019065e8(&local_f0), iVar7 != 0) {
      if (iVar7 == 2) {
        if (lVar10 == 0) goto LAB_008a6f7c;
        FUN_01ba01c4(lVar10,1);
        if (local_58 == (long *)0x0) {
          return;
        }
        goto LAB_008a6f84;
      }
      *(char *)(param_2 + 1) = *(char *)(param_2 + 1) + '\x01';
    }
    *(undefined1 *)param_2 = 1;
    if (lVar10 != 0) {
      FUN_01ba01b0(lVar10,1);
    }
LAB_008a6f7c:
    if (local_58 != (long *)0x0) {
LAB_008a6f84:
      lVar10 = local_58[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  return;
}


