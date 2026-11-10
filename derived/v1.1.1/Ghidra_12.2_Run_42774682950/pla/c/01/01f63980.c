/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f63980; name: FUN_01f63980
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f63980(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  long *plVar20;
  ushort *puVar21;
  byte *pbVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined **ppuVar26;
  long lVar27;
  code *pcVar28;
  uint *puVar29;
  uint *puVar30;
  long local_260;
  long *local_258;
  long *local_250;
  long *local_248;
  uint *local_240;
  undefined8 local_238;
  undefined8 local_230;
  long *local_228;
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  uint auStack_200 [26];
  long *local_198;
  long *local_190;
  long *local_188;
  long *local_180;
  code *local_178;
  long local_170;
  long *local_168;
  uint auStack_160 [24];
  long *local_100;
  undefined8 uStack_f8;
  long *local_70;
  
  if ((*(long *)(param_1 + 0x78) == 0) || (FUN_00ca554c(&local_228), local_228 == (long *)0x0)) {
    return;
  }
  lVar12 = FUN_018b4b7c(local_228,&DAT_cbf29ce484222645);
  puVar15 = PTR_DAT_0437acf0;
  puVar17 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
  piVar1 = (int *)((long)puVar17 + (ulong)*puVar17);
  puVar17 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17);
  lVar12 = (ulong)*puVar17 << 2;
  if ((ulong)*puVar17 != 0) {
    do {
      puVar17 = puVar17 + 1;
      local_230 = 0;
      FUN_01f65918(param_1,*(undefined8 *)(*(long *)puVar15 + 8),(long)puVar17 + (ulong)*puVar17,
                   &local_230);
      lVar12 = lVar12 + -4;
    } while (lVar12 != 0);
  }
  lVar12 = FUN_018b8014(local_228,&DAT_cbf29ce484222645);
  puVar17 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
  piVar1 = (int *)((long)puVar17 + (ulong)*puVar17);
  puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
  puVar17 = puVar19 + 1;
  uVar18 = (ulong)*puVar19;
  if (uVar18 != 0) {
    puVar19 = puVar17 + uVar18;
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f64834;
      uVar3 = *puVar17;
      FUN_017e9e98(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01f64840;
      lVar12 = local_100[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      lVar27 = local_100[0x7d];
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      local_238 = 0;
      FUN_01f6685c(param_1,lVar27,(long)puVar17 + (ulong)uVar3,&local_238);
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar19);
  }
  lVar12 = FUN_018b5af4(local_228,&DAT_cbf29ce484222645);
  puVar17 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
  piVar1 = (int *)((long)puVar17 + (ulong)*puVar17);
  puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
  puVar17 = puVar19 + 1;
  uVar18 = (ulong)*puVar19;
  if (uVar18 == 0) goto LAB_01f63bd8;
  puVar29 = puVar17 + uVar18;
  local_240 = auStack_160;
  puVar19 = auStack_200;
LAB_01f63b80:
  if (*(long *)(param_1 + 0x88) == 0) {
LAB_01f64834:
    local_100 = (long *)0x0;
  }
  else {
    uVar3 = *puVar17;
    FUN_017e9e98(&local_100);
    if (local_100 != (long *)0x0) {
      lVar12 = local_100[0xb];
      ppuVar26 = (undefined **)((long)puVar17 + (ulong)uVar3);
      piVar1 = (int *)(lVar12 + 0xc);
      pcVar28 = (code *)local_100[0x37];
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
        lVar12 = *(long *)(param_1 + 0x88);
      }
      else {
        lVar12 = *(long *)(param_1 + 0x88);
      }
      if (lVar12 == 0) {
        local_188 = (long *)0x0;
        goto LAB_01f63bcc;
      }
      FUN_017e9e98(&local_188);
      if (local_188 == (long *)0x0) goto LAB_01f63bcc;
      if (*(long *)(param_1 + 0x68) == 0) {
        local_248 = (long *)0x0;
        local_190 = (long *)0x0;
        goto joined_r0x01f64108;
      }
      FUN_009acf14(&local_190);
      if (local_190 == (long *)0x0) {
        local_248 = (long *)0x0;
        goto joined_r0x01f64108;
      }
      if ((*(ushort *)((long)ppuVar26 - (long)*(int *)ppuVar26) < 7) ||
         (uVar18 = (ulong)((ushort *)((long)ppuVar26 - (long)*(int *)ppuVar26))[3], uVar18 == 0)) {
        local_248 = (long *)0x0;
        lVar12 = *(long *)(param_1 + 0x68);
      }
      else {
        local_248 = *(long **)((long)ppuVar26 + uVar18);
        lVar12 = *(long *)(param_1 + 0x68);
      }
      if (lVar12 == 0) {
        local_248 = (long *)0x0;
        local_198 = (long *)0x0;
        goto joined_r0x01f63f08;
      }
      FUN_009acf14(&local_198);
      if (local_198 == (long *)0x0) {
        local_248 = (long *)0x0;
        goto joined_r0x01f63f08;
      }
      local_100 = (long *)0x0;
      uStack_f8 = 0;
      FUN_00b645bc(&local_100,local_198 + 0xd);
      plVar25 = local_100;
      if (local_100 == (long *)0x0) {
LAB_01f644ac:
        local_248 = (long *)0x0;
        goto joined_r0x01f644b4;
      }
      if (*(int *)((long)local_100 + 0xc) != 0) {
        piVar1 = (int *)((long)local_100 + 0xc);
        iVar11 = *(int *)((long)local_100 + 0xc);
        do {
          plVar20 = (long *)plVar25[2];
          if (((*PTR_DAT_0437a0e8 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0e8), iVar10 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar14;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a0e8);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_01f640f8;
            if (plVar20 == (long *)PTR_DAT_0437a0f0) break;
            plVar20 = (long *)*plVar20;
          }
          iVar10 = *piVar1;
          if (iVar10 == iVar11) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar11 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              lVar12 = plVar25[3];
              local_258 = (long *)0x0;
              if (lVar12 != 0) {
                local_258 = (long *)(lVar12 + -0x50);
              }
              goto LAB_01f64230;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar10;
        } while (iVar10 != 0);
      }
LAB_01f640f8:
      local_258 = (long *)0x0;
LAB_01f64230:
      plVar25 = local_100;
      if (local_100 != (long *)0x0) {
        plVar20 = local_100 + 1;
        do {
          iVar11 = (int)*plVar20 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *(int *)plVar20 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          local_100[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_180 = (long *)*plVar25;
          FUN_02a44274(lVar12 + 0xd8,&local_180);
        }
      }
      if (local_258 == (long *)0x0) goto LAB_01f644ac;
      uVar18 = FUN_01845504(local_258,local_248);
      if ((uVar18 & 1) != 0) {
        if (*(ushort *)((long)ppuVar26 - (long)*(int *)ppuVar26) < 0xb) {
          local_100 = (long *)0x0;
        }
        else {
          uVar18 = (ulong)((ushort *)((long)ppuVar26 - (long)*(int *)ppuVar26))[5];
          local_100 = (long *)0x0;
          if (uVar18 != 0) {
            puVar30 = (uint *)((long)ppuVar26 + uVar18);
            local_100 = (long *)((long)puVar30 + (ulong)*puVar30);
          }
        }
        FUN_019c95e0(&local_180,*(undefined8 *)(param_1 + 8),&local_100);
        (**(code **)(*local_180 + 0x18))(&local_100);
        if ((char)local_100 == '\0') {
          FUN_01847304(local_258,local_248);
          if ((char)local_100 == '\0') goto LAB_01f649dc;
        }
        local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
LAB_01f649dc:
        local_248 = local_180;
        local_180 = (long *)0x0;
        if (local_248 == (long *)0x0) goto LAB_01f64c84;
        FUN_02bcbe58(&local_100,0);
        (**(code **)(*local_248 + 8))();
        plVar25 = local_168;
        lVar12 = local_170;
        pcVar28 = local_178;
        local_250 = local_168;
        local_260 = local_170;
        uVar18 = (**(code **)(*(long *)local_178 + 0xc0))(local_178);
        ppuVar26 = (undefined **)tpidr_el0;
        if ((uVar18 & 1) == 0) goto LAB_01f64b48;
        if (*(char *)(ppuVar26 + 0x71a91) == '\0') {
          *(undefined1 *)(ppuVar26 + 0x71a91) = 1;
          ppuVar26[0x71a8f] = (undefined *)0x0;
          ppuVar26[0x71a90] = (undefined *)0x0;
          __cxa_thread_atexit(&LAB_02bcbe54,ppuVar26 + 0x1000f,&PTR_LOOP_0411a000);
        }
        if (*(int *)(ppuVar26 + 0x71a90) < 1) goto LAB_01f64b48;
        FUN_02bcc824(pcVar28,local_248,lVar12,plVar25);
        goto LAB_01f64b60;
      }
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), iVar11 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      local_248 = (long *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < (ulong)local_248[0x10]) {
LAB_01f6556c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_248[local_248[0x10]] = (long)pcVar28;
      local_248[0x10] = local_248[0x10] + 1;
      local_250 = (long *)(**(code **)(*(long *)pcVar28 + 0x10))(pcVar28,0x250,0x10);
      if (local_250 == (long *)0x0) {
        (**(code **)(*(long *)pcVar28 + 0xb8))(pcVar28);
      }
      FUN_01cf2f2c(local_250,ppuVar26,pcVar28);
      local_250[3] = 0x250;
      local_250[1] = (long)pcVar28;
      local_250[2] = (long)local_250;
      local_250[4] = 0x10;
      local_248[0x10] = local_248[0x10] + -1;
      if (local_250 != (long *)0x0) {
        ppuVar26 = (undefined **)local_250[0xb];
        if ((undefined8 *)ppuVar26[3] == (undefined8 *)0x0) goto LAB_01f64840;
        if (ppuVar26[2] == (undefined *)0x0) {
          puVar15 = (undefined *)(*(code *)**(undefined8 **)ppuVar26[3])();
          ppuVar26[2] = puVar15;
        }
        piVar1 = (int *)((long)ppuVar26 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((char)local_250[0x16] != '\0') {
        local_220 = 0;
        local_218 = (code *)0x0;
        local_210 = 0;
        uStack_208 = 0;
        local_260 = local_198[0xf];
        local_170 = 0;
        local_168 = (long *)0x0;
        local_180 = (long *)0x0;
        local_178 = (code *)0x0;
        if (*(char *)(local_260 + 0x162) == '\0') {
          uVar18 = *(ulong *)(local_260 + 0x70);
          if (uVar18 == 0) goto LAB_01f64b44;
          uVar23 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
          uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar23 < 2) {
            uVar24 = (ulong)((uint)uVar18 - 1) & 0xf;
          }
          else if (uVar18 < 0x10) {
            uVar3 = (uint)uVar18 & 0xff;
            uVar7 = 0;
            if ((uVar18 & 0xff) != 0) {
              uVar7 = 0xf / uVar3;
            }
            uVar24 = (ulong)(0xf - uVar7 * uVar3);
          }
          else {
            uVar24 = 0xf;
          }
          plVar25 = *(long **)(*(long *)(local_260 + 0x68) + uVar24 * 8);
          if (plVar25 == (long *)0x0) goto LAB_01f64b44;
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) goto LAB_01f64b44;
          if (uVar23 < 2) {
            do {
              if (plVar25[1] == 0xf) {
                if ((int)plVar25[2] == 0xf) goto LAB_01f64c8c;
              }
              else if ((plVar25[1] & uVar18 - 1) != uVar24) goto LAB_01f64b44;
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) goto LAB_01f64b44;
            } while( true );
          }
          do {
            uVar23 = plVar25[1];
            if (uVar23 == 0xf) {
              if ((int)plVar25[2] == 0xf) goto LAB_01f64c8c;
            }
            else {
              if (uVar18 <= uVar23) {
                uVar8 = 0;
                if (uVar18 != 0) {
                  uVar8 = uVar23 / uVar18;
                }
                uVar23 = uVar23 - uVar8 * uVar18;
              }
              if (uVar23 != uVar24) goto LAB_01f64b44;
            }
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_01f64b44;
          } while( true );
        }
        goto LAB_01f64d18;
      }
      local_248 = (long *)0x0;
      goto joined_r0x01f656a0;
    }
  }
