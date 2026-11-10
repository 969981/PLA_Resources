/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fd028; name: FUN_028fd028
 */


void FUN_028fd028(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  
  local_80 = *param_2;
  local_78 = param_2[1];
  local_70 = param_2[2];
  local_68 = (long *)param_2[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  param_3 = (undefined8 *)*param_3;
  puVar7 = (undefined8 *)FUN_028d3b0c(*param_1,&local_80,param_3);
  *puVar7 = *param_3;
  puVar7[1] = param_3[1];
  puVar7[2] = param_3[2];
  plVar18 = (long *)param_3[3];
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
  }
  plVar8 = (long *)puVar7[3];
  puVar7[3] = plVar18;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (puVar7 == param_3) goto LAB_028fdccc;
  plVar18 = puVar7 + 4;
  plVar8 = puVar7 + 0xb;
  if (*plVar8 == param_3[0xb]) {
    uVar9 = puVar7[5];
  }
  else {
    if (puVar7[0xf] != 0) {
      if ((long *)puVar7[10] != (long *)0x0) {
        lVar15 = tpidr_el0;
        plVar20 = (long *)puVar7[10];
        do {
          while( true ) {
            plVar19 = (long *)*plVar20;
            if ((long *)plVar20[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar20[5] + 0x20))();
            }
            plVar21 = (long *)puVar7[0xb];
            uVar9 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar9 & 1) != 0) break;
LAB_028fd164:
            (**(code **)(*plVar21 + 0x18))(plVar21,plVar20,0x40,8);
            plVar20 = plVar19;
            if (plVar19 == (long *)0x0) goto LAB_028fd200;
          }
          if (*(char *)(lVar15 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar15 + 0x38d488) = 1;
            *(undefined8 *)(lVar15 + 0x38d478) = 0;
            *(undefined8 *)(lVar15 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_028fd164;
          FUN_02bcc824(plVar21,plVar20,0x40,8);
          plVar20 = plVar19;
        } while (plVar19 != (long *)0x0);
      }
LAB_028fd200:
      uVar9 = puVar7[5];
      puVar7[10] = 0;
      if (uVar9 != 0) {
        uVar13 = uVar9 & 3;
        if (uVar9 - 1 < 3) {
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          do {
            lVar11 = lVar15 * 8;
            lVar15 = lVar15 + 4;
            *(undefined8 *)(*plVar18 + lVar11) = 0;
            *(undefined8 *)(*plVar18 + lVar11 + 8) = 0;
            *(undefined8 *)(*plVar18 + lVar11 + 0x10) = 0;
            *(undefined8 *)(*plVar18 + lVar11 + 0x18) = 0;
          } while (uVar9 - uVar13 != lVar15);
        }
        if (uVar13 != 0) {
          lVar15 = lVar15 << 3;
          do {
            *(undefined8 *)(*plVar18 + lVar15) = 0;
            uVar13 = uVar13 - 1;
            lVar15 = lVar15 + 8;
          } while (uVar13 != 0);
        }
      }
      puVar7[0xf] = 0;
    }
    lVar15 = *plVar18;
    *plVar18 = 0;
    if (lVar15 != 0) {
      lVar11 = puVar7[5];
      plVar20 = (long *)puVar7[6];
      uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar9 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar20,lVar15,lVar11 << 3,8);
          goto LAB_028fd31c;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar15,lVar11 << 3,8);
    }
