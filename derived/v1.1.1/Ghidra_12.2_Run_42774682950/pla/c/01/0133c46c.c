/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133c46c; name: FUN_0133c46c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133c46c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *local_260;
  long *local_258;
  undefined8 local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  undefined8 *local_110;
  char *local_108;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  long local_80;
  long local_78;
  undefined8 local_70 [2];
  
  FUN_0130f1e8(param_1,0);
  *(undefined8 *)(param_1 + 0x5c0) = param_2;
  local_70[0] = *(undefined8 *)(param_1 + 8);
  local_78 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  lVar1 = param_1 + 0x180;
  local_130 = (ulong)local_130._4_4_ << 0x20;
  local_150 = (ulong)local_150._4_4_ << 0x20;
  local_80 = lVar1;
  FUN_0133d1c0(&local_110,local_70[0],local_70,&local_80,&local_78,&PTR_s_L_info_content_00_04206038
               ,&local_130,&local_150);
  puVar3 = local_110;
  local_110 = (undefined8 *)0x0;
  lVar10 = *(long *)(param_1 + 0x5d0);
  *(undefined8 **)(param_1 + 0x5d0) = puVar3;
  if (lVar10 == 0) {
    *(code **)(param_1 + 0x5e8) = local_f8;
    *(undefined8 *)(param_1 + 0x5e0) = local_100;
    *(char **)(param_1 + 0x5d8) = local_108;
    local_110 = (undefined8 *)0x0;
  }
  else {
    FUN_0134078c(param_1 + 0x5d8);
    puVar3 = local_110;
    *(code **)(param_1 + 0x5e8) = local_f8;
    *(undefined8 *)(param_1 + 0x5e0) = local_100;
    *(char **)(param_1 + 0x5d8) = local_108;
    local_110 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_0134078c(&local_108);
    }
  }
  if (*(uint *)(local_78 + 400) != 0) {
    uVar13 = 0;
    piVar11 = (int *)(local_78 + 0x20);
    do {
      puVar3 = (undefined8 *)PTR_DAT_04379c88;
      if (*(long *)(piVar11 + -4) != 0) {
        puVar3 = (undefined8 *)(*(long *)(piVar11 + -4) + 0x58);
      }
      if (((undefined1 *)*puVar3 == &DAT_72837ff1f1cec6a2) && (*piVar11 == 10)) {
        if ((uint)uVar13 < 0x10) {
          plVar14 = *(long **)(piVar11 + -2);
          if (plVar14 != (long *)0x0) {
            lVar10 = plVar14[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar9;
            }
            piVar11 = (int *)(lVar10 + 0xc);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar5) {
                *piVar11 = *piVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          plVar14 = (long *)0x0;
        }
        plVar6 = (long *)plVar14[0xd];
        goto joined_r0x0133c57c;
      }
      uVar13 = uVar13 + 1;
      piVar11 = piVar11 + 6;
    } while (*(uint *)(local_78 + 400) != uVar13);
  }
  plVar14 = (long *)0x0;
  plVar6 = _DAT_00000068;
joined_r0x0133c57c:
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar14 != (long *)0x0) {
    lVar10 = plVar14[0xb];
    piVar11 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  plVar14 = *(long **)(param_1 + 0x2c8);
  if (plVar14 == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    plVar2 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar9 = *(undefined8 *)(param_1 + 0x2c8);
  }
  lVar15 = *(long *)(param_1 + 0x4a8);
  lVar10 = *(long *)(param_1 + 0x448);
  local_120 = 0x14;
  local_118 = (long *)0x0;
  local_150 = 0xa2f078446c80578a;
  pcStack_148 = "pane_L_info_content_00_P_icon_item_00";
  local_140 = 0x25;
  local_138 = (long *)0x0;
  local_130 = 0x52c2b56b5daee2fc;
  pcStack_128 = "work_map_app_info_01";
  FUN_00d62910(&local_110,uVar9,&local_130,&local_150);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  FUN_0284d5a8(lVar15,local_70[0],&local_110,0,&local_1d0);
  pcVar7 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar7)(&local_1b0);
  }
  pcVar7 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar7)(auStack_e0);
  }
  puVar3 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar11 = (int *)(local_110 + 1);
    do {
      iVar8 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_130 = *puVar3;
      FUN_02a44274(lVar12 + 0xd8,&local_130);
    }
  }
  local_120 = 0x14;
  local_118 = (long *)0x0;
  local_150 = 0xa2f079446c80593d;
  pcStack_148 = "pane_L_info_content_00_P_icon_item_01";
  local_130 = 0x52c2b56b5daee2fc;
  pcStack_128 = "work_map_app_info_01";
  local_140 = 0x25;
  local_138 = (long *)0x0;
  FUN_00d62910(&local_110,*(undefined8 *)(param_1 + 0x2c8),&local_130,&local_150);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  FUN_0284d5a8(lVar15 + 0xc0,local_70[0],&local_110,0,&local_1d0);
  pcVar7 = local_1c8;
  if (local_1c8 == (code *)0x0) {
    local_1c8 = (code *)0x0;
    pcVar7 = local_f8;
  }
  else {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar7)(&local_1b0);
    pcVar7 = local_f8;
  }
  local_f8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar7)(auStack_e0);
  }
  puVar3 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar11 = (int *)(local_110 + 1);
    do {
      iVar8 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_130 = *puVar3;
      FUN_02a44274(lVar12 + 0xd8,&local_130);
    }
  }
  local_120 = 0x14;
  local_118 = (long *)0x0;
  local_150 = 0xa2f076446c805424;
  pcStack_148 = "pane_L_info_content_00_P_icon_item_02";
  local_130 = 0x52c2b56b5daee2fc;
  pcStack_128 = "work_map_app_info_01";
  local_140 = 0x25;
  local_138 = (long *)0x0;
  FUN_00d62910(&local_110,*(undefined8 *)(param_1 + 0x2c8),&local_130,&local_150);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  FUN_0284d5a8(lVar15 + 0x180,local_70[0],&local_110,0,&local_1d0);
  pcVar7 = local_1c8;
  if (local_1c8 == (code *)0x0) {
    local_1c8 = (code *)0x0;
    pcVar7 = local_f8;
  }
  else {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar7)(&local_1b0);
    pcVar7 = local_f8;
  }
  local_f8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar7)(auStack_e0);
  }
  puVar3 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar11 = (int *)(local_110 + 1);
    do {
      iVar8 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_130 = *puVar3;
      FUN_02a44274(lVar15 + 0xd8,&local_130);
    }
  }
  local_120 = 0x14;
  local_118 = (long *)0x0;
  local_150 = 0xb44fb1aa1114f578;
  pcStack_148 = "pane_L_info_content_00_P_icon_poke_00";
  local_130 = 0x52c2b56b5daee2fc;
  pcStack_128 = "work_map_app_info_01";
  local_140 = 0x25;
  local_138 = (long *)0x0;
  FUN_00d62910(&local_110,*(undefined8 *)(param_1 + 0x2c8),&local_130,&local_150);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  FUN_0284d5a8(lVar10,local_70[0],&local_110,0,&local_250);
  pcVar7 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar7)(&local_230);
  }
  pcVar7 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar7)(auStack_e0);
  }
  puVar3 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar11 = (int *)(local_110 + 1);
    do {
      iVar8 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_130 = *puVar3;
      FUN_02a44274(lVar15 + 0xd8,&local_130);
    }
  }
  local_120 = 0x14;
  local_118 = (long *)0x0;
  local_150 = 0xb44fb2aa1114f72b;
  pcStack_148 = "pane_L_info_content_00_P_icon_poke_01";
  local_130 = 0x52c2b56b5daee2fc;
  pcStack_128 = "work_map_app_info_01";
  local_140 = 0x25;
  local_138 = (long *)0x0;
  FUN_00d62910(&local_110,*(undefined8 *)(param_1 + 0x2c8),&local_130,&local_150);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  FUN_0284d5a8(lVar10 + 0xd0,local_70[0],&local_110,0,&local_250);
  pcVar7 = local_248;
  if (local_248 == (code *)0x0) {
    local_248 = (code *)0x0;
    pcVar7 = local_f8;
  }
  else {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar7)(&local_230);
    pcVar7 = local_f8;
  }
  local_f8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar7)(auStack_e0);
  }
  puVar3 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar11 = (int *)(local_110 + 1);
    do {
      iVar8 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_130 = *puVar3;
      FUN_02a44274(lVar15 + 0xd8,&local_130);
    }
  }
  local_120 = 0x14;
  local_118 = (long *)0x0;
  local_150 = 0xb44fb3aa1114f8de;
  pcStack_148 = "pane_L_info_content_00_P_icon_poke_02";
  local_130 = 0x52c2b56b5daee2fc;
  pcStack_128 = "work_map_app_info_01";
  local_140 = 0x25;
  local_138 = (long *)0x0;
  FUN_00d62910(&local_110,*(undefined8 *)(param_1 + 0x2c8),&local_130,&local_150);
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  FUN_0284d5a8(lVar10 + 0x1a0,local_70[0],&local_110,0,&local_250);
  pcVar7 = local_248;
  if (local_248 == (code *)0x0) {
    local_248 = (code *)0x0;
    pcVar7 = local_f8;
  }
  else {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar7)(&local_230);
    pcVar7 = local_f8;
  }
  local_f8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar7)(auStack_e0);
  }
  puVar3 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar11 = (int *)(local_110 + 1);
    do {
      iVar8 = *piVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_130 = *puVar3;
      FUN_02a44274(lVar10 + 0xd8,&local_130);
    }
  }
  local_110 = (undefined8 *)0x143a02839ad9944b;
  local_108 = "pane_T_no_mssn_00";
  local_100 = 0x11;
  local_f8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_130 = 0xf2555a147022ee8;
  local_258 = plVar6;
  FUN_011845f4(lVar1,&local_110,&local_258,&local_130,10);
  if (local_258 != (long *)0x0) {
    plVar2 = local_258 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_258 + 0x10))();
    }
  }
  if (local_f8 != (code *)0x0) {
    (**(code **)(*(long *)local_f8 + 0x20))();
  }
  local_110 = (undefined8 *)0x143a01839ad99298;
  local_108 = "pane_T_no_mssn_01";
  local_100 = 0x11;
  local_f8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_130 = 0xf2556a14702309b;
  local_260 = plVar6;
  FUN_011845f4(lVar1,&local_110,&local_260,&local_130,10);
  if (local_260 != (long *)0x0) {
    plVar2 = local_260 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_260 + 0x10))();
    }
  }
  if (local_f8 != (code *)0x0) {
    (**(code **)(*(long *)local_f8 + 0x20))();
  }
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      iVar8 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar14 = plVar6 + 10;
    do {
      iVar8 = (int)*plVar14 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


