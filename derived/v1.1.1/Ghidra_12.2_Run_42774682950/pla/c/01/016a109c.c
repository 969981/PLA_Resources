/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a109c; name: FUN_016a109c
 */


void FUN_016a109c(long param_1)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined4 uVar20;
  ushort *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  char *pcVar26;
  long lVar27;
  int *local_168;
  undefined1 *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  long local_100;
  long *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  long local_e0;
  long *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long local_c0;
  long *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  long *local_78;
  long *local_70 [2];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar22 = *(long **)(lVar10 + 0x228);
  if (plVar22 != (long *)0x0) {
    lVar10 = plVar22[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar9;
    }
    piVar12 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = *piVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar15 = (long *)plVar22[0x3b];
  uVar11 = *(ulong *)(param_1 + 0xb0);
  uVar13 = plVar15[1];
  uVar14 = 0;
  if (uVar13 != 0) {
    uVar14 = uVar11 / uVar13;
  }
  if (uVar13 != 0) {
    uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar13 - 1 & uVar11;
    }
    else {
      uVar17 = uVar11;
      if (uVar13 <= uVar11) {
        uVar17 = uVar11 - uVar14 * uVar13;
      }
    }
    plVar19 = *(long **)(*plVar15 + uVar17 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar19[1] == uVar11) {
            if (plVar19[2] == uVar11) goto LAB_016a11bc;
          }
          else if ((plVar19[1] & uVar13 - 1) != uVar17) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar19[1];
          if (uVar16 == uVar11) {
            if (plVar19[2] == uVar11) goto LAB_016a11bc;
          }
          else {
            if (uVar13 <= uVar16) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar16 / uVar13;
              }
              uVar16 = uVar16 - uVar5 * uVar13;
            }
            if (uVar16 != uVar17) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
LAB_016a1304:
  piVar12 = *(int **)(*(long *)(param_1 + 0x78) + 0x28);
  lVar10 = -(long)*piVar12;
  puVar21 = (ushort *)((long)piVar12 - (long)*piVar12);
  if (*puVar21 < 5) {
    uVar20 = 0;
  }
  else {
    uVar16 = (ulong)puVar21[2];
    uVar20 = 0;
    if (uVar16 != 0) {
      uVar20 = *(undefined4 *)((long)piVar12 + uVar16);
    }
  }
  if (uVar13 != 0) {
    uVar16 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar13 - 1 & uVar11;
    }
    else {
      uVar17 = uVar11;
      if (uVar13 <= uVar11) {
        uVar17 = uVar11 - uVar14 * uVar13;
      }
    }
    plVar15 = *(long **)(*plVar15 + uVar17 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar15[1] == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_016a13ac;
          }
          else if ((plVar15[1] & uVar13 - 1) != uVar17) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar15[1];
          if (uVar14 == uVar11) {
            if (plVar15[2] == uVar11) goto LAB_016a13ac;
          }
          else {
            if (uVar13 <= uVar14) {
              uVar16 = 0;
              if (uVar13 != 0) {
                uVar16 = uVar14 / uVar13;
              }
              uVar14 = uVar14 - uVar16 * uVar13;
            }
            if (uVar14 != uVar17) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_016a13b8:
  if ((*(ushort *)((long)piVar12 + lVar10) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)piVar12 + lVar10))[2], uVar14 == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((long)piVar12 + uVar14);
  }
