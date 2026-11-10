/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0ce84; name: FUN_02c0ce84
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02c0ce84(long *param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  bool bVar12;
  code *pcVar13;
  undefined *puVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long *plVar31;
  byte *pbVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined8 local_230;
  long *local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  long *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined8 uStack_1e8;
  long *local_1e0;
  undefined4 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [96];
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long *local_70 [2];
  
  lVar30 = (long)*param_2;
  lVar35 = *param_1;
  lVar29 = *(long *)(lVar35 + 0x538);
  plVar22 = *(long **)(lVar29 + lVar30 * 0x60);
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x18))();
  }
  lVar23 = lVar29 + lVar30 * 0x60;
  uVar20 = *(undefined8 *)(lVar23 + 8);
  uVar6 = *(undefined8 *)(lVar23 + 0x10);
  uVar4 = *(undefined8 *)(lVar23 + 0x18);
  plVar7 = *(long **)(lVar23 + 0x20);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  lVar23 = *(long *)(lVar35 + 0x538);
  uVar9 = *(undefined4 *)(lVar29 + lVar30 * 0x60 + 0x28);
  plVar24 = *(long **)(lVar23 + lVar30 * 0x60 + 0x30);
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))();
  }
  lVar29 = lVar23 + lVar30 * 0x60;
  uVar27 = *(undefined8 *)(lVar29 + 0x38);
  uVar5 = *(undefined8 *)(lVar29 + 0x40);
  uVar8 = *(undefined8 *)(lVar29 + 0x48);
  plVar25 = *(long **)(lVar29 + 0x50);
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))();
  }
  plVar31 = *(long **)(lVar35 + 8);
  uVar10 = *(undefined4 *)(lVar23 + lVar30 * 0x60 + 0x58);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar16 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar14 = PTR_DAT_04379528;
    if (iVar16 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar14,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar29 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar29 + 0x80)) {
LAB_02c0dd78:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = plVar31;
  *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
  plVar17 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x340,0x10);
  if (plVar17 == (long *)0x0) {
    (**(code **)(*plVar31 + 0xb8))(plVar31);
  }
  FUN_02a51968(plVar17,DAT_043eeee8,0);
  plVar18 = (long *)plVar17[0x49];
  plVar17[0x46] = 0x3373a1fe4fe75af2;
  plVar17[0x47] = (long)"TerrainTree";
  plVar17[0x48] = 0xb;
  plVar17[0x49] = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  plVar17[1] = (long)plVar31;
  plVar17[2] = (long)plVar17;
  plVar17[3] = 0x340;
  plVar17[4] = 0x10;
  *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
  lVar29 = plVar17[0xb];
  local_88 = plVar17;
  if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) {
LAB_02c0dd7c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar29 + 0x10) == 0) {
    uVar19 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
    *(undefined8 *)(lVar29 + 0x10) = uVar19;
  }
  piVar1 = (int *)(lVar29 + 0xc);
  do {
    cVar11 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar12) {
      *piVar1 = *piVar1 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  local_1e0 = (long *)0x0;
  local_1d8 = 0;
  local_200 = (long *)0x0;
  puStack_1f8 = &DAT_cbf29ce484222645;
  local_1f0 = &DAT_03996322;
  uStack_1e8 = 0;
  local_1d0 = 0x101;
  local_1c0 = 0;
  local_a0 = (long *)0x0;
  local_1b0 = 0;
  local_1a8 = (code *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_130 = 0;
  local_128 = (code *)0x0;
  local_120 = 0;
  uStack_118 = 0;
  local_b0 = 0;
  local_a8 = 0;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x18))();
  }
  local_200 = plVar22;
  puStack_1f8 = (undefined1 *)uVar20;
  local_1f0 = (undefined1 *)uVar6;
  uStack_1e8 = uVar4;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_1c0 = *(undefined8 *)(lVar35 + 0x300);
  local_1d0 = CONCAT11(local_1d0._1_1_,1);
  local_1e0 = plVar7;
  local_1d8 = uVar9;
  if (*(code **)(lVar35 + 800) != (code *)0x0) {
    (**(code **)(lVar35 + 800))(lVar35 + 0x330,auStack_190);
    pcVar13 = local_128;
    local_1b0 = *(undefined8 *)(lVar35 + 0x310);
    local_1a8 = *(code **)(lVar35 + 0x318);
    local_1a0 = *(undefined8 *)(lVar35 + 800);
    uStack_198 = *(undefined8 *)(lVar35 + 0x328);
    if (local_128 != (code *)0x0) {
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      local_128 = (code *)0x0;
      (*pcVar13)(auStack_110);
    }
  }
  if (*(code **)(lVar35 + 0x3a0) != (code *)0x0) {
    (**(code **)(lVar35 + 0x3a0))(lVar35 + 0x3b0,auStack_110);
    local_130 = *(undefined8 *)(lVar35 + 0x390);
    local_128 = *(code **)(lVar35 + 0x398);
    local_120 = *(undefined8 *)(lVar35 + 0x3a0);
    uStack_118 = *(undefined8 *)(lVar35 + 0x3a8);
  }
  local_b0 = *(undefined8 *)(lVar35 + 0x520);
  local_a8 = *(undefined8 *)(lVar35 + 0x528);
  uStack_208 = FUN_00b07bcc(local_88,*(undefined8 *)(lVar35 + 8),&local_200);
  local_248 = (long *)0x0;
  local_240 = &DAT_cbf29ce484222645;
  local_228 = (long *)0x0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_238 = &DAT_03996322;
  local_230 = 0;
  plVar31 = plVar24;
  if (plVar24 == (long *)0x0) {
    pbVar32 = PTR_DAT_04379520;
  }
  else {
    (**(code **)(*plVar24 + 0x18))(plVar24);
    pbVar32 = PTR_DAT_04379520;
    if (local_248 != (long *)0x0) {
      lVar29 = *local_248;
      local_248 = plVar24;
      (**(code **)(lVar29 + 0x20))();
      plVar31 = local_248;
    }
  }
  local_248 = plVar31;
  local_240 = (undefined1 *)uVar27;
  local_238 = (undefined1 *)uVar5;
  local_230 = uVar8;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  plVar31 = plVar25;
  if (local_228 != (long *)0x0) {
    lVar29 = *local_228;
    local_228 = plVar25;
    (**(code **)(lVar29 + 0x20))();
    plVar31 = local_228;
  }
  local_228 = plVar31;
  plVar31 = local_88;
  local_218 = *(undefined8 *)(lVar35 + 0x520);
  local_210 = *(undefined8 *)(lVar35 + 0x528);
  plVar17 = *(long **)(lVar35 + 8);
  local_220 = uVar10;
  if ((*pbVar32 & 1) == 0) {
    iVar16 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar14 = PTR_DAT_04379528;
    if (iVar16 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar14,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar29 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar29 + 0x80)) goto LAB_02c0dd78;
  *(long **)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = plVar17;
  *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
  plVar18 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x210,0x10);
  if (plVar18 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  FUN_02c210c8(plVar18,&local_248);
  plVar18[1] = (long)plVar17;
  plVar18[2] = (long)plVar18;
  plVar18[3] = 0x210;
  plVar18[4] = 0x10;
  *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
  if (plVar18 != (long *)0x0) {
    lVar29 = plVar18[0xb];
    if (*(undefined8 **)(lVar29 + 0x18) == (undefined8 *)0x0) goto LAB_02c0dd7c;
    if (*(long *)(lVar29 + 0x10) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar29 + 0x18))();
      *(undefined8 *)(lVar29 + 0x10) = uVar20;
    }
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
  }
  plVar17 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    plVar17 = plVar18 + 9;
  }
  (**(code **)(*plVar17 + 0xb8))(plVar17,plVar31);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_009ad580(&local_80,plVar31 + 99);
  (**(code **)(*plVar17 + 0xc0))(plVar17,&local_80);
  plVar15 = local_80;
  if (local_80 != (long *)0x0) {
    plVar2 = local_80 + 1;
    do {
      iVar16 = (int)*plVar2 + -1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *(int *)plVar2 = iVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar16 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar16 = __cxa_guard_acquire(PTR_DAT_04379498), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar29 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar29;
      local_70[0] = (long *)*plVar15;
      FUN_02a44274(lVar29 + 0xd8,local_70);
    }
  }
  (**(code **)(*plVar17 + 200))(plVar17,*(undefined1 *)((long)plVar31 + 0x33b));
  (**(code **)(*plVar17 + 0x90))(plVar17);
  local_70[0] = plVar18;
  FUN_02a4dad4(plVar31 + 0x1e,local_70);
  if (local_70[0] != (long *)0x0) {
    lVar29 = local_70[0][0xb];
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar16 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  local_88[0x1a] = 0;
  local_88[0x1b] = 0;
  *(undefined1 *)(local_88 + 0x1c) = 1;
  lVar29 = *(long *)(lVar35 + 0x248);
  puVar3 = (undefined8 *)(lVar35 + 600);
  local_80 = plVar18;
  if (lVar29 == *(long *)(lVar35 + 0x250)) {
    uVar28 = *(ulong *)(lVar35 + 0x260);
    lVar29 = lVar29 - *(long *)(lVar35 + 0x240) >> 3;
    uVar21 = lVar29 + 1;
    if (0x7ffffffffffffffe < uVar28) {
      uVar28 = 0x7fffffffffffffff;
    }
    if (uVar28 < uVar21) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar30 = *(long *)(lVar35 + 0x250) - *(long *)(lVar35 + 0x240);
    if ((ulong)(lVar30 >> 3) < uVar28 >> 1) {
      uVar26 = lVar30 >> 2;
      uVar28 = uVar21;
      if (uVar21 <= uVar26) {
        uVar28 = uVar26;
      }
    }
    if (uVar28 == 0) {
      lVar30 = 0;
    }
    else {
      lVar30 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar28 << 3,8);
      if (lVar30 == 0) {
        (**(code **)(*(long *)*puVar3 + 0xb8))();
      }
    }
    lVar23 = lVar30 + lVar29 * 8;
    FUN_02c0cbac(puVar3,lVar23,&local_88);
    plVar31 = *(long **)(lVar35 + 0x240);
    lVar29 = lVar23 + 8;
    plVar17 = *(long **)(lVar35 + 0x248);
    if (plVar17 == plVar31) {
      plVar17 = plVar31;
    }
    else {
      do {
        lVar23 = lVar23 + -8;
        plVar17 = plVar17 + -1;
        FUN_02c0cbac(puVar3,lVar23,plVar17);
      } while (plVar31 != plVar17);
      plVar31 = *(long **)(lVar35 + 0x248);
      plVar17 = *(long **)(lVar35 + 0x240);
    }
    *(long *)(lVar35 + 0x248) = lVar29;
    lVar29 = *(long *)(lVar35 + 0x250);
    *(long *)(lVar35 + 0x240) = lVar23;
    *(ulong *)(lVar35 + 0x250) = lVar30 + uVar28 * 8;
    while (plVar31 != plVar17) {
      plVar31 = plVar31 + -1;
      plVar18 = (long *)*plVar31;
      if (plVar18 != (long *)0x0) {
        lVar30 = plVar18[0xb];
        piVar1 = (int *)(lVar30 + 0xc);
        do {
          iVar16 = *piVar1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = iVar16 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar16 + -1 == 0) {
          *(undefined8 *)(lVar30 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))();
        }
      }
    }
    if (plVar17 != (long *)0x0) {
      plVar31 = (long *)*puVar3;
      lVar29 = lVar29 - (long)plVar17;
      uVar21 = (**(code **)(*plVar31 + 0xc0))(plVar31);
      if ((uVar21 & 1) != 0) {
        lVar30 = tpidr_el0;
        if (*(char *)(lVar30 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar30 + 0x38d488) = 1;
          *(undefined8 *)(lVar30 + 0x38d478) = 0;
          *(undefined8 *)(lVar30 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar30 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar30 + 0x38d480)) {
          FUN_02bcc824(plVar31,plVar17,lVar29,8);
          goto LAB_02c0d52c;
        }
      }
      (**(code **)(*plVar31 + 0x18))(plVar31,plVar17,lVar29,8);
    }
  }
  else {
    FUN_02c0cbac(puVar3,lVar29,&local_88);
    *(long *)(lVar35 + 0x248) = *(long *)(lVar35 + 0x248) + 8;
  }
