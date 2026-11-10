/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009454d8; name: FUN_009454d8
 */


void FUN_009454d8(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined1 local_10c [4];
  long *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ushort local_c0;
  undefined1 local_be;
  undefined6 uStack_bc;
  undefined2 local_b6;
  undefined6 uStack_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined8 local_70 [2];
  
  FUN_02947534(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98));
  uVar7 = FUN_0295e400();
  lVar8 = FUN_0294d654(uVar7,0);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x30);
  if (*(byte *)(lVar8 + 0x30) != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_04379570;
    uVar2 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    uVar11 = 0;
    uVar12 = 0;
    do {
      if ((uVar12 & 0xff) < (uint)uVar9) {
        local_100 = *(undefined8 *)(lVar8 + uVar11 * 8);
      }
      else {
        local_100 = 0;
      }
      local_f0 = 0;
      uStack_f8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_c0 = 0;
      local_be = 0;
      local_ac = 0;
      local_a8 = 0;
      uStack_b4 = 0;
      uStack_bc = 0;
      local_b6 = 0;
      local_80 = 1;
      local_90 = 0;
      local_88 = 0;
      local_7c = 0x3f800000;
      local_a0 = &DAT_cbf29ce484222645;
      puStack_98 = &DAT_cbf29ce484222645;
      local_d0 = uVar7;
      uStack_c8 = uVar2;
      if (uVar11 == 0) {
        local_c0 = (ushort)*(byte *)(*(long *)(param_1 + 0x38) + 0x3d0);
        FUN_009332a0(&local_108,*(undefined8 *)(*(long *)(param_1 + 0x28) + 200),&local_100);
        local_10c[0] = *(undefined1 *)(local_108[0xe] + 0x7d);
        local_120 = (undefined8 *)0x0;
        uStack_118 = 0;
        FUN_008c4b3c(&local_120,*(long *)(param_1 + 0x38) + 0x2e0);
        FUN_00945fa8(*(long *)(param_1 + 0x40) + 0x58,local_10c,&local_120);
        puVar5 = local_120;
        if (local_120 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_120 + 1);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            local_120[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar10 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar10;
            local_70[0] = *puVar5;
            FUN_02a44274(lVar10 + 0xd8,local_70);
          }
        }
      }
      else {
        FUN_009332a0(&local_108,*(undefined8 *)(*(long *)(param_1 + 0x28) + 200),&local_100);
        local_10c[0] = *(undefined1 *)(local_108[0xe] + 0x7d);
      }
      if (local_108 != (long *)0x0) {
        lVar10 = local_108[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_108 + 0x20))();
        }
      }
      uVar9 = (ulong)*(byte *)(lVar8 + 0x30);
      uVar11 = uVar11 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar11 < uVar9);
  }
  return;
}


