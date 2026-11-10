/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb9a10; name: FUN_02cb9a10
 */


void FUN_02cb9a10(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_5a8 [4];
  undefined4 auStack_598 [2];
  undefined2 local_590;
  undefined **local_320;
  undefined **local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  long *local_2f8;
  long local_2f0 [79];
  undefined4 local_78 [6];
  
  if (DAT_04408a58 != 0) {
    return;
  }
  DAT_04408a58 = param_1;
  uVar9 = FUN_007e2d00();
  if ((uVar9 & 1) == 0) {
    if (DAT_04408aa0 == (undefined **)0x0) {
      DAT_04408aa0 = (undefined **)(**(code **)(*DAT_04408a50 + 0x10))(DAT_04408a50,0xc00000,8);
    }
    local_318 = (undefined **)0xc00000;
    local_320 = DAT_04408aa0;
    FUN_007e2d10(auStack_598,&local_320);
    FUN_007e2ff0(local_78);
    FUN_007ee660(auStack_598,local_78);
    FUN_007ed0d0(local_78);
    FUN_007ee660(auStack_598,local_78);
    FUN_007e8490(local_78);
    FUN_007ee660(auStack_598,local_78);
    FUN_007e2f50(local_78);
    FUN_007ee660(auStack_598,local_78);
    FUN_007e30e0(&LAB_02cbc9c0);
  }
  plVar15 = DAT_04408a50;
  if (param_1 == 1) {
    puVar10 = (undefined8 *)(**(code **)(*DAT_04408a50 + 0x10))(DAT_04408a50,0x18,8);
    if (puVar10 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
      uVar19 = 0;
      uVar18 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar3 = PTR_DAT_04379528;
        if (iVar8 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_02cbac70:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      FUN_008105e4(puVar10);
      uVar18 = 8;
      uVar19 = 0x18;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    puVar4 = DAT_044089f0;
    bVar1 = DAT_044089f0 != (undefined8 *)0x0;
    DAT_044089f0 = puVar10;
    if (bVar1) {
      FUN_02bcbe58(&local_320,0);
      (**(code **)*puVar4)(puVar4);
      uVar6 = DAT_04408a08;
      uVar5 = DAT_04408a00;
      plVar16 = DAT_044089f8;
      uVar9 = (**(code **)(*DAT_044089f8 + 0xc0))(DAT_044089f8);
      if ((uVar9 & 1) == 0) {
LAB_02cb9f34:
        (**(code **)(*plVar16 + 0x18))(plVar16,puVar4,uVar5,uVar6);
      }
      else {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02cb9f34;
        FUN_02bcc824(plVar16,puVar4,uVar5,uVar6);
      }
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
      *(int *)(lVar11 + 0x38d480) = iVar8;
      if (iVar8 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar11 + 0x38d484) = 0;
      }
    }
    plVar16 = (long *)&DAT_044089f0;
    local_320 = &PTR_LAB_042962f0;
    DAT_044089f8 = plVar15;
    DAT_04408a00 = uVar19;
    DAT_04408a08 = uVar18;
    FUN_0080f234(&local_318);
LAB_02cba170:
    (*(code *)local_320[2])(&local_320);
    local_310 = CONCAT62(local_310._2_6_,DAT_04408ab0);
    pcVar14 = *(code **)(*(long *)*plVar16 + 0x10);
    puVar12 = auStack_598;
    plVar15 = (long *)*plVar16;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) goto LAB_02cba1b8;
      puVar10 = (undefined8 *)(**(code **)(*DAT_04408a50 + 0x10))(DAT_04408a50,0x10,8);
      if (puVar10 == (undefined8 *)0x0) {
        plVar15 = (long *)0x0;
        uVar19 = 0;
        uVar18 = 0;
      }
      else {
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar3 = PTR_DAT_04379528;
          if (iVar8 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02cbac70;
        *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        FUN_00811ab4(puVar10);
        uVar18 = 8;
        uVar19 = 0x10;
        *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      }
      puVar4 = DAT_04408a10;
      bVar1 = DAT_04408a10 != (undefined8 *)0x0;
      DAT_04408a10 = puVar10;
      if (bVar1) {
        FUN_02bcbe58(&local_320,0);
        (**(code **)*puVar4)(puVar4);
        uVar6 = DAT_04408a28;
        uVar5 = DAT_04408a20;
        plVar16 = DAT_04408a18;
        uVar9 = (**(code **)(*DAT_04408a18 + 0xc0))(DAT_04408a18);
        lVar11 = tpidr_el0;
        if ((uVar9 & 1) == 0) {
LAB_02cba0a0:
          (**(code **)(*plVar16 + 0x18))(plVar16,puVar4,uVar5,uVar6);
        }
        else {
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02cba0a0;
          FUN_02bcc824(plVar16,puVar4,uVar5,uVar6);
        }
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
        *(int *)(lVar11 + 0x38d480) = iVar8;
        if (iVar8 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar11 + 0x38d484) = 0;
        }
      }
      plVar16 = (long *)&DAT_04408a10;
      local_320 = &PTR_LAB_04296390;
      DAT_04408a18 = plVar15;
      DAT_04408a20 = uVar19;
      DAT_04408a28 = uVar18;
      FUN_007f25dc(&local_318);
      local_318 = &PTR_LAB_042963c0;
      goto LAB_02cba170;
    }
    plVar16 = (long *)(**(code **)(*DAT_04408a50 + 0x10))(DAT_04408a50,0xfb0,8);
    if (plVar16 == (long *)0x0) {
      plVar15 = (long *)0x0;
      uVar19 = 0;
      uVar18 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar3 = PTR_DAT_04379528;
        if (iVar8 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02cbac70;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      FUN_00864dac(plVar16);
      uVar18 = 8;
      uVar19 = 0xfb0;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    plVar7 = DAT_04408a30;
    bVar1 = DAT_04408a30 != (long *)0x0;
    DAT_04408a30 = plVar16;
    if (bVar1) {
      FUN_02bcbe58(&local_320,0);
      (**(code **)*plVar7)(plVar7);
      uVar6 = DAT_04408a48;
      uVar5 = DAT_04408a40;
      plVar16 = DAT_04408a38;
      uVar9 = (**(code **)(*DAT_04408a38 + 0xc0))(DAT_04408a38);
      if ((uVar9 & 1) == 0) {
LAB_02cb9d48:
        (**(code **)(*plVar16 + 0x18))(plVar16,plVar7,uVar5,uVar6);
      }
      else {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02cb9d48;
        FUN_02bcc824(plVar16,plVar7,uVar5,uVar6);
      }
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
      *(int *)(lVar11 + 0x38d480) = iVar8;
      if (iVar8 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar11 + 0x38d484) = 0;
      }
    }
    local_320 = &PTR_LAB_04296358;
    plVar16 = (long *)&DAT_04408a30;
    local_310 = 0;
    local_318 = (undefined **)0x0;
    local_300 = 0;
    local_308 = 0;
    DAT_04408a38 = plVar15;
    DAT_04408a40 = uVar19;
    DAT_04408a48 = uVar18;
    FUN_0085914c(local_2f0);
    local_320 = &PTR_LAB_04296320;
    local_2f8 = local_2f0;
    FUN_0085914c(auStack_598);
    local_590 = DAT_04408ab0;
    (**(code **)(*local_2f8 + 0x10))(local_2f8,auStack_598);
    local_78[0] = 0;
    local_5a8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_5a8);
    FUN_007ee578(local_5a8,local_78);
    pcVar14 = *(code **)(*DAT_04408a30 + 0x10);
    puVar12 = local_78;
    plVar15 = DAT_04408a30;
  }
  (*pcVar14)(puVar12,plVar15,&local_320);
  DAT_04408aa8 = (undefined **)(**(code **)(*(long *)*plVar16 + 0xa0))();