LAB_02c0d52c:
  lVar29 = *(long *)(lVar35 + 0x280);
  puVar3 = (undefined8 *)(lVar35 + 0x290);
  if (lVar29 == *(long *)(lVar35 + 0x288)) {
    uVar21 = *(ulong *)(lVar35 + 0x298);
    lVar29 = lVar29 - *(long *)(lVar35 + 0x278) >> 3;
    if (0x7ffffffffffffffe < uVar21) {
      uVar21 = 0x7fffffffffffffff;
    }
    uVar28 = lVar29 + 1;
    if (uVar21 < uVar28) goto LAB_02c0dd94;
    lVar30 = *(long *)(lVar35 + 0x288) - *(long *)(lVar35 + 0x278);
    if ((ulong)(lVar30 >> 3) < uVar21 >> 1) {
      uVar26 = lVar30 >> 2;
      uVar21 = uVar28;
      if (uVar28 <= uVar26) {
        uVar21 = uVar26;
      }
    }
    if (uVar21 == 0) {
      lVar30 = 0;
    }
    else {
      lVar30 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar21 << 3,8);
      if (lVar30 == 0) {
        (**(code **)(*(long *)*puVar3 + 0xb8))();
      }
    }
    lVar23 = lVar30 + lVar29 * 8;
    FUN_02c0dda8(puVar3,lVar23,&uStack_208);
    lVar33 = *(long *)(lVar35 + 0x278);
    lVar29 = lVar23 + 8;
    lVar34 = *(long *)(lVar35 + 0x280);
    if (lVar34 != lVar33) {
      do {
        lVar23 = lVar23 + -8;
        lVar34 = lVar34 + -8;
        FUN_02c0ccd4(puVar3,lVar23,lVar34);
      } while (lVar33 != lVar34);
      lVar33 = *(long *)(lVar35 + 0x278);
    }
    lVar34 = *(long *)(lVar35 + 0x288);
    *(long *)(lVar35 + 0x278) = lVar23;
    *(long *)(lVar35 + 0x280) = lVar29;
    *(ulong *)(lVar35 + 0x288) = lVar30 + uVar21 * 8;
    if (lVar33 != 0) {
      plVar31 = (long *)*puVar3;
      lVar34 = lVar34 - lVar33;
      uVar21 = (**(code **)(*plVar31 + 0xc0))(plVar31);
      if ((uVar21 & 1) != 0) {
        lVar29 = tpidr_el0;
        if (*(char *)(lVar29 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar29 + 0x38d488) = 1;
          *(undefined8 *)(lVar29 + 0x38d478) = 0;
          *(undefined8 *)(lVar29 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar29 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar29 + 0x38d480)) {
          FUN_02bcc824(plVar31,lVar33,lVar34,8);
          goto LAB_02c0d70c;
        }
      }
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar33,lVar34,8);
    }
  }
  else {
    FUN_02c0dda8(puVar3,lVar29,&uStack_208);
    *(long *)(lVar35 + 0x280) = *(long *)(lVar35 + 0x280) + 8;
  }
