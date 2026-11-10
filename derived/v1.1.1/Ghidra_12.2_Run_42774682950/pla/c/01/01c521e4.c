/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c521e4; name: FUN_01c521e4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c521e4(long param_1,ulong param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  code *pcVar18;
  long *plVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  undefined8 uVar23;
  int *piVar24;
  ushort *puVar25;
  int *piVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  undefined4 uVar33;
  long lVar34;
  undefined4 uVar35;
  long lVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 *local_420;
  code *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  long alStack_400 [12];
  long *local_3a0;
  int *local_398;
  long *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  long *local_358;
  undefined4 local_350;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  char local_320;
  long local_318;
  long local_310;
  long local_308;
  long *local_300 [2];
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  long *local_2e0;
  undefined8 uStack_2d8;
  undefined1 local_2d0;
  undefined4 local_2cc;
  undefined1 local_2c8;
  undefined1 local_2c7;
  undefined1 auStack_2c0 [24];
  long *local_2a8;
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 auStack_298 [48];
  long *local_268;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 *local_250;
  undefined4 local_248;
  undefined1 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined4 local_1d8;
  undefined1 *local_1d0;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long *local_1a8;
  ulong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188 [14];
  int *local_118;
  undefined1 auStack_110 [8];
  char local_108 [120];
  int *local_90;
  ulong local_88;
  long *local_80 [2];
  long local_70 [2];
  
  if (*(long *)(param_1 + 600) == 0) {
    return;
  }
  auVar42 = *(undefined1 (*) [16])(param_1 + 0x2a0);
  FUN_018e4ba0(&local_390);
  plVar19 = local_390;
  auVar17._8_8_ = local_220._8_8_;
  auVar17._0_8_ = local_220._0_8_;
  auVar16._8_8_ = local_220._8_8_;
  auVar16._0_8_ = local_220._0_8_;
  auVar15._8_8_ = local_220._8_8_;
  auVar15._0_8_ = local_220._0_8_;
  auVar14._8_8_ = local_220._8_8_;
  auVar14._0_8_ = local_220._0_8_;
  auVar13._8_8_ = local_220._8_8_;
  auVar13._0_8_ = local_220._0_8_;
  auVar12._8_8_ = local_220._8_8_;
  auVar12._0_8_ = local_220._0_8_;
  auVar11._8_8_ = local_210._8_8_;
  auVar11._0_8_ = local_210._0_8_;
  auVar10._8_8_ = local_210._8_8_;
  auVar10._0_8_ = local_210._0_8_;
  auVar9._8_8_ = local_210._8_8_;
  auVar9._0_8_ = local_210._0_8_;
  auVar8._8_8_ = local_210._8_8_;
  auVar8._0_8_ = local_210._0_8_;
  auVar7._8_8_ = local_210._8_8_;
  auVar7._0_8_ = local_210._0_8_;
  auVar41._8_8_ = local_210._8_8_;
  auVar41._0_8_ = local_210._0_8_;
  if (local_390 == (long *)0x0) {
    return;
  }
  piVar24 = *(int **)(param_1 + 0x310);
  if (piVar24 != (int *)0x0) {
    if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
       (uVar29 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar29 == 0)) {
      local_88 = 0;
    }
    else {
      local_88 = *(ulong *)((long)piVar24 + uVar29);
    }
    plVar22 = *(long **)(param_1 + 0x278);
    uVar29 = plVar22[1];
    local_210 = auVar41;
    local_220 = auVar12;
    if (uVar29 != 0) {
      uVar30 = uVar29 - (uVar29 >> 1 & 0x5555555555555555);
      uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
      uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar30 < 2) {
        uVar31 = uVar29 - 1 & local_88;
      }
      else {
        uVar31 = local_88;
        if (uVar29 <= local_88) {
          uVar31 = 0;
          if (uVar29 != 0) {
            uVar31 = local_88 / uVar29;
          }
          uVar31 = local_88 - uVar31 * uVar29;
        }
      }
      plVar32 = *(long **)(*plVar22 + uVar31 * 8);
      local_210 = auVar7;
      local_220 = auVar13;
      if ((plVar32 != (long *)0x0) &&
         (plVar32 = (long *)*plVar32, local_210 = auVar8, local_220 = auVar14,
         plVar32 != (long *)0x0)) {
        if (uVar30 < 2) {
          do {
            if (plVar32[1] == local_88) {
              if (plVar32[2] == local_88) goto LAB_01c5236c;
            }
            else {
              local_210 = auVar9;
              local_220 = auVar15;
              if ((plVar32[1] & uVar29 - 1) != uVar31) break;
            }
            plVar32 = (long *)*plVar32;
            local_210 = auVar10;
            local_220 = auVar16;
          } while (plVar32 != (long *)0x0);
        }
        else {
          do {
            uVar30 = plVar32[1];
            if (uVar30 == local_88) {
              if (plVar32[2] == local_88) goto LAB_01c5236c;
            }
            else {
              if (uVar29 <= uVar30) {
                uVar6 = 0;
                if (uVar29 != 0) {
                  uVar6 = uVar30 / uVar29;
                }
                uVar30 = uVar30 - uVar6 * uVar29;
              }
              if (uVar30 != uVar31) break;
            }
            plVar32 = (long *)*plVar32;
            local_210 = auVar11;
            local_220 = auVar17;
          } while (plVar32 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_01c52c1c;
LAB_01c5236c:
  piVar24 = (int *)FUN_01c530b4(plVar22,&local_88);
  iVar21 = *(int *)(param_1 + 0x300);
  iVar20 = FUN_01c520b0(*(int *)(param_1 + 0x304) - iVar21);
  iVar20 = iVar20 + iVar21;
  *(int *)(param_1 + 0x6e8) = iVar20;
  if (0 < iVar20) {
    iVar20 = 0;
    do {
      puVar25 = (ushort *)((long)piVar24 - (long)*piVar24);
      uVar2 = *puVar25;
      if (uVar2 < 0xb) {
        uVar39 = *(undefined4 *)(param_1 + 0x480);
        lVar28 = 0;
        uVar40 = *(undefined4 *)(param_1 + 0x484);
        if (6 < uVar2) {
          uVar3 = puVar25[3];
          goto joined_r0x01c530a4;
        }
        uVar33 = 0;
LAB_01c524a4:
        uVar37 = 0;
      }
      else {
        if ((ulong)puVar25[5] == 0) {
          lVar28 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar24 + (ulong)puVar25[5]);
          lVar28 = (long)puVar1 + (ulong)*puVar1;
        }
        uVar39 = *(undefined4 *)(param_1 + 0x480);
        uVar40 = *(undefined4 *)(param_1 + 0x484);
        uVar3 = puVar25[3];
joined_r0x01c530a4:
        if ((ulong)uVar3 == 0) {
          uVar33 = 0;
        }
        else {
          uVar33 = *(undefined4 *)((long)piVar24 + (ulong)uVar3);
        }
        if ((uVar2 < 9) || ((ulong)puVar25[4] == 0)) goto LAB_01c524a4;
        uVar37 = *(undefined4 *)((long)piVar24 + (ulong)puVar25[4]);
      }
      piVar26 = *(int **)(param_1 + 0x310);
      puVar25 = (ushort *)((long)piVar26 - (long)*piVar26);
      uVar2 = *puVar25;
      if (uVar2 < 0x15) {
        uVar38 = 0;
LAB_01c524f4:
        uVar35 = 0;
        if (*(long *)(param_1 + 0x280) == 0) goto LAB_01c52500;
LAB_01c52f10:
        FUN_01934508(&local_390);
      }
      else {
        if ((ulong)puVar25[10] != 0) {
          uVar38 = *(undefined4 *)((long)piVar26 + (ulong)puVar25[10]);
          if (0x16 < uVar2) goto LAB_01c524ec;
          goto LAB_01c524f4;
        }
        uVar38 = 0;
        if (uVar2 < 0x17) goto LAB_01c524f4;
LAB_01c524ec:
        if ((ulong)puVar25[0xb] == 0) goto LAB_01c524f4;
        uVar35 = *(undefined4 *)((long)piVar26 + (ulong)puVar25[0xb]);
        if (*(long *)(param_1 + 0x280) != 0) goto LAB_01c52f10;
LAB_01c52500:
        local_390 = (long *)0x0;
      }
      FUN_0192c870(auStack_110,local_390);
      FUN_01094470(local_108,lVar28,uVar39,uVar40,uVar33,uVar37,uVar38,uVar35,auStack_110,0,0,
                   param_1 + 0x6f0,0);
      local_118 = local_90;
      if (local_390 != (long *)0x0) {
        lVar28 = local_390[0xb];
        piVar26 = (int *)(lVar28 + 0xc);
        do {
          iVar21 = *piVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar5) {
            *piVar26 = iVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar28 + 0x18) = 0;
          (**(code **)(*local_390 + 0x20))();
          local_118 = local_90;
        }
      }
      if (local_108[0] == '\0') goto LAB_01c52c1c;
      if ((*(ushort *)((long)local_118 - (long)*local_118) < 7) ||
         (uVar29 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[3], uVar29 == 0)) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined8 *)((long)local_118 + uVar29);
      }
      local_90 = local_118;
      FUN_01b56688(&local_1c0,param_1,uVar23);
      if ((param_2 & 1) != 0) {
        auVar42 = FUN_01b56acc(param_1,&local_1c0,0);
      }
      local_220 = auVar42;
      auVar41 = FUN_0098fad4(PTR_DAT_04379570);
      local_200 = *(undefined8 *)PTR_DAT_0437a120;
      uStack_1f8 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
      local_1f0 = &DAT_cbf29ce484222645;
      local_1e8 = 1;
      local_1e4 = 1;
      local_1e0 = *(undefined4 *)(param_1 + 0x3a4);
      local_1dc = 0;
      local_1d8 = 0;
      local_1d0 = &DAT_cbf29ce484222645;
      local_390 = *(long **)(param_1 + 0x290);
      uVar39 = *(undefined4 *)(param_1 + 0x2d0);
      puVar27 = (undefined8 *)(param_1 + 0x290);
      if (*(undefined1 **)(param_1 + 0x398) != &DAT_cbf29ce484222645) {
        puVar27 = (undefined8 *)(param_1 + 0x398);
      }
      local_388 = *puVar27;
      local_378 = *(undefined8 *)(param_1 + 0x2a8);
      local_380 = *(undefined8 *)(param_1 + 0x2a0);
      local_370 = *(undefined8 *)(param_1 + 0x2b0);
      local_368 = *(undefined8 *)(param_1 + 0x2b8);
      local_360 = *(undefined8 *)(param_1 + 0x2c0);
      local_358 = *(long **)(param_1 + 0x2c8);
      local_210 = auVar41;
      if (local_358 != (long *)0x0) {
        (**(code **)(*local_358 + 0x18))();
      }
      local_338 = *(undefined8 *)(param_1 + 0x2e8);
      local_340 = *(undefined8 *)(param_1 + 0x2e0);
      local_328 = *(undefined8 *)(param_1 + 0x2f8);
      local_330 = *(undefined8 *)(param_1 + 0x2f0);
      local_320 = 0;
      local_310 = 0;
      local_308 = 0;
      local_318 = 0;
      local_300[0] = local_1a8;
      lVar28 = local_1b8 - local_1c0;
      local_2f0 = local_198;
      uStack_2e8 = uStack_190;
      local_350 = uVar39;
      if (lVar28 != 0) {
        uVar29 = uStack_1a0;
        if (0x7ffffffffffffffe < uStack_1a0) {
          uVar29 = 0x7fffffffffffffff;
        }
        if (uVar29 < (ulong)(lVar28 >> 7)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar36 = (**(code **)(*local_1a8 + 0x10))(local_1a8,lVar28,0x10);
        if (lVar36 == 0) {
          (**(code **)(*local_300[0] + 0xb8))();
        }
        lVar34 = local_1b8;
        local_308 = lVar36 + (lVar28 >> 7) * 0x80;
        local_310 = lVar36;
        local_318 = lVar36;
        for (lVar28 = local_1c0; lVar28 != lVar34; lVar28 = lVar28 + 0x80) {
          FUN_00b9318c(local_300,local_310,lVar28);
          local_310 = local_310 + 0x80;
        }
      }
      local_320 = '\x01';
      if (*(long **)(param_1 + 0x498) == (long *)0x0) {
        local_2e0 = (long *)0x0;
        uStack_2d8 = 0;
      }
      else {
        (**(code **)(**(long **)(param_1 + 0x498) + 0x18))(local_80);
        local_2e0 = (long *)0x0;
        uStack_2d8 = 0;
        FUN_00ce562c(&local_2e0,local_80);
        plVar22 = local_80[0];
        if (local_80[0] != (long *)0x0) {
          plVar32 = local_80[0] + 1;
          do {
            iVar21 = (int)*plVar32 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar5) {
              *(int *)plVar32 = iVar21;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar21 == 0) {
            local_80[0][2] = 0;
            if ((*PTR_DAT_04379498 & 1) == 0) {
              iVar21 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar21 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar28 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar28;
            local_70[0] = *plVar22;
            FUN_02a44274(lVar28 + 0xd8,local_70);
          }
        }
      }
      local_2d0 = 0;
      local_2cc = 1;
      local_2c8 = *(undefined1 *)(param_1 + 0x392);
      local_2c7 = *(undefined1 *)(param_1 + 0x391);
      FUN_0185b304(auStack_2c0,local_188,0,&local_398);
      if (*(ushort *)((long)local_118 - (long)*local_118) < 0x61) {
        piVar26 = (int *)0x0;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[0x30];
        piVar26 = (int *)0x0;
        if (uVar29 != 0) {
          puVar1 = (uint *)((long)local_118 + uVar29);
          piVar26 = (int *)((long)puVar1 + (ulong)*puVar1);
        }
      }
      if (*(ushort *)((long)piVar26 - (long)*piVar26) < 5) {
        local_2a0 = false;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2];
        local_2a0 = false;
        if (uVar29 != 0) {
          local_2a0 = *(char *)((long)piVar26 + uVar29) != '\0';
        }
      }
      if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 7) ||
         (uVar29 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[3], uVar29 == 0)) {
        local_29f = false;
      }
      else {
        local_29f = *(char *)((long)piVar26 + uVar29) != '\0';
      }
      FUN_01b56e3c(auStack_298);
      if (*(ushort *)((long)local_118 - (long)*local_118) < 0x17) {
        local_258 = false;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[0xb];
        local_258 = false;
        if (uVar29 != 0) {
          local_258 = *(char *)((long)local_118 + uVar29) != '\0';
        }
      }
      if (*(ushort *)((long)local_118 - (long)*local_118) < 0x19) {
        local_257 = false;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[0xc];
        local_257 = false;
        if (uVar29 != 0) {
          local_257 = *(char *)((long)local_118 + uVar29) != '\0';
        }
      }
      if (*(ushort *)((long)local_118 - (long)*local_118) < 0x1b) {
        local_256 = false;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[0xd];
        local_256 = false;
        if (uVar29 != 0) {
          local_256 = *(char *)((long)local_118 + uVar29) != '\0';
        }
      }
      if ((*(ushort *)((long)local_118 - (long)*local_118) < 0x1d) ||
         (uVar29 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[0xe], uVar29 == 0)) {
        local_255 = false;
      }
      else {
        local_255 = *(char *)((long)local_118 + uVar29) != '\0';
      }
      local_250 = &DAT_cbf29ce484222645;
      local_248 = 0;
      local_244 = 1;
      local_240 = 0;
      uStack_238 = 0;
      local_230 = 0;
      local_80[0] = (long *)0x0;
      plVar22 = (long *)FUN_01b631b0(local_70,*(undefined8 *)(param_1 + 8),local_220,&local_390,
                                     local_188);
      if (plVar22 != (long *)0x0) {
        lVar28 = plVar22[0xb];
        if (*(undefined8 **)(lVar28 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar28 + 0x10) == 0) {
          uVar23 = (**(code **)**(undefined8 **)(lVar28 + 0x18))();
          *(undefined8 *)(lVar28 + 0x10) = uVar23;
        }
        piVar26 = (int *)(lVar28 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar5) {
            *piVar26 = *piVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar32 = local_80[0];
      local_80[0] = (long *)0x0;
      if (plVar32 != (long *)0x0) {
        lVar28 = plVar32[0xb];
        piVar26 = (int *)(lVar28 + 0xc);
        do {
          iVar21 = *piVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar5) {
            *piVar26 = iVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar28 + 0x18) = 0;
          (**(code **)(*plVar32 + 0x20))();
        }
      }
      local_420 = &LAB_01c55370;
      local_410 = &LAB_01c56520;
      local_418 = FUN_01c55c28;
      local_408 = &LAB_01c5652c;
      alStack_400[0] = param_1;
      local_80[0] = plVar22;
      FUN_009b9264(&local_3a0,plVar19,4,local_80,&local_420,0);
      pcVar18 = local_418;
      if (local_3a0 != (long *)0x0) {
        lVar28 = local_3a0[0xb];
        piVar26 = (int *)(lVar28 + 0xc);
        do {
          iVar21 = *piVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar5) {
            *piVar26 = iVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar28 + 0x18) = 0;
          (**(code **)(*local_3a0 + 0x20))();
          pcVar18 = local_418;
          local_418 = (code *)0x0;
        }
      }
      if (pcVar18 != (code *)0x0) {
        local_410 = (undefined1 *)0x0;
        local_408 = (undefined1 *)0x0;
        local_420 = (undefined1 *)0x0;
        local_418 = (code *)0x0;
        (*pcVar18)(alStack_400);
      }
      if (local_80[0] != (long *)0x0) {
        lVar28 = local_80[0][0xb];
        piVar26 = (int *)(lVar28 + 0xc);
        do {
          iVar21 = *piVar26;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar26,0x10);
          if (bVar5) {
            *piVar26 = iVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar28 + 0x18) = 0;
          (**(code **)(*local_80[0] + 0x20))();
        }
      }
      if (local_268 != (long *)0x0) {
        (**(code **)(*local_268 + 0x20))();
      }
      if (local_2a8 != (long *)0x0) {
        (**(code **)(*local_2a8 + 0x20))();
      }
      if (local_2e0 != (long *)0x0) {
        plVar22 = local_2e0 + 1;
        do {
          iVar21 = (int)*plVar22 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar5) {
            *(int *)plVar22 = iVar21;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar21 == 0) {
          local_2e0[2] = 0;
          if ((*PTR_DAT_04379498 & 1) == 0) {
            iVar21 = __cxa_guard_acquire(PTR_DAT_04379498);
            if (iVar21 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
          }
          lVar28 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar28;
          local_80[0] = (long *)*local_2e0;
          FUN_02a44274(lVar28 + 0xd8,local_80);
        }
      }
      lVar28 = local_318;
      if (local_320 != '\0') {
        lVar36 = local_318;
        lVar34 = local_310;
        plVar22 = local_300[0];
        if (local_318 != 0) {
          while (local_318 = lVar36, lVar34 != lVar28) {
            plVar32 = (long *)(lVar34 + -0x48);
            lVar34 = lVar34 + -0x80;
            if ((long *)*plVar32 != (long *)0x0) {
              local_300[0] = plVar22;
              (**(code **)(*(long *)*plVar32 + 0x20))();
              lVar36 = local_318;
              plVar22 = local_300[0];
            }
          }
          local_310 = lVar28;
          lVar28 = local_308 - lVar36;
          uVar29 = (**(code **)(*plVar22 + 0xc0))(plVar22);
          if ((uVar29 & 1) != 0) {
            lVar34 = tpidr_el0;
            if (*(char *)(lVar34 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar34 + 0x38d488) = 1;
              *(undefined8 *)(lVar34 + 0x38d478) = 0;
              *(undefined8 *)(lVar34 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar34 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar34 + 0x38d480)) {
              FUN_02bcc824(plVar22,lVar36,lVar28,0x10);
              goto LAB_01c52b1c;
            }
          }
          (**(code **)(*plVar22 + 0x18))(plVar22,lVar36,lVar28,0x10);
        }
LAB_01c52b1c:
        local_320 = '\0';
      }
      if (local_358 != (long *)0x0) {
        (**(code **)(*local_358 + 0x20))();
      }
      lVar34 = local_1c0;
      lVar28 = local_1c0;
      lVar36 = local_1b8;
      plVar22 = local_1a8;
      if (local_1c0 != 0) {
        while (local_1c0 = lVar28, local_1a8 = plVar22, lVar36 != lVar34) {
          plVar32 = (long *)(lVar36 + -0x48);
          lVar36 = lVar36 + -0x80;
          if ((long *)*plVar32 != (long *)0x0) {
            (**(code **)(*(long *)*plVar32 + 0x20))();
            lVar28 = local_1c0;
            plVar22 = local_1a8;
          }
        }
        local_1b8 = lVar34;
        lVar36 = local_1b0 - lVar28;
        uVar29 = (**(code **)(*plVar22 + 0xc0))(plVar22);
        if ((uVar29 & 1) != 0) {
          lVar34 = tpidr_el0;
          if (*(char *)(lVar34 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar34 + 0x38d488) = 1;
            *(undefined8 *)(lVar34 + 0x38d478) = 0;
            *(undefined8 *)(lVar34 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar34 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar34 + 0x38d480)) {
            FUN_02bcc824(plVar22,lVar28,lVar36,0x10);
            goto joined_r0x01c52dfc;
          }
        }
        (**(code **)(*plVar22 + 0x18))(plVar22,lVar28,lVar36,0x10);
      }
joined_r0x01c52dfc:
      if (local_108[0] != '\0') {
        local_108[0] = '\0';
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(param_1 + 0x6e8));
  }
  *(undefined1 *)(param_1 + 0x620) = 1;
LAB_01c52c1c:
  lVar28 = plVar19[0xb];
  piVar24 = (int *)(lVar28 + 0xc);
  do {
    iVar20 = *piVar24;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar24,0x10);
    if (bVar5) {
      *piVar24 = iVar20 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar20 + -1 == 0) {
    *(undefined8 *)(lVar28 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))();
  }
  return;
}


