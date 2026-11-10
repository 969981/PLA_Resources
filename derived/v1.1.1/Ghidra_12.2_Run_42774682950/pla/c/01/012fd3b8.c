/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fd3b8; name: FUN_012fd3b8
 */


void FUN_012fd3b8(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84;
  long *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined4 local_58;
  long *local_48;
  
  lVar14 = *(long *)(param_3 + 0x90);
  lVar11 = *(long *)(lVar14 + (long)*(int *)(lVar14 + 0x164c) * 0x38 + 0x1650) +
           (ulong)*(uint *)(lVar14 + 0x1f80) * 0x30;
  uVar15 = *(undefined8 *)(lVar11 + 0x28);
  local_c8 = *(undefined8 *)(lVar11 + 8);
  uVar3 = *(undefined8 *)(lVar11 + 0x10);
  uVar10 = *(undefined8 *)(lVar11 + 0x18);
  uVar4 = *(undefined8 *)(lVar11 + 0x20);
  FUN_012fae24(lVar14 + 0x1758,&local_c8,1);
  local_c8 = uVar3;
  FUN_012fae24(lVar14 + 0x1888,&local_c8,1);
  local_c8 = uVar10;
  FUN_012fae24(lVar14 + 0x19b8,&local_c8,1);
  local_c8 = uVar4;
  FUN_012fae24(lVar14 + 0x1ae8,&local_c8,1);
  local_c8 = uVar15;
  FUN_012fae24(lVar14 + 0x1c18,&local_c8,1);
  uVar7 = FUN_012ffe68(*(undefined8 *)(param_3 + 0x90));
  if (*(long *)(param_3 + 0x98) != 0) {
    local_70 = &DAT_03996322;
    uStack_68 = 0;
    uStack_c0 = 0x98967f00000000;
    local_b8 = 7;
    local_90 = &DAT_cbf29ce484222645;
    local_88 = 0;
    local_84 = 1;
    local_60 = (long *)0x0;
    local_58 = 0;
    local_c8 = CONCAT26(uVar7,0x100000000);
    local_a0 = &DAT_cbf29ce484222645;
    puStack_98 = &DAT_cbf29ce484222645;
    local_b0 = (long *)0x0;
    local_a8 = &DAT_cbf29ce484222645;
    local_80 = (long *)0x0;
    puStack_78 = &DAT_cbf29ce484222645;
    puVar12 = *(undefined8 **)(*(long *)(param_3 + 0x68) + 0x18);
    plVar9 = (long *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_04379ca8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar8 != 0)) {
      uVar10 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_04379c98 = uVar10;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    if (plVar9 != (long *)PTR_DAT_04379c98) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)PTR_DAT_04379c98; plVar9 = (long *)*plVar9) {
      }
    }
    FUN_00d37c90(&local_48,puVar12[0x15],0);
    plVar9 = local_b0;
    plVar13 = (long *)local_48[0xd];
    if (plVar13 != (long *)0x0) {
      plVar1 = plVar13 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_b0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    local_b0 = plVar13;
    if (local_48 != (long *)0x0) {
      lVar11 = local_48[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    local_a8 = (undefined1 *)0x174cdbd3d5230109;
    local_a0 = (undefined1 *)0x174962d3d51ffd97;
    local_90 = (undefined1 *)0x174cdad3d522ff56;
    fVar16 = (float)FUN_00d5f79c(*(undefined8 *)(param_3 + 0x90),0);
    local_58 = CONCAT22((short)(int)param_2,(short)(int)fVar16);
    FUN_00d66128(*(undefined8 *)(param_3 + 0x98),&local_c8);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      plVar9 = local_80 + 10;
      do {
        iVar8 = (int)*plVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
    if (local_b0 != (long *)0x0) {
      plVar9 = local_b0 + 10;
      do {
        iVar8 = (int)*plVar9 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
  }
  return;
}