LAB_02c0d70c:
  lVar29 = *(long *)(lVar35 + 0x2b8);
  puVar3 = (undefined8 *)(lVar35 + 0x2c8);
  if (lVar29 == *(long *)(lVar35 + 0x2c0)) {
    uVar28 = *(ulong *)(lVar35 + 0x2d0);
    lVar29 = lVar29 - *(long *)(lVar35 + 0x2b0) >> 3;
    uVar21 = lVar29 + 1;
    if (0x7ffffffffffffffe < uVar28) {
      uVar28 = 0x7fffffffffffffff;
    }
    if (uVar28 < uVar21) {
LAB_02c0dd94:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar30 = *(long *)(lVar35 + 0x2c0) - *(long *)(lVar35 + 0x2b0);
    if ((ulong)(lVar30 >> 3) < uVar28 >> 1) {
      uVar26 = lVar30 >> 2;
      uVar28 = uVar21;
      if (uVar21 <= uVar26) {
        uVar28 = uVar26;
      }
    }
    if (uVar28 == 0) {
      lVar30 = 0;
    }
    else {
      lVar30 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar28 << 3,8);
      if (lVar30 == 0) {
        (**(code **)(*(long *)*puVar3 + 0xb8))();
      }
    }
    lVar23 = lVar30 + lVar29 * 8;
    FUN_02c0de80(puVar3,lVar23,&local_80);
    lVar33 = *(long *)(lVar35 + 0x2b0);
    lVar29 = lVar23 + 8;
    lVar34 = *(long *)(lVar35 + 0x2b8);
    if (lVar34 != lVar33) {
      do {
        lVar23 = lVar23 + -8;
        lVar34 = lVar34 + -8;
        FUN_02c0cdac(puVar3,lVar23,lVar34);
      } while (lVar33 != lVar34);
      lVar33 = *(long *)(lVar35 + 0x2b0);
    }
    lVar34 = *(long *)(lVar35 + 0x2c0);
    *(long *)(lVar35 + 0x2b0) = lVar23;
    *(long *)(lVar35 + 0x2b8) = lVar29;
    *(ulong *)(lVar35 + 0x2c0) = lVar30 + uVar28 * 8;
    if (lVar33 != 0) {
      plVar31 = (long *)*puVar3;
      lVar34 = lVar34 - lVar33;
      uVar21 = (**(code **)(*plVar31 + 0xc0))(plVar31);
      if ((uVar21 & 1) != 0) {
        lVar29 = tpidr_el0;
        if (*(char *)(lVar29 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar29 + 0x38d488) = 1;
          *(undefined8 *)(lVar29 + 0x38d478) = 0;
          *(undefined8 *)(lVar29 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar29 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar29 + 0x38d480)) {
          FUN_02bcc824(plVar31,lVar33,lVar34,8);
          goto joined_r0x02c0d8b0;
        }
      }
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar33,lVar34,8);
    }
  }
  else {
    FUN_02c0de80(puVar3,lVar29,&local_80);
    *(long *)(lVar35 + 0x2b8) = *(long *)(lVar35 + 0x2b8) + 8;
  }
