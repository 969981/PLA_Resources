/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282ab78; name: FUN_0282ab78
 */


void FUN_0282ab78(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  ulong local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
  *(undefined8 *)(param_1 + 0xc) = *param_2;
  puVar9 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x20,8);
  puVar4 = PTR_DAT_04379528;
  puVar3 = PTR_DAT_04379520;
  if (puVar9 == (undefined8 *)0x0) {
    plVar21 = (long *)0x0;
    uVar22 = 0;
    uVar19 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar5 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0282b408;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_3;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *puVar9 = param_3;
    puVar9[1] = 0x666666666666666;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    uVar19 = 8;
    uVar22 = 0x20;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    plVar21 = param_3;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar9;
  if (lVar10 != 0) {
    FUN_02bcbe58(&local_98,0);
    plVar1 = *(long **)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    uVar23 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    lVar17 = tpidr_el0;
    if ((uVar23 & 1) == 0) {
LAB_0282b0dc:
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,uVar2,uVar16);
    }
    else {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_0282b0dc;
      FUN_02bcc824(plVar1,lVar10,uVar2,uVar16);
    }
    if (*(char *)(lVar17 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar17 + 0x38d488) = 1;
      *(undefined8 *)(lVar17 + 0x38d478) = 0;
      *(undefined8 *)(lVar17 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar17 + 0x38d480) + -1;
    *(int *)(lVar17 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar17 + 0x38d484) = 0;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x20);
  }
  *(long **)(param_1 + 0x28) = plVar21;
  *(undefined8 *)(param_1 + 0x30) = uVar22;
  *(undefined8 *)(param_1 + 0x38) = uVar19;
  iVar7 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0x10);
  puVar11 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar11 == (undefined8 *)0x0) {
    local_88 = 0;
    local_80 = (long *)0x0;
    local_90 = (long *)0x0;
    goto LAB_0282ada8;
  }
  if ((*puVar3 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar3 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0282b408:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_3;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  uVar23 = (long)iVar6 * (long)iVar7;
  uVar19 = *puVar9;
  uVar2 = puVar9[1];
  uVar22 = puVar9[2];
  uVar16 = puVar9[3];
  puVar11[6] = 0;
  puVar11[2] = uVar22;
  puVar11[3] = uVar16;
  *puVar11 = uVar19;
  puVar11[1] = uVar2;
  puVar11[4] = 0;
  puVar11[5] = 0;
  if ((int)uVar23 != 0) {
    if ((ulong)puVar11[1] < uVar23) goto LAB_0282b408;
    lVar12 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,uVar23 * 0x28,8);
    lVar17 = lVar12;
    if (lVar12 == 0) {
      (**(code **)(*(long *)*puVar11 + 0xb8))();
      lVar15 = puVar11[4];
      lVar20 = puVar11[5];
      if (lVar20 != 0) goto LAB_0282acf0;
    }
    else {
      lVar15 = puVar11[4];
      lVar20 = puVar11[5];
      if (lVar20 != 0) {
LAB_0282acf0:
        if (lVar15 != 0) {
          lVar14 = lVar20 * 0x28;
          lVar18 = lVar15;
          do {
            FUN_0282bf28(puVar11,lVar17,lVar18);
            lVar18 = lVar18 + 0x28;
            lVar17 = lVar17 + 0x28;
            lVar14 = lVar14 + -0x28;
          } while (lVar14 != 0);
        }
      }
    }
    if (lVar15 != 0) {
      if (puVar11[5] != lVar20) {
        lVar18 = lVar15 + lVar20 * 0x28;
        lVar20 = lVar20 * -0x28 + puVar11[5] * 0x28;
        do {
          FUN_0282bf28(puVar11,lVar17,lVar18);
          lVar18 = lVar18 + 0x28;
          lVar17 = lVar17 + 0x28;
          lVar20 = lVar20 + -0x28;
        } while (lVar20 != 0);
        lVar20 = puVar11[5];
      }
      if (lVar20 != 0) {
        if (*(long **)(lVar15 + 0x18) != (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + 0x18) + 0x20))();
        }
        if (lVar20 != 1) {
          lVar20 = lVar20 + -2;
          if (*(long **)(lVar15 + 0x40) != (long *)0x0) {
            (**(code **)(**(long **)(lVar15 + 0x40) + 0x20))();
          }
          if (lVar20 != 0) {
            plVar21 = (long *)(lVar15 + 0x68);
            do {
              lVar20 = lVar20 + -1;
              if ((long *)*plVar21 != (long *)0x0) {
                (**(code **)(*(long *)*plVar21 + 0x20))();
              }
              plVar21 = plVar21 + 5;
            } while (lVar20 != 0);
          }
        }
      }
      lVar15 = puVar11[6];
      plVar21 = (long *)*puVar11;
      uVar19 = puVar11[4];
      uVar13 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar13 & 1) != 0) {
        lVar20 = tpidr_el0;
        if (*(char *)(lVar20 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar20 + 0x38d488) = 1;
          *(undefined8 *)(lVar20 + 0x38d478) = 0;
          *(undefined8 *)(lVar20 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar20 + 0x38d480)) {
          FUN_02bcc824(plVar21,uVar19,lVar15 * 0x28,8);
          goto LAB_0282ad70;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,uVar19,lVar15 * 0x28,8);
    }
