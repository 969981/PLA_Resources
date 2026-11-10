/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad229c; name: FUN_00ad229c
 */


void FUN_00ad229c(long *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined1 *local_1a0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 auStack_180 [96];
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  long *aplStack_100 [13];
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  if (param_1[0x8c] == 0) {
    uVar2 = *(undefined1 *)((long)param_1 + 0x4b9);
    uVar3 = *(undefined1 *)((long)param_1 + 0x4bb);
    lVar10 = param_1[1];
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = PTR_DAT_0437a6d0 + 0x10;
    uStack_80 = 0;
    FUN_00ad3ac4(&local_88,0,param_1 + 0x8d,0,lVar10,0);
    plVar9 = (long *)FUN_00ad276c(param_1,lVar10,param_1 + 0x93,uVar3);
    FUN_017d3974(plVar9 + 0x4e,&local_88);
    *(undefined1 *)(plVar9 + 0x4c) = 1;
    plVar9[0x4b] = 0;
    plVar9[0x4a] = 0;
    *(undefined1 *)((long)plVar9 + 0x2f1) = uVar2;
    (**(code **)(*plVar9 + 0x10))(local_58,plVar9);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_00ad3450(&local_98,local_58);
    puVar7 = local_58[0];
    if (local_58[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58[0] + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_58[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar7;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    FUN_00ad52f4(param_1 + 0x98,&local_98);
    puVar7 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_98 + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_58[0] = (undefined8 *)*puVar7;
        FUN_02a44274(lVar10 + 0xd8,local_58);
      }
    }
    FUN_00984b00(&local_88);
  }
  else {
    FUN_00ad2580(param_1,param_1[0x8c],param_1 + 0x93,*(undefined1 *)((long)param_1 + 0x4b9),
                 *(undefined1 *)((long)param_1 + 0x4bb),param_1[1]);
  }
  local_120 = &LAB_00ad3830;
  local_118 = FUN_00ad3a98;
  local_110 = &LAB_00ad3a9c;
  local_108 = &LAB_00ad3aa8;
  local_1a0 = &LAB_00ad3ab4;
  local_198 = FUN_00ad3ab8;
  local_190 = &LAB_00ad3abc;
  puStack_188 = &LAB_00ad3ac0;
  aplStack_100[0] = param_1;
  (**(code **)(*param_1 + 0xf8))(param_1,&local_120,&local_1a0);
  pcVar6 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = (undefined1 *)0x0;
    puStack_188 = (undefined1 *)0x0;
    local_1a0 = (undefined1 *)0x0;
    local_198 = (code *)0x0;
    (*pcVar6)(auStack_180);
  }
  pcVar6 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (undefined1 *)0x0;
    local_108 = (undefined1 *)0x0;
    local_120 = (undefined1 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar6)(aplStack_100);
  }
  return;
}


