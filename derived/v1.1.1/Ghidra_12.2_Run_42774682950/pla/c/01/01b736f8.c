/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b736f8; name: FUN_01b736f8
 */


void FUN_01b736f8(long param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_1a8 [8];
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined8 local_190;
  long *local_188;
  int local_180 [4];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_38;
  
  lVar11 = *param_3;
  if (*(ushort *)(lVar11 + 4) < 0xd) {
    local_170 = 0;
    local_180[0] = -1;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = *(undefined8 *)PTR_DAT_04379570;
    uStack_138 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    local_168 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_90 = 0;
    local_118 = (undefined8 *)0x0;
    uStack_110 = 0;
    local_108 = (undefined8 *)0x0;
    uStack_100 = 0;
    local_f8 = &DAT_cbf29ce484222645;
    puStack_f0 = &DAT_03996322;
    local_e8 = 0;
    local_e0 = (long *)0x0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_68 = &DAT_cbf29ce484222645;
    puStack_60 = &DAT_03996322;
    local_58 = 0;
    local_50 = (long *)0x0;
    local_b0 = local_140;
    uStack_a8 = uStack_138;
    FUN_01b732c4(local_180);
    puVar7 = *(undefined8 **)(param_1 + 0x660);
    if ((puVar7 == (undefined8 *)0x0) ||
       (uVar8 = (**(code **)*puVar7)(puVar7,param_1,local_180), (uVar8 & 1) != 0)) {
      if (local_180[0] == 3) {
        if (*(long *)(param_1 + 0x3c0) == 0) {
          local_38 = (long *)0x0;
        }
        else {
          FUN_00b91400(&local_38);
          if (local_38 != (long *)0x0) {
            lVar9 = (**(code **)(**(long **)*param_2 + 0xa0))();
            plVar5 = local_38;
            uVar4 = local_90;
            lVar11 = *(long *)(lVar11 + 0x18);
            uVar8 = 0;
            if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x20), uVar8 = 0, lVar11 != 0)) {
              uVar8 = (ulong)*(ushort *)(lVar11 + 0x16);
            }
            FUN_032c7b0c(auStack_1a8,*(long *)(lVar9 + 0x48) + uVar8 * 0x50);
            FUN_01c3bbe4(&local_1a0,plVar5,uVar4,&local_170,auStack_1a8);
            plVar5 = local_50;
            local_68 = local_1a0;
            puStack_60 = puStack_198;
            local_58 = local_190;
            local_50 = (long *)0x0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            local_50 = local_188;
            local_188 = (long *)0x0;
            FUN_032c7b9c(auStack_1a8);
            if (local_38 != (long *)0x0) {
              lVar11 = local_38[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar6 + -1 == 0) {
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*local_38 + 0x20))();
              }
            }
          }
        }
      }
      lVar9 = *(long *)(param_1 + 0x228);
      lVar11 = *(long *)(param_1 + 0x220);
      uVar8 = 0;
      if (lVar9 - lVar11 != 0) {
        uVar8 = (lVar9 - lVar11) * 2 - 1;
      }
      uVar10 = *(long *)(param_1 + 0x260) + *(long *)(param_1 + 600);
      if (uVar8 == uVar10) {
        FUN_01b7c038(param_1 + 0x218);
        uVar10 = *(long *)(param_1 + 600) + *(long *)(param_1 + 0x260);
        lVar11 = *(long *)(param_1 + 0x220);
        lVar9 = *(long *)(param_1 + 0x228);
      }
      if (lVar9 == lVar11) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(long *)(lVar11 + (uVar10 >> 1 & 0x7ffffffffffffff8)) + (uVar10 & 0xf) * 0x140;
      }
      FUN_01b7cfa0(param_1 + 0x268,lVar11,local_180);
      *(long *)(param_1 + 0x260) = *(long *)(param_1 + 0x260) + 1;
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    puVar7 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1a0 = (undefined1 *)*puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_1a0);
      }
    }
    puVar7 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_88 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1a0 = (undefined1 *)*puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_1a0);
      }
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    puVar7 = local_108;
    if (local_108 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_108 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_108[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1a0 = (undefined1 *)*puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_1a0);
      }
    }
    puVar7 = local_118;
    if (local_118 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_118 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_118[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1a0 = (undefined1 *)*puVar7;
        FUN_02a44274(lVar11 + 0xd8,&local_1a0);
      }
    }
  }
  return;
}


