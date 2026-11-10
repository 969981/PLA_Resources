/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02893840; name: FUN_02893840
 */


void FUN_02893840(int *param_1,undefined8 param_2,long *param_3,int param_4)

{
  int *piVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined1 auVar26 [12];
  undefined8 local_360;
  long *local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340 [4];
  uint local_33c;
  long local_338;
  int local_330;
  uint local_32c [3];
  ulong local_320;
  long local_318;
  uint local_310;
  uint local_30c [3];
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined **local_250;
  long local_220;
  undefined4 local_218;
  uint local_214;
  long local_208;
  undefined4 local_200;
  int local_1fc;
  undefined1 auStack_150 [192];
  ulong local_90;
  
  *(undefined8 *)(param_1 + 2) = param_2;
  plVar11 = *(long **)(param_1 + 0x66);
  plVar15 = (long *)*param_3;
  if (plVar11 != plVar15) {
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      plVar15 = plVar15 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = *plVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar11 = *(long **)(param_1 + 0x66);
      plVar15 = (long *)*param_3;
    }
    *(long **)(param_1 + 0x66) = plVar15;
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar15 = plVar11 + 2;
      do {
        lVar18 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
  }
  param_1[0x68] = param_4;
  FUN_031c6600(&local_300);
  uStack_2f8 = DAT_0388a148;
  local_300 = DAT_0388a140;
  lVar18 = tpidr_el0;
  lVar16 = *(long *)(lVar18 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar18 + 0x38d490) = lVar16;
  }
  plVar15 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
  uVar12 = (**(code **)(*plVar15 + 0x10))(plVar15,0x510,0);
  FUN_031c66f8(uVar12,&local_300);
  plVar15 = *(long **)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = uVar12;
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    plVar11 = plVar15 + 2;
    do {
      lVar16 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))();
    }
  }
  FUN_03329a68(local_340);
  puVar6 = PTR_PTR_0434a080;
  local_33c = 1;
  if ((local_32c[0] & 0x3fffffff) == 0) {
    uVar14 = (local_32c[0] & 0x3fffffff) * 2;
    if (uVar14 < 0x3fffffff) {
      if (uVar14 < 2) {
        uVar14 = 1;
      }
    }
    else {
      uVar14 = 0x3fffffff;
    }
    local_338 = FUN_032bd1d4(PTR_PTR_0434a080,uVar14,4,local_338,local_330,local_32c);
  }
  lVar16 = (long)local_330;
  if (local_330 < 1) {
    uVar14 = -local_330;
    local_330 = 1;
    memset((void *)(local_338 + lVar16 * 4),0xff,(ulong)uVar14 * 4 + 4);
  }
  else if (local_330 != 1) {
    local_330 = 1;
  }
  uVar14 = local_33c;
  local_340[0] = 2;
  if ((int)(local_30c[0] & 0x3fffffff) < (int)local_33c) {
    local_318 = FUN_02896fe0(puVar6,local_33c,local_318,local_310,local_30c);
  }
  lVar16 = (long)(int)local_310;
  if ((int)local_310 < (int)uVar14) {
    uVar3 = ~local_310;
    local_310 = uVar14;
    memset((void *)(local_318 + lVar16),2,(ulong)(uVar14 + uVar3) + 1);
  }
  else if ((int)uVar14 < (int)local_310) {
    local_310 = uVar14;
  }
  FUN_0321610c(*(undefined8 *)(param_1 + 4),local_340,1);
  if (*param_1 != 0) {
    uVar21 = 0;
    piVar1 = param_1 + 0xc;
    do {
      auVar26 = FUN_03218cd0(0x41200000,*(undefined8 *)(param_1 + 4),uVar21 & 0xffffffff,0,0);
      local_360 = auVar26._0_8_;
      local_358 = (long *)CONCAT44(local_358._4_4_,auVar26._8_4_);
      uVar20 = *(ulong *)(param_1 + 8);
      if (uVar20 < *(ulong *)(param_1 + 10)) {
        FUN_028970ec(piVar1,uVar20,&local_360);
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0xc;
      }
      else {
        lVar16 = (long)(uVar20 - *(long *)(param_1 + 6)) >> 2;
        uVar20 = *(ulong *)(param_1 + 0xe);
        if (0x7ffffffffffffffe < uVar20) {
          uVar20 = 0x7fffffffffffffff;
        }
        uVar2 = lVar16 * -0x5555555555555555 + 1;
        if (uVar20 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar17 = (long)(*(ulong *)(param_1 + 10) - *(long *)(param_1 + 6)) >> 2;
        uVar19 = lVar17 * 0x5555555555555556;
        if (uVar2 <= uVar19) {
          uVar2 = uVar19;
        }
        if ((ulong)(lVar17 * -0x5555555555555555) < uVar20 >> 1) {
          uVar20 = uVar2;
        }
        if (uVar20 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = (**(code **)(**(long **)piVar1 + 0x10))(*(long **)piVar1,uVar20 * 0xc,4);
          if (lVar17 == 0) {
            (**(code **)(**(long **)piVar1 + 0xb8))();
          }
        }
        lVar23 = lVar17 + lVar16 * 4;
        FUN_028970ec(piVar1,lVar23,&local_360);
        lVar22 = *(long *)(param_1 + 6);
        lVar24 = *(long *)(param_1 + 8);
        lVar16 = lVar23 + 0xc;
        if (lVar24 != lVar22) {
          do {
            lVar23 = lVar23 + -0xc;
            lVar24 = lVar24 + -0xc;
            FUN_028970ec(piVar1,lVar23,lVar24);
          } while (lVar22 != lVar24);
          lVar22 = *(long *)(param_1 + 6);
        }
        lVar24 = *(long *)(param_1 + 10);
        *(ulong *)(param_1 + 10) = lVar17 + uVar20 * 0xc;
        *(long *)(param_1 + 6) = lVar23;
        *(long *)(param_1 + 8) = lVar16;
        if (lVar22 != 0) {
          plVar15 = *(long **)piVar1;
          uVar20 = (**(code **)(*plVar15 + 0xc0))(plVar15);
          if ((uVar20 & 1) != 0) {
            if (*(char *)(lVar18 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar18 + 0x38d488) = 1;
              *(undefined8 *)(lVar18 + 0x38d478) = 0;
              *(undefined8 *)(lVar18 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar18 + 0x38d480)) {
              FUN_02bcc824(plVar15,lVar22,lVar24 - lVar22,4);
              goto LAB_02893abc;
            }
          }
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar22,lVar24 - lVar22,4);
        }
      }
LAB_02893abc:
      uVar21 = uVar21 + 1;
    } while (uVar21 < (ulong)(long)*param_1);
  }
  uVar25 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x128);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 4) + 0x120);
  lVar16 = *(long *)(lVar18 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar18 + 0x38d490) = lVar16;
  }
  plVar15 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
  puVar13 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x90,0);
  *puVar13 = &PTR_LAB_0433bea8;
  puVar13[1] = 0xffffffff;
  puVar13[2] = 1;
  puVar13[3] = 0;
  puVar13[0x10] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0x8000000000000000;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0x8000000000000000;
  puVar13[9] = uVar25;
  puVar13[8] = uVar12;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0x8000000000000000;
  plVar15 = *(long **)(param_1 + 0x4a);
  *(undefined8 **)(param_1 + 0x4a) = puVar13;
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    plVar11 = plVar15 + 2;
    do {
      lVar16 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))();
    }
  }
  plVar15 = *(long **)(param_1 + 2);
  puVar13 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x38,8);
  puVar8 = PTR_DAT_04379528;
  puVar7 = PTR_DAT_04379520;
  if (puVar13 == (undefined8 *)0x0) {
    local_350 = 0;
    local_348 = 0;
    local_358 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02894278;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar15;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    uVar12 = *(undefined8 *)(param_1 + 2);
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = uVar12;
    puVar13[4] = 0x1fffffffffffffff;
    puVar13[5] = 0;
    *(undefined4 *)(puVar13 + 6) = 0;
    local_350 = 0x38;
    local_348 = 8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    local_358 = plVar15;
  }
  local_360 = 0;
  lVar16 = *(long *)(param_1 + 0x14);
  *(undefined8 **)(param_1 + 0x14) = puVar13;
  if (lVar16 != 0) {
    FUN_02896c44(param_1 + 0x16);
  }
  *(undefined8 *)(param_1 + 0x18) = local_350;
  *(undefined8 *)(param_1 + 0x1a) = local_348;
  *(long **)(param_1 + 0x16) = local_358;
  plVar15 = *(long **)(param_1 + 2);
  puVar13 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x38,8);
  if (puVar13 == (undefined8 *)0x0) {
    local_350 = 0;
    local_348 = 0;
    local_358 = (long *)0x0;
  }
  else {
    if (((*puVar7 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar10 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
    if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_02894278:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar15;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    uVar12 = *(undefined8 *)(param_1 + 2);
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = uVar12;
    puVar13[4] = 0x1fffffffffffffff;
    puVar13[5] = 0;
    *(undefined4 *)(puVar13 + 6) = 0;
    local_350 = 0x38;
    local_348 = 8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    local_358 = plVar15;
  }
  local_360 = 0;
  lVar16 = *(long *)(param_1 + 0x4c);
  *(undefined8 **)(param_1 + 0x4c) = puVar13;
  if (lVar16 != 0) {
    FUN_028968a8(param_1 + 0x4e);
  }
  *(undefined8 *)(param_1 + 0x50) = local_350;
  *(undefined8 *)(param_1 + 0x52) = local_348;
  *(long **)(param_1 + 0x4e) = local_358;
  local_310 = 0;
  if ((-1 < (int)local_30c[0]) && (local_318 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_318,local_30c[0] & 0x3fffffff);
  }
  local_318 = 0;
  local_30c[0] = 0x80000000;
  if ((local_320 & 1) != 0) {
    lVar16 = *(long *)(lVar18 + 0x38d490);
    if (lVar16 == 0) {
      lVar16 = FUN_0333d16c(0,1);
      *(long *)(lVar18 + 0x38d490) = lVar16;
    }
    plVar15 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
    *(undefined8 *)(local_320 - 0x11) = 0;
    (**(code **)(*plVar15 + 0x18))
              (plVar15,(undefined8 *)(local_320 - 0x11),(long)*(int *)(local_320 - 9) + 0x10);
  }
  local_330 = 0;
  if ((-1 < (int)local_32c[0]) && (local_338 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_338,local_32c[0] << 2);
  }
  if ((local_90 & 1) != 0) {
    lVar16 = *(long *)(lVar18 + 0x38d490);
    if (lVar16 == 0) {
      lVar16 = FUN_0333d16c(0,1);
      *(long *)(lVar18 + 0x38d490) = lVar16;
    }
    plVar15 = *(long **)(*(long *)(lVar16 + 8) + 0x58);
    *(undefined8 *)(local_90 - 0x11) = 0;
    (**(code **)(*plVar15 + 0x18))
              (plVar15,(undefined8 *)(local_90 - 0x11),(long)*(int *)(local_90 - 9) + 0x10);
  }
  FUN_031bda88(auStack_150);
  local_250 = &PTR_LAB_0430b5d8;
  local_200 = 0;
  if ((-1 < local_1fc) && (local_208 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_208,local_1fc << 2);
  }
  local_1fc = 0x80000000;
  local_208 = 0;
  local_218 = 0;
  if ((-1 < (int)local_214) && (local_220 != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,local_220,((ulong)local_214 & 0x3fffffff) << 4);
  }
  return;
}


