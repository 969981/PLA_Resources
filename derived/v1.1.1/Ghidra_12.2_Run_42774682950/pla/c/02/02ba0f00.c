/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba0f00; name: FUN_02ba0f00
 */


void FUN_02ba0f00(undefined1 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong unaff_x28;
  float fVar20;
  long local_78;
  long *local_68;
  
  plVar17 = (long *)*param_3;
  puVar5 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x20,8);
  puVar2 = PTR_DAT_04379528;
  puVar1 = PTR_DAT_04379520;
  if (puVar5 == (undefined8 *)0x0) {
    lVar13 = 0;
    lVar15 = 0;
    plVar17 = (long *)0x0;
  }
  else {
    if ((*PTR_DAT_04379520 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
      puVar3 = PTR_DAT_04379528;
      if (iVar4 != 0) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02ba14dc;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar17;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar5 = param_5;
    puVar5[1] = 0;
    lVar13 = 8;
    *(undefined4 *)(puVar5 + 2) = 0x1f;
    *(undefined1 *)(puVar5 + 3) = 0;
    lVar15 = 0x20;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  FUN_00947cf8(&local_68,param_4);
  plVar7 = (long *)puVar5[1];
  puVar5[1] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  puVar5[1] = local_68;
  if (local_68 == (long *)0x0) {
    uVar19 = *(ulong *)PTR_DAT_04379c88;
LAB_02ba14d0:
    plVar7 = (long *)PTR_PTR_04379d00;
  }
  else {
    uVar19 = local_68[0xb];
    if (local_68 == (long *)0x0) goto LAB_02ba14d0;
    plVar7 = local_68 + 0xc;
  }
  lVar6 = *plVar7;
  if (local_68 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = local_68[0xd];
    (**(code **)(*local_68 + 0x18))(local_68);
    (**(code **)(*local_68 + 0x18))(local_68);
  }
  uVar18 = *(ulong *)(param_2 + 0x10);
  plVar7 = (long *)(param_2 + 8);
  if (uVar18 != 0) {
    uVar10 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      unaff_x28 = uVar18 - 1 & uVar19;
    }
    else {
      unaff_x28 = uVar19;
      if (uVar18 <= uVar19) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar19 / uVar18;
        }
        unaff_x28 = uVar19 - uVar8 * uVar18;
      }
    }
    plVar16 = *(long **)(*plVar7 + unaff_x28 * 8);
    if (plVar16 != (long *)0x0) {
      if (uVar10 < 2) {
        do {
          plVar16 = (long *)*plVar16;
          if ((plVar16 == (long *)0x0) ||
             (plVar16[1] != uVar19 && (plVar16[1] & uVar18 - 1) != unaff_x28)) goto LAB_02ba1130;
        } while (plVar16[2] != uVar19);
      }
      else {
        do {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_02ba1130;
          uVar10 = plVar16[1];
          if (uVar10 != uVar19) {
            if (uVar18 <= uVar10) {
              uVar8 = 0;
              if (uVar18 != 0) {
                uVar8 = uVar10 / uVar18;
              }
              uVar10 = uVar10 - uVar8 * uVar18;
            }
            if (uVar10 != unaff_x28) goto LAB_02ba1130;
          }
        } while (plVar16[2] != uVar19);
      }
      plVar7 = local_68;
      goto LAB_02ba13b8;
    }
  }
LAB_02ba1130:
  plVar16 = (long *)(**(code **)(**(long **)(param_2 + 0x40) + 0x10))
                              (*(long **)(param_2 + 0x40),0x50,8);
  if (plVar16 == (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x40) + 0xb8))();
  }
  uVar14 = *(undefined8 *)(param_2 + 0x40);
  if ((*puVar1 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar4 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_02ba14dc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  plVar16[2] = uVar19;
  plVar16[3] = lVar6;
  plVar16[4] = local_78;
  plVar16[5] = (long)local_68;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = 0;
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar16 = 0;
  plVar16[1] = uVar19;
  fVar20 = (float)(*(long *)(param_2 + 0x60) + 1);
  if ((uVar18 == 0) || (*(float *)(param_2 + 0x68) * (float)uVar18 < fVar20)) {
    uVar18 = (ulong)(uVar18 < 3 || (uVar18 & uVar18 - 1) != 0) | uVar18 << 1;
    uVar10 = (ulong)(fVar20 / *(float *)(param_2 + 0x68));
    if (uVar10 <= uVar18) {
      uVar10 = uVar18;
    }
    if (uVar10 - 1 == 0) {
      uVar10 = 2;
    }
    else if ((uVar10 & uVar10 - 1) != 0) {
      uVar10 = std::__next_prime(uVar10);
    }
    uVar18 = *(ulong *)(param_2 + 0x10);
    if (uVar18 < uVar10) {
      uVar8 = uVar10;
LAB_02ba12fc:
      FUN_02ba14e0(plVar7,uVar8);
    }
    else if (uVar10 < uVar18) {
      uVar8 = (ulong)((float)*(ulong *)(param_2 + 0x60) / *(float *)(param_2 + 0x68));
      if ((uVar18 < 3) ||
         (uVar11 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
         uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
         1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar8 = std::__next_prime(uVar8);
      }
      else if (1 < uVar8) {
        uVar8 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar8 - 1) & 0x3f);
      }
      if (uVar8 <= uVar10) {
        uVar8 = uVar10;
      }
      if (uVar8 < uVar18) goto LAB_02ba12fc;
    }
    uVar18 = *(ulong *)(param_2 + 0x10);
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x28 = uVar18 - 1 & uVar19;
    }
    else if (uVar19 < uVar18) {
      unaff_x28 = uVar19;
    }
    else {
      uVar10 = 0;
      if (uVar18 != 0) {
        uVar10 = uVar19 / uVar18;
      }
      unaff_x28 = uVar19 - uVar10 * uVar18;
    }
  }
  plVar12 = *(long **)(*plVar7 + unaff_x28 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(param_2 + 0x38);
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
    *(long **)(*(long *)(param_2 + 8) + unaff_x28 * 8) = plVar12;
    if (*plVar16 != 0) {
      uVar10 = *(ulong *)(*plVar16 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar10 = uVar10 & uVar18 - 1;
      }
      else if (uVar18 <= uVar10) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar10 / uVar18;
        }
        uVar10 = uVar10 - uVar8 * uVar18;
      }
      plVar12 = (long *)(*plVar7 + uVar10 * 8);
      goto LAB_02ba13a4;
    }
  }
  else {
    *plVar16 = *plVar12;
LAB_02ba13a4:
    *plVar12 = (long)plVar16;
  }
  plVar7 = (long *)0x0;
  *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
LAB_02ba13b8:
  lVar9 = plVar16[6];
  plVar16[6] = (long)puVar5;
  if (lVar9 != 0) {
    FUN_02b8b43c(plVar16 + 7);
  }
  plVar16[7] = (long)plVar17;
  plVar16[8] = lVar15;
  plVar16[9] = lVar13;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  *(ulong *)(param_1 + 8) = uVar19;
  *(long *)(param_1 + 0x10) = lVar6;
  *(long *)(param_1 + 0x18) = local_78;
  *(long **)(param_1 + 0x20) = local_68;
  *param_1 = 1;
  return;
}


