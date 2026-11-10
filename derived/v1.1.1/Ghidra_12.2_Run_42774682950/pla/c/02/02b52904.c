/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b52904; name: FUN_02b52904
 */


void FUN_02b52904(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar14 = (long *)param_2[3];
  param_1[3] = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar14 = (long *)param_2[7];
  param_1[7] = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  uVar21 = param_2[0xd];
  uVar9 = *(undefined4 *)(param_2 + 0xe);
  param_1[0xb] = param_2[0xb];
  param_1[0xd] = uVar21;
  param_1[9] = param_2[9];
  uVar21 = param_2[8];
  param_1[10] = param_2[10];
  param_1[8] = uVar21;
  uVar21 = param_2[0xc];
  *(undefined4 *)(param_1 + 0xe) = uVar9;
  param_1[0xc] = uVar21;
  uVar21 = param_2[0x12];
  uVar4 = param_2[0x13];
  uVar1 = param_2[0x14];
  uVar5 = param_2[0x15];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar5;
  param_1[0x12] = uVar21;
  param_1[0x13] = uVar4;
  lVar18 = param_2[0x10] - param_2[0xf];
  if (lVar18 != 0) {
    uVar20 = param_1[0x13];
    if (0x7ffffffffffffffe < uVar20) {
      uVar20 = 0x7fffffffffffffff;
    }
    if (uVar20 < (ulong)((lVar18 >> 4) * 0x6db6db6db6db6db7)) goto LAB_02b53024;
    lVar15 = (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],lVar18,8);
    if (lVar15 == 0) {
      (**(code **)(*(long *)param_1[0x12] + 0xb8))();
    }
    param_1[0x11] = lVar15 + (lVar18 >> 4) * 0x10;
    param_1[0xf] = lVar15;
    param_1[0x10] = lVar15;
    puVar11 = PTR_DAT_04379528;
    puVar10 = PTR_DAT_04379520;
    lVar6 = param_2[0x10];
    for (lVar18 = param_2[0xf]; lVar18 != lVar6; lVar18 = lVar18 + 0x70) {
      uVar21 = param_1[0x12];
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        FUN_008a62a4(puVar11);
        FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar10);
      }
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)puVar11);
      if (lVar16 == 0) {
        FUN_02b53030(lVar15,lVar18);
      }
      else {
        if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02b53020;
        *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar21;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        FUN_02b53030(lVar15,lVar18);
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      lVar15 = param_1[0x10] + 0x70;
      param_1[0x10] = lVar15;
    }
  }
  uVar21 = param_2[0x19];
  uVar4 = param_2[0x1a];
  uVar1 = param_2[0x1b];
  uVar5 = param_2[0x1c];
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar5;
  param_1[0x19] = uVar21;
  param_1[0x1a] = uVar4;
  lVar18 = param_2[0x17] - param_2[0x16];
  if (lVar18 != 0) {
    uVar20 = param_1[0x1a];
    if (0x7ffffffffffffffe < uVar20) {
      uVar20 = 0x7fffffffffffffff;
    }
    if (uVar20 < (ulong)((lVar18 >> 3) * 0x6db6db6db6db6db7)) goto LAB_02b53024;
    puVar17 = (undefined8 *)
              (**(code **)(*(long *)param_1[0x19] + 0x10))((long *)param_1[0x19],lVar18,8);
    if (puVar17 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[0x19] + 0xb8))();
    }
    param_1[0x18] = puVar17 + (lVar18 >> 3);
    param_1[0x16] = puVar17;
    param_1[0x17] = puVar17;
    puVar12 = PTR_LAB_04379530;
    puVar11 = PTR_DAT_04379528;
    puVar10 = PTR_DAT_04379520;
    puVar7 = (undefined8 *)param_2[0x17];
    for (puVar2 = (undefined8 *)param_2[0x16]; puVar2 != puVar7; puVar2 = puVar2 + 7) {
      uVar21 = param_1[0x19];
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        FUN_008a62a4(puVar11);
        FUN_00100250(puVar12,puVar11,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar10);
      }
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar11);
      if (lVar18 != 0) {
        if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02b53020;
        *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar21;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      }
      uVar21 = *puVar2;
      *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar2 + 1);
      *puVar17 = uVar21;
      puVar17[2] = puVar2[2];
      puVar17[3] = puVar2[3];
      puVar17[4] = puVar2[4];
      plVar14 = (long *)puVar2[5];
      puVar17[5] = plVar14;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))();
      }
      *(undefined4 *)(puVar17 + 6) = *(undefined4 *)(puVar2 + 6);
      if (lVar18 != 0) {
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      }
      puVar17 = (undefined8 *)(param_1[0x17] + 0x38);
      param_1[0x17] = puVar17;
    }
  }
  uVar21 = param_2[0x20];
  uVar4 = param_2[0x21];
  uVar1 = param_2[0x22];
  uVar5 = param_2[0x23];
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar5;
  param_1[0x20] = uVar21;
  param_1[0x21] = uVar4;
  lVar18 = param_2[0x1e] - param_2[0x1d];
  if (lVar18 != 0) {
    uVar20 = param_1[0x21];
    if (0x7ffffffffffffffe < uVar20) {
      uVar20 = 0x7fffffffffffffff;
    }
    if (uVar20 < (ulong)(lVar18 >> 3)) {
LAB_02b53024:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar17 = (undefined8 *)
              (**(code **)(*(long *)param_1[0x20] + 0x10))((long *)param_1[0x20],lVar18,4);
    if (puVar17 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[0x20] + 0xb8))();
    }
    param_1[0x1d] = puVar17;
    param_1[0x1e] = puVar17;
    param_1[0x1f] = puVar17 + (lVar18 >> 3);
    puVar12 = PTR_LAB_04379530;
    puVar11 = PTR_DAT_04379528;
    puVar10 = PTR_DAT_04379520;
    puVar7 = (undefined8 *)param_2[0x1e];
    for (puVar2 = (undefined8 *)param_2[0x1d]; puVar2 != puVar7; puVar2 = puVar2 + 1) {
      uVar21 = param_1[0x20];
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        FUN_008a62a4(puVar11);
        FUN_00100250(puVar12,puVar11,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar10);
      }
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar11);
      if (lVar18 == 0) {
        *puVar17 = *puVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_02b53020;
        *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar21;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        *puVar17 = *puVar2;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      }
      puVar17 = (undefined8 *)(param_1[0x1e] + 8);
      param_1[0x1e] = puVar17;
    }
  }
  uVar21 = param_2[0x27];
  uVar4 = param_2[0x28];
  uVar1 = param_2[0x29];
  uVar5 = param_2[0x2a];
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar5;
  param_1[0x27] = uVar21;
  param_1[0x28] = uVar4;
  lVar18 = param_2[0x25] - param_2[0x24];
  if (lVar18 != 0) {
    uVar20 = param_1[0x28];
    if (0x7ffffffffffffffe < uVar20) {
      uVar20 = 0x7fffffffffffffff;
    }
    if (uVar20 < (ulong)((lVar18 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar19 = (undefined4 *)
              (**(code **)(*(long *)param_1[0x27] + 0x10))((long *)param_1[0x27],lVar18,8);
    if (puVar19 == (undefined4 *)0x0) {
      (**(code **)(*(long *)param_1[0x27] + 0xb8))();
    }
    param_1[0x26] = puVar19 + (lVar18 >> 3) * 2;
    param_1[0x24] = puVar19;
    param_1[0x25] = puVar19;
    puVar12 = PTR_LAB_04379530;
    puVar11 = PTR_DAT_04379528;
    puVar10 = PTR_DAT_04379520;
    puVar8 = (undefined4 *)param_2[0x25];
    for (puVar3 = (undefined4 *)param_2[0x24]; puVar3 != puVar8; puVar3 = puVar3 + 10) {
      uVar21 = param_1[0x27];
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        FUN_008a62a4(puVar11);
        FUN_00100250(puVar12,puVar11,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar10);
      }
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar11);
      if (lVar18 != 0) {
        if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_02b53020:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar21;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      }
      *puVar19 = *puVar3;
      *(undefined8 *)(puVar19 + 2) = *(undefined8 *)(puVar3 + 2);
      *(undefined8 *)(puVar19 + 4) = *(undefined8 *)(puVar3 + 4);
      *(undefined8 *)(puVar19 + 6) = *(undefined8 *)(puVar3 + 6);
      plVar14 = *(long **)(puVar3 + 8);
      *(long **)(puVar19 + 8) = plVar14;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))();
      }
      if (lVar18 != 0) {
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      }
      puVar19 = (undefined4 *)(param_1[0x25] + 0x28);
      param_1[0x25] = puVar19;
    }
  }
  uVar21 = param_2[0x2b];
  *(undefined8 *)((long)param_1 + 0x15e) = *(undefined8 *)((long)param_2 + 0x15e);
  param_1[0x2b] = uVar21;
  return;
}