LAB_01f64840:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_01f64c8c:
  lVar12 = plVar25[7];
  plVar25 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x50))();
  if (((*PTR_DAT_04382c48 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04382c48), iVar11 != 0)) {
    uVar14 = FUN_01e37320();
    *(undefined8 *)PTR_DAT_04382c50 = uVar14;
    __cxa_guard_release(PTR_DAT_04382c48);
  }
  for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
    if (plVar25 == (long *)PTR_DAT_04382c50) {
      plVar25 = *(long **)(lVar12 + 0x68);
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar15 = PTR_DAT_04379528;
        if (iVar11 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar15,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (*(ulong *)(lVar12 + 0x80) < 0x10) {
        *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar25;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        lVar12 = (**(code **)(*plVar25 + 0x10))(plVar25,0x218,8);
        if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bd32e0(lVar12);
        }
        lVar12 = *plVar25;
LAB_01f65584:
        (**(code **)(lVar12 + 0xb8))(plVar25);
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(0);
      }
      goto LAB_01f6556c;
    }
  }
LAB_01f64d18:
  pcVar28 = local_178;
  local_70 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    local_168 = (long *)0x0;
    local_180 = (long *)0x0;
    local_178 = (code *)0x0;
    (*pcVar28)(local_240);
  }
  local_248 = local_70;
  pcVar28 = local_218;
  local_70 = (long *)0x0;
  bVar6 = local_218 != (code *)0x0;
  local_218 = (code *)0x0;
  if (bVar6) {
    local_210 = 0;
    uStack_208 = 0;
    local_220 = 0;
    local_218 = (code *)0x0;
    (*pcVar28)(puVar19);
  }
