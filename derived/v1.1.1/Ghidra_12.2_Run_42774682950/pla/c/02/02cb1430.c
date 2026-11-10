/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb1430; name: FUN_02cb1430
 */


void FUN_02cb1430(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  uVar2 = param_1[5];
  puVar15 = (undefined8 *)(param_1[4] + uVar2 * 0x20);
  uVar11 = param_1[6];
  if (uVar2 < uVar11) {
    uVar14 = *param_1;
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar3 = PTR_DAT_04379528;
      if (iVar6 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02cb1bcc;
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    uVar14 = *param_2;
    *param_2 = 0;
    *puVar15 = uVar14;
    uVar14 = param_2[1];
    uVar12 = param_2[3];
    puVar15[2] = param_2[2];
    puVar15[3] = uVar12;
    puVar15[1] = uVar14;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    param_1[5] = param_1[5] + 1;
    return;
  }
  uVar10 = param_1[1];
  uVar2 = uVar2 + 1;
  if (uVar2 - uVar11 <= uVar10 - uVar11) {
    uVar1 = uVar11 << 3;
    if (4 < uVar11 >> 0x3d) {
      uVar1 = 0xffffffffffffffff;
    }
    if (uVar11 >> 0x3d == 0) {
      uVar1 = (uVar11 << 3) / 5;
    }
    uVar11 = uVar10;
    if (uVar1 <= uVar10) {
      uVar11 = uVar1;
    }
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    if (uVar2 <= uVar10) {
      puVar8 = (undefined8 *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar2 << 5,8);
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*param_1 + 0xb8))();
      }
      puVar4 = PTR_DAT_04379528;
      puVar3 = PTR_DAT_04379520;
      local_80 = 0;
      puVar18 = (undefined8 *)param_1[4];
      puVar13 = puVar8;
      local_90 = puVar8;
      puStack_88 = param_1;
      if (puVar18 != (undefined8 *)0x0) {
        if (puVar18 == puVar15) {
          local_80 = 0;
        }
        else {
          puVar17 = puVar18;
          do {
            uVar14 = *param_1;
            if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
              FUN_008a62a4(puVar4);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar3);
            }
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (lVar7 != 0) {
              if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02cb1bcc;
              *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
            }
            uVar14 = *puVar17;
            *puVar17 = 0;
            *puVar13 = uVar14;
            uVar14 = puVar17[1];
            uVar12 = puVar17[3];
            puVar13[2] = puVar17[2];
            puVar13[3] = uVar12;
            puVar13[1] = uVar14;
            if (lVar7 != 0) {
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            }
            puVar17 = puVar17 + 4;
            puVar13 = puVar13 + 4;
          } while (puVar17 != puVar15);
        }
        local_80 = local_80 + ((long)puVar13 - (long)puVar8 >> 5);
      }
      uVar14 = *param_1;
      if ((*puVar3 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar5 = PTR_DAT_04379528;
        if (iVar6 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_02cb1bcc;
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      uVar14 = *param_2;
      *param_2 = 0;
      *puVar13 = uVar14;
      uVar14 = param_2[1];
      uVar12 = param_2[3];
      puVar13[2] = param_2[2];
      puVar13[3] = uVar12;
      puVar13[1] = uVar14;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      puVar5 = PTR_LAB_04379530;
      puVar13 = puVar13 + 4;
      local_80 = local_80 + 1;
      if (puVar18 != (undefined8 *)0x0) {
        lVar7 = param_1[5];
        if (puVar18 + lVar7 * 4 != puVar15) {
          do {
            uVar14 = *param_1;
            if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
              FUN_008a62a4(puVar4);
              FUN_00100250(puVar5,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar3);
            }
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (lVar9 != 0) {
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02cb1bcc;
              *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            }
            uVar14 = *puVar15;
            *puVar15 = 0;
            *puVar13 = uVar14;
            uVar14 = puVar15[1];
            uVar12 = puVar15[3];
            puVar13[2] = puVar15[2];
            puVar13[3] = uVar12;
            puVar13[1] = uVar14;
            if (lVar9 != 0) {
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            puVar15 = puVar15 + 4;
            puVar13 = puVar13 + 4;
          } while (puVar15 != puVar18 + lVar7 * 4);
          lVar7 = param_1[5];
        }
        lVar9 = tpidr_el0;
        while (lVar7 != 0) {
          puVar15 = (undefined8 *)*puVar18;
          lVar7 = lVar7 + -1;
          *puVar18 = 0;
          if (puVar15 != (undefined8 *)0x0) {
            FUN_02bcbe58(auStack_78,0);
            (**(code **)*puVar15)(puVar15);
            plVar16 = (long *)puVar18[1];
            uVar14 = puVar18[2];
            uVar12 = puVar18[3];
            uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
            if ((uVar11 & 1) == 0) {
LAB_02cb1898:
              (**(code **)(*plVar16 + 0x18))(plVar16,puVar15,uVar14,uVar12);
            }
            else {
              if (*(char *)(lVar9 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar9 + 0x38d488) = 1;
                *(undefined8 *)(lVar9 + 0x38d478) = 0;
                *(undefined8 *)(lVar9 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar9 + 0x38d480) < 1) goto LAB_02cb1898;
              FUN_02bcc824(plVar16,puVar15,uVar14,uVar12);
            }
            if (*(char *)(lVar9 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar9 + 0x38d488) = 1;
              *(undefined8 *)(lVar9 + 0x38d478) = 0;
              *(undefined8 *)(lVar9 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
            }
            iVar6 = *(int *)(lVar9 + 0x38d480) + -1;
            *(int *)(lVar9 + 0x38d480) = iVar6;
            if (iVar6 == 0) {
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
          puVar18 = puVar18 + 4;
        }
        lVar7 = param_1[6];
        plVar16 = (long *)*param_1;
        uVar14 = param_1[4];
        uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(plVar16,uVar14,lVar7 << 5,8);
            goto LAB_02cb1aac;
          }
        }
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar14,lVar7 << 5,8);
      }
LAB_02cb1aac:
      param_1[6] = uVar2;
      param_1[4] = puVar8;
      param_1[5] = (long)puVar13 - (long)puVar8 >> 5;
      local_90 = (undefined8 *)0x0;
      FUN_02cb1188(&local_90);
      return;
    }
  }
LAB_02cb1bcc:
                    /* WARNING: Subroutine does not return */
  abort();
}