LAB_0282ad70:
    puVar11[6] = uVar23;
    puVar11[4] = lVar12;
    puVar11[5] = (lVar17 - lVar12 >> 3) * -0x3333333333333333;
  }
  local_88 = 0x38;
  local_80 = (long *)&DAT_00000008;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  local_90 = param_3;
LAB_0282ada8:
  local_98 = 0;
  lVar10 = *(long *)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar11;
  if (lVar10 == 0) {
    *(undefined8 *)(param_1 + 0x50) = local_88;
    *(long **)(param_1 + 0x58) = local_80;
    *(long **)(param_1 + 0x48) = local_90;
    lVar10 = puVar11[5];
  }
  else {
    FUN_0280d164(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = local_88;
    *(long **)(param_1 + 0x58) = local_80;
    *(long **)(param_1 + 0x48) = local_90;
    puVar11 = *(undefined8 **)(param_1 + 0x40);
    lVar10 = puVar11[5];
  }
  local_98 = 0;
  if (lVar10 != 0) {
    local_98 = 0;
    lVar17 = puVar11[4];
    if (*(long **)(lVar17 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar17 + 0x18) + 0x20))();
    }
    if (lVar10 != 1) {
      lVar10 = lVar10 + -2;
      if (*(long **)(lVar17 + 0x40) != (long *)0x0) {
        (**(code **)(**(long **)(lVar17 + 0x40) + 0x20))();
      }
      if (lVar10 != 0) {
        plVar21 = (long *)(lVar17 + 0x68);
        do {
          lVar10 = lVar10 + -1;
          if ((long *)*plVar21 != (long *)0x0) {
            (**(code **)(*(long *)*plVar21 + 0x20))();
          }
          plVar21 = plVar21 + 5;
        } while (lVar10 != 0);
      }
    }
  }
  puVar11[5] = 0;
  puVar5 = PTR_FUN_0437a0e0;
  puVar4 = PTR_DAT_0437a0d8;
  puVar3 = PTR_DAT_0437a0d0;
  if (0 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) {
    iVar7 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x40);
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
        FUN_00100250(puVar5,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar3);
      }
      local_98 = *(undefined8 *)puVar4;
      local_90 = *(long **)(puVar4 + 8);
      local_88 = *(undefined8 *)(puVar4 + 0x10);
      local_80 = *(long **)(puVar4 + 0x18);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x18))();
      }
      local_78 = local_78 & 0xfffffffffffffffe;
      uVar23 = *(ulong *)(lVar10 + 0x28);
      if (uVar23 < *(ulong *)(lVar10 + 0x30)) {
        FUN_0282bf28(lVar10,*(long *)(lVar10 + 0x20) + uVar23 * 0x28,&local_98);
        *(long *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + 1;
      }
      else {
        local_68 = *(long *)(lVar10 + 0x20) + uVar23 * 0x28;
        FUN_0282c024(auStack_70,lVar10,&local_68,&local_98);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc));
  }
  return;
}


