/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028db740; name: FUN_028db740
 */


void FUN_028db740(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  ushort *puVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  uint *puVar24;
  uint *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined8 *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  plVar8 = (long *)(**(code **)(*param_1 + 0x100))();
  lVar14 = *(long *)(param_2 + 8);
  piVar15 = (int *)0x0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x1e1) == '\0') {
      piVar15 = (int *)0x0;
    }
    else {
      piVar15 = (int *)((long)*(uint **)(lVar14 + 0x250) + (ulong)**(uint **)(lVar14 + 0x250));
    }
  }
  if (*(ushort *)((long)piVar15 - (long)*piVar15) < 5) {
    return;
  }
  uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2];
  if (uVar19 == 0) {
    return;
  }
  puVar24 = (uint *)((long)piVar15 + uVar19);
  piVar15 = (int *)((long)puVar24 + (ulong)*puVar24);
  if (piVar15 == (int *)0x0) {
    return;
  }
  puVar16 = (ushort *)((long)piVar15 - (long)*piVar15);
  uVar3 = *puVar16;
  if (uVar3 < 5) {
    puVar24 = (uint *)0x0;
LAB_028db828:
    lVar14 = 0;
  }
  else {
    if ((ulong)puVar16[2] == 0) {
      puVar24 = (uint *)0x0;
      if (6 < uVar3) goto LAB_028db7fc;
      goto LAB_028db828;
    }
    puVar24 = (uint *)((long)piVar15 + (ulong)puVar16[2]);
    puVar24 = (uint *)((long)puVar24 + (ulong)*puVar24);
    if (uVar3 < 7) goto LAB_028db828;
LAB_028db7fc:
    if ((ulong)puVar16[3] == 0) goto LAB_028db828;
    puVar25 = (uint *)((long)piVar15 + (ulong)puVar16[3]);
    lVar14 = (long)puVar25 + (ulong)*puVar25;
  }
  lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1c8,8);
  if (lVar9 == 0) {
    lVar10 = 0;
    lVar14 = 0;
    plVar22 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_028dc57c;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_028ca1c4(lVar9,lVar14);
    lVar14 = 0x1c8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    lVar10 = 8;
    plVar22 = plVar8;
  }
  lVar26 = param_1[0x1b];
  param_1[0x1b] = lVar9;
  lVar9 = tpidr_el0;
  if (lVar26 != 0) {
    FUN_02bcbe58(&local_88,0);
    FUN_028d1244(lVar26 + 0x160,*(undefined8 *)(lVar26 + 400));
    lVar28 = *(long *)(lVar26 + 0x160);
    *(undefined8 *)(lVar26 + 0x160) = 0;
    if (lVar28 != 0) {
      plVar13 = *(long **)(lVar26 + 0x170);
      lVar29 = *(long *)(lVar26 + 0x168) << 3;
      uVar19 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar19 & 1) != 0) {
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar13,lVar28,lVar29,8);
          goto LAB_028db974;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar28,lVar29,8);
    }