LAB_028fd31c:
    uVar9 = 0;
    puVar7[5] = 0;
  }
  uVar14 = param_3[6];
  uVar17 = param_3[7];
  uVar16 = param_3[8];
  *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(param_3 + 9);
  puVar7[6] = uVar14;
  puVar7[7] = uVar17;
  puVar7[8] = uVar16;
  uVar17 = param_3[0xd];
  lVar15 = param_3[0xb];
  uVar14 = param_3[0xc];
  *(undefined4 *)(puVar7 + 0xe) = *(undefined4 *)(param_3 + 0xe);
  puVar7[0xc] = uVar14;
  puVar7[0xd] = uVar17;
  *plVar8 = lVar15;
  *(undefined4 *)(puVar7 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  plVar20 = (long *)param_3[10];
  puVar2 = PTR_DAT_04379520;
  puVar3 = PTR_DAT_04379528;
  if (uVar9 != 0) {
    uVar13 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      do {
        lVar11 = lVar15 * 8;
        lVar15 = lVar15 + 4;
        *(undefined8 *)(*plVar18 + lVar11) = 0;
        *(undefined8 *)(*plVar18 + lVar11 + 8) = 0;
        *(undefined8 *)(*plVar18 + lVar11 + 0x10) = 0;
        *(undefined8 *)(*plVar18 + lVar11 + 0x18) = 0;
      } while (uVar9 - uVar13 != lVar15);
    }
    if (uVar13 != 0) {
      lVar15 = lVar15 << 3;
      do {
        *(undefined8 *)(*plVar18 + lVar15) = 0;
        uVar13 = uVar13 - 1;
        lVar15 = lVar15 + 8;
      } while (uVar13 != 0);
    }
    plVar19 = (long *)puVar7[10];
    puVar7[0xf] = 0;
    puVar7[10] = 0;
    while (puVar2 = PTR_DAT_04379520, puVar3 = PTR_DAT_04379528, plVar19 != (long *)0x0) {
      if (plVar20 == (long *)0x0) {
        lVar15 = tpidr_el0;
        goto LAB_028fd5c0;
      }
      plVar19[2] = plVar20[2];
      plVar19[3] = plVar20[3];
      plVar19[4] = plVar20[4];
      plVar21 = (long *)plVar20[5];
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
      plVar12 = (long *)plVar19[5];
      plVar19[5] = (long)plVar21;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      uVar14 = plVar20[6];
      *(undefined4 *)(plVar19 + 7) = *(undefined4 *)(plVar20 + 7);
      plVar19[6] = uVar14;
      lVar15 = *plVar19;
      FUN_028fde04(plVar18,plVar19);
      plVar20 = (long *)*plVar20;
      plVar19 = (long *)lVar15;
    }
  }
  for (; puVar5 = PTR_DAT_04379528, puVar4 = PTR_DAT_04379520, PTR_DAT_04379520 = puVar2,
      PTR_DAT_04379528 = puVar3, plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
    puVar10 = (undefined8 *)(**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,0x40,8);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar8 + 0xb8))();
    }
    lVar15 = *plVar8;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_008a62a4(puVar5);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar4);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_028fddfc;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    puVar10[2] = plVar20[2];
    puVar10[3] = plVar20[3];
    puVar10[4] = plVar20[4];
    plVar19 = (long *)plVar20[5];
    puVar10[5] = plVar19;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))();
    }
    uVar14 = plVar20[6];
    *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(plVar20 + 7);
    puVar10[6] = uVar14;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *puVar10 = 0;
    puVar10[1] = puVar10[2];
    FUN_028fde04(plVar18,puVar10);
    puVar2 = PTR_DAT_04379520;
    puVar3 = PTR_DAT_04379528;
    PTR_DAT_04379528 = puVar5;
    PTR_DAT_04379520 = puVar4;
  }
  goto LAB_028fd6ac;
LAB_028fdbe0:
  do {
    plVar18 = (long *)*plVar19;
    if ((long *)plVar19[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar19[5] + 0x20))();
    }
    plVar8 = (long *)puVar7[0x18];
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) == 0) {
LAB_028fdc48:
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar19,0x50,0x10);
    }
    else {
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_028fdc48;
      FUN_02bcc824(plVar8,plVar19,0x50,0x10);
    }
    plVar19 = plVar18;
  } while (plVar18 != (long *)0x0);
  goto LAB_028fdccc;
LAB_028fd5c0:
  do {
    plVar18 = (long *)*plVar19;
    if ((long *)plVar19[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar19[5] + 0x20))();
    }
    plVar8 = (long *)puVar7[0xb];
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) == 0) {
LAB_028fd628:
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar19,0x40,8);
    }
    else {
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_028fd628;
      FUN_02bcc824(plVar8,plVar19,0x40,8);
    }
    plVar19 = plVar18;
  } while (plVar18 != (long *)0x0);
LAB_028fd6ac:
  if (puVar7 == param_3) goto LAB_028fdccc;
  plVar18 = puVar7 + 0x11;
  plVar8 = puVar7 + 0x18;
  if (*plVar8 == param_3[0x18]) {
    uVar9 = puVar7[0x12];
  }
  else {
    if (puVar7[0x1c] != 0) {
      if ((long *)puVar7[0x17] != (long *)0x0) {
        lVar15 = tpidr_el0;
        plVar20 = (long *)puVar7[0x17];
        do {
          while( true ) {
            plVar19 = (long *)*plVar20;
            if ((long *)plVar20[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar20[5] + 0x20))();
            }
            plVar21 = (long *)puVar7[0x18];
            uVar9 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar9 & 1) != 0) break;
LAB_028fd758:
            (**(code **)(*plVar21 + 0x18))(plVar21,plVar20,0x50,0x10);
            plVar20 = plVar19;
            if (plVar19 == (long *)0x0) goto LAB_028fd7f4;
          }
          if (*(char *)(lVar15 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar15 + 0x38d488) = 1;
            *(undefined8 *)(lVar15 + 0x38d478) = 0;
            *(undefined8 *)(lVar15 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_028fd758;
          FUN_02bcc824(plVar21,plVar20,0x50,0x10);
          plVar20 = plVar19;
        } while (plVar19 != (long *)0x0);
      }
LAB_028fd7f4:
      uVar9 = puVar7[0x12];
      puVar7[0x17] = 0;
      if (uVar9 != 0) {
        uVar13 = uVar9 & 3;
        if (uVar9 - 1 < 3) {
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          do {
            lVar11 = lVar15 * 8;
            lVar15 = lVar15 + 4;
            *(undefined8 *)(*plVar18 + lVar11) = 0;
            *(undefined8 *)(*plVar18 + lVar11 + 8) = 0;
            *(undefined8 *)(*plVar18 + lVar11 + 0x10) = 0;
            *(undefined8 *)(*plVar18 + lVar11 + 0x18) = 0;
          } while (uVar9 - uVar13 != lVar15);
        }
        if (uVar13 != 0) {
          lVar15 = lVar15 << 3;
          do {
            *(undefined8 *)(*plVar18 + lVar15) = 0;
            uVar13 = uVar13 - 1;
            lVar15 = lVar15 + 8;
          } while (uVar13 != 0);
        }
      }
      puVar7[0x1c] = 0;
    }
    lVar15 = *plVar18;
    *plVar18 = 0;
    if (lVar15 != 0) {
      lVar11 = puVar7[0x12];
      plVar20 = (long *)puVar7[0x13];
      uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar9 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar20,lVar15,lVar11 << 3,0x10);
          goto LAB_028fd910;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar15,lVar11 << 3,0x10);
    }