joined_r0x01f656a0:
  if (local_250 != (long *)0x0) {
    lVar12 = local_250[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_250 + 0x20))();
    }
  }
  while( true ) {
    lVar12 = local_258[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_258 + 0x20))();
    }
joined_r0x01f644b4:
    if (local_198 != (long *)0x0) {
      lVar12 = *(long *)((long)local_198 + 0x58);
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_198 + 0x20))();
      }
    }
joined_r0x01f63f08:
    if (local_190 != (long *)0x0) {
      lVar12 = local_190[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_190 + 0x20))();
      }
    }
joined_r0x01f64108:
    if (local_188 != (long *)0x0) {
      lVar12 = local_188[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_188 + 0x20))();
      }
    }
    if (local_248 != (long *)0x0) {
      lVar12 = local_248[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f64840;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar14 = *(undefined8 *)(param_1 + 0x98);
      lVar12 = local_248[0xb];
      local_100 = local_248;
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01f64840;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar13;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_01cbc9e0(uVar14,&local_100,0);
      if (local_100 != (long *)0x0) {
        lVar12 = local_100[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
      lVar12 = local_248[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_248 + 0x20))();
      }
      lVar12 = local_248[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_248 + 0x20))();
      }
    }
LAB_01f63bcc:
    puVar17 = puVar17 + 1;
    if (puVar17 != puVar29) break;
