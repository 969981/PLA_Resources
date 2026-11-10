/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5ee70; name: FUN_01a5ee70
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01a5ee70(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined1 *local_210;
  code *local_208;
  undefined1 *local_200;
  long *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_190;
  char *pcStack_188;
  undefined8 local_180;
  long *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  
  FUN_01a56a94(&local_f0);
  puVar4 = local_f0;
  puVar8 = PTR_DAT_0437a768;
  puVar7 = PTR_DAT_0437a760;
  if (local_f0 != (undefined8 *)0x0) {
    if (*(int *)((long)local_f0 + 0xc) != 0) {
      piVar1 = (int *)((long)local_f0 + 0xc);
      iVar10 = *(int *)((long)local_f0 + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          uVar11 = FUN_009cdcc0();
          *(undefined8 *)puVar8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01a5ef2c;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_f0;
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x01a5f478;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01a5ef2c:
    plVar13 = (long *)0x0;
    puVar4 = local_f0;
joined_r0x01a5f478:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_170 = (undefined1 *)*puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_170);
      }
    }
    if (plVar13 != (long *)0x0) {
      local_c8 = 0;
      local_148 = 0;
      local_210 = (undefined1 *)0x644d95b74dfd4100;
      local_208 = (code *)0x390a4ee;
      local_200 = (undefined1 *)0x23;
      local_1f8 = (long *)0x0;
      local_f0 = (undefined8 *)&LAB_01a6ebd4;
      local_e8 = FUN_01a6ecb8;
      local_e0 = &LAB_01a6ef50;
      local_d8 = &LAB_01a6ef5c;
      local_170 = &LAB_01a6ef68;
      local_168 = FUN_01a6f050;
      local_160 = &LAB_01a6f054;
      puStack_158 = &LAB_01a6f060;
      local_150 = param_1;
      local_d0 = param_1;
      FUN_028b9f80(plVar13,&local_210,&local_f0,&local_170);
      pcVar5 = local_168;
      if (local_168 == (code *)0x0) {
        local_168 = (code *)0x0;
        pcVar5 = local_e8;
      }
      else {
        local_160 = (undefined1 *)0x0;
        puStack_158 = (undefined1 *)0x0;
        local_170 = (undefined1 *)0x0;
        local_168 = (code *)0x0;
        (*pcVar5)(&local_150);
        pcVar5 = local_e8;
      }
      local_e8 = (code *)0x0;
      if (pcVar5 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined8 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar5)(&local_d0);
      }
      if (local_1f8 != (long *)0x0) {
        (**(code **)(*local_1f8 + 0x20))();
      }
      local_210 = (undefined1 *)0x1c29220ff41f85d5;
      local_208 = (code *)0x393c464;
      local_200 = (undefined1 *)0x16;
      local_1f8 = (long *)0x0;
      local_f0 = (undefined8 *)&LAB_01a6ebd4;
      local_c8 = 1;
      local_148 = 1;
      local_e8 = FUN_01a6ecb8;
      local_e0 = &LAB_01a6ef50;
      local_d8 = &LAB_01a6ef5c;
      local_170 = &LAB_01a6ef68;
      local_168 = FUN_01a6f050;
      local_160 = &LAB_01a6f054;
      puStack_158 = &LAB_01a6f060;
      local_150 = param_1;
      local_d0 = param_1;
      FUN_028b9f80(plVar13,&local_210,&local_f0,&local_170);
      pcVar5 = local_168;
      if (local_168 == (code *)0x0) {
        local_168 = (code *)0x0;
        pcVar5 = local_e8;
      }
      else {
        local_160 = (undefined1 *)0x0;
        puStack_158 = (undefined1 *)0x0;
        local_170 = (undefined1 *)0x0;
        local_168 = (code *)0x0;
        (*pcVar5)(&local_150);
        pcVar5 = local_e8;
      }
      local_e8 = (code *)0x0;
      if (pcVar5 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined8 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar5)(&local_d0);
      }
      if (local_1f8 != (long *)0x0) {
        (**(code **)(*local_1f8 + 0x20))();
      }
      local_210 = (undefined1 *)0x4f95ab609ff52739;
      local_208 = (code *)0x390a512;
      local_200 = (undefined1 *)0x2b;
      local_1f8 = (long *)0x0;
      local_f0 = (undefined8 *)&LAB_01a6ebd4;
      local_c8 = 2;
      local_148 = 2;
      local_e8 = FUN_01a6ecb8;
      local_e0 = &LAB_01a6ef50;
      local_d8 = &LAB_01a6ef5c;
      local_170 = &LAB_01a6ef68;
      local_168 = FUN_01a6f050;
      local_160 = &LAB_01a6f054;
      puStack_158 = &LAB_01a6f060;
      local_150 = param_1;
      local_d0 = param_1;
      FUN_028b9f80(plVar13,&local_210,&local_f0,&local_170);
      pcVar5 = local_168;
      if (local_168 == (code *)0x0) {
        local_168 = (code *)0x0;
        pcVar5 = local_e8;
      }
      else {
        local_160 = (undefined1 *)0x0;
        puStack_158 = (undefined1 *)0x0;
        local_170 = (undefined1 *)0x0;
        local_168 = (code *)0x0;
        (*pcVar5)(&local_150);
        pcVar5 = local_e8;
      }
      local_e8 = (code *)0x0;
      if (pcVar5 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined8 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar5)(&local_d0);
      }
      if (local_1f8 != (long *)0x0) {
        (**(code **)(*local_1f8 + 0x20))();
      }
      local_210 = (undefined1 *)0x2f040acac78b912c;
      local_208 = (code *)0x39933c5;
      local_200 = (undefined1 *)0x13;
      local_1f8 = (long *)0x0;
      local_f0 = (undefined8 *)&LAB_01a6ebd4;
      local_c8 = 3;
      local_148 = 3;
      local_e8 = FUN_01a6ecb8;
      local_e0 = &LAB_01a6ef50;
      local_d8 = &LAB_01a6ef5c;
      local_170 = &LAB_01a6ef68;
      local_168 = FUN_01a6f050;
      local_160 = &LAB_01a6f054;
      puStack_158 = &LAB_01a6f060;
      local_150 = param_1;
      local_d0 = param_1;
      FUN_028b9f80(plVar13,&local_210,&local_f0,&local_170);
      pcVar5 = local_168;
      if (local_168 == (code *)0x0) {
        local_168 = (code *)0x0;
        pcVar5 = local_e8;
      }
      else {
        local_160 = (undefined1 *)0x0;
        puStack_158 = (undefined1 *)0x0;
        local_170 = (undefined1 *)0x0;
        local_168 = (code *)0x0;
        (*pcVar5)(&local_150);
        pcVar5 = local_e8;
      }
      local_e8 = (code *)0x0;
      if (pcVar5 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined8 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar5)(&local_d0);
      }
      if (local_1f8 != (long *)0x0) {
        (**(code **)(*local_1f8 + 0x20))();
      }
      local_c8 = 0;
      local_148 = 0;
      local_190 = 0xb86791a9de2d97e8;
      pcStack_188 = "Field/CharacterController/OverrideActionVolume";
      local_180 = 0x2e;
      local_178 = (long *)0x0;
      local_f0 = (undefined8 *)&LAB_01a6f06c;
      local_e8 = FUN_01a6f168;
      local_e0 = &LAB_01a6f404;
      local_d8 = &LAB_01a6f410;
      local_170 = &LAB_01a6f41c;
      local_168 = FUN_01a6f50c;
      local_160 = &LAB_01a6f510;
      puStack_158 = &LAB_01a6f51c;
      local_210 = &LAB_01a6f528;
      local_208 = FUN_01a6f628;
      local_200 = &LAB_01a6f62c;
      local_1e8 = 0;
      local_1f8 = (long *)&LAB_01a6f638;
      uStack_1f0 = param_1;
      local_150 = param_1;
      local_d0 = param_1;
      FUN_028ba7cc(plVar13,&local_190,&local_f0,&local_170,&local_210);
      pcVar5 = local_208;
      if (local_208 == (code *)0x0) {
        local_208 = (code *)0x0;
        pcVar5 = local_168;
      }
      else {
        local_200 = (undefined1 *)0x0;
        local_1f8 = (long *)0x0;
        local_210 = (undefined1 *)0x0;
        local_208 = (code *)0x0;
        (*pcVar5)(&uStack_1f0);
        pcVar5 = local_168;
      }
      local_168 = (code *)0x0;
      pcVar6 = local_e8;
      if (pcVar5 != (code *)0x0) {
        local_160 = (undefined1 *)0x0;
        puStack_158 = (undefined1 *)0x0;
        local_170 = (undefined1 *)0x0;
        local_168 = (code *)0x0;
        (*pcVar5)(&local_150);
        pcVar6 = local_e8;
      }
      local_e8 = (code *)0x0;
      if (pcVar6 != (code *)0x0) {
        local_e0 = (undefined1 *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined8 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar6)(&local_d0);
      }
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x20))();
      }
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  return;
}


