/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c528f8; name: FUN_02c528f8
 */


void FUN_02c528f8(long *param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  char *param4;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  ushort *puVar15;
  long lVar16;
  char *__s;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong local_1b0;
  long *local_198;
  undefined1 *puStack_190;
  undefined1 *local_188;
  undefined8 uStack_180;
  long *local_178;
  undefined8 uStack_170;
  long local_168;
  long *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_69;
  
  puVar18 = &DAT_043f23a8;
  lVar3 = tpidr_el0;
  lVar16 = 0x38a;
  do {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x38,8);
    if (puVar7 == (undefined8 *)0x0) {
      local_158 = 0;
      local_150 = 0;
      local_160 = (long *)0x0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar4 = PTR_DAT_04379528;
        if (iVar6 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_02c53034:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_1;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar7 = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      lVar23 = DAT_043f1798;
      if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
          (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) &&
         (lVar9 = *(long *)(lVar3 + 0x20), *(long *)(lVar3 + 0x20) == 0)) {
        *(long *)(lVar3 + 0x20) = DAT_043f1798;
        lVar9 = lVar23;
      }
      puVar7[3] = lVar9;
      puVar7[4] = 0x1fffffffffffffff;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      local_158 = 0x38;
      local_150 = 8;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      local_160 = param_1;
    }
    lVar8 = puVar18[-1];
    local_168 = 0;
    puVar18[-1] = puVar7;
    if (lVar8 == 0) {
      *puVar18 = local_160;
      puVar18[1] = local_158;
      puVar18[2] = local_150;
      local_168 = 0;
    }
    else {
      FUN_02c53180(puVar18);
      lVar8 = local_168;
      *puVar18 = local_160;
      local_168 = 0;
      puVar18[1] = local_158;
      puVar18[2] = local_150;
      if (lVar8 != 0) {
        FUN_02c53180(&local_160);
      }
    }
    lVar16 = lVar16 + -1;
    puVar18 = puVar18 + 4;
  } while (lVar16 != 0);
  __s = (char *)*DAT_04407c08;
  if (__s == (char *)0x0) {
    local_178 = (long *)0x0;
    uStack_170 = 0;
    local_198 = (long *)0x0;
    puStack_190 = &DAT_cbf29ce484222645;
    local_188 = &DAT_03996322;
    uStack_180 = 0;
  }
  else {
    sVar10 = strlen(__s);
    param4 = "";
    if ((sVar10 != 0) && (param4 = "", __s[sVar10 - 1] != '/')) {
      param4 = "/";
    }
    snprintf((char *)&local_168,0xff,"%s%s%s",__s,param4,"personal_data_total.perbin");
    local_69 = 0;
    FUN_01559fc0(&local_198,&local_168);
  }
  FUN_00938764(&PTR_PTR_0428aad8,0,&local_198,0,0,0);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  piVar1 = (int *)((long)*(uint **)(DAT_0428aae0 + 0x250) + (ulong)**(uint **)(DAT_0428aae0 + 0x250)
                  );
  uVar12 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  uVar14 = (ulong)*(uint *)((long)piVar1 + uVar12);
  if (*(int *)((long)((long)piVar1 + uVar12) + uVar14) != 0) {
    uVar19 = 0;
    do {
      puVar13 = (uint *)((long)piVar1 + uVar19 * 4 + uVar14 + uVar12 + 4);
      piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
      puVar15 = (ushort *)((long)piVar2 - (long)*piVar2);
      if (*puVar15 < 5) {
        uVar12 = 0;
LAB_02c52cbc:
        uVar14 = 0;
      }
      else {
        uVar12 = 0;
        if ((ulong)puVar15[2] != 0) {
          uVar12 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar15[2]);
        }
        if ((*puVar15 < 7) || ((ulong)puVar15[3] == 0)) goto LAB_02c52cbc;
        uVar14 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar15[3]);
      }
      plVar20 = (&DAT_043f23a0)[uVar12 * 4];
      lVar16 = *plVar20;
      uVar22 = plVar20[1] - lVar16 >> 3;
      if (uVar22 <= uVar14) {
        plVar21 = plVar20 + 3;
        if ((ulong)(plVar20[2] - plVar20[1] >> 3) < (uVar14 + 1) - uVar22) {
          local_1b0 = plVar20[4];
          if (0x7ffffffffffffffe < local_1b0) {
            local_1b0 = 0x7fffffffffffffff;
          }
          if (local_1b0 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar16 = plVar20[2] - lVar16;
          if ((ulong)(lVar16 >> 3) < local_1b0 >> 1) {
            local_1b0 = uVar14 + 1;
            if (((ulong)(lVar16 >> 2) <= uVar14) || (local_1b0 = lVar16 >> 2, lVar16 != 0))
            goto LAB_02c52d3c;
            local_1b0 = 0;
            lVar16 = 0;
          }
          else {
LAB_02c52d3c:
            lVar16 = (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,local_1b0 << 3,8);
            if (lVar16 == 0) {
              (**(code **)(*(long *)*plVar21 + 0xb8))();
            }
          }
          lVar9 = lVar16 + uVar22 * 8;
          lVar23 = ~uVar14 + uVar22;
          lVar8 = lVar9;
          do {
            FUN_02c534c4(plVar21,lVar8);
            lVar8 = lVar8 + 8;
            bVar5 = lVar23 != -1;
            lVar23 = lVar23 + 1;
          } while (bVar5);
          lVar23 = *plVar20;
          lVar17 = plVar20[1];
          if (lVar17 != lVar23) {
            do {
              lVar24 = *plVar21;
              if (((*PTR_DAT_04379520 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
                FUN_008a62a4(PTR_DAT_04379528);
                FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379520);
              }
              lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
              if (lVar11 == 0) {
                *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar17 + -8);
              }
              else {
                if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02c53034;
                *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar24;
                *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
                *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar17 + -8);
                *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
              }
              lVar17 = lVar17 + -8;
              lVar9 = lVar9 + -8;
            } while (lVar23 != lVar17);
            lVar23 = *plVar20;
          }
          *plVar20 = lVar9;
          plVar20[1] = lVar8;
          lVar8 = plVar20[2];
          plVar20[2] = lVar16 + local_1b0 * 8;
          if (lVar23 != 0) {
            plVar21 = (long *)*plVar21;
            uVar22 = (**(code **)(*plVar21 + 0xc0))(plVar21);
            if ((uVar22 & 1) != 0) {
              if (*(char *)(lVar3 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar3 + 0x38d488) = 1;
                *(undefined8 *)(lVar3 + 0x38d478) = 0;
                *(undefined8 *)(lVar3 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar3 + 0x38d480)) {
                FUN_02bcc824(plVar21,lVar23,lVar8 - lVar23,8);
                goto LAB_02c52f3c;
              }
            }
            (**(code **)(*plVar21 + 0x18))(plVar21,lVar23,lVar8 - lVar23,8);
          }
        }
        else {
          lVar16 = ~uVar14 + uVar22;
          do {
            FUN_02c534c4(plVar21);
            bVar5 = lVar16 != -1;
            lVar16 = lVar16 + 1;
            plVar20[1] = plVar20[1] + 8;
          } while (bVar5);
        }
LAB_02c52f3c:
        plVar20 = (&DAT_043f23a0)[uVar12 * 4];
        lVar16 = *plVar20;
        uVar22 = plVar20[1] - lVar16 >> 3;
      }
      if (uVar22 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(int **)(lVar16 + uVar14 * 8) = piVar2;
      uVar12 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      uVar14 = (ulong)*(uint *)((long)piVar1 + uVar12);
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)((long)((long)piVar1 + uVar12) + uVar14));
  }
  if ((long *)DAT_043f23a0[1] == (long *)*DAT_043f23a0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if (*(long *)*DAT_043f23a0 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


