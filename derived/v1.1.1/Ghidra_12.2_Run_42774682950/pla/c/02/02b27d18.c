/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b27d18; name: FUN_02b27d18
 */


int FUN_02b27d18(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_88 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(ulong *)(param_1 + 0xb8);
  puVar1 = (undefined8 *)(param_1 + 200);
  if (uVar13 < *(ulong *)(param_1 + 0xc0)) {
    FUN_02b29e48(puVar1,uVar13,&local_88);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 0xd0;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0xd0);
    lVar19 = (long)(uVar13 - *(long *)(param_1 + 0xb0)) >> 4;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar13 = lVar19 * 0x4ec4ec4ec4ec4ec5 + 1;
    if (uVar16 < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)(*(ulong *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0)) >> 4;
    uVar15 = lVar12 * -0x6276276276276276;
    if (uVar13 <= uVar15) {
      uVar13 = uVar15;
    }
    if ((ulong)(lVar12 * 0x4ec4ec4ec4ec4ec5) < uVar16 >> 1) {
      uVar16 = uVar13;
    }
    if (uVar16 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar16 * 0xd0,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar22 = lVar12 + lVar19 * 0x10;
    FUN_02b29e48(puVar1,lVar22,&local_88);
    puVar5 = PTR_DAT_04379528;
    lVar19 = *(long *)(param_1 + 0xb0);
    lVar17 = *(long *)(param_1 + 0xb8);
    if (lVar17 == lVar19) {
      lVar9 = lVar22;
      lVar17 = lVar19;
    }
    else {
      lVar18 = lVar22;
      do {
        uVar20 = *puVar1;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(puVar5);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_02b28408:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar20;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        *(undefined8 *)(lVar18 + -0xd0) = *(undefined8 *)(lVar17 + -0xd0);
        *(undefined8 *)(lVar18 + -200) = *(undefined8 *)(lVar17 + -200);
        *(undefined8 *)(lVar18 + -0xc0) = *(undefined8 *)(lVar17 + -0xc0);
        plVar21 = *(long **)(lVar17 + -0xb8);
        *(long **)(lVar18 + -0xb8) = plVar21;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x18))();
        }
        *(undefined8 *)(lVar18 + -0xb0) = *(undefined8 *)(lVar17 + -0xb0);
        *(undefined8 *)(lVar18 + -0xa8) = *(undefined8 *)(lVar17 + -0xa8);
        *(undefined8 *)(lVar18 + -0xa0) = *(undefined8 *)(lVar17 + -0xa0);
        plVar21 = *(long **)(lVar17 + -0x98);
        *(long **)(lVar18 + -0x98) = plVar21;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x18))();
        }
        *(undefined8 *)(lVar18 + -0x90) = *(undefined8 *)(lVar17 + -0x90);
        local_80 = *(undefined8 *)(lVar17 + -0x70);
        uStack_78 = *(undefined8 *)(lVar17 + -0x68);
        local_70 = *(undefined8 *)(lVar17 + -0x60);
        uStack_68 = *(undefined8 *)(lVar17 + -0x58);
        *(undefined8 *)(lVar18 + -0x88) = 0;
        *(undefined8 *)(lVar18 + -0x80) = 0;
        *(undefined8 *)(lVar18 + -0x78) = 0;
        *(undefined8 *)(lVar18 + -0x60) = local_70;
        *(undefined8 *)(lVar18 + -0x58) = uStack_68;
        *(undefined8 *)(lVar18 + -0x70) = local_80;
        *(undefined8 *)(lVar18 + -0x68) = uStack_78;
        lVar9 = *(long *)(lVar17 + -0x80) - *(long *)(lVar17 + -0x88);
        if (lVar9 != 0) {
          uVar13 = *(ulong *)(lVar18 + -0x68);
          if (0x7ffffffffffffffe < uVar13) {
            uVar13 = 0x7fffffffffffffff;
          }
          if (uVar13 < (ulong)((lVar9 >> 3) * -0x3333333333333333)) goto LAB_02b2840c;
          puVar8 = (undefined4 *)
                   (**(code **)(**(long **)(lVar18 + -0x70) + 0x10))
                             (*(long **)(lVar18 + -0x70),lVar9,8);
          if (puVar8 == (undefined4 *)0x0) {
            (**(code **)(**(long **)(lVar18 + -0x70) + 0xb8))();
          }
          *(undefined4 **)(lVar18 + -0x78) = puVar8 + (lVar9 >> 3) * 2;
          *(undefined4 **)(lVar18 + -0x88) = puVar8;
          *(undefined4 **)(lVar18 + -0x80) = puVar8;
          puVar3 = *(undefined4 **)(lVar17 + -0x80);
          for (puVar2 = *(undefined4 **)(lVar17 + -0x88); puVar2 != puVar3; puVar2 = puVar2 + 10) {
            uVar20 = *(undefined8 *)(lVar18 + -0x70);
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
              FUN_008a62a4(puVar5);
              FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
            if (lVar9 != 0) {
              if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02b28408;
              *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar20;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            }
            *puVar8 = *puVar2;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar2 + 2);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar2 + 4);
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar2 + 6);
            plVar21 = *(long **)(puVar2 + 8);
            *(long **)(puVar8 + 8) = plVar21;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))();
            }
            if (lVar9 != 0) {
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            puVar8 = (undefined4 *)(*(long *)(lVar18 + -0x80) + 0x28);
            *(undefined4 **)(lVar18 + -0x80) = puVar8;
          }
        }
        local_80 = *(undefined8 *)(lVar17 + -0x38);
        uStack_78 = *(undefined8 *)(lVar17 + -0x30);
        local_70 = *(undefined8 *)(lVar17 + -0x28);
        uStack_68 = *(undefined8 *)(lVar17 + -0x20);
        *(undefined8 *)(lVar18 + -0x50) = 0;
        *(undefined8 *)(lVar18 + -0x48) = 0;
        *(undefined8 *)(lVar18 + -0x40) = 0;
        *(undefined8 *)(lVar18 + -0x28) = local_70;
        *(undefined8 *)(lVar18 + -0x20) = uStack_68;
        *(undefined8 *)(lVar18 + -0x38) = local_80;
        *(undefined8 *)(lVar18 + -0x30) = uStack_78;
        lVar9 = *(long *)(lVar17 + -0x48) - *(long *)(lVar17 + -0x50);
        if (lVar9 != 0) {
          uVar13 = *(ulong *)(lVar18 + -0x30);
          if (0x7ffffffffffffffe < uVar13) {
            uVar13 = 0x7fffffffffffffff;
          }
          if (uVar13 < (ulong)((lVar9 >> 3) * -0x71c71c71c71c71c7)) {
LAB_02b2840c:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          puVar23 = (undefined8 *)(lVar18 + -0x38);
          lVar10 = (**(code **)(*(long *)*puVar23 + 0x10))((long *)*puVar23,lVar9,8);
          if (lVar10 == 0) {
            (**(code **)(*(long *)*puVar23 + 0xb8))();
          }
          *(long *)(lVar18 + -0x40) = lVar10 + (lVar9 >> 3) * 8;
          *(long *)(lVar18 + -0x50) = lVar10;
          *(long *)(lVar18 + -0x48) = lVar10;
          lVar4 = *(long *)(lVar17 + -0x48);
          for (lVar9 = *(long *)(lVar17 + -0x50); lVar9 != lVar4; lVar9 = lVar9 + 0x48) {
            FUN_02ad0b48(puVar23,lVar10,lVar9);
            lVar10 = *(long *)(lVar18 + -0x48) + 0x48;
            *(long *)(lVar18 + -0x48) = lVar10;
          }
        }
        uVar20 = *(undefined8 *)(lVar17 + -0x18);
        uVar14 = *(undefined8 *)(lVar17 + -8);
        *(undefined8 *)(lVar18 + -0x10) = *(undefined8 *)(lVar17 + -0x10);
        *(undefined8 *)(lVar18 + -8) = uVar14;
        lVar9 = lVar18 + -0xd0;
        lVar17 = lVar17 + -0xd0;
        *(undefined8 *)(lVar18 + -0x18) = uVar20;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        lVar18 = lVar9;
      } while (lVar17 != lVar19);
      lVar19 = *(long *)(param_1 + 0xb8);
      lVar17 = *(long *)(param_1 + 0xb0);
    }
    lVar18 = *(long *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xb0) = lVar9;
    *(long *)(param_1 + 0xb8) = lVar22 + 0xd0;
    *(ulong *)(param_1 + 0xc0) = lVar12 + uVar16 * 0xd0;
    while (lVar19 != lVar17) {
      lVar19 = lVar19 + -0xd0;
      FUN_02b29f9c(lVar19);
    }
    if (lVar17 != 0) {
      plVar21 = (long *)*puVar1;
      lVar18 = lVar18 - lVar17;
      uVar13 = (**(code **)(*plVar21 + 0xc0))(plVar21);
      if ((uVar13 & 1) != 0) {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar19 + 0x38d480)) {
          FUN_02bcc824(plVar21,lVar17,lVar18,8);
          goto LAB_02b282c4;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,lVar17,lVar18,8);
    }
  }
LAB_02b282c4:
  lVar19 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(lVar19 + -0xd0) = *param_2;
  *(undefined8 *)(lVar19 + -200) = param_2[1];
  *(undefined8 *)(lVar19 + -0xc0) = param_2[2];
  plVar21 = (long *)param_2[3];
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  plVar11 = *(long **)(lVar19 + -0xb8);
  *(long **)(lVar19 + -0xb8) = plVar21;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  *(undefined8 *)(lVar19 + -0xb0) = *param_3;
  *(undefined8 *)(lVar19 + -0xa8) = param_3[1];
  *(undefined8 *)(lVar19 + -0xa0) = param_3[2];
  plVar21 = (long *)param_3[3];
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  plVar11 = *(long **)(lVar19 + -0x98);
  *(long **)(lVar19 + -0x98) = plVar21;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  return (int)((ulong)(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0)) >> 4) * -0x3b13b13b +
         -1;
}


