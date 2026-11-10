/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02905ffc; name: FUN_02905ffc
 */


void FUN_02905ffc(undefined8 *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  byte bVar6;
  ushort uVar7;
  undefined *puVar8;
  int iVar9;
  size_t sVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  int *piVar16;
  ushort *puVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  int *piVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 *puStack_88;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar13 == 0)) {
    lVar24 = 0;
  }
  else {
    puVar23 = (uint *)((long)param_4 + uVar13);
    lVar24 = (long)puVar23 + (ulong)*puVar23;
  }
  param_1[4] = 0;
  *param_1 = &PTR_LAB_04274db8;
  param_1[1] = &DAT_cbf29ce484222645;
  param_1[2] = &DAT_03996322;
  param_1[3] = 0;
  sVar10 = strlen((char *)(lVar24 + 4));
  bVar6 = *(byte *)(lVar24 + 4);
  puVar14 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    puVar14 = &DAT_cbf29ce484222645;
    pbVar18 = (byte *)(lVar24 + 5);
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (bVar6 != 0);
  }
  param_1[6] = param_3;
  *param_1 = &PTR_LAB_04274ea8;
  param_1[1] = puVar14;
  param_1[2] = (char *)(lVar24 + 4);
  param_1[3] = sVar10;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[7] = 0;
  puVar8 = PTR_DAT_04379520;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((*puVar8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar19 = DAT_043f1798;
  lVar24 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (plVar15 = *(long **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), plVar15 == (long *)0x0)) &&
     (plVar15 = *(long **)(lVar24 + 0x20), *(long **)(lVar24 + 0x20) == (long *)0x0)) {
    *(long **)(lVar24 + 0x20) = DAT_043f1798;
    plVar15 = plVar19;
  }
  param_1[10] = plVar15;
  param_1[0xb] = 0x666666666666666;
  piVar16 = (int *)param_1[5];
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((*(ushort *)((long)piVar16 - (long)*piVar16) < 0xb) ||
     (uVar13 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[5], uVar13 == 0)) {
    puVar23 = (uint *)0x0;
  }
  else {
    puVar23 = (uint *)((long)piVar16 + uVar13);
    puVar23 = (uint *)((long)puVar23 + (ulong)*puVar23);
  }
  lVar11 = param_1[7];
  uVar13 = (ulong)*puVar23;
  if ((ulong)((param_1[9] - lVar11 >> 3) * -0x3333333333333333) < uVar13) {
    lVar20 = param_1[8];
    puVar1 = param_1 + 10;
    local_90 = 0;
    puStack_88 = puVar1;
    local_a8 = (**(code **)(*plVar15 + 0x10))(plVar15,uVar13 * 0x28,8);
    if (local_a8 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xb8))();
    }
    lVar25 = local_a8 + (lVar20 - lVar11 >> 3) * 8;
    lVar27 = local_a8 + uVar13 * 0x28;
    lVar11 = param_1[7];
    lVar20 = param_1[8];
    lVar26 = lVar25;
    local_a0 = lVar25;
    local_98 = lVar25;
    local_90 = lVar27;
    if (lVar20 == lVar11) {
      local_98 = lVar11;
    }
    else {
      do {
        lVar26 = lVar26 + -0x28;
        lVar20 = lVar20 + -0x28;
        FUN_02907844(puVar1,lVar26,lVar20);
      } while (lVar11 != lVar20);
      lVar11 = param_1[7];
      local_98 = param_1[8];
    }
    param_1[7] = lVar26;
    param_1[8] = lVar25;
    local_90 = param_1[9];
    param_1[9] = lVar27;
    local_a8 = lVar11;
    local_a0 = lVar11;
    FUN_02907484(&local_a8);
    uVar13 = (ulong)*puVar23;
  }
  if ((int)uVar13 != 0) {
    puVar23 = puVar23 + 1;
    puVar3 = puVar23 + uVar13;
    puVar1 = param_1 + 10;
    do {
      piVar16 = (int *)((long)puVar23 + (ulong)*puVar23);
      puVar17 = (ushort *)((long)piVar16 - (long)*piVar16);
      uVar7 = *puVar17;
      if (uVar7 < 5) {
        piVar29 = (int *)0x0;
LAB_02906788:
        uVar31 = 0;
LAB_0290678c:
        uVar32 = 0;
      }
      else {
        if ((ulong)puVar17[2] == 0) {
          piVar29 = (int *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar16 + (ulong)puVar17[2]);
          piVar29 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
        if (uVar7 < 7) goto LAB_02906788;
        uVar31 = 0;
        if ((ulong)puVar17[3] != 0) {
          uVar31 = *(undefined4 *)((long)piVar16 + (ulong)puVar17[3]);
        }
        if ((uVar7 < 9) || ((ulong)puVar17[4] == 0)) goto LAB_0290678c;
        uVar32 = *(undefined4 *)((long)piVar16 + (ulong)puVar17[4]);
      }
      if ((ulong)param_1[8] < (ulong)param_1[9]) {
        FUN_02907930(puVar1);
        lVar11 = param_1[8] + 0x28;
        param_1[8] = lVar11;
      }
      else {
        lVar11 = (long)(param_1[8] - param_1[7]) >> 3;
        uVar13 = param_1[0xb];
        if (0x7ffffffffffffffe < uVar13) {
          uVar13 = 0x7fffffffffffffff;
        }
        uVar2 = lVar11 * -0x3333333333333333 + 1;
        if (uVar13 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar20 = (long)(param_1[9] - param_1[7]) >> 3;
        local_90 = 0;
        uVar21 = lVar20 * -0x6666666666666666;
        if (uVar2 <= uVar21) {
          uVar2 = uVar21;
        }
        if ((ulong)(lVar20 * -0x3333333333333333) < uVar13 >> 1) {
          uVar13 = uVar2;
        }
        puStack_88 = puVar1;
        if (uVar13 == 0) {
          lVar20 = 0;
        }
        else {
          lVar20 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 * 0x28,8);
          if (lVar20 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar27 = lVar20 + lVar11 * 8;
        lVar25 = lVar20 + uVar13 * 0x28;
        local_a8 = lVar20;
        local_a0 = lVar27;
        local_90 = lVar25;
        FUN_02907930(puVar1,lVar27);
        lVar11 = lVar27 + 0x28;
        lVar20 = param_1[7];
        lVar26 = param_1[8];
        local_98 = lVar11;
        if (lVar26 == lVar20) {
          local_98 = lVar20;
        }
        else {
          do {
            lVar27 = lVar27 + -0x28;
            lVar26 = lVar26 + -0x28;
            FUN_02907844(puVar1,lVar27,lVar26);
          } while (lVar20 != lVar26);
          lVar20 = param_1[7];
          local_98 = param_1[8];
        }
        param_1[7] = lVar27;
        param_1[8] = lVar11;
        local_90 = param_1[9];
        param_1[9] = lVar25;
        local_a8 = lVar20;
        local_a0 = lVar20;
        FUN_02907484(&local_a8);
        lVar11 = param_1[8];
      }
      lVar20 = param_1[7];
      if (lVar11 - lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar12 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
      if (puVar12 == (undefined8 *)0x0) {
        plVar19 = (long *)0x0;
        uVar28 = 0;
        uVar22 = 0;
      }
      else {
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar9 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar26 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = param_2;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
        *puVar12 = piVar29;
        puVar12[1] = &DAT_cbf29ce484222645;
        puVar12[4] = 0;
        puVar12[2] = &DAT_03996322;
        puVar12[3] = 0;
        if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar13 == 0)) {
          lVar25 = 0;
        }
        else {
          puVar4 = (uint *)((long)piVar29 + uVar13);
          lVar25 = (long)puVar4 + (ulong)*puVar4;
        }
        sVar10 = strlen((char *)(lVar25 + 4));
        bVar6 = *(byte *)(lVar25 + 4);
        puVar14 = &DAT_cbf29ce484222645;
        if (bVar6 != 0) {
          puVar14 = &DAT_cbf29ce484222645;
          pbVar18 = (byte *)(lVar25 + 5);
          do {
            puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar18;
            pbVar18 = pbVar18 + 1;
          } while (bVar6 != 0);
        }
        puVar12[1] = puVar14;
        puVar12[2] = (char *)(lVar25 + 4);
        uVar28 = 0x28;
        uVar22 = 8;
        puVar12[3] = sVar10;
        puVar12[4] = 0;
        *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
        plVar19 = param_2;
      }
      lVar11 = (lVar11 - lVar20 >> 3) * -0x3333333333333333 + -1;
      plVar15 = (long *)(lVar20 + lVar11 * 0x28);
      lVar26 = *plVar15;
      *plVar15 = (long)puVar12;
      if (lVar26 != 0) {
        FUN_02bcbe58(&local_a8,0);
        if (*(long **)(lVar26 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar26 + 0x20) + 0x20))();
        }
        lVar25 = lVar20 + lVar11 * 0x28;
        plVar15 = *(long **)(lVar25 + 8);
        uVar5 = *(undefined8 *)(lVar25 + 0x10);
        uVar30 = *(undefined8 *)(lVar25 + 0x18);
        uVar13 = (**(code **)(*plVar15 + 0xc0))(plVar15);
        if ((uVar13 & 1) == 0) {
LAB_029066a0:
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar26,uVar5,uVar30);
        }
        else {
          if (*(char *)(lVar24 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar24 + 0x38d488) = 1;
            *(undefined8 *)(lVar24 + 0x38d478) = 0;
            *(undefined8 *)(lVar24 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar24 + 0x38d480) < 1) goto LAB_029066a0;
          FUN_02bcc824(plVar15,lVar26,uVar5,uVar30);
        }
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar9 = *(int *)(lVar24 + 0x38d480) + -1;
        *(int *)(lVar24 + 0x38d480) = iVar9;
        if (iVar9 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar24 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar24 + 0x38d488) = 1;
            *(undefined8 *)(lVar24 + 0x38d478) = 0;
            *(undefined8 *)(lVar24 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar24 + 0x38d484) = 0;
        }
      }
      lVar20 = lVar20 + lVar11 * 0x28;
      *(long **)(lVar20 + 8) = plVar19;
      *(undefined8 *)(lVar20 + 0x10) = uVar28;
      *(undefined4 *)(lVar20 + 0x20) = uVar31;
      *(undefined4 *)(lVar20 + 0x24) = uVar32;
      *(undefined8 *)(lVar20 + 0x18) = uVar22;
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar3);
  }
  return;
}


