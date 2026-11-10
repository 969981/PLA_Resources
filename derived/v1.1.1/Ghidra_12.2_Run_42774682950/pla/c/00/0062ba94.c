/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062ba94; name: FUN_0062ba94
 */


ulong * FUN_0062ba94(long *param_1,ulong *param_2,ulong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar15 = *param_1;
  puVar13 = (ulong *)param_1[1];
  lVar16 = (long)param_2 - lVar15;
  lVar6 = lVar16 >> 3;
  uVar19 = lVar6 * -0x3333333333333333;
  if (puVar13 < (ulong *)param_1[2]) {
    if (param_2 != puVar13) {
      FUN_0062bfa4(param_1,param_2,puVar13,param_2 + 5);
      puVar13 = param_3;
      if ((param_2 <= param_3) && (puVar13 = param_3 + 5, (ulong *)param_1[1] <= param_3)) {
        puVar13 = param_3;
      }
      if (param_2 != puVar13) {
        uVar19 = puVar13[1];
        pbVar17 = (byte *)puVar13[2];
        if (((byte)*puVar13 & 1) == 0) {
          pbVar17 = (byte *)((long)puVar13 + 1);
          uVar19 = (ulong)(byte)((byte)*puVar13 >> 1);
        }
        FUN_02762710(param_2,pbVar17,uVar19);
      }
      *(ulong *)(lVar15 + lVar6 * 8 + 0x20) = puVar13[4];
      return param_2;
    }
    plVar3 = (long *)FUN_00612290();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(long **)(lVar15 + lVar6 * 8 + 0x18) = plVar3;
    if ((*param_3 & 1) == 0) {
      uVar18 = param_3[1];
      uVar19 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar18;
      *param_2 = uVar19;
      goto LAB_0062bed0;
    }
    uVar19 = param_3[1];
    if (0xffffffffffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar14 = (void *)param_3[2];
    if (uVar19 < 0x17) {
      pbVar17 = (byte *)((long)param_2 + 1);
      *(byte *)param_2 = (byte)((int)uVar19 << 1);
      if (uVar19 != 0) goto LAB_0062bebc;
    }
    else {
      uVar18 = uVar19 + 0x10 & 0xfffffffffffffff0;
      pbVar17 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar18,1);
      lVar16 = lVar15 + lVar6 * 8;
      *(ulong *)(lVar16 + 8) = uVar19;
      *(byte **)(lVar16 + 0x10) = pbVar17;
      *param_2 = uVar18 | 1;
LAB_0062bebc:
      memcpy(pbVar17,pvVar14,uVar19);
    }
    pbVar17[uVar19] = 0;
LAB_0062bed0:
    *(ulong *)(lVar15 + lVar6 * 8 + 0x20) = param_3[4];
    param_1[1] = param_1[1] + 0x28;
    return param_2;
  }
  uVar7 = ((long)puVar13 - lVar15 >> 3) * -0x3333333333333333 + 1;
  uVar18 = 0x666666666666666;
  if (0x666666666666666 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = param_1[2] - lVar15 >> 3;
  if ((ulong)(lVar9 * -0x3333333333333333) < 0x333333333333333) {
    uVar4 = lVar9 * -0x6666666666666666;
    uVar18 = uVar7;
    if (uVar7 <= uVar4) {
      uVar18 = uVar4;
    }
    if (uVar18 != 0) goto LAB_0062bb94;
    lVar9 = 0;
  }
  else {
LAB_0062bb94:
    lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar18 * 0x28,8);
  }
  puVar13 = (ulong *)(lVar9 + lVar6 * 8);
  lVar20 = lVar9 + uVar18 * 0x28;
  if (uVar19 == uVar18) {
    if ((long)uVar19 < 1) {
      uVar19 = lVar6 * -0x6666666666666666;
      if (lVar16 == 0) {
        uVar19 = 1;
      }
      lVar20 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar19 * 0x28,8);
      puVar13 = (ulong *)(lVar20 + (uVar19 >> 2) * 0x28);
      lVar20 = lVar20 + uVar19 * 0x28;
      if (lVar9 != 0) {
        (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar9,lVar16,8);
      }
    }
    else {
      lVar16 = uVar19 + 2;
      if (-1 < (long)(uVar19 + 1)) {
        lVar16 = uVar19 + 1;
      }
      puVar13 = puVar13 + (lVar16 >> 1) * -5;
    }
  }
  plVar3 = (long *)FUN_00612290();
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = (ulong)plVar3;
  if ((*param_3 & 1) == 0) {
    uVar18 = param_3[1];
    uVar19 = *param_3;
    puVar13[2] = param_3[2];
    puVar13[1] = uVar18;
    *puVar13 = uVar19;
    goto LAB_0062bd54;
  }
  uVar19 = param_3[1];
  if (0xffffffffffffffef < uVar19) {
                    /* try { // try from 0062bf14 to 0062bf1b has its CatchHandler @ 0062bf24 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar14 = (void *)param_3[2];
  if (uVar19 < 0x17) {
    pbVar17 = (byte *)((long)puVar13 + 1);
    *(byte *)puVar13 = (byte)((int)uVar19 << 1);
    if (uVar19 != 0) goto LAB_0062bd40;
  }
  else {
    uVar18 = uVar19 + 0x10 & 0xfffffffffffffff0;
    pbVar17 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar18,1);
    *puVar13 = uVar18 | 1;
    puVar13[1] = uVar19;
    puVar13[2] = (ulong)pbVar17;
LAB_0062bd40:
    memcpy(pbVar17,pvVar14,uVar19);
  }
  pbVar17[uVar19] = 0;
LAB_0062bd54:
  puVar13[4] = param_3[4];
  puVar10 = (ulong *)*param_1;
  puVar5 = puVar13 + 5;
  if (puVar10 == param_2) {
    puVar11 = (ulong *)param_1[1];
    puVar10 = puVar13;
  }
  else {
    pbVar17 = (byte *)0x0;
    do {
      uVar22 = *(undefined8 *)((long)param_2 + (long)(pbVar17 + -0x20));
      uVar21 = *(undefined8 *)((long)param_2 + (long)(pbVar17 + -0x28));
      uVar23 = *(undefined8 *)((long)param_2 + (long)(pbVar17 + -0x18));
      pbVar8 = pbVar17 + -0x28;
      *(undefined8 *)((long)puVar13 + (long)(pbVar17 + -0x10)) =
           *(undefined8 *)((long)param_2 + (long)(pbVar17 + -0x10));
      *(undefined8 *)((long)puVar13 + (long)(pbVar17 + -0x18)) = uVar23;
      *(undefined8 *)((long)puVar13 + (long)(pbVar17 + -0x20)) = uVar22;
      *(undefined8 *)((long)puVar13 + (long)(pbVar17 + -0x28)) = uVar21;
      pbVar1 = (byte *)((long)param_2 + (long)(pbVar17 + -0x28));
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1 = (byte *)((long)param_2 + (long)(pbVar17 + -0x20));
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1 = (byte *)((long)param_2 + (long)(pbVar17 + -0x18));
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)((long)puVar13 + (long)(pbVar17 + -8)) =
           *(undefined8 *)((long)param_2 + (long)(pbVar17 + -8));
      pbVar17 = pbVar8;
    } while ((byte *)((long)puVar10 + (lVar6 * -8 - lVar15)) != pbVar8);
    puVar10 = (ulong *)((long)puVar13 + (long)pbVar8);
    puVar11 = (ulong *)param_1[1];
  }
  if (puVar11 != param_2) {
    do {
      uVar19 = *param_2;
      uVar7 = param_2[3];
      uVar18 = param_2[2];
      puVar5[1] = param_2[1];
      *puVar5 = uVar19;
      puVar5[3] = uVar7;
      puVar5[2] = uVar18;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar12 = param_2 + 5;
      *param_2 = 0;
      puVar5[4] = param_2[4];
      puVar5 = puVar5 + 5;
      param_2 = puVar12;
    } while (puVar12 != puVar11);
    param_2 = (ulong *)param_1[1];
  }
  puVar11 = (ulong *)*param_1;
  *param_1 = (long)puVar10;
  param_1[1] = (long)puVar5;
  lVar15 = param_1[2];
  param_1[2] = lVar20;
  if (param_2 != puVar11) {
    bVar2 = (byte)param_2[-5];
    puVar5 = param_2 + -5;
    while( true ) {
      puVar10 = puVar5;
      if ((bVar2 & 1) != 0) {
        (**(code **)(*(long *)param_2[-2] + 0x18))
                  ((long *)param_2[-2],param_2[-3],param_2[-5] & 0xfffffffffffffffe,1);
      }
      if (puVar11 == puVar10) break;
      bVar2 = (byte)puVar10[-5];
      puVar5 = puVar10 + -5;
      param_2 = puVar10;
    }
  }
  if (puVar11 != (ulong *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar11,lVar15 - (long)puVar11,8);
  }
  return puVar13;
}


