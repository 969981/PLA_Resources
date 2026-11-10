/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cae598; name: FUN_02cae598
 */


void FUN_02cae598(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long *local_a8;
  undefined8 local_98;
  long *local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  long local_68;
  
  if ((DAT_04407c68 & 1) == 0) {
    nn::bcat::Initialize();
    DAT_04407c68 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    return;
  }
  plVar10 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,8);
  puVar6 = PTR_DAT_04379520;
  lVar5 = tpidr_el0;
  if (plVar10 == (long *)0x0) {
    local_a8 = (long *)0x0;
    uVar17 = 0;
    uVar20 = 0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar7 = PTR_DAT_04379528;
      if (iVar9 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    puVar7 = PTR_DAT_04379528;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02caf524;
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_2;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar10[5] = 0;
    plVar10[4] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
    if (puVar12 == (undefined8 *)0x0) {
      plVar21 = (long *)0x0;
      lVar19 = 0;
      lVar16 = 0;
    }
    else {
      if ((*puVar6 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar8 = PTR_DAT_04379528;
        if (iVar9 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
      if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02caf524;
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = param_2;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *puVar12 = param_2;
      puVar12[1] = 0x7ffffffffffffff;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      lVar16 = 8;
      lVar19 = 0x20;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      plVar21 = param_2;
    }
    lVar13 = *plVar10;
    *plVar10 = (long)puVar12;
    if (lVar13 != 0) {
      FUN_02bcbe58(&local_98,0);
      plVar1 = (long *)plVar10[1];
      lVar3 = plVar10[2];
      lVar24 = plVar10[3];
      uVar14 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar14 & 1) == 0) {
LAB_02cae778:
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar13,lVar3,lVar24);
      }
      else {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02cae778;
        FUN_02bcc824(plVar1,lVar13,lVar3,lVar24);
      }
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar9 = *(int *)(lVar5 + 0x38d480) + -1;
      *(int *)(lVar5 + 0x38d480) = iVar9;
      if (iVar9 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar5 + 0x38d484) = 0;
      }
      puVar12 = (undefined8 *)*plVar10;
    }
    plVar10[1] = (long)plVar21;
    plVar10[2] = lVar19;
    plVar10[3] = lVar16;
    puVar15 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x38,8);
    if (puVar15 == (undefined8 *)0x0) {
      local_88 = 0;
      local_80 = 0;
      local_90 = (long *)0x0;
    }
    else {
      if ((*puVar6 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar8 = PTR_DAT_04379528;
        if (iVar9 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_02caf524:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = param_2;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      uVar20 = *puVar12;
      uVar14 = puVar12[1];
      uVar17 = puVar12[2];
      uVar4 = puVar12[3];
      puVar15[6] = 0;
      puVar15[2] = uVar17;
      puVar15[3] = uVar4;
      *puVar15 = uVar20;
      puVar15[1] = uVar14;
      puVar15[4] = 0;
      puVar15[5] = 0;
      if (uVar14 < 10) goto LAB_02caf524;
      puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,0x140,8);
      if (puVar12 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar15 + 0xb8))();
      }
      puVar2 = (undefined8 *)puVar15[4];
      lVar19 = puVar15[5];
      local_68 = 0;
      puVar25 = puVar12;
      puStack_70 = puVar15;
      if (puVar2 != (undefined8 *)0x0) {
        puVar23 = puVar2 + lVar19 * 4;
        local_78 = puVar12;
        if (lVar19 == 0) {
          lVar13 = 0;
          local_68 = 0;
        }
        else {
          puVar18 = puVar2;
          do {
            uVar20 = *puVar15;
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              FUN_008a62a4(puVar7);
              FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
            if (lVar13 != 0) {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_02caf524;
              *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar20;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            }
            uVar20 = *puVar18;
            *puVar18 = 0;
            *puVar25 = uVar20;
            uVar20 = puVar18[1];
            uVar17 = puVar18[3];
            puVar25[2] = puVar18[2];
            puVar25[3] = uVar17;
            puVar25[1] = uVar20;
            if (lVar13 != 0) {
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            puVar18 = puVar18 + 4;
            puVar25 = puVar25 + 4;
          } while (puVar18 != puVar23);
          lVar13 = puVar15[5];
        }
        puVar8 = PTR_LAB_04379530;
        local_68 = local_68 + ((long)puVar25 - (long)puVar12 >> 5);
        if (lVar13 != lVar19) {
          do {
            uVar20 = *puVar15;
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
              FUN_008a62a4(puVar7);
              FUN_00100250(puVar8,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar19 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
            if (lVar19 != 0) {
              if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_02caf524;
              *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar20;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
            }
            uVar20 = *puVar23;
            *puVar23 = 0;
            *puVar25 = uVar20;
            uVar20 = puVar23[1];
            uVar17 = puVar23[3];
            puVar25[2] = puVar23[2];
            puVar25[3] = uVar17;
            puVar25[1] = uVar20;
            if (lVar19 != 0) {
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            }
            puVar23 = puVar23 + 4;
            puVar25 = puVar25 + 4;
          } while (puVar23 != puVar2 + lVar13 * 4);
          lVar19 = puVar15[5];
        }
        while (lVar19 != 0) {
          puVar23 = (undefined8 *)*puVar2;
          lVar19 = lVar19 + -1;
          *puVar2 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            FUN_02bcbe58(&local_98,0);
            (**(code **)*puVar23)(puVar23);
            plVar21 = (long *)puVar2[1];
            uVar20 = puVar2[2];
            uVar17 = puVar2[3];
            uVar14 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar14 & 1) == 0) {
LAB_02caeb5c:
              (**(code **)(*plVar21 + 0x18))(plVar21,puVar23,uVar20,uVar17);
            }
            else {
              if (*(char *)(lVar5 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar5 + 0x38d488) = 1;
                *(undefined8 *)(lVar5 + 0x38d478) = 0;
                *(undefined8 *)(lVar5 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02caeb5c;
              FUN_02bcc824(plVar21,puVar23,uVar20,uVar17);
            }
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar9 = *(int *)(lVar5 + 0x38d480) + -1;
            *(int *)(lVar5 + 0x38d480) = iVar9;
            if (iVar9 == 0) {
              FUN_02bcc320();
              if (*(char *)(lVar5 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar5 + 0x38d488) = 1;
                *(undefined8 *)(lVar5 + 0x38d478) = 0;
                *(undefined8 *)(lVar5 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
              }
              *(undefined4 *)(lVar5 + 0x38d484) = 0;
            }
          }
          puVar2 = puVar2 + 4;
        }
        lVar19 = puVar15[6];
        plVar21 = (long *)*puVar15;
        uVar20 = puVar15[4];
        uVar14 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar14 & 1) == 0) {
LAB_02caed6c:
          (**(code **)(*plVar21 + 0x18))(plVar21,uVar20,lVar19 << 5,8);
        }
        else {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02caed6c;
          FUN_02bcc824(plVar21,uVar20,lVar19 << 5,8);
        }
      }
      puVar15[4] = puVar12;
      puVar15[5] = (long)puVar25 - (long)puVar12 >> 5;
      puVar15[6] = 10;
      local_78 = (undefined8 *)0x0;
      FUN_02cb1188(&local_78);
      local_88 = 0x38;
      local_80 = 8;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      local_90 = param_2;
    }
    local_98 = 0;
    FUN_02cb0be4(plVar10 + 4,puVar15);
    plVar10[5] = (long)local_90;
    plVar10[6] = local_88;
    plVar10[7] = local_80;
    FUN_02cb0be4(&local_98,0);
    uVar20 = 8;
    uVar17 = 0x40;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_a8 = param_2;
  }
  plVar21 = *(long **)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar10;
  if (plVar21 == (long *)0x0) goto LAB_02caf050;
  FUN_02bcbe58(&local_78,0);
  FUN_02cb0be4(plVar21 + 4,0);
  lVar11 = *plVar21;
  *plVar21 = 0;
  if (lVar11 != 0) {
    FUN_02bcbe58(&local_98,0);
    plVar10 = (long *)plVar21[1];
    lVar16 = plVar21[2];
    lVar19 = plVar21[3];
    uVar14 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar14 & 1) == 0) {
LAB_02caeea8:
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar11,lVar16,lVar19);
    }
    else {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02caeea8;
      FUN_02bcc824(plVar10,lVar11,lVar16,lVar19);
    }
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar9 = *(int *)(lVar5 + 0x38d480) + -1;
    *(int *)(lVar5 + 0x38d480) = iVar9;
    if (iVar9 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar5 + 0x38d484) = 0;
    }
  }
  plVar10 = *(long **)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar22 = *(undefined8 *)(param_1 + 0x68);
  uVar14 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar14 & 1) == 0) {
LAB_02caefac:
    (**(code **)(*plVar10 + 0x18))(plVar10,plVar21,uVar4,uVar22);
  }
  else {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02caefac;
    FUN_02bcc824(plVar10,plVar21,uVar4,uVar22);
  }
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar9 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar9;
  if (iVar9 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
LAB_02caf050:
  *(long **)(param_1 + 0x58) = local_a8;
  *(undefined8 *)(param_1 + 0x60) = uVar17;
  *(undefined8 *)(param_1 + 0x68) = uVar20;
  return;
}