LAB_02cba1b8:
  local_308 = CONCAT26(local_308._6_2_,0x100000000);
  local_300 = 0xffffffffffffffff;
  local_318 = (undefined **)CONCAT26(local_318._6_2_,0xc00080002);
  local_310 = 0;
  local_320 = DAT_04408aa8;
  FUN_00840b50(auStack_598);
  FUN_00840d50(local_78);
  FUN_007ee660(auStack_598,local_78);
  FUN_00853d34(local_78,&local_320);
  uVar18 = FUN_007ee660(auStack_598,local_78);
  FUN_007ee660(auStack_598,uVar18);
  lVar17 = *(long *)PTR_DAT_043773c0;
  iVar8 = 0;
  lVar11 = lVar17 + 0x10;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x70);
    FUN_00849368();
    iVar8 = FUN_00847840(lVar11,puVar10,0x7c000000);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x7c);
  FUN_00849570(local_78,uVar18,0xc,0xc);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a80 = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x78);
    FUN_00840e0c();
    iVar8 = FUN_00847840(lVar11,puVar10,0x80000000);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x80);
  FUN_00840f30(local_78,uVar18,0xc,0xc);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a88 = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x78);
    FUN_008584d4();
    iVar8 = FUN_00847840(lVar11,puVar10,0x68000000);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x68);
  FUN_00858958(local_78,uVar18,0xc);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a90 = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x70);
    FUN_00849368();
    iVar8 = FUN_00847840(lVar11,puVar10,0x7c000001);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x7c);
  FUN_00849570(local_78,uVar18,0xc,0xc);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a84 = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x78);
    FUN_00840e0c();
    iVar8 = FUN_00847840(lVar11,puVar10,0x80000001);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x80);
  FUN_00840f30(local_78,uVar18,0xc,0xc);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a8c = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x100);
    FUN_00851688();
    iVar8 = FUN_00847840(lVar11,puVar10,0x81000000);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x81);
  FUN_00851758(local_78,uVar18,4,4);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a60 = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x100);
    FUN_00851688();
    iVar8 = FUN_00847840(lVar11,puVar10,0x81000001);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x81);
  FUN_00851758(local_78,uVar18,4,4);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a64 = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x88);
    FUN_007e21a0();
    iVar8 = FUN_00847840(lVar11,puVar10,0x77000000);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  FUN_00847ad0(lVar11,iVar8,0x77);
  FUN_007e2258(local_78);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a5c = iVar8;
  if (*(char *)(lVar17 + 0x38) == '\0') {
    puVar10 = (undefined8 *)FUN_008477c4(lVar11,0x90);
    FUN_007e1504();
    iVar8 = FUN_00847840(lVar11,puVar10,0x74000000);
    if (iVar8 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar10)(puVar10);
      FUN_008477a0(lVar11,puVar10);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar18 = FUN_00847ad0(lVar11,iVar8,0x74);
  FUN_007e1554(local_78,uVar18,0x20);
  FUN_007ee660(auStack_598,local_78);
  DAT_04408a98 = iVar8;
  FUN_00840cb0(local_78);
  FUN_007ee660(auStack_598,local_78);
  local_320 = DAT_04408aa8;
  uVar9 = (ulong)local_318 >> 0x18;
  local_318 = (undefined **)CONCAT53((uint5)uVar9 & 0xffffffff00,0x10000);
  uVar13 = 0x10;
  if (DAT_04408a58 != 2) {
    uVar13 = 10;
  }
  uVar2 = 0x18;
  if (DAT_04408a58 != 1) {
    uVar2 = uVar13;
  }
  local_318 = (undefined **)CONCAT62(local_318._2_6_,uVar2);
  FUN_00825790(auStack_598);
  FUN_00825870(local_78);
  FUN_007ee660(auStack_598,local_78);
  FUN_00829308(local_78,&local_320);
  FUN_007ee660(auStack_598,local_78);
  FUN_00825910(local_78);
  FUN_007ee660(auStack_598,local_78);
  return;
}


