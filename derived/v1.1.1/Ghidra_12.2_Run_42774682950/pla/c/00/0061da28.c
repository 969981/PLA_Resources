/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061da28; name: FUN_0061da28
 */


void FUN_0061da28(long *param_1,ulong *param_2)

{
  byte *pbVar1;
  ulong *puVar2;
  byte bVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong *puVar12;
  ulong uVar13;
  void *pvVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar12 = (ulong *)param_1[1];
  if (puVar12 != (ulong *)param_1[2]) {
    plVar5 = (long *)FUN_00612290();
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = (ulong)plVar5;
    if ((*param_2 & 1) == 0) {
      uVar16 = param_2[1];
      uVar13 = *param_2;
      puVar12[2] = param_2[2];
      puVar12[1] = uVar16;
      *puVar12 = uVar13;
      goto LAB_0061dbc0;
    }
    uVar13 = param_2[1];
    if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar14 = (void *)param_2[2];
    if (uVar13 < 0x17) {
      pvVar15 = (void *)((long)puVar12 + 1);
      *(char *)puVar12 = (char)((int)uVar13 << 1);
      if (uVar13 != 0) goto LAB_0061dbac;
    }
    else {
      uVar16 = uVar13 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar16,1);
      *puVar12 = uVar16 | 1;
      puVar12[1] = uVar13;
      puVar12[2] = (ulong)pvVar15;
LAB_0061dbac:
      memcpy(pvVar15,pvVar14,uVar13);
    }
    *(undefined1 *)((long)pvVar15 + uVar13) = 0;
LAB_0061dbc0:
    puVar12[4] = param_2[4];
    param_1[1] = param_1[1] + 0x28;
    return;
  }
  lVar8 = (long)puVar12 - *param_1 >> 3;
  uVar16 = 0x666666666666666;
  uVar13 = lVar8 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar13) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar6 * -0x3333333333333333) < 0x333333333333333) {
    uVar7 = lVar6 * -0x6666666666666666;
    uVar16 = uVar13;
    if (uVar13 <= uVar7) {
      uVar16 = uVar7;
    }
    if (uVar16 != 0) goto LAB_0061dad8;
    lVar6 = 0;
  }
  else {
LAB_0061dad8:
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar16 * 0x28,8);
  }
  puVar12 = (ulong *)(lVar6 + lVar8 * 8);
  plVar5 = (long *)FUN_00612290();
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = (ulong)plVar5;
  if ((*param_2 & 1) == 0) {
    uVar7 = param_2[1];
    uVar13 = *param_2;
    puVar12[2] = param_2[2];
    puVar12[1] = uVar7;
    *puVar12 = uVar13;
    goto LAB_0061dc38;
  }
  uVar13 = param_2[1];
  if (0xffffffffffffffef < uVar13) {
                    /* try { // try from 0061dd54 to 0061dd5b has its CatchHandler @ 0061dd5c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar14 = (void *)param_2[2];
  if (uVar13 < 0x17) {
    pvVar15 = (void *)((long)puVar12 + 1);
    *(char *)puVar12 = (char)((int)uVar13 << 1);
    if (uVar13 != 0) goto LAB_0061dc24;
  }
  else {
    uVar7 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pvVar15 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar7,1);
    lVar10 = lVar6 + lVar8 * 8;
    *(ulong *)(lVar10 + 8) = uVar13;
    *(void **)(lVar10 + 0x10) = pvVar15;
    *puVar12 = uVar7 | 1;
LAB_0061dc24:
    memcpy(pvVar15,pvVar14,uVar13);
  }
  *(undefined1 *)((long)pvVar15 + uVar13) = 0;
LAB_0061dc38:
  *(ulong *)(lVar6 + lVar8 * 8 + 0x20) = param_2[4];
  puVar2 = puVar12 + 5;
  pbVar9 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  if (pbVar11 == pbVar9) {
    pbVar11 = pbVar9;
  }
  else {
    lVar8 = 0;
    do {
      uVar18 = *(undefined8 *)(pbVar11 + lVar8 + -0x20);
      uVar17 = *(undefined8 *)(pbVar11 + lVar8 + -0x28);
      uVar19 = *(undefined8 *)(pbVar11 + lVar8 + -0x18);
      lVar10 = lVar8 + -0x28;
      *(undefined8 *)((long)puVar12 + lVar8 + -0x10) = *(undefined8 *)(pbVar11 + lVar8 + -0x10);
      *(undefined8 *)((long)puVar12 + lVar8 + -0x18) = uVar19;
      *(undefined8 *)((long)puVar12 + lVar8 + -0x20) = uVar18;
      *(undefined8 *)((long)puVar12 + lVar8 + -0x28) = uVar17;
      pbVar1 = pbVar11 + lVar8 + -0x28;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1 = pbVar11 + lVar8 + -0x20;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1 = pbVar11 + lVar8 + -0x18;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)((long)puVar12 + lVar8 + -8) = *(undefined8 *)(pbVar11 + lVar8 + -8);
      lVar8 = lVar10;
    } while ((long)pbVar9 - (long)pbVar11 != lVar10);
    pbVar9 = (byte *)param_1[1];
    puVar12 = (ulong *)((long)puVar12 + lVar10);
    pbVar11 = (byte *)*param_1;
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar2;
  lVar8 = param_1[2];
  param_1[2] = lVar6 + uVar16 * 0x28;
  if (pbVar9 != pbVar11) {
    bVar3 = pbVar9[-0x28];
    pbVar1 = pbVar9 + -0x28;
    while( true ) {
      pbVar4 = pbVar1;
      if ((bVar3 & 1) != 0) {
        (**(code **)(**(long **)(pbVar9 + -0x10) + 0x18))
                  (*(long **)(pbVar9 + -0x10),*(undefined8 *)(pbVar9 + -0x18),
                   *(ulong *)(pbVar9 + -0x28) & 0xfffffffffffffffe,1);
      }
      if (pbVar11 == pbVar4) break;
      bVar3 = pbVar4[-0x28];
      pbVar1 = pbVar4 + -0x28;
      pbVar9 = pbVar4;
    }
  }
  if (pbVar11 == (byte *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0061dd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],pbVar11,lVar8 - (long)pbVar11,8);
  return;
}