joined_r0x02c0d8b0:
  if (local_228 != (long *)0x0) {
    (**(code **)(*local_228 + 0x20))();
  }
  if (local_248 != (long *)0x0) {
    (**(code **)(*local_248 + 0x20))();
  }
  pcVar13 = local_128;
  if (local_a0 != (long *)0x0) {
    plVar31 = local_a0 + 10;
    do {
      iVar16 = (int)*plVar31 + -1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar12) {
        *(int *)plVar31 = iVar16;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*local_a0 + 0x10))();
      pcVar13 = local_128;
    }
  }
  if (pcVar13 == (code *)0x0) {
    local_128 = (code *)0x0;
    pcVar13 = local_1a8;
  }
  else {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar13)(auStack_110);
    pcVar13 = local_1a8;
  }
  local_1a8 = (code *)0x0;
  if (pcVar13 != (code *)0x0) {
    local_1a0 = 0;
    uStack_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    (*pcVar13)(auStack_190);
  }
  if (local_1e0 != (long *)0x0) {
    (**(code **)(*local_1e0 + 0x20))();
  }
  if (local_200 != (long *)0x0) {
    (**(code **)(*local_200 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    lVar29 = local_88[0xb];
    piVar1 = (int *)(lVar29 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar16 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar29 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))();
  }
  return;
}


