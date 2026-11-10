/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02904784; name: FUN_02904784
 */


void FUN_02904784(undefined8 *param_1,long *param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  size_t sVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long *plVar14;
  int *piVar15;
  ushort *puVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint *puVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  int *piVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 *puStack_78;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar12 == 0)) {
    lVar23 = 0;
  }
  else {
    puVar22 = (uint *)((long)param_4 + uVar12);
    lVar23 = (long)puVar22 + (ulong)*puVar22;
  }
  param_1[4] = 0;
  *param_1 = &PTR_LAB_04274db8;
  param_1[1] = &DAT_cbf29ce484222645;
  param_1[2] = &DAT_03996322;
  param_1[3] = 0;
  sVar9 = strlen((char *)(lVar23 + 4));
  bVar6 = *(byte *)(lVar23 + 4);
  puVar13 = &DAT_cbf29ce484222645;
  if (bVar6 != 0) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar23 + 5);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar6 != 0);
  }
  param_1[6] = param_3;
  *param_1 = &PTR_LAB_04274e58;
  param_1[1] = puVar13;
  param_1[2] = (char *)(lVar23 + 4);
  param_1[3] = sVar9;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[7] = 0;
  puVar7 = PTR_DAT_04379520;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((*puVar7 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  plVar18 = DAT_043f1798;
  lVar23 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (plVar14 = *(long **)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), plVar14 == (long *)0x0)) &&
     (plVar14 = *(long **)(lVar23 + 0x20), *(long **)(lVar23 + 0x20) == (long *)0x0)) {
    *(long **)(lVar23 + 0x20) = DAT_043f1798;
    plVar14 = plVar18;
  }
  param_1[10] = plVar14;
  param_1[0xb] = 0x666666666666666;
  piVar15 = (int *)param_1[5];
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar12 == 0)) {
    puVar22 = (uint *)0x0;
  }
  else {
    puVar22 = (uint *)((long)piVar15 + uVar12);
    puVar22 = (uint *)((long)puVar22 + (ulong)*puVar22);
  }
  lVar10 = param_1[7];
  uVar12 = (ulong)*puVar22;
  if ((ulong)((param_1[9] - lVar10 >> 3) * -0x3333333333333333) < uVar12) {
    lVar19 = param_1[8];
    puVar1 = param_1 + 10;
    local_80 = 0;
    puStack_78 = puVar1;
    local_98 = (**(code **)(*plVar14 + 0x10))(plVar14,uVar12 * 0x28,8);
    if (local_98 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xb8))();
    }
    lVar24 = local_98 + (lVar19 - lVar10 >> 3) * 8;
    lVar26 = local_98 + uVar12 * 0x28;
    lVar10 = param_1[7];
    lVar19 = param_1[8];
    lVar25 = lVar24;
    local_90 = lVar24;
    local_88 = lVar24;
    local_80 = lVar26;
    if (lVar19 == lVar10) {
      local_88 = lVar10;
    }
    else {
      do {
        lVar25 = lVar25 + -0x28;
        lVar19 = lVar19 + -0x28;
        FUN_02905e34(puVar1,lVar25,lVar19);
      } while (lVar10 != lVar19);
      lVar10 = param_1[7];
      local_88 = param_1[8];
    }
    param_1[7] = lVar25;
    param_1[8] = lVar24;
    local_80 = param_1[9];
    param_1[9] = lVar26;
    local_98 = lVar10;
    local_90 = lVar10;
    FUN_02905a74(&local_98);
    uVar12 = (ulong)*puVar22;
  }
  if ((int)uVar12 != 0) {
    puVar22 = puVar22 + 1;
    puVar3 = puVar22 + uVar12;
    puVar1 = param_1 + 10;
    do {
      piVar15 = (int *)((long)puVar22 + (ulong)*puVar22);
      puVar16 = (ushort *)((long)piVar15 - (long)*piVar15);
      if (*puVar16 < 5) {
        piVar28 = (int *)0x0;
        uVar30 = 0;
      }
      else {
        if ((ulong)puVar16[2] == 0) {
          piVar28 = (int *)0x0;
        }
        else {
          puVar4 = (uint *)((long)piVar15 + (ulong)puVar16[2]);
          piVar28 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
        if ((*puVar16 < 7) || ((ulong)puVar16[3] == 0)) {
          uVar30 = 0;
        }
        else {
          uVar30 = *(undefined4 *)((long)piVar15 + (ulong)puVar16[3]);
        }
      }
      if ((ulong)param_1[8] < (ulong)param_1[9]) {
        FUN_02905f20(puVar1);
        lVar10 = param_1[8] + 0x28;
        param_1[8] = lVar10;
      }
      else {
        lVar10 = (long)(param_1[8] - param_1[7]) >> 3;
        uVar12 = param_1[0xb];
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        uVar2 = lVar10 * -0x3333333333333333 + 1;
        if (uVar12 < uVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar19 = (long)(param_1[9] - param_1[7]) >> 3;
        local_80 = 0;
        uVar20 = lVar19 * -0x6666666666666666;
        if (uVar2 <= uVar20) {
          uVar2 = uVar20;
        }
        if ((ulong)(lVar19 * -0x3333333333333333) < uVar12 >> 1) {
          uVar12 = uVar2;
        }
        puStack_78 = puVar1;
        if (uVar12 == 0) {
          lVar19 = 0;
        }
        else {
          lVar19 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 * 0x28,8);
          if (lVar19 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar26 = lVar19 + lVar10 * 8;
        lVar24 = lVar19 + uVar12 * 0x28;
        local_98 = lVar19;
        local_90 = lVar26;
        local_80 = lVar24;
        FUN_02905f20(puVar1,lVar26);
        lVar10 = lVar26 + 0x28;
        lVar19 = param_1[7];
        lVar25 = param_1[8];
        local_88 = lVar10;
        if (lVar25 == lVar19) {
          local_88 = lVar19;
        }
        else {
          do {
            lVar26 = lVar26 + -0x28;
            lVar25 = lVar25 + -0x28;
            FUN_02905e34(puVar1,lVar26,lVar25);
          } while (lVar19 != lVar25);
          lVar19 = param_1[7];
          local_88 = param_1[8];
        }
        param_1[7] = lVar26;
        param_1[8] = lVar10;
        local_80 = param_1[9];
        param_1[9] = lVar24;
        local_98 = lVar19;
        local_90 = lVar19;
        FUN_02905a74(&local_98);
        lVar10 = param_1[8];
      }
      lVar19 = param_1[7];
      if (lVar10 - lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar11 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
      if (puVar11 == (undefined8 *)0x0) {
        plVar18 = (long *)0x0;
        uVar27 = 0;
        uVar21 = 0;
      }
      else {
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar25 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = param_2;
        *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
        *puVar11 = piVar28;
        puVar11[1] = &DAT_cbf29ce484222645;
        puVar11[4] = 0;
        puVar11[2] = &DAT_03996322;
        puVar11[3] = 0;
        if ((*(ushort *)((long)piVar28 - (long)*piVar28) < 5) ||
           (uVar12 = (ulong)((ushort *)((long)piVar28 - (long)*piVar28))[2], uVar12 == 0)) {
          lVar24 = 0;
        }
        else {
          puVar4 = (uint *)((long)piVar28 + uVar12);
          lVar24 = (long)puVar4 + (ulong)*puVar4;
        }
        sVar9 = strlen((char *)(lVar24 + 4));
        bVar6 = *(byte *)(lVar24 + 4);
        puVar13 = &DAT_cbf29ce484222645;
        if (bVar6 != 0) {
          puVar13 = &DAT_cbf29ce484222645;
          pbVar17 = (byte *)(lVar24 + 5);
          do {
            puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar6 != 0);
        }
        puVar11[1] = puVar13;
        puVar11[2] = (char *)(lVar24 + 4);
        uVar27 = 0x28;
        uVar21 = 8;
        puVar11[3] = sVar9;
        puVar11[4] = 0;
        *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
        plVar18 = param_2;
      }
      lVar10 = (lVar10 - lVar19 >> 3) * -0x3333333333333333 + -1;
      plVar14 = (long *)(lVar19 + lVar10 * 0x28);
      lVar25 = *plVar14;
      *plVar14 = (long)puVar11;
      if (lVar25 != 0) {
        FUN_02bcbe58(&local_98,0);
        if (*(long **)(lVar25 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar25 + 0x20) + 0x20))();
        }
        lVar24 = lVar19 + lVar10 * 0x28;
        plVar14 = *(long **)(lVar24 + 8);
        uVar5 = *(undefined8 *)(lVar24 + 0x10);
        uVar29 = *(undefined8 *)(lVar24 + 0x18);
        uVar12 = (**(code **)(*plVar14 + 0xc0))(plVar14);
        if ((uVar12 & 1) == 0) {
LAB_02904e10:
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar25,uVar5,uVar29);
        }
        else {
          if (*(char *)(lVar23 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar23 + 0x38d488) = 1;
            *(undefined8 *)(lVar23 + 0x38d478) = 0;
            *(undefined8 *)(lVar23 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar23 + 0x38d480) < 1) goto LAB_02904e10;
          FUN_02bcc824(plVar14,lVar25,uVar5,uVar29);
        }
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar8 = *(int *)(lVar23 + 0x38d480) + -1;
        *(int *)(lVar23 + 0x38d480) = iVar8;
        if (iVar8 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar23 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar23 + 0x38d488) = 1;
            *(undefined8 *)(lVar23 + 0x38d478) = 0;
            *(undefined8 *)(lVar23 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar23 + 0x38d484) = 0;
        }
      }
      lVar19 = lVar19 + lVar10 * 0x28;
      *(long **)(lVar19 + 8) = plVar18;
      *(undefined8 *)(lVar19 + 0x10) = uVar27;
      *(undefined8 *)(lVar19 + 0x18) = uVar21;
      *(undefined4 *)(lVar19 + 0x20) = uVar30;
      puVar22 = puVar22 + 1;
    } while (puVar22 != puVar3);
  }
  return;
}