LAB_028fd910:
    uVar9 = 0;
    puVar7[0x12] = 0;
  }
  uVar14 = param_3[0x13];
  uVar17 = param_3[0x14];
  uVar16 = param_3[0x15];
  *(undefined4 *)(puVar7 + 0x16) = *(undefined4 *)(param_3 + 0x16);
  puVar7[0x13] = uVar14;
  puVar7[0x14] = uVar17;
  puVar7[0x15] = uVar16;
  uVar17 = param_3[0x1a];
  lVar15 = param_3[0x18];
  uVar14 = param_3[0x19];
  *(undefined4 *)(puVar7 + 0x1b) = *(undefined4 *)(param_3 + 0x1b);
  puVar7[0x19] = uVar14;
  puVar7[0x1a] = uVar17;
  *plVar8 = lVar15;
  *(undefined4 *)(puVar7 + 0x1d) = *(undefined4 *)(param_3 + 0x1d);
  plVar20 = (long *)param_3[0x17];
  puVar2 = PTR_DAT_04379520;
  puVar3 = PTR_DAT_04379528;
  if (uVar9 != 0) {
    uVar13 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      do {
        lVar11 = lVar15 * 8;
        lVar15 = lVar15 + 4;
        *(undefined8 *)(*plVar18 + lVar11) = 0;
        *(undefined8 *)(*plVar18 + lVar11 + 8) = 0;
        *(undefined8 *)(*plVar18 + lVar11 + 0x10) = 0;
        *(undefined8 *)(*plVar18 + lVar11 + 0x18) = 0;
      } while (uVar9 - uVar13 != lVar15);
    }
    if (uVar13 != 0) {
      lVar15 = lVar15 << 3;
      do {
        *(undefined8 *)(*plVar18 + lVar15) = 0;
        uVar13 = uVar13 - 1;
        lVar15 = lVar15 + 8;
      } while (uVar13 != 0);
    }
    plVar19 = (long *)puVar7[0x17];
    puVar7[0x1c] = 0;
    puVar7[0x17] = 0;
    while (puVar2 = PTR_DAT_04379520, puVar3 = PTR_DAT_04379528, plVar19 != (long *)0x0) {
      if (plVar20 == (long *)0x0) {
        lVar15 = tpidr_el0;
        goto LAB_028fdbe0;
      }
      plVar19[2] = plVar20[2];
      plVar19[3] = plVar20[3];
      plVar19[4] = plVar20[4];
      plVar21 = (long *)plVar20[5];
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
      plVar12 = (long *)plVar19[5];
      plVar19[5] = (long)plVar21;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      uVar14 = plVar20[9];
      plVar19[7] = plVar20[7];
      plVar19[9] = uVar14;
      uVar14 = plVar20[6];
      plVar19[8] = plVar20[8];
      plVar19[6] = uVar14;
      lVar15 = *plVar19;
      FUN_028fe0b4(plVar18,plVar19);
      plVar20 = (long *)*plVar20;
      plVar19 = (long *)lVar15;
    }
  }
  for (; puVar5 = PTR_DAT_04379528, puVar4 = PTR_DAT_04379520, PTR_DAT_04379520 = puVar2,
      PTR_DAT_04379528 = puVar3, plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
    puVar7 = (undefined8 *)(**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,0x50,0x10);
    if (puVar7 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*plVar8 + 0xb8))();
    }
    lVar15 = *plVar8;
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      FUN_008a62a4(puVar5);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(puVar4);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_028fddfc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar15;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    puVar7[2] = plVar20[2];
    puVar7[3] = plVar20[3];
    puVar7[4] = plVar20[4];
    plVar19 = (long *)plVar20[5];
    puVar7[5] = plVar19;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x18))();
    }
    uVar14 = plVar20[9];
    puVar7[7] = plVar20[7];
    puVar7[9] = uVar14;
    uVar14 = plVar20[6];
    puVar7[8] = plVar20[8];
    puVar7[6] = uVar14;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *puVar7 = 0;
    puVar7[1] = puVar7[2];
    FUN_028fe0b4(plVar18,puVar7);
    puVar2 = PTR_DAT_04379520;
    puVar3 = PTR_DAT_04379528;
    PTR_DAT_04379528 = puVar5;
    PTR_DAT_04379520 = puVar4;
  }
LAB_028fdccc:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