LAB_01f63bd8:
    lVar12 = FUN_018b8c74(local_228,&DAT_cbf29ce484222645);
    puVar17 = (uint *)PTR_DAT_0437a0e8;
    puVar15 = PTR_DAT_043794d0;
    puVar19 = *(uint **)(*(long *)(lVar12 + 8) + 0x250);
    piVar1 = (int *)((long)puVar19 + (ulong)*puVar19);
    puVar19 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
    puVar30 = puVar19 + 1;
    uVar18 = (ulong)*puVar19;
    if (uVar18 == 0) {
LAB_01f63c60:
      if (local_228 == (long *)0x0) {
        return;
      }
      lVar12 = local_228[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_228 + 0x20))();
        return;
      }
      return;
    }
    puVar19 = puVar30 + uVar18;
    puVar29 = auStack_160;
    pcVar28 = (code *)&DAT_00000138;
    ppuVar26 = &PTR_LAB_04250500;
LAB_01f63c48:
    if (*(long *)(param_1 + 0x88) == 0) {
      local_188 = (long *)0x0;
      goto LAB_01f63c54;
    }
    uVar3 = *puVar30;
    FUN_017e9e98(&local_188);
    if (local_188 == (long *)0x0) goto LAB_01f63c54;
    if (*(long *)(param_1 + 0x68) == 0) {
      local_190 = (long *)0x0;
      goto joined_r0x01f63e44;
    }
    FUN_009acf14(&local_190);
    if (local_190 == (long *)0x0) goto joined_r0x01f63e44;
    local_100 = (long *)0x0;
    uStack_f8 = 0;
    FUN_00b645bc(&local_100,local_190 + 0xd);
    plVar25 = local_100;
    if (local_100 == (long *)0x0) goto joined_r0x01f63f74;
    if (*(int *)((long)local_100 + 0xc) != 0) {
      piVar1 = (int *)((long)local_100 + 0xc);
      local_258._0_4_ = *(int *)((long)local_100 + 0xc);
      do {
        plVar20 = (long *)plVar25[2];
        if (((*(byte *)puVar17 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar17), iVar11 != 0)) {
          if (((*puVar15 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar15), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar14;
            __cxa_guard_release(puVar15);
          }
          *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar17);
        }
        while( true ) {
          if (plVar20 == (long *)0x0) goto LAB_01f64200;
          if (plVar20 == (long *)PTR_DAT_0437a0f0) break;
          plVar20 = (long *)*plVar20;
        }
        iVar11 = *piVar1;
        if (iVar11 == (int)local_258) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = (int)local_258 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar12 = plVar25[3];
            local_258 = (long *)0x0;
            if (lVar12 != 0) {
              local_258 = (long *)(lVar12 + -0x50);
            }
            goto LAB_01f644d4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        local_258._0_4_ = iVar11;
      } while (iVar11 != 0);
    }