LAB_016a11c4:
  puVar6 = PTR_DAT_04379cd8;
  plVar19 = (long *)(param_1 + 0x80);
  plVar15 = (long *)*plVar19;
  if (plVar15 == (long *)0x0) goto joined_r0x016a1e60;
  plVar18 = plVar19;
  do {
    if (iVar8 <= (int)plVar15[4]) {
      plVar18 = plVar15;
    }
    plVar15 = (long *)plVar15[(int)plVar15[4] < iVar8];
  } while (plVar15 != (long *)0x0);
  if ((plVar18 == plVar19) || (iVar8 < (int)plVar18[4])) goto joined_r0x016a1e60;
  piVar12 = (int *)plVar18[5];
  plVar15 = (long *)plVar18[1];
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)plVar18[2];
    if ((long *)*plVar15 != plVar18) {
      lVar10 = plVar18[2];
      while( true ) {
        plVar15 = *(long **)(lVar10 + 0x10);
        if (*plVar15 == lVar10) break;
        lVar10 = *(long *)(lVar10 + 0x10);
      }
    }
  }
  else {
    plVar18 = (long *)*plVar15;
    if (plVar18 != (long *)0x0) {
      plVar15 = plVar18;
      for (plVar18 = (long *)*plVar18; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        plVar15 = plVar18;
      }
    }
  }
  if (plVar15 == plVar19) {
    local_168 = (int *)0x0;
  }
  else {
    local_168 = (int *)plVar15[5];
  }
  uVar14 = (ulong)*(ushort *)((long)piVar12 + (6 - (long)*piVar12));
  puVar1 = (uint *)((long)piVar12 + uVar14);
  uVar11 = (ulong)*puVar1;
  uVar13 = (ulong)*(uint *)((long)puVar1 + uVar11);
  if (uVar13 != 0) {
    lVar2 = uVar11 + uVar14;
    lVar10 = 0;
    do {
      uVar14 = (ulong)*(uint *)((long)piVar12 + lVar10 + lVar2 + 4);
      local_110 = &DAT_cbf29ce484222645;
      puStack_108 = &DAT_03996322;
      local_100 = 0;
      local_f8 = (long *)0x0;
      local_f0 = &DAT_cbf29ce484222645;
      puStack_e8 = &DAT_03996322;
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_d0 = &DAT_cbf29ce484222645;
      puStack_c8 = &DAT_03996322;
      local_c0 = 0;
      local_b8 = (long *)0x0;
      local_b0 = &DAT_cbf29ce484222645;
      puStack_a8 = &DAT_03996322;
      local_a0 = 0;
      local_98 = (long *)0x0;
      local_90 = &DAT_cbf29ce484222645;
      puStack_88 = &DAT_03996322;
      lVar23 = lVar10 + uVar14 + lVar2;
      local_80 = 0;
      local_78 = (long *)0x0;
      lVar25 = lVar10 + (uVar14 - (long)*(int *)((long)piVar12 + lVar23 + 4)) + lVar2;
      if (*(ushort *)((long)piVar12 + lVar25 + 4) < 5) {
        local_120 = (undefined1 *)0x0;
      }
      else {
        uVar11 = (ulong)*(ushort *)((long)piVar12 + lVar25 + 8);
        local_120 = (undefined1 *)0x0;
        if (uVar11 != 0) {
          local_120 = *(undefined1 **)((long)piVar12 + lVar10 + uVar14 + uVar11 + lVar2 + 4);
        }
      }
      lVar25 = lVar10 + (uVar14 - (long)*(int *)((long)piVar12 + lVar23 + 4)) + lVar2;
      if (*(ushort *)((long)piVar12 + lVar25 + 4) < 7) {
        local_118 = 0;
      }
      else {
        uVar11 = (ulong)*(ushort *)((long)piVar12 + lVar25 + 10);
        local_118 = 0;
        if (uVar11 != 0) {
          local_118 = *(undefined8 *)((long)piVar12 + lVar10 + uVar14 + uVar11 + lVar2 + 4);
        }
      }
      lVar25 = lVar10 + (uVar14 - (long)*(int *)((long)piVar12 + lVar23 + 4)) + lVar2;
      if ((*(ushort *)((long)piVar12 + lVar25 + 4) < 9) ||
         (uVar11 = (ulong)*(ushort *)((long)piVar12 + lVar25 + 0xc), uVar11 == 0)) {
        pcVar26 = &DAT_00000004;
        if (DAT_00000004 != '\0') goto LAB_016a161c;
LAB_016a1c30:
        plVar15 = (long *)FUN_00938550();
        if (plVar15 == (long *)0x0) goto LAB_016a164c;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        if (plVar15 != (long *)0x0) goto LAB_016a1650;
LAB_016a1c50:
        lVar25 = *(long *)PTR_DAT_04379c88;
        if (plVar15 != (long *)0x0) goto LAB_016a165c;
LAB_016a1c60:
        lVar27 = *(long *)PTR_PTR_04379d00;
        if (plVar15 != (long *)0x0) goto LAB_016a1668;
LAB_016a1c70:
        lVar24 = 0;
      }
      else {
        lVar25 = uVar14 + uVar11;
        pcVar26 = (char *)((long)piVar12 +
                          lVar10 + lVar25 + (ulong)*(uint *)((long)piVar12 +
                                                            lVar10 + lVar25 + lVar2 + 4) + lVar2 + 8
                          );
        if (*pcVar26 == '\0') goto LAB_016a1c30;
LAB_016a161c:
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar6;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
        FUN_02a47cd8(local_70,uVar9,pcVar26);
        plVar15 = local_70[0];
LAB_016a164c:
        if (plVar15 == (long *)0x0) goto LAB_016a1c50;
LAB_016a1650:
        lVar25 = plVar15[0xb];
        if (plVar15 == (long *)0x0) goto LAB_016a1c60;
LAB_016a165c:
        lVar27 = plVar15[0xc];
        if (plVar15 == (long *)0x0) goto LAB_016a1c70;
LAB_016a1668:
        lVar24 = plVar15[0xd];
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      plVar19 = local_f8;
      local_f8 = (long *)0x0;
      local_110 = (undefined1 *)lVar25;
      puStack_108 = (undefined1 *)lVar27;
      local_100 = lVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      local_f8 = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      lVar25 = lVar10 + (uVar14 - (long)*(int *)((long)piVar12 + lVar23 + 4)) + lVar2;
      if ((*(ushort *)((long)piVar12 + lVar25 + 4) < 0xb) ||
         (uVar11 = (ulong)*(ushort *)((long)piVar12 + lVar25 + 0xe), uVar11 == 0)) {
        pcVar26 = &DAT_00000004;
        if (DAT_00000004 != '\0') goto LAB_016a16fc;
LAB_016a1c78:
        plVar15 = (long *)FUN_00938550();
        if (plVar15 == (long *)0x0) goto LAB_016a172c;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        if (plVar15 != (long *)0x0) goto LAB_016a1730;
LAB_016a1c98:
        lVar25 = *(long *)PTR_DAT_04379c88;
        if (plVar15 != (long *)0x0) goto LAB_016a173c;
LAB_016a1ca8:
        lVar27 = *(long *)PTR_PTR_04379d00;
        if (plVar15 != (long *)0x0) goto LAB_016a1748;
LAB_016a1cb8:
        lVar24 = 0;
      }
      else {
        lVar25 = uVar14 + uVar11;
        pcVar26 = (char *)((long)piVar12 +
                          lVar10 + lVar25 + (ulong)*(uint *)((long)piVar12 +
                                                            lVar10 + lVar25 + lVar2 + 4) + lVar2 + 8
                          );
        if (*pcVar26 == '\0') goto LAB_016a1c78;
LAB_016a16fc:
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar6;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
        FUN_02a47cd8(local_70,uVar9,pcVar26);
        plVar15 = local_70[0];
LAB_016a172c:
        if (plVar15 == (long *)0x0) goto LAB_016a1c98;
LAB_016a1730:
        lVar25 = plVar15[0xb];
        if (plVar15 == (long *)0x0) goto LAB_016a1ca8;
LAB_016a173c:
        lVar27 = plVar15[0xc];
        if (plVar15 == (long *)0x0) goto LAB_016a1cb8;
LAB_016a1748:
        lVar24 = plVar15[0xd];
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      plVar19 = local_d8;
      local_d8 = (long *)0x0;
      local_f0 = (undefined1 *)lVar25;
      puStack_e8 = (undefined1 *)lVar27;
      local_e0 = lVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      local_d8 = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      lVar25 = lVar10 + (uVar14 - (long)*(int *)((long)piVar12 + lVar23 + 4)) + lVar2;
      if ((*(ushort *)((long)piVar12 + lVar25 + 4) < 0xd) ||
         (uVar11 = (ulong)*(ushort *)((long)piVar12 + lVar25 + 0x10), uVar11 == 0)) {
        pcVar26 = &DAT_00000004;
        if (DAT_00000004 != '\0') goto LAB_016a17dc;
LAB_016a1cc0:
        plVar15 = (long *)FUN_00938550();
        if (plVar15 == (long *)0x0) goto LAB_016a180c;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        if (plVar15 != (long *)0x0) goto LAB_016a1810;
LAB_016a1ce0:
        lVar25 = *(long *)PTR_DAT_04379c88;
        if (plVar15 != (long *)0x0) goto LAB_016a181c;
LAB_016a1cf0:
        lVar27 = *(long *)PTR_PTR_04379d00;
        if (plVar15 != (long *)0x0) goto LAB_016a1828;
LAB_016a1d00:
        lVar24 = 0;
      }
      else {
        lVar25 = uVar14 + uVar11;
        pcVar26 = (char *)((long)piVar12 +
                          lVar10 + lVar25 + (ulong)*(uint *)((long)piVar12 +
                                                            lVar10 + lVar25 + lVar2 + 4) + lVar2 + 8
                          );
        if (*pcVar26 == '\0') goto LAB_016a1cc0;
LAB_016a17dc:
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar6;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
        FUN_02a47cd8(local_70,uVar9,pcVar26);
        plVar15 = local_70[0];
LAB_016a180c:
        if (plVar15 == (long *)0x0) goto LAB_016a1ce0;
LAB_016a1810:
        lVar25 = plVar15[0xb];
        if (plVar15 == (long *)0x0) goto LAB_016a1cf0;
LAB_016a181c:
        lVar27 = plVar15[0xc];
        if (plVar15 == (long *)0x0) goto LAB_016a1d00;
LAB_016a1828:
        lVar24 = plVar15[0xd];
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      plVar19 = local_b8;
      local_b8 = (long *)0x0;
      local_d0 = (undefined1 *)lVar25;
      puStack_c8 = (undefined1 *)lVar27;
      local_c0 = lVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      local_b8 = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      lVar25 = lVar10 + (uVar14 - (long)*(int *)((long)piVar12 + lVar23 + 4)) + lVar2;
      if ((*(ushort *)((long)piVar12 + lVar25 + 4) < 0xf) ||
         (uVar11 = (ulong)*(ushort *)((long)piVar12 + lVar25 + 0x12), uVar11 == 0)) {
        pcVar26 = &DAT_00000004;
        if (DAT_00000004 != '\0') goto LAB_016a18bc;
LAB_016a1d08:
        plVar15 = (long *)FUN_00938550();
        if (plVar15 == (long *)0x0) goto LAB_016a18ec;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        if (plVar15 != (long *)0x0) goto LAB_016a18f0;
LAB_016a1d28:
        lVar25 = *(long *)PTR_DAT_04379c88;
        if (plVar15 != (long *)0x0) goto LAB_016a18fc;
LAB_016a1d38:
        lVar27 = *(long *)PTR_PTR_04379d00;
        if (plVar15 != (long *)0x0) goto LAB_016a1908;
LAB_016a1d48:
        lVar24 = 0;
      }
      else {
        lVar25 = uVar14 + uVar11;
        pcVar26 = (char *)((long)piVar12 +
                          lVar10 + lVar25 + (ulong)*(uint *)((long)piVar12 +
                                                            lVar10 + lVar25 + lVar2 + 4) + lVar2 + 8
                          );
        if (*pcVar26 == '\0') goto LAB_016a1d08;
LAB_016a18bc:
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar6;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
        FUN_02a47cd8(local_70,uVar9,pcVar26);
        plVar15 = local_70[0];
LAB_016a18ec:
        if (plVar15 == (long *)0x0) goto LAB_016a1d28;
LAB_016a18f0:
        lVar25 = plVar15[0xb];
        if (plVar15 == (long *)0x0) goto LAB_016a1d38;
LAB_016a18fc:
        lVar27 = plVar15[0xc];
        if (plVar15 == (long *)0x0) goto LAB_016a1d48;
LAB_016a1908:
        lVar24 = plVar15[0xd];
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      plVar19 = local_98;
      local_98 = (long *)0x0;
      local_b0 = (undefined1 *)lVar25;
      puStack_a8 = (undefined1 *)lVar27;
      local_a0 = lVar24;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      local_98 = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      lVar23 = lVar10 + (uVar14 - (long)*(int *)((long)piVar12 + lVar23 + 4)) + lVar2;
      if ((*(ushort *)((long)piVar12 + lVar23 + 4) < 0x11) ||
         (uVar11 = (ulong)*(ushort *)((long)piVar12 + lVar23 + 0x14), uVar11 == 0)) {
        pcVar26 = &DAT_00000004;
        if (DAT_00000004 != '\0') goto LAB_016a199c;
LAB_016a1d50:
        plVar15 = (long *)FUN_00938550();
        if (plVar15 == (long *)0x0) goto LAB_016a19cc;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        if (plVar15 != (long *)0x0) goto LAB_016a19d0;
LAB_016a1d70:
        lVar23 = *(long *)PTR_DAT_04379c88;
        if (plVar15 != (long *)0x0) goto LAB_016a19dc;
LAB_016a1d80:
        lVar25 = *(long *)PTR_PTR_04379d00;
        if (plVar15 != (long *)0x0) goto LAB_016a19e8;
LAB_016a1d90:
        lVar27 = 0;
      }
      else {
        lVar23 = uVar14 + uVar11;
        pcVar26 = (char *)((long)piVar12 +
                          lVar10 + lVar23 + (ulong)*(uint *)((long)piVar12 +
                                                            lVar10 + lVar23 + lVar2 + 4) + lVar2 + 8
                          );
        if (*pcVar26 == '\0') goto LAB_016a1d50;
LAB_016a199c:
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar9 = *(undefined8 *)puVar6;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
        FUN_02a47cd8(local_70,uVar9,pcVar26);
        plVar15 = local_70[0];
LAB_016a19cc:
        if (plVar15 == (long *)0x0) goto LAB_016a1d70;
LAB_016a19d0:
        lVar23 = plVar15[0xb];
        if (plVar15 == (long *)0x0) goto LAB_016a1d80;
LAB_016a19dc:
        lVar25 = plVar15[0xc];
        if (plVar15 == (long *)0x0) goto LAB_016a1d90;
LAB_016a19e8:
        lVar27 = plVar15[0xd];
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      plVar19 = local_78;
      local_78 = (long *)0x0;
      local_90 = (undefined1 *)lVar23;
      puStack_88 = (undefined1 *)lVar25;
      local_80 = lVar27;
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x20))();
      }
      local_78 = plVar15;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (local_120 == &DAT_cbf29ce484222645) {
        uVar7 = 3;
      }
      else {
        uVar7 = FUN_0165ff30(&local_120);
        uVar7 = ~uVar7 & 1;
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      if ((uVar7 != 3) && (uVar7 != 0)) goto joined_r0x016a1e60;
      lVar10 = lVar10 + 4;
    } while (uVar13 << 2 != lVar10);
  }
  if (local_168 == (int *)0x0) {
    uVar14 = ((long *)plVar22[0x3b])[1];
    if (uVar14 != 0) {
      uVar11 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar13 = *(ulong *)(param_1 + 0xb0);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar16 = uVar14 - 1 & uVar13;
      }
      else if (uVar13 < uVar14) {
        uVar16 = uVar13;
      }
      else {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar13 / uVar14;
        }
        uVar16 = uVar13 - uVar16 * uVar14;
      }
      plVar15 = *(long **)(*(long *)plVar22[0x3b] + uVar16 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == uVar13) {
              if (plVar15[2] == uVar13) goto LAB_016a1e54;
            }
            else if ((plVar15[1] & uVar14 - 1) != uVar16) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == uVar13) {
              if (plVar15[2] == uVar13) goto LAB_016a1e54;
            }
            else {
              if (uVar14 <= uVar11) {
                uVar17 = 0;
                if (uVar14 != 0) {
                  uVar17 = uVar11 / uVar14;
                }
                uVar11 = uVar11 - uVar17 * uVar14;
              }
              if (uVar11 != uVar16) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        goto joined_r0x016a1e60;
      }
    }
  }
  else {
    if (*(ushort *)((long)local_168 - (long)*local_168) < 5) {
      uVar20 = 0;
    }
    else {
      uVar14 = (ulong)((ushort *)((long)local_168 - (long)*local_168))[2];
      uVar20 = 0;
      if (uVar14 != 0) {
        uVar20 = *(undefined4 *)((long)local_168 + uVar14);
      }
    }
    uVar14 = ((long *)plVar22[0x3b])[1];
    if (uVar14 != 0) {
      uVar11 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar13 = *(ulong *)(param_1 + 0xb0);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar16 = uVar14 - 1 & uVar13;
      }
      else if (uVar13 < uVar14) {
        uVar16 = uVar13;
      }
      else {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar13 / uVar14;
        }
        uVar16 = uVar13 - uVar16 * uVar14;
      }
      plVar15 = *(long **)(*(long *)plVar22[0x3b] + uVar16 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == uVar13) {
              if (plVar15[2] == uVar13) goto LAB_016a1be8;
            }
            else if ((plVar15[1] & uVar14 - 1) != uVar16) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == uVar13) {
              if (plVar15[2] == uVar13) goto LAB_016a1be8;
            }
            else {
              if (uVar14 <= uVar11) {
                uVar17 = 0;
                if (uVar14 != 0) {
                  uVar17 = uVar11 / uVar14;
                }
                uVar11 = uVar11 - uVar17 * uVar14;
              }
              if (uVar11 != uVar16) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        goto joined_r0x016a1e60;
      }
    }
  }
  goto LAB_016a1bf4;
LAB_016a11bc:
  iVar8 = (int)plVar19[3];
  if (iVar8 == 0) goto LAB_016a1304;
  goto LAB_016a11c4;
LAB_016a13ac:
  *(undefined4 *)(plVar15 + 3) = uVar20;
  lVar10 = -(long)*piVar12;
  goto LAB_016a13b8;
LAB_016a1e54:
  *(undefined4 *)(plVar15 + 3) = 0xffffffff;
  goto joined_r0x016a1e60;
LAB_016a1be8:
  *(undefined4 *)(plVar15 + 3) = uVar20;
joined_r0x016a1e60:
  if (plVar22 != (long *)0x0) {
LAB_016a1bf4:
    lVar10 = plVar22[0xb];
    piVar12 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))();
    }
  }
  return;
}


