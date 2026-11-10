/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007897dc; name: FUN_007897dc
 */


void FUN_007897dc(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *pvVar17;
  long *plVar18;
  long *plVar19;
  void *pvVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  *param_1 = (long)(PTR_DAT_04376d70 + 0x10);
  plVar4 = (long *)FUN_00612290();
  plVar19 = param_1 + 1;
  *plVar19 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (long)plVar4;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lVar22 = *(long *)(param_2 + 0x10);
    lVar15 = *(long *)(param_2 + 8);
    param_1[3] = *(long *)(param_2 + 0x18);
    param_1[2] = lVar22;
    *plVar19 = lVar15;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x10);
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = *(void **)(param_2 + 0x18);
    if (uVar12 < 0x17) {
      pvVar20 = (void *)((long)param_1 + 9);
      *(char *)plVar19 = (char)((int)uVar12 << 1);
      if (uVar12 != 0) goto LAB_0078989c;
    }
    else {
      uVar13 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar20 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar13,1);
      param_1[1] = uVar13 | 1;
      param_1[2] = uVar12;
      param_1[3] = (long)pvVar20;
LAB_0078989c:
      memcpy(pvVar20,pvVar17,uVar12);
    }
    *(undefined1 *)((long)pvVar20 + uVar12) = 0;
  }
  plVar4 = (long *)FUN_00612290();
  plVar19 = param_1 + 5;
  *plVar19 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = (long)plVar4;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    lVar22 = *(long *)(param_2 + 0x30);
    lVar15 = *(long *)(param_2 + 0x28);
    param_1[7] = *(long *)(param_2 + 0x38);
    param_1[6] = lVar22;
    *plVar19 = lVar15;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x30);
    if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 00789d34 to 00789d3b has its CatchHandler @ 00789d60 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = *(void **)(param_2 + 0x38);
    if (uVar12 < 0x17) {
      pvVar20 = (void *)((long)param_1 + 0x29);
      *(char *)plVar19 = (char)((int)uVar12 << 1);
      if (uVar12 != 0) goto LAB_00789940;
    }
    else {
      uVar13 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar20 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar13,1);
      param_1[5] = uVar13 | 1;
      param_1[6] = uVar12;
      param_1[7] = (long)pvVar20;
