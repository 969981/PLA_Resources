/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019105b4; name: FUN_019105b4
 */


void FUN_019105b4(long *param_1,uint *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *local_220;
  undefined8 uStack_218;
  undefined8 *local_210;
  code *local_208;
  code *local_200;
  undefined1 *local_1f8;
  undefined1 auStack_1f0 [104];
  undefined8 *local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  undefined8 uStack_170;
  long *local_168;
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  long *plStack_100;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80 [2];
  undefined8 local_70 [2];
  
  if (**(char **)(param_2 + 4) == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x18))(&local_150);
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_019132dc(&local_90,&local_150);
  if (local_150 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_150 + 1);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      local_150[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_c8 = (undefined8 *)*local_150;
      FUN_02a44274(lVar11 + 0xd8,&local_c8);
    }
  }
  uVar4 = *param_2;
  plVar13 = (long *)(ulong)uVar4;
  uVar12 = *(ulong *)(param_2 + 10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  puVar14 = *(undefined8 **)(param_2 + 0xe);
  plVar3 = *(long **)(param_2 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  FUN_019138ec(&local_c8,&local_90);
  local_b8 = uVar4;
  local_b0 = uVar12;
  uStack_a8 = uVar2;
  local_a0 = puVar14;
  local_98 = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (**(char **)(param_2 + 4) == '\0') {
LAB_019106f8:
    puStack_138 = (undefined1 *)0x0;
    local_140 = (code *)0x0;
    local_148 = (code *)0x0;
    local_150 = (undefined8 *)0x0;
    local_130 = 0;
    uStack_128 = 0;
    FUN_019138ec(&local_130,&local_c8);
    local_120 = uVar4;
    local_118 = uVar12;
    uStack_110 = uVar2;
    local_108 = puVar14;
    plStack_100 = plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    local_150 = (undefined8 *)&LAB_01915198;
    local_148 = (code *)&LAB_019154a0;
    local_140 = (code *)&LAB_0191556c;
    puStack_138 = &LAB_019155dc;
    if (3 < uVar4) {
      FUN_019138e0();
LAB_01910dd4:
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
      if (iVar9 != 0) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
LAB_01910b64:
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_70[0] = *puVar14;
      FUN_02a44274(lVar11 + 0xd8,local_70);
LAB_01910b90:
      FUN_0087fcf0(&local_160,&local_178);
      puVar14 = local_178;
      if (local_178 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_178 + 1);
        do {
          iVar9 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 + -1 == 0) {
          local_178[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_80[0] = (undefined8 *)*puVar14;
          FUN_02a44274(lVar11 + 0xd8,local_80);
        }
      }
      if (local_168 != (long *)0x0) {
        lVar11 = local_168[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_168 + 0x20))();
        }
      }
LAB_01910c20:
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      goto LAB_01910770;
    }
    uVar12 = 0;
    *(undefined1 *)(param_1 + (long)(int)uVar4 * 7 + 0x42) = 1;
  }
  else {
    local_140 = (code *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined8 *)0x0;
    local_148 = (code *)0x0;
    if (*param_2 != 4) goto LAB_019106f8;
    uVar12 = 1;
  }
  local_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  lVar11 = param_1[0xe];
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar9 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      lVar10 = FUN_01913b5c();
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01910770;
        if (plVar13 == (long *)lVar10) break;
        plVar13 = (long *)*plVar13;
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar9) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01910aa8;
        plVar13 = (long *)(*(long *)(lVar11 + 0x18) + -0x50);
        if (*(long *)(lVar11 + 0x18) != 0) {
          FUN_009c69bc(&local_168,plVar13);
          if (local_168 != (long *)0x0) {
            (**(code **)(*local_168 + 0x10))(local_80);
            local_178 = (undefined8 *)0x0;
            uStack_170 = 0;
            FUN_0087f944(&local_178,local_80);
            if (local_80[0] != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80[0] + 1);
              do {
                iVar9 = *piVar1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = iVar9 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 + -1 == 0) {
                local_80[0][2] = 0;
                puVar14 = local_80[0];
                if ((*PTR_DAT_04379498 & 1) == 0) goto LAB_01910dd4;
                goto LAB_01910b64;
              }
            }
            goto LAB_01910b90;
          }
          goto LAB_01910c20;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01910aa8:
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_01910770:
  local_188 = (undefined8 *)0x0;
  uStack_180 = 0;
  FUN_00b64344(&local_188,param_1 + 0x1f);
  lVar11 = param_1[1];
  local_200 = (code *)0x0;
  local_1f8 = (undefined1 *)0x0;
  local_210 = (undefined8 *)0x0;
  local_208 = (code *)0x0;
  if (local_140 != (code *)0x0) {
    (*local_140)(&local_130,auStack_1f0);
    local_200 = local_140;
    local_1f8 = puStack_138;
    local_210 = local_150;
    local_208 = local_148;
  }
  local_220 = (undefined8 *)0x0;
  uStack_218 = 0;
  FUN_008c4b3c(&local_220,&local_160);
  FUN_01916cb8(&local_188,lVar11,param_2 + 2,param_2 + 0x14,param_2 + 0x18,param_2 + 0x1c,
               uVar12 & 0xffffffff,&local_210,&local_220);
  puVar14 = local_220;
  if (local_220 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_220 + 1);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      local_220[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_80[0] = (undefined8 *)*puVar14;
      FUN_02a44274(lVar11 + 0xd8,local_80);
    }
  }
  pcVar8 = local_208;
  if (local_208 == (code *)0x0) {
    local_208 = (code *)0x0;
    puVar14 = local_188;
  }
  else {
    local_200 = (code *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined8 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar8)(auStack_1f0);
    puVar14 = local_188;
  }
  local_188 = puVar14;
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      puVar14[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_80[0] = (undefined8 *)*puVar14;
      FUN_02a44274(lVar11 + 0xd8,local_80);
    }
  }
  puVar14 = local_160;
  if (local_160 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_160 + 1);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      local_160[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_80[0] = (undefined8 *)*puVar14;
      FUN_02a44274(lVar11 + 0xd8,local_80);
    }
  }
  pcVar8 = local_148;
  if (local_148 == (code *)0x0) {
    local_148 = (code *)0x0;
  }
  else {
    local_140 = (code *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined8 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar8)(&local_130);
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  puVar14 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c8 + 1);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      local_c8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_150 = (undefined8 *)*puVar14;
      FUN_02a44274(lVar11 + 0xd8,&local_150);
    }
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  puVar14 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_150 = (undefined8 *)*puVar14;
      FUN_02a44274(lVar11 + 0xd8,&local_150);
    }
  }
  return;
}


