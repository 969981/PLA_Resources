/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b74008; name: FUN_01b74008
 */


void FUN_01b74008(long param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_170 [4];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_28;
  
  if (*(ushort *)(*param_3 + 4) < 0xd) {
    local_160 = 0;
    local_170[0] = 0xffffffff;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = *(undefined8 *)PTR_DAT_04379570;
    uStack_128 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    local_158 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_80 = 0;
    local_108 = (undefined8 *)0x0;
    uStack_100 = 0;
    local_f8 = (undefined8 *)0x0;
    uStack_f0 = 0;
    local_e8 = &DAT_cbf29ce484222645;
    puStack_e0 = &DAT_03996322;
    local_d8 = 0;
    local_d0 = (long *)0x0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_58 = &DAT_cbf29ce484222645;
    puStack_50 = &DAT_03996322;
    local_48 = 0;
    local_40 = (long *)0x0;
    local_a0 = local_130;
    uStack_98 = uStack_128;
    FUN_01b732c4(local_170);
    plVar6 = *(long **)(param_1 + 0x660);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,param_1,local_170);
    }
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    puVar4 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    puVar4 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    puVar4 = local_f8;
    if (local_f8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_f8 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_f8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    puVar4 = local_108;
    if (local_108 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_108 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_108[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  return;
}