LAB_00789940:
      memcpy(pvVar20,pvVar17,uVar12);
    }
    *(undefined1 *)((long)pvVar20 + uVar12) = 0;
  }
  plVar4 = (long *)FUN_00612290();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (long)plVar4;
  lVar15 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48);
  if (lVar15 != 0) {
    if ((ulong)(lVar15 >> 2) >> 0x3e != 0) {
                    /* try { // try from 00789d24 to 00789d2b has its CatchHandler @ 00789d74 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar5 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar15,4);
    param_1[9] = (long)puVar5;
    param_1[10] = (long)puVar5;
    param_1[0xb] = (long)(puVar5 + (lVar15 >> 2));
    puVar8 = *(undefined4 **)(param_2 + 0x48);
    puVar2 = *(undefined4 **)(param_2 + 0x50);
    if (puVar8 != puVar2) {
      uVar13 = ((long)puVar2 - (long)puVar8) - 4;
      uVar12 = (uVar13 >> 2) + 1;
      puVar9 = puVar5;
      puVar11 = puVar8;
      if ((uVar12 < 0x10) ||
         ((puVar5 < (undefined4 *)((long)puVar8 + (uVar13 & 0xfffffffffffffffc) + 4) &&
          (puVar8 < (undefined4 *)
                    ((long)puVar5 + ((long)puVar2 - (long)puVar8 & 0xfffffffffffffffcU)))))) {
LAB_00789a34:
        uVar12 = (long)puVar2 + (-4 - (long)puVar11);
        uVar1 = ((uint)(uVar12 >> 2) & 0x3fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar15 = -((ulong)uVar1 & 3);
          puVar8 = puVar9;
          puVar5 = puVar11;
          do {
            puVar11 = puVar5 + 1;
            bVar3 = lVar15 != -1;
            lVar15 = lVar15 + 1;
            puVar9 = puVar8 + 1;
            *puVar8 = *puVar5;
            puVar8 = puVar9;
            puVar5 = puVar11;
          } while (bVar3);
        }
        if (0xb < uVar12) {
          do {
            *puVar9 = *puVar11;
            puVar9[1] = puVar11[1];
            puVar9[2] = puVar11[2];
            puVar8 = puVar11 + 3;
            puVar11 = puVar11 + 4;
            puVar9[3] = *puVar8;
            puVar9 = puVar9 + 4;
          } while (puVar11 != puVar2);
        }
      }
      else {
        uVar14 = uVar12 & 0x7ffffffffffffff0;
        puVar9 = puVar5 + uVar14;
        puVar11 = puVar8 + uVar14;
        puVar10 = (undefined8 *)(puVar8 + 8);
        puVar16 = (undefined8 *)(puVar5 + 8);
        uVar13 = uVar14;
        do {
          uVar21 = puVar10[-4];
          uVar24 = puVar10[-1];
          uVar23 = puVar10[-2];
          uVar13 = uVar13 - 0x10;
          uVar26 = puVar10[1];
          uVar25 = *puVar10;
          uVar28 = puVar10[3];
          uVar27 = puVar10[2];
          puVar16[-3] = puVar10[-3];
          puVar16[-4] = uVar21;
          puVar16[-1] = uVar24;
          puVar16[-2] = uVar23;
          puVar16[1] = uVar26;
          *puVar16 = uVar25;
          puVar16[3] = uVar28;
          puVar16[2] = uVar27;
          puVar10 = puVar10 + 8;
          puVar16 = puVar16 + 8;
        } while (uVar13 != 0);
        if (uVar12 != uVar14) goto LAB_00789a34;
      }
      param_1[10] = (long)puVar9;
    }
  }
  lVar15 = *(long *)(param_2 + 0x68);
  param_1[0xe] = *(long *)(param_2 + 0x70);
  param_1[0xd] = lVar15;
  plVar4 = (long *)FUN_00612290();
  plVar19 = param_1 + 0xf;
  *plVar19 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = (long)plVar4;
  if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
    lVar22 = *(long *)(param_2 + 0x80);
    lVar15 = *(long *)(param_2 + 0x78);
    param_1[0x11] = *(long *)(param_2 + 0x88);
    param_1[0x10] = lVar22;
    *plVar19 = lVar15;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x80);
    if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 00789d3c to 00789d43 has its CatchHandler @ 00789d50 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar17 = *(void **)(param_2 + 0x88);
    if (uVar12 < 0x17) {
      pvVar20 = (void *)((long)param_1 + 0x79);
      *(char *)plVar19 = (char)((int)uVar12 << 1);
      if (uVar12 != 0) goto LAB_00789b30;
    }
    else {
      uVar13 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar20 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar13,1);
      param_1[0xf] = uVar13 | 1;
      param_1[0x10] = uVar12;
      param_1[0x11] = (long)pvVar20;
LAB_00789b30:
      memcpy(pvVar20,pvVar17,uVar12);
    }
    *(undefined1 *)((long)pvVar20 + uVar12) = 0;
  }
  plVar19 = param_1 + 0x13;
  *plVar19 = 0;
  lVar15 = FUN_00612290();
  plVar18 = param_1 + 0x14;
  *plVar18 = 0;
  param_1[0x15] = lVar15;
  param_1[0x16] = 0;
  *plVar19 = (long)plVar18;
  plVar4 = *(long **)(param_2 + 0x98);
  while (plVar4 != (long *)(param_2 + 0xa0)) {
                    /* try { // try from 00789b88 to 00789b9f has its CatchHandler @ 00789d84 */
    plVar6 = (long *)FUN_02761400(plVar19,plVar18,&local_68,auStack_70,
                                  (undefined8 *)((long)plVar4 + 0x1c));
    if (*plVar6 == 0) {
      p_Var7 = (__tree_node_base *)
               (**(code **)(*(long *)param_1[0x15] + 0x10))((long *)param_1[0x15],0x28,8);
      *(undefined8 *)(p_Var7 + 0x1c) = *(undefined8 *)((long)plVar4 + 0x1c);
      *(undefined8 *)p_Var7 = 0;
      *(undefined8 *)(p_Var7 + 8) = 0;
      *(undefined8 *)(p_Var7 + 0x10) = local_68;
      *plVar6 = (long)p_Var7;
      if (*(long *)param_1[0x13] != 0) {
        *plVar19 = *(long *)param_1[0x13];
        p_Var7 = (__tree_node_base *)*plVar6;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[0x14],p_Var7);
      param_1[0x16] = param_1[0x16] + 1;
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] != (long *)0x0) goto LAB_00789c20;
LAB_00789c30:
      plVar6 = plVar4 + 2;
      bVar3 = *(long **)*plVar6 != plVar4;
      plVar4 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar15 = *plVar6;
          plVar6 = (long *)(lVar15 + 0x10);
          plVar4 = (long *)*plVar6;
        } while (*(long *)*plVar6 != lVar15);
      }
    }
    else {
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) goto LAB_00789c30;
LAB_00789c20:
      do {
        plVar4 = plVar6;
        plVar6 = (long *)*plVar4;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar4 = (long *)FUN_00612290();
  plVar19 = param_1 + 0x17;
  *plVar19 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = (long)plVar4;
  if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
    lVar22 = *(long *)(param_2 + 0xc0);
    lVar15 = *(long *)(param_2 + 0xb8);
    param_1[0x19] = *(long *)(param_2 + 200);
    param_1[0x18] = lVar22;
    *plVar19 = lVar15;
    goto LAB_00789cfc;
  }
  uVar12 = *(ulong *)(param_2 + 0xc0);
  if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 00789d44 to 00789d4b has its CatchHandler @ 00789d4c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar17 = *(void **)(param_2 + 200);
  if (uVar12 < 0x17) {
    pvVar20 = (void *)((long)param_1 + 0xb9);
    *(char *)plVar19 = (char)((int)uVar12 << 1);
    if (uVar12 != 0) goto LAB_00789ce8;
  }
  else {
    uVar13 = uVar12 + 0x10 & 0xfffffffffffffff0;
    pvVar20 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar13,1);
    param_1[0x17] = uVar13 | 1;
    param_1[0x18] = uVar12;
    param_1[0x19] = (long)pvVar20;
LAB_00789ce8:
    memcpy(pvVar20,pvVar17,uVar12);
  }
  *(undefined1 *)((long)pvVar20 + uVar12) = 0;
LAB_00789cfc:
  lVar15 = *(long *)(param_2 + 0xd8);
  param_1[0x1c] = *(long *)(param_2 + 0xe0);
  param_1[0x1b] = lVar15;
  return;
}


