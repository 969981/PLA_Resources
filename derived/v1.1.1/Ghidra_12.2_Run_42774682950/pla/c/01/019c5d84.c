/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019c5d84; name: FUN_019c5d84
 */


void FUN_019c5d84(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  undefined1 *local_360 [2];
  undefined1 auStack_350 [160];
  undefined1 *local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 *local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 *local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 *local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  char local_120 [16];
  undefined1 auStack_110 [176];
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar16 = *(long **)(lVar9 + 0x100);
  if (plVar16 != (long *)0x0) {
    plVar18 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar18 = (long *)plVar16[0x20];
  if (plVar18 != (long *)0x0) {
    plVar6 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = (long *)plVar18[0xe];
  if (plVar6 != (long *)0x0) {
    plVar15 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar15 = (long *)plVar6[0xb];
  if (plVar15 != (long *)0x0) {
    plVar2 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar2 = plVar6 + 10;
  do {
    iVar5 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *(int *)plVar2 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  plVar6 = plVar18 + 10;
  do {
    iVar5 = (int)*plVar6 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *(int *)plVar6 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  plVar18 = plVar16 + 10;
  do {
    iVar5 = (int)*plVar18 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if (1 < (ulong)plVar15[0x1e]) {
    plVar16 = param_2 + 3;
    uVar10 = 1;
    do {
      local_360[0] = &DAT_cbf29ce484222645;
      if (uVar10 < (ulong)(plVar15[0x21] - plVar15[0x20] >> 3)) {
        local_360[0] = *(undefined1 **)(plVar15[0x20] + uVar10 * 8);
      }
      FUN_016a9bac(local_120,plVar15,local_360);
      local_180 = 0;
      puVar8 = &DAT_cbf29ce484222645;
      local_170 = &DAT_cbf29ce484222645;
      local_178 = 0;
      local_168 = 0;
      local_1d0 = &DAT_cbf29ce484222645;
      local_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = &DAT_cbf29ce484222645;
      local_148 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = &DAT_cbf29ce484222645;
      local_1a8 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = &DAT_cbf29ce484222645;
      local_128 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = &DAT_cbf29ce484222645;
      local_188 = 0;
      if (uVar10 < (ulong)(plVar15[0x21] - plVar15[0x20] >> 3)) {
        puVar8 = *(undefined1 **)(plVar15[0x20] + uVar10 * 8);
      }
      uVar7 = FUN_019c13d0(param_1,puVar8,local_120,param_3,param_4,&local_180,&local_1e0,
                           param_5 & 1);
      if ((uVar7 & 1) != 0) {
        local_360[0] = (undefined1 *)((ulong)local_360[0] & 0xffffffffffffff00);
        local_2b0 = (undefined1 *)0x0;
        local_270 = (undefined1 *)0x0;
        local_290 = (undefined1 *)0x0;
        local_230 = (undefined1 *)0x0;
        local_250 = (undefined1 *)0x0;
        local_1f0 = (undefined1 *)0x0;
        local_210 = (undefined1 *)0x0;
        if (local_120[0] != '\0') {
          memcpy(auStack_350,auStack_110,0xa0);
          local_360[0] = (undefined1 *)CONCAT71(local_360[0]._1_7_,1);
        }
        local_2b0 = &DAT_cbf29ce484222645;
        if (uVar10 < (ulong)(plVar15[0x21] - plVar15[0x20] >> 3)) {
          local_2b0 = *(undefined1 **)(plVar15[0x20] + uVar10 * 8);
        }
        uStack_248 = CONCAT44(uStack_124,local_128);
        local_250 = local_130;
        local_260 = local_140;
        uStack_258 = local_138;
        local_280 = local_160;
        uStack_278 = local_158;
        uStack_268 = CONCAT44(uStack_144,local_148);
        local_270 = local_150;
        local_2a0 = local_180;
        uStack_298 = local_178;
        uStack_288 = CONCAT44(uStack_164,local_168);
        local_290 = local_170;
        uStack_228 = CONCAT44(uStack_1c4,local_1c8);
        local_230 = local_1d0;
        local_240 = local_1e0;
        uStack_238 = uStack_1d8;
        uStack_208 = CONCAT44(uStack_1a4,local_1a8);
        local_210 = local_1b0;
        local_220 = local_1c0;
        uStack_218 = local_1b8;
        uStack_1e8 = CONCAT44(uStack_184,local_188);
        local_1f0 = local_190;
        local_200 = local_1a0;
        uStack_1f8 = local_198;
        lVar9 = param_2[1];
        if (lVar9 == param_2[2]) {
          lVar9 = lVar9 - *param_2 >> 7;
          uVar7 = param_2[4];
          if (0x7ffffffffffffffe < uVar7) {
            uVar7 = 0x7fffffffffffffff;
          }
          uVar13 = lVar9 * -0x5555555555555555 + 1;
          if (uVar7 < uVar13) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar11 = param_2[2] - *param_2 >> 7;
          if ((ulong)(lVar11 * -0x5555555555555555) < uVar7 >> 1) {
            uVar12 = lVar11 * 0x5555555555555556;
            uVar7 = uVar13;
            if (uVar13 <= uVar12) {
              uVar7 = uVar12;
            }
          }
          if (uVar7 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar7 * 0x180,0x10);
            if (lVar11 == 0) {
              (**(code **)(*(long *)*plVar16 + 0xb8))();
            }
          }
          lVar17 = lVar11 + lVar9 * 0x80;
          FUN_019c9184(plVar16,lVar17,local_360);
          lVar9 = lVar17 + 0x180;
          pcVar14 = (char *)*param_2;
          pcVar19 = (char *)param_2[1];
          if (pcVar19 == pcVar14) {
            pcVar19 = pcVar14;
          }
          else {
            do {
              lVar17 = lVar17 + -0x180;
              pcVar19 = pcVar19 + -0x180;
              FUN_019c9284(plVar16,lVar17,pcVar19);
            } while (pcVar14 != pcVar19);
            pcVar14 = (char *)param_2[1];
            pcVar19 = (char *)*param_2;
          }
          *param_2 = lVar17;
          param_2[1] = lVar9;
          lVar9 = param_2[2];
          param_2[2] = lVar11 + uVar7 * 0x180;
          if ((long)pcVar14 - (long)pcVar19 != 0) {
            uVar13 = ((long)pcVar14 - (long)pcVar19) - 0x180;
            uVar1 = ((uint)(uVar13 / 0x180) & 0xffffff) + 1;
            uVar7 = (ulong)uVar1 & 3;
            if ((uVar1 & 3) != 0) {
              do {
                pcVar14 = pcVar14 + -0x180;
                if (*pcVar14 != '\0') {
                  *pcVar14 = '\0';
                }
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            if (0x47f < uVar13) {
              do {
                if (pcVar14[-0x180] != '\0') {
                  pcVar14[-0x180] = '\0';
                }
                if (pcVar14[-0x300] != '\0') {
                  pcVar14[-0x300] = '\0';
                }
                if (pcVar14[-0x480] != '\0') {
                  pcVar14[-0x480] = '\0';
                }
                pcVar14 = pcVar14 + -0x600;
                if (*pcVar14 != '\0') {
                  *pcVar14 = '\0';
                }
              } while (pcVar19 != pcVar14);
            }
          }
          if (pcVar19 == (char *)0x0) goto LAB_019c6164;
          plVar18 = (long *)*plVar16;
          uVar7 = (**(code **)(*plVar18 + 0xc0))(plVar18);
          if ((uVar7 & 1) == 0) {
LAB_019c6370:
            (**(code **)(*plVar18 + 0x18))(plVar18,pcVar19,lVar9 - (long)pcVar19,0x10);
          }
          else {
            lVar11 = tpidr_el0;
            if (*(char *)(lVar11 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar11 + 0x38d488) = 1;
              *(undefined8 *)(lVar11 + 0x38d478) = 0;
              *(undefined8 *)(lVar11 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_019c6370;
            FUN_02bcc824(plVar18,pcVar19,lVar9 - (long)pcVar19,0x10);
          }
        }
        else {
          FUN_019c9184(plVar16,lVar9,local_360);
          param_2[1] = param_2[1] + 0x180;
LAB_019c6164:
        }
        if ((char)local_360[0] != '\0') {
          local_360[0] = (undefined1 *)((ulong)local_360[0] & 0xffffffffffffff00);
        }
      }
      if (local_120[0] != '\0') {
        local_120[0] = '\0';
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)plVar15[0x1e]);
  }
  plVar16 = plVar15 + 10;
  do {
    iVar5 = (int)*plVar16 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *(int *)plVar16 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  return;
}


