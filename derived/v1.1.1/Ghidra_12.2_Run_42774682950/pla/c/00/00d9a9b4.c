/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9a9b4; name: FUN_00d9a9b4
 */


void FUN_00d9a9b4(undefined1 param_1 [16],float param_2,long param_3)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  code *pcVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  code *local_198;
  code *pcStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  code *local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80 [2];
  
  iVar15 = 0;
  lVar30 = 0x60;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  do {
    if ((*(long **)(param_3 + lVar30) != (long *)0x0) &&
       (uVar17 = (**(code **)(**(long **)(param_3 + lVar30) + 0x58))(), (uVar17 & 1) != 0)) {
      *(undefined4 *)(*(long *)(param_3 + lVar30) + 0x38) = *(undefined4 *)(param_3 + 0x100);
      (**(code **)(**(long **)(param_3 + lVar30) + 0x10))();
      if ((iVar15 == 0) || (pcVar31 = *(code **)(param_3 + 0x90), pcVar31 == (code *)0x0)) {
        local_a0 = (**(code **)(**(long **)(param_3 + lVar30) + 0x18))();
      }
      else {
        uVar14 = (**(code **)(**(long **)(param_3 + lVar30) + 0x40))();
        local_150 = (code *)(**(code **)(**(long **)(param_3 + lVar30) + 0x18))();
        local_a0 = (*pcVar31)(&local_a0,uVar14,&local_150);
      }
      if ((iVar15 == 0) || (pcVar31 = *(code **)(param_3 + 0x98), pcVar31 == (code *)0x0)) {
        puVar29 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar30) + 0x20))();
        local_b8 = *puVar29;
        puVar29 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar30) + 0x28))();
        local_b0 = *puVar29;
        puVar29 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar30) + 0x38))();
        local_c8 = *puVar29;
        puVar29 = (undefined8 *)(**(code **)(**(long **)(param_3 + lVar30) + 0x30))();
        local_c0 = *puVar29;
        fVar33 = (float)local_c0;
        param_2 = (float)((ulong)local_c0 >> 0x20);
      }
      else {
        uVar14 = (**(code **)(**(long **)(param_3 + lVar30) + 0x40))();
        uVar18 = (**(code **)(**(long **)(param_3 + lVar30) + 0x20))();
        uVar14 = (*pcVar31)(&local_b8,uVar14,uVar18);
        local_b8 = CONCAT44(param_2,uVar14);
        pcVar31 = *(code **)(param_3 + 0x98);
        uVar14 = (**(code **)(**(long **)(param_3 + lVar30) + 0x40))();
        uVar18 = (**(code **)(**(long **)(param_3 + lVar30) + 0x28))();
        uVar14 = (*pcVar31)(&local_b0,uVar14,uVar18);
        local_b0 = CONCAT44(param_2,uVar14);
        pcVar31 = *(code **)(param_3 + 0x98);
        uVar14 = (**(code **)(**(long **)(param_3 + lVar30) + 0x40))();
        uVar18 = (**(code **)(**(long **)(param_3 + lVar30) + 0x38))();
        uVar14 = (*pcVar31)(&local_c8,uVar14,uVar18);
        local_c8 = CONCAT44(param_2,uVar14);
        pcVar31 = *(code **)(param_3 + 0x98);
        uVar14 = (**(code **)(**(long **)(param_3 + lVar30) + 0x40))();
        uVar18 = (**(code **)(**(long **)(param_3 + lVar30) + 0x30))();
        fVar33 = (float)(*pcVar31)(&local_c0,uVar14,uVar18);
        local_c0 = CONCAT44(param_2,fVar33);
      }
      fVar35 = param_2 + local_b8._4_4_;
      fVar33 = fVar33 + (float)local_b8;
      fVar36 = fVar35;
      if (1.0 < fVar35) {
        fVar36 = 1.0;
      }
      fVar37 = fVar33;
      if (1.0 < fVar33) {
        fVar37 = 1.0;
      }
      fVar34 = -1.0;
      if (-1.0 <= fVar33) {
        fVar34 = fVar37;
      }
      param_2 = -1.0;
      if (-1.0 <= fVar35) {
        param_2 = fVar36;
      }
      iVar15 = iVar15 + 1;
      local_a8 = CONCAT44(param_2,fVar34);
    }
    lVar30 = lVar30 + -0x20;
  } while (lVar30 != 0);
  if ((local_a0 == 0) || (local_a0 != *(ulong *)(param_3 + 0xe8))) {
    iVar15 = *(int *)(param_3 + 0x10);
    *(int *)(param_3 + 0x18) = iVar15;
  }
  else {
    iVar15 = *(int *)(param_3 + 0x18);
  }
  if (iVar15 == 0) {
    iVar15 = *(int *)(param_3 + 0x14);
    *(int *)(param_3 + 0x18) = iVar15;
  }
  uVar23 = 0;
  puVar20 = (ulong *)(param_3 + 0xa0);
  *puVar20 = 0;
  *(int *)(param_3 + 0x18) = iVar15 + -1;
  uVar24 = 0;
  *(undefined8 *)(param_3 + 0xb8) = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar17 = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  *(undefined8 *)(param_3 + 0xb0) = 0;
  do {
    uVar19 = 1L << (uVar17 & 0x3f);
    if ((uVar19 & local_a0) != 0) {
      uVar26 = uVar26 | uVar19;
      *puVar20 = uVar26;
    }
    if ((uVar19 & local_a0 & ~*(ulong *)(param_3 + 0xe8)) != 0) {
      uVar25 = uVar25 | uVar19;
      *(ulong *)(param_3 + 0xa8) = uVar25;
    }
    if ((uVar19 & ~local_a0 & *(ulong *)(param_3 + 0xe8)) != 0) {
      uVar24 = uVar24 | uVar19;
      *(ulong *)(param_3 + 0xb0) = uVar24;
    }
    if (iVar15 + -1 == 0 && (uVar19 & local_a0) != 0) {
      uVar23 = uVar23 | uVar19;
      *(ulong *)(param_3 + 0xb8) = uVar23;
    }
    puVar10 = PTR_DAT_0437b5d0;
    uVar17 = uVar17 + 1;
  } while (uVar17 != 0x40);
  iVar15 = 0;
  lVar30 = 2;
  do {
    while (lVar28 = *(long *)(param_3 + 0x80), lVar28 != 0) {
      if (*(int *)(lVar28 + 0xc) != 0) {
        piVar1 = (int *)(lVar28 + 0xc);
        iVar32 = *(int *)(lVar28 + 0xc);
        do {
          plVar27 = *(long **)(lVar28 + 0x10);
          if (((*PTR_DAT_0437b5d8 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_0437b5d8), iVar16 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar16 != 0)) {
              uVar18 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar18;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar10 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437b5d8);
          }
          while( true ) {
            if (plVar27 == (long *)0x0) goto LAB_00d9b1f8;
            if (plVar27 == (long *)puVar10) break;
            plVar27 = (long *)*plVar27;
          }
          iVar16 = *piVar1;
          if (iVar16 == iVar32) {
            cVar9 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar32 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') {
              lVar28 = *(long *)(lVar28 + 0x18);
              if (lVar28 != 0) {
                plVar27 = (long *)(param_3 + lVar30 * 0x20 + 0x20);
                if (((long *)*plVar27 != (long *)0x0) &&
                   (uVar17 = (**(code **)(*(long *)*plVar27 + 0x58))(), (uVar17 & 1) != 0)) {
                  uVar14 = (**(code **)(*(long *)*plVar27 + 0x40))();
                  FUN_00da6454(&local_150,(long *)(lVar28 + -0x50),uVar14);
                  if ((iVar15 == 0) ||
                     (pcVar31 = *(code **)(param_3 + 0x90), pcVar31 == (code *)0x0)) {
                    local_198 = *(code **)(param_3 + 0xa0);
                    uVar18 = (*local_150)(&local_130,&local_198);
                    local_198 = *(code **)(param_3 + 0xb0);
                    *(undefined8 *)(param_3 + 0xa0) = uVar18;
                    uVar18 = (*local_150)(&local_130,&local_198);
                    local_198 = *(code **)(param_3 + 0xb8);
                    *(undefined8 *)(param_3 + 0xb0) = uVar18;
                    uVar18 = (*local_150)(&local_130,&local_198);
                    local_198 = *(code **)(param_3 + 0xa8);
                    *(undefined8 *)(param_3 + 0xb8) = uVar18;
                    uVar18 = (*local_150)(&local_130,&local_198);
                    *(undefined8 *)(param_3 + 0xa8) = uVar18;
                  }
                  else {
                    uVar14 = (**(code **)(*(long *)*plVar27 + 0x40))();
                    local_198 = *(code **)(param_3 + 0xa0);
                    local_198 = (code *)(*local_150)(&local_130,&local_198);
                    uVar18 = (*pcVar31)(puVar20,uVar14,&local_198);
                    *(undefined8 *)(param_3 + 0xa0) = uVar18;
                    pcVar31 = *(code **)(param_3 + 0x90);
                    uVar14 = (**(code **)(*(long *)*plVar27 + 0x40))();
                    puVar29 = (undefined8 *)(param_3 + 0xb0);
                    local_198 = (code *)*puVar29;
                    local_198 = (code *)(*local_150)(&local_130,&local_198);
                    uVar18 = (*pcVar31)(puVar29,uVar14,&local_198);
                    *puVar29 = uVar18;
                    pcVar31 = *(code **)(param_3 + 0x90);
                    uVar14 = (**(code **)(*(long *)*plVar27 + 0x40))();
                    local_198 = *(code **)(param_3 + 0xb8);
                    local_198 = (code *)(*local_150)(&local_130,&local_198);
                    uVar18 = (*pcVar31)((undefined8 *)(param_3 + 0xb8),uVar14,&local_198);
                    *(undefined8 *)(param_3 + 0xb8) = uVar18;
                    pcVar31 = *(code **)(param_3 + 0x90);
                    uVar14 = (**(code **)(*(long *)*plVar27 + 0x40))();
                    puVar29 = (undefined8 *)(param_3 + 0xa8);
                    local_198 = (code *)*puVar29;
                    local_198 = (code *)(*local_150)(&local_130,&local_198);
                    uVar18 = (*pcVar31)(puVar29,uVar14,&local_198);
                    *puVar29 = uVar18;
                  }
                  pcVar31 = local_148;
                  iVar15 = iVar15 + 1;
                  if (local_148 != (code *)0x0) {
                    local_140 = 0;
                    uStack_138 = 0;
                    local_150 = (code *)0x0;
                    local_148 = (code *)0x0;
                    (*pcVar31)(&local_130);
                  }
                }
                lVar22 = *(long *)(lVar28 + 8);
                piVar1 = (int *)(lVar22 + 0xc);
                do {
                  iVar32 = *piVar1;
                  cVar9 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar2) {
                    *piVar1 = iVar32 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (iVar32 + -1 == 0) {
                  *(undefined8 *)(lVar22 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar28 + -0x50) + 0x20))();
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar32 = iVar16;
        } while (iVar16 != 0);
      }
LAB_00d9b1f8:
      bVar2 = lVar30 == 0;
      lVar30 = lVar30 + -1;
      if (bVar2) goto LAB_00d9ad24;
    }
    bVar2 = lVar30 != 0;
    lVar30 = lVar30 + -1;
  } while (bVar2);
LAB_00d9ad24:
  *(ulong *)(param_3 + 0xe8) = local_a0;
  *(undefined8 *)(param_3 + 0xc0) = local_c8;
  lVar30 = *(long *)(param_3 + 0xf0);
  *(undefined8 *)(param_3 + 0xd8) = local_b0;
  *(undefined8 *)(param_3 + 0xe0) = local_a8;
  *(undefined8 *)(param_3 + 200) = local_c0;
  *(undefined8 *)(param_3 + 0xd0) = local_b8;
  if (lVar30 != 0) {
    pcVar31 = (code *)*puVar20;
    pcVar5 = *(code **)(param_3 + 0xa8);
    uVar18 = *(undefined8 *)(param_3 + 0xb0);
    uVar6 = *(undefined8 *)(param_3 + 0xb8);
    uVar21 = *(undefined8 *)(param_3 + 0xc0);
    uVar3 = *(undefined8 *)(param_3 + 200);
    uVar7 = *(undefined8 *)(param_3 + 0xd0);
    uVar4 = *(undefined8 *)(param_3 + 0xd8);
    uVar8 = *(undefined8 *)(param_3 + 0xe0);
    local_198 = pcVar31;
    pcStack_190 = pcVar5;
    local_188 = uVar18;
    local_180 = uVar6;
    local_178 = uVar21;
    local_170 = uVar3;
    uStack_168 = uVar7;
    local_160 = uVar4;
    uStack_158 = uVar8;
    lVar28 = nn::os::GetCurrentThread();
    plVar27 = (long *)(lVar30 + 0xf8);
    do {
      if (*plVar27 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0xec));
          while (*plVar27 == 0) {
            cVar9 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar2) {
              *plVar27 = lVar28;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_00d9adec;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar9 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar2) {
        *plVar27 = lVar28;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_00d9adec:
    puVar13 = PTR_LAB_04379590;
    puVar12 = PTR_DAT_043794a8;
    puVar11 = PTR_DAT_043794a0;
    puVar10 = PTR_DAT_04379498;
    plVar27 = *(long **)(lVar30 + 0xb0);
    while (plVar27 != (long *)0x0) {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      FUN_008802f0(&local_98,plVar27 + 3);
      local_88 = (long *)plVar27[5];
      if ((local_98 == (undefined8 *)0x0) || (*(int *)((long)local_98 + 0xc) == 0)) {
        plVar27 = (long *)FUN_00d98a24(lVar30 + 0x80,plVar27);
        puVar29 = local_98;
      }
      else {
        local_150 = pcVar31;
        local_148 = pcVar5;
        local_140 = uVar18;
        uStack_138 = uVar6;
        local_130 = uVar21;
        local_128 = uVar3;
        local_120 = uVar7;
        uStack_118 = uVar4;
        local_110 = uVar8;
        (**(code **)(*local_88 + 0x30))(local_88,&local_150);
        plVar27 = (long *)*plVar27;
        puVar29 = local_98;
      }
      local_98 = puVar29;
      if (puVar29 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar29 + 1);
        do {
          iVar15 = *piVar1;
          cVar9 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar15 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar15 + -1 == 0) {
          puVar29[2] = 0;
          if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
            FUN_00100250(puVar13,puVar11,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar10);
          }
          lVar28 = *(long *)puVar11;
          *(long *)puVar12 = lVar28;
          local_80[0] = *puVar29;
          FUN_02a44274(lVar28 + 0xd8,local_80);
        }
      }
    }
    *(undefined8 *)(lVar30 + 0xf8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar30 + 0xec));
  }
  return;
}