LAB_01f64200:
    local_258 = (long *)0x0;
LAB_01f644d4:
    plVar25 = local_100;
    if (local_100 != (long *)0x0) {
      plVar20 = local_100 + 1;
      do {
        iVar11 = (int)*plVar20 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *(int *)plVar20 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_180 = (long *)*plVar25;
        FUN_02a44274(lVar12 + 0xd8,&local_180);
      }
    }
    if (local_258 == (long *)0x0) goto joined_r0x01f63f74;
    local_248 = (long *)((long)puVar30 + (ulong)uVar3);
    puVar21 = (ushort *)((long)local_248 - (long)(int)*local_248);
    if ((*puVar21 < 5) || (uVar18 = (ulong)puVar21[2], uVar18 == 0)) {
      lVar12 = 0;
      bVar4 = DAT_00000004;
      if (DAT_00000004 != 0) goto LAB_01f645d4;
      goto LAB_01f658d8;
    }
    puVar2 = (uint *)((long)local_248 + uVar18);
    lVar12 = (long)puVar2 + (ulong)*puVar2;
    bVar4 = *(byte *)(lVar12 + 4);
    if (*(byte *)(lVar12 + 4) == 0) goto LAB_01f658d8;
LAB_01f645d4:
    puVar16 = &DAT_cbf29ce484222645;
    pbVar22 = (byte *)(lVar12 + 5);
    do {
      puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar22;
      pbVar22 = pbVar22 + 1;
    } while (bVar4 != 0);
    if ((puVar16 == &DAT_cbf29ce484222645) || (uVar18 = FUN_01845504(local_258), (uVar18 & 1) != 0))
    goto LAB_01f658d8;
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_01f64834;
    FUN_017e9e98(&local_100);
    if (local_100 == (long *)0x0) goto LAB_01f64840;
    local_240 = (uint *)local_100[0x9b];
    lVar12 = local_100[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), iVar11 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01f6556c;
    *(uint **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = local_240;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    local_250 = (long *)(**(code **)(*(long *)local_240 + 0x10))(local_240,0xe0,0x10);
    if (local_250 == (long *)0x0) {
      (**(code **)(*(long *)local_240 + 0xb8))();
    }
    FUN_01da7a98(local_250,local_248,local_240);
    local_250[1] = (long)local_240;
    local_250[2] = (long)local_250;
    local_250[3] = 0xe0;
    local_250[4] = 0x10;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (local_250 != (long *)0x0) {
      local_240 = (uint *)local_250[0xb];
      if (*(undefined8 **)(local_240 + 6) == (undefined8 *)0x0) goto LAB_01f64840;
      if (*(long *)(local_240 + 4) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(local_240 + 6))();
        *(undefined8 *)(local_240 + 4) = uVar14;
      }
      puVar2 = local_240 + 3;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = *puVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_220 = 0;
    local_218 = (code *)0x0;
    local_210 = 0;
    uStack_208 = 0;
    local_260 = local_190[0xf];
    local_170 = 0;
    local_168 = (long *)0x0;
    local_180 = (long *)0x0;
    local_178 = (code *)0x0;
    if (*(char *)(local_260 + 0x162) != '\0') goto LAB_01f64da8;
    uVar18 = *(ulong *)(local_260 + 0x70);
    if (uVar18 != 0) {
      uVar23 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = (ulong)((uint)uVar18 - 1) & 0x25;
      }
      else if (uVar18 < 0x26) {
        uVar3 = (uint)uVar18 & 0xff;
        uVar7 = 0;
        if ((uVar18 & 0xff) != 0) {
          uVar7 = 0x25 / uVar3;
        }
        uVar24 = (ulong)(0x25 - uVar7 * uVar3);
      }
      else {
        uVar24 = 0x25;
      }
      plVar25 = *(long **)(*(long *)(local_260 + 0x68) + uVar24 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar25[1] == 0x25) {
              if ((int)plVar25[2] == 0x25) goto LAB_01f64d28;
            }
            else if ((plVar25[1] & uVar18 - 1) != uVar24) goto LAB_01f64b44;
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_01f64b44;
          } while( true );
        }
        do {
          uVar23 = plVar25[1];
          if (uVar23 == 0x25) {
            if ((int)plVar25[2] == 0x25) goto LAB_01f64d28;
          }
          else {
            if (uVar18 <= uVar23) {
              uVar8 = 0;
              if (uVar18 != 0) {
                uVar8 = uVar23 / uVar18;
              }
              uVar23 = uVar23 - uVar8 * uVar18;
            }
            if (uVar23 != uVar24) break;
          }
          plVar25 = (long *)*plVar25;
          if (plVar25 == (long *)0x0) break;
        } while( true );
      }
    }