LAB_028db974:
    FUN_028cb6ac(lVar26 + 0xb0);
    FUN_028cb6ac(lVar26 + 8);
    plVar13 = (long *)param_1[0x1c];
    lVar28 = param_1[0x1d];
    lVar29 = param_1[0x1e];
    uVar19 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar19 & 1) == 0) {
LAB_028db9e0:
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar26,lVar28,lVar29);
    }
    else {
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_028db9e0;
      FUN_02bcc824(plVar13,lVar26,lVar28,lVar29);
    }
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar9 + 0x38d480) + -1;
    *(int *)(lVar9 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar9 + 0x38d484) = 0;
    }
  }
  param_1[0x1c] = (long)plVar22;
  param_1[0x1d] = lVar14;
  param_1[0x1e] = lVar10;
  if (((*PTR_DAT_0437a570 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  if (*(long *)(param_3 + 200) == 0) {
    lVar14 = *(long *)PTR_DAT_0437a578;
    plVar22 = (long *)PTR_DAT_0437a578;
  }
  else {
    plVar22 = (long *)(*(long *)(param_3 + 200) + 0x88);
    lVar14 = *plVar22;
  }
  if (lVar14 != 0) {
    lVar10 = param_1[0x1b];
    uVar19 = (ulong)(*(long *)(lVar14 + 0x278) - *(long *)(lVar14 + 0x270)) >> 4;
    uVar27 = (ulong)(uint)(int)(short)((short)uVar19 * -0x5555);
    if (*(ulong *)(lVar10 + 0x80) != uVar27) {
      FUN_028cdd6c((long *)(lVar10 + 0x78),uVar27,0);
      if ((int)uVar19 * -0x55550000 != 0) {
        uVar19 = 0;
        do {
          puVar11 = (undefined8 *)FUN_02b68dac(*plVar22,uVar19 & 0xffffffff);
          local_88 = (long *)*puVar11;
          local_80 = (long *)puVar11[1];
          local_78 = (long *)puVar11[2];
          local_70 = (long *)puVar11[3];
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x18))();
          }
          uVar12 = FUN_028ca890(lVar10 + 8,&local_88);
          lVar14 = *(long *)(lVar10 + 0x78);
          uVar20 = uVar19 >> 6;
          uVar21 = 1L << (uVar19 & 0x3f);
          if ((uVar12 & 1) == 0) {
            uVar21 = *(ulong *)(lVar14 + uVar20 * 8) & (uVar21 ^ 0xffffffffffffffff);
          }
          else {
            uVar21 = *(ulong *)(lVar14 + uVar20 * 8) | uVar21;
          }
          *(ulong *)(lVar14 + uVar20 * 8) = uVar21;
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          uVar19 = uVar19 + 1;
        } while (uVar27 != uVar19);
      }
    }
  }
  uVar19 = (ulong)*puVar24;
  lVar14 = param_1[0x14];
  if ((ulong)(param_1[0x16] - lVar14 >> 5) < uVar19) {
    plVar22 = param_1 + 0x17;
    lVar10 = param_1[0x15];
    local_70 = (long *)0x0;
    plStack_68 = plVar22;
    plVar13 = (long *)(**(code **)(*(long *)param_1[0x17] + 0x10))
                                ((long *)param_1[0x17],uVar19 << 5,8);
    if (plVar13 == (long *)0x0) {
      (**(code **)(*(long *)*plVar22 + 0xb8))();
    }
    plVar1 = plVar13 + (lVar10 - lVar14 >> 5) * 4;
    plVar17 = (long *)param_1[0x14];
    plVar18 = (long *)param_1[0x15];
    plVar23 = plVar1;
    local_88 = plVar13;
    local_80 = plVar1;
    local_78 = plVar1;
    local_70 = plVar13 + uVar19 * 4;
    if (plVar18 == plVar17) {
      local_78 = plVar17;
    }
    else {
      do {
        plVar23 = plVar23 + -4;
        plVar18 = plVar18 + -4;
        FUN_028e1574(plVar22,plVar23,plVar18);
      } while (plVar17 != plVar18);
      plVar17 = (long *)param_1[0x14];
      local_78 = (long *)param_1[0x15];
    }
    param_1[0x14] = (long)plVar23;
    param_1[0x15] = (long)plVar1;
    local_70 = (long *)param_1[0x16];
    param_1[0x16] = (long)(plVar13 + uVar19 * 4);
    local_88 = plVar17;
    local_80 = plVar17;
    FUN_028e11b8(&local_88);
  }
  lVar14 = (**(code **)(*plVar8 + 0x10))(plVar8,0x38,8);
  if (lVar14 == 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    local_80 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar4 = PTR_DAT_04379528;
      if (iVar7 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_028dc57c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_028e5eac(lVar14,piVar15);
    local_78 = (long *)&DAT_00000038;
    local_70 = (long *)&DAT_00000008;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_80 = plVar8;
  }
  local_88 = (long *)0x0;
  lVar10 = param_1[0x1f];
  param_1[0x1f] = lVar14;
  if (lVar10 != 0) {
    FUN_028df988(param_1 + 0x20);
  }
  param_1[0x21] = (long)local_78;
  param_1[0x22] = (long)local_70;
  param_1[0x20] = (long)local_80;
  puVar25 = puVar24 + 1;
  if (*puVar24 != 0) {
    puVar24 = puVar25 + *puVar24;
    plVar22 = param_1 + 0x17;
    do {
      uVar2 = *puVar25;
      lVar14 = param_1[0x1b];
      lVar10 = param_1[0x1f];
      puVar11 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x238,8);
      if (puVar11 == (undefined8 *)0x0) {
        local_98 = 0;
        local_90 = 0;
        local_a8 = (undefined8 *)0x0;
        local_a0 = (long *)0x0;
      }
      else {
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar4 = PTR_DAT_04379528;
          if (iVar7 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_028dc57c;
        *(long **)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = plVar8;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
        FUN_028e6044(puVar11,(long)puVar25 + (ulong)uVar2,lVar14,lVar10,param_3);
        local_90 = 8;
        local_98 = 0x238;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
        local_a8 = puVar11;
        local_a0 = plVar8;
      }
      uVar19 = param_1[0x15];
      if (uVar19 < (ulong)param_1[0x16]) {
        FUN_028e1658(plVar22,uVar19,&local_a8);
        param_1[0x15] = param_1[0x15] + 0x20;
      }
      else {
        uVar27 = param_1[0x18];
        lVar14 = (long)(uVar19 - param_1[0x14]) >> 5;
        uVar19 = lVar14 + 1;
        if (0x7ffffffffffffffe < uVar27) {
          uVar27 = 0x7fffffffffffffff;
        }
        if (uVar27 < uVar19) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = param_1[0x16] - param_1[0x14];
        if ((ulong)(lVar10 >> 5) < uVar27 >> 1) {
          uVar12 = lVar10 >> 4;
          uVar27 = uVar19;
          if (uVar19 <= uVar12) {
            uVar27 = uVar12;
          }
        }
        local_70 = (long *)0x0;
        plStack_68 = plVar22;
        if (uVar27 == 0) {
          plVar13 = (long *)0x0;
        }
        else {
          plVar13 = (long *)(**(code **)(*(long *)*plVar22 + 0x10))((long *)*plVar22,uVar27 << 5,8);
          if (plVar13 == (long *)0x0) {
            (**(code **)(*(long *)*plVar22 + 0xb8))();
          }
        }
        plVar17 = plVar13 + lVar14 * 4;
        local_88 = plVar13;
        local_80 = plVar17;
        local_70 = plVar13 + uVar27 * 4;
        FUN_028e1658(plVar22,plVar17,&local_a8);
        plVar1 = plVar17 + 4;
        plVar18 = (long *)param_1[0x14];
        plVar23 = (long *)param_1[0x15];
        local_78 = plVar1;
        if (plVar23 == plVar18) {
          local_78 = plVar18;
        }
        else {
          do {
            plVar17 = plVar17 + -4;
            plVar23 = plVar23 + -4;
            FUN_028e1574(plVar22,plVar17,plVar23);
          } while (plVar18 != plVar23);
          plVar18 = (long *)param_1[0x14];
          local_78 = (long *)param_1[0x15];
        }
        param_1[0x14] = (long)plVar17;
        param_1[0x15] = (long)plVar1;
        local_70 = (long *)param_1[0x16];
        param_1[0x16] = (long)(plVar13 + uVar27 * 4);
        local_88 = plVar18;
        local_80 = plVar18;
        FUN_028e11b8(&local_88);
      }
      puVar11 = local_a8;
      local_a8 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_02bcbe58(&local_88,0);
        *puVar11 = &PTR_LAB_04273e60;
        if ((long *)puVar11[0x44] != (long *)0x0) {
          (**(code **)(*(long *)puVar11[0x44] + 0x20))();
        }
        FUN_028d1244(puVar11 + 0x33,puVar11[0x39]);
        lVar14 = puVar11[0x33];
        puVar11[0x33] = 0;
        if (lVar14 != 0) {
          lVar10 = puVar11[0x34];
          plVar13 = (long *)puVar11[0x35];
          uVar19 = (**(code **)(*plVar13 + 0xc0))(plVar13);
          if ((uVar19 & 1) != 0) {
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar9 + 0x38d480)) {
              FUN_02bcc824(plVar13,lVar14,lVar10 << 3,8);
              goto LAB_028dc24c;
            }
          }
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar14,lVar10 << 3,8);
        }
LAB_028dc24c:
        FUN_028cb6ac(puVar11 + 0x1d);
        FUN_028cb6ac(puVar11 + 8);
        if ((long *)puVar11[6] != (long *)0x0) {
          (**(code **)(*(long *)puVar11[6] + 0x20))();
        }
        uVar6 = local_90;
        uVar5 = local_98;
        plVar13 = local_a0;
        uVar19 = (**(code **)(*local_a0 + 0xc0))(local_a0);
        if ((uVar19 & 1) == 0) {
LAB_028dc2cc:
          (**(code **)(*plVar13 + 0x18))(plVar13,puVar11,uVar5,uVar6);
        }
        else {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_028dc2cc;
          FUN_02bcc824(plVar13,puVar11,uVar5,uVar6);
        }
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar7 = *(int *)(lVar9 + 0x38d480) + -1;
        *(int *)(lVar9 + 0x38d480) = iVar7;
        if (iVar7 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar9 + 0x38d484) = 0;
        }
      }
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar24);
  }
  return;
}


