/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e1428; name: FUN_018e1428
 */


void FUN_018e1428(undefined8 param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 local_28;
  
  FUN_01b39678(&local_38);
  if (local_38 != (long *)0x0) {
    iVar6 = FUN_02c5be48();
    uVar7 = FUN_02c5be50(local_38);
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    snprintf((char *)&local_b8,0x80,"PLAY_PV_%03d_%02d_%02d",iVar6,uVar7 & 0xffff,param_2);
    FUN_01a74a50(&local_e0,param_1);
    if (local_e0 == (undefined8 *)0x0) {
      local_c0 = (long *)0x0;
    }
    else {
      FUN_00bd9360(&local_c0);
      puVar5 = local_e0;
      if (local_e0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_e0 + 1);
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
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
    }
    if (local_c0 != (long *)0x0) {
      local_e0 = (undefined8 *)&DAT_cbf29ce484222645;
      if ((byte)local_b8 != 0) {
        pbVar9 = (byte *)((ulong)&local_b8 | 1);
        do {
          local_e0 = (undefined8 *)(((ulong)local_e0 ^ (ulong)(byte)local_b8) * 0x100000001b3);
          local_b8._0_1_ = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while ((byte)local_b8 != 0);
      }
      puStack_d8 = &local_b8;
      local_d0 = 0x7f;
      local_c8 = (long *)0x0;
      FUN_0290b66c(local_c0,&local_e0,0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_c0 != (long *)0x0) {
        lVar8 = local_c0[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
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
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_c0 + 0x20))();
        }
      }
    }
    if (local_38 != (long *)0x0) {
      plVar2 = local_38 + 10;
      do {
        iVar6 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  return;
}