LAB_01f64b44:
    local_168 = (long *)0x0;
    local_170 = 0;
    local_178 = (code *)0x0;
    local_180 = (long *)0x0;
    uStack_208 = 0;
    local_210 = 0;
    local_218 = (code *)0x0;
    local_220 = 0;
    FUN_01f7c2e0();
LAB_01f64b48:
    (**(code **)(*(long *)pcVar28 + 0x18))(pcVar28,local_248,local_260,local_250);
LAB_01f64b60:
    if (*(char *)(ppuVar26 + 0x71a91) == '\0') {
      *(undefined1 *)(ppuVar26 + 0x71a91) = 1;
      ppuVar26[0x71a8f] = (undefined *)0x0;
      ppuVar26[0x71a90] = (undefined *)0x0;
      __cxa_thread_atexit(&LAB_02bcbe54,ppuVar26 + 0x1000f,&PTR_LOOP_0411a000);
    }
    iVar11 = *(int *)(ppuVar26 + 0x71a90);
    *(int *)(ppuVar26 + 0x71a90) = iVar11 + -1;
    if (iVar11 + -1 == 0) {
      FUN_02bcc320();
      if (*(char *)(ppuVar26 + 0x71a91) == '\0') {
        *(undefined1 *)(ppuVar26 + 0x71a91) = 1;
        ppuVar26[0x71a8f] = (undefined *)0x0;
        ppuVar26[0x71a90] = (undefined *)0x0;
        __cxa_thread_atexit(&LAB_02bcbe54,ppuVar26 + 0x1000f,&PTR_LOOP_0411a000);
      }
      *(int *)((long)ppuVar26 + 0x38d484) = 0;
    }
LAB_01f64c84:
    local_248 = (long *)0x0;
  }
  goto LAB_01f63b80;
LAB_01f64d28:
  lVar12 = plVar25[7];
  plVar25 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x50))();
  if (((*PTR_DAT_04382ba8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04382ba8), iVar11 != 0)) {
    uVar14 = FUN_01e34b7c();
    *(undefined8 *)PTR_DAT_04382bb0 = uVar14;
    __cxa_guard_release(PTR_DAT_04382ba8);
  }
  for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
    if (plVar25 == (long *)PTR_DAT_04382bb0) {
      plVar25 = *(long **)(lVar12 + 0x68);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), iVar11 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01f6556c;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar25;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      lVar12 = (**(code **)(*plVar25 + 0x10))(plVar25,0x138,8);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(lVar12);
      }
      lVar12 = *plVar25;
      goto LAB_01f65584;
    }
  }
LAB_01f64da8:
  pcVar9 = local_178;
  local_70 = (long *)0x0;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    local_168 = (long *)0x0;
    local_180 = (long *)0x0;
    local_178 = (code *)0x0;
    (*pcVar9)(puVar29);
    if (local_70 != (long *)0x0) {
      lVar12 = local_70[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  pcVar9 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = 0;
    uStack_208 = 0;
    local_220 = 0;
    local_218 = (code *)0x0;
    (*pcVar9)(auStack_200);
  }
  if (local_250 != (long *)0x0) {
    lVar12 = local_250[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_250 + 0x20))();
    }
  }
LAB_01f658d8:
  lVar12 = local_258[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*local_258 + 0x20))();
  }
joined_r0x01f63f74:
  if (local_190 != (long *)0x0) {
    lVar12 = local_190[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_190 + 0x20))();
    }
  }
joined_r0x01f63e44:
  if (local_188 != (long *)0x0) {
    lVar12 = local_188[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_188 + 0x20))();
    }
  }
LAB_01f63c54:
  puVar30 = puVar30 + 1;
  if (puVar30 == puVar19) goto LAB_01f63c60;
  goto LAB_01f63c48;
}


