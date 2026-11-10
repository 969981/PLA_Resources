/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e09080; name: FUN_02e09080
 */


void FUN_02e09080(undefined8 *param_1,long *param_2,long *param_3,long param_4,long param_5,
                 int *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  void *__src;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined1 auStack_88 [8];
  
  uVar5 = *(ushort *)((long)param_2 + 0x12);
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)(param_1 + 4);
  __src = (void *)*param_2;
  uVar18 = (uint)uVar5;
  if (uVar5 != 0) {
    fVar32 = 1.0 / (float)uVar5;
    fVar33 = *(float *)(param_4 + 4);
    fVar34 = *(float *)(param_4 + 8);
    fVar35 = *(float *)(param_4 + 0x10);
    fVar36 = *(float *)(param_4 + 0x14);
    fVar37 = (*(float *)(param_5 + 0x10) - fVar35) * fVar32;
    fVar44 = (*(float *)(param_5 + 8) - fVar34) * fVar32;
    fVar48 = (*(float *)(param_5 + 0x14) - fVar36) * fVar32;
    fVar32 = (*(float *)(param_5 + 4) - fVar33) * fVar32;
    fVar38 = fVar32 + fVar33;
    fVar39 = fVar38 + fVar32;
    fVar61 = fVar44 + fVar34;
    fVar51 = fVar32 * 4.0;
    fVar32 = fVar39 + fVar32;
    fVar56 = fVar44 * 4.0;
    fVar40 = fVar37 + fVar35;
    fVar41 = fVar40 + fVar37;
    fVar52 = fVar61 + fVar44;
    fVar44 = fVar52 + fVar44;
    fVar45 = fVar48 + fVar36;
    fVar53 = fVar45 + fVar48;
    fVar42 = fVar41 + fVar37;
    fVar37 = fVar37 * 4.0;
    fVar43 = fVar48 * 4.0;
    fVar48 = fVar53 + fVar48;
    uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
    uVar11 = (ulong)*(uint *)((long)param_1 + 0x24);
    lVar12 = *param_3;
    uVar9 = uVar2 - *(uint *)((long)param_1 + 0xc);
    uVar6 = uVar3 - *(uint *)((long)param_1 + 0x24);
    lVar13 = lVar12 + (ulong)*(ushort *)(param_3 + 2) * 4;
    pvVar14 = (void *)((long)__src + (ulong)*(ushort *)(param_2 + 2) * 4);
    lVar15 = *(long *)param_1[3] + uVar11 * 4;
    lVar16 = *(long *)*param_1 + uVar10 * 4;
    if (uVar6 <= uVar9) {
      uVar9 = uVar6;
    }
    uVar6 = uVar18;
    do {
      uVar7 = uVar6;
      if (uVar9 <= uVar6) {
        uVar7 = uVar9;
      }
      if (uVar7 >> 2 != 0) {
        lVar17 = 0;
        uVar9 = 0;
        do {
          uVar47 = ((undefined8 *)(lVar16 + lVar17))[1];
          uVar46 = *(undefined8 *)(lVar16 + lVar17);
          uVar9 = uVar9 + 1;
          uVar50 = ((undefined8 *)(lVar15 + lVar17))[1];
          uVar49 = *(undefined8 *)(lVar15 + lVar17);
          uVar55 = ((undefined8 *)((long)__src + lVar17))[1];
          uVar54 = *(undefined8 *)((long)__src + lVar17);
          fVar20 = fVar33 * (float)uVar46;
          fVar58 = (float)((ulong)uVar46 >> 0x20);
          fVar23 = fVar38 * fVar58;
          fVar26 = fVar39 * (float)uVar47;
          fVar60 = (float)((ulong)uVar47 >> 0x20);
          fVar29 = fVar32 * fVar60;
          fVar57 = (float)uVar46 * fVar34;
          fVar58 = fVar58 * fVar61;
          fVar59 = (float)uVar47 * fVar52;
          fVar60 = fVar60 * fVar44;
          fVar21 = fVar35 * (float)uVar49;
          fVar25 = (float)((ulong)uVar49 >> 0x20);
          fVar24 = fVar40 * fVar25;
          fVar27 = fVar41 * (float)uVar50;
          fVar31 = (float)((ulong)uVar50 >> 0x20);
          fVar30 = fVar42 * fVar31;
          uVar63 = ((undefined8 *)((long)pvVar14 + lVar17))[1];
          uVar62 = *(undefined8 *)((long)pvVar14 + lVar17);
          fVar22 = fVar36 * (float)uVar49;
          fVar25 = fVar45 * fVar25;
          fVar28 = fVar53 * (float)uVar50;
          fVar31 = fVar48 * fVar31;
          ((undefined8 *)(lVar12 + lVar17))[1] = uVar47;
          *(undefined8 *)(lVar12 + lVar17) = uVar46;
          ((undefined8 *)(lVar13 + lVar17))[1] = uVar50;
          *(undefined8 *)(lVar13 + lVar17) = uVar49;
          fVar33 = fVar33 + fVar51;
          fVar38 = fVar38 + fVar51;
          fVar39 = fVar39 + fVar51;
          fVar32 = fVar32 + fVar51;
          fVar34 = fVar34 + fVar56;
          fVar61 = fVar61 + fVar56;
          fVar52 = fVar52 + fVar56;
          fVar44 = fVar44 + fVar56;
          fVar35 = fVar35 + fVar37;
          fVar40 = fVar40 + fVar37;
          fVar41 = fVar41 + fVar37;
          fVar42 = fVar42 + fVar37;
          fVar36 = fVar36 + fVar43;
          fVar45 = fVar45 + fVar43;
          fVar53 = fVar53 + fVar43;
          fVar48 = fVar48 + fVar43;
          ((undefined8 *)((long)__src + lVar17))[1] =
               CONCAT44((float)((ulong)uVar55 >> 0x20) + fVar29 + fVar31,
                        (float)uVar55 + fVar26 + fVar28);
          *(undefined8 *)((long)__src + lVar17) =
               CONCAT44((float)((ulong)uVar54 >> 0x20) + fVar23 + fVar25,
                        (float)uVar54 + fVar20 + fVar22);
          ((undefined8 *)((long)pvVar14 + lVar17))[1] =
               CONCAT44(fVar60 + fVar30 + (float)((ulong)uVar63 >> 0x20),
                        fVar59 + fVar27 + (float)uVar63);
          *(undefined8 *)((long)pvVar14 + lVar17) =
               CONCAT44(fVar58 + fVar24 + (float)((ulong)uVar62 >> 0x20),
                        fVar57 + fVar21 + (float)uVar62);
          lVar17 = lVar17 + 0x10;
        } while (uVar9 < uVar7 >> 2);
        lVar16 = lVar16 + lVar17;
        lVar15 = lVar15 + lVar17;
        __src = (void *)((long)__src + lVar17);
        lVar12 = lVar12 + lVar17;
        pvVar14 = (void *)((long)pvVar14 + lVar17);
        lVar13 = lVar13 + lVar17;
      }
      uVar9 = uVar7 + (int)uVar10;
      uVar10 = (ulong)uVar9;
      uVar1 = uVar7 + (int)uVar11;
      uVar11 = (ulong)uVar1;
      if (uVar9 == uVar2) {
        uVar10 = 0;
        lVar16 = *(long *)*param_1;
      }
      if (uVar1 == uVar3) {
        uVar11 = 0;
        lVar15 = *(long *)param_1[3];
      }
      uVar6 = uVar6 - uVar7;
      uVar9 = uVar2 - (int)uVar10;
      uVar7 = uVar3 - (int)uVar11;
      if (uVar7 <= uVar9) {
        uVar9 = uVar7;
      }
    } while (uVar6 != 0);
    __src = (void *)*param_2;
  }
  uVar10 = (ulong)*(ushort *)(param_2 + 2);
  pvVar14 = (void *)((long)__src + uVar10 * 4);
  iVar4 = *param_6;
  if (iVar4 == 0) goto LAB_02e09290;
  if ((param_7 & 1) == 0) goto LAB_02e0950c;
  fVar39 = (float)param_6[1];
  fVar33 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xb));
  fVar38 = (float)param_6[3];
  fVar32 = fVar33 * 0.45;
  if ((float)param_6[2] <= fVar33 * 0.45) {
    fVar32 = (float)param_6[2];
  }
  if (iVar4 == 1) {
    if (fVar39 * 0.025 < -37.0) {
      fVar39 = 0.0;
    }
    else {
      uVar9 = (uint)(fVar39 * 696658.8 + 1.0653532e+09);
      fVar38 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar39 = (fVar38 * (fVar38 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar9 & 0xff800000);
    }
    fVar33 = (fVar32 * 6.2831855) / fVar33;
    fVar38 = sinf(fVar33);
    fVar32 = cosf(fVar33);
    fVar44 = fVar39 + -1.0;
    fVar61 = fVar39 + 1.0;
    fVar35 = fVar61 * fVar32;
    fVar34 = fVar39 * ((fVar44 - fVar35) + (fVar44 - fVar35));
    fVar38 = fVar38 * SQRT(fVar39) * 1.4142135;
    fVar52 = fVar61 - fVar44 * fVar32;
    fVar61 = fVar44 * fVar32 + fVar61;
    fVar33 = (fVar52 + fVar38) * fVar39;
    fVar39 = (fVar52 - fVar38) * fVar39;
    fVar32 = fVar61 + fVar38;
LAB_02e094d4:
    fVar52 = (fVar35 + fVar44) * -2.0;
    goto LAB_02e094e0;
  }
  fVar34 = 0.0;
  switch(iVar4) {
  case 2:
    fVar33 = (fVar32 * 6.2831855) / fVar33;
    fVar34 = cosf(fVar33);
    uVar9 = (uint)(fVar39 * 696658.8 + 1.0653532e+09);
    fVar32 = (float)(uVar9 & 0x7fffff | 0x3f800000);
    fVar61 = 0.0;
    if (-37.0 <= fVar39 * 0.025) {
      fVar61 = (fVar32 * (fVar32 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar9 & 0xff800000);
    }
    fVar32 = sinf(fVar33);
    fVar32 = fVar32 / (fVar38 + fVar38);
    fVar39 = fVar61 * fVar32;
    fVar32 = fVar32 / fVar61;
    fVar33 = fVar39 + 1.0;
    fVar39 = 1.0 - fVar39;
    goto LAB_02e09734;
  case 3:
    if (fVar39 * 0.025 < -37.0) {
      fVar39 = 0.0;
    }
    else {
      uVar9 = (uint)(fVar39 * 696658.8 + 1.0653532e+09);
      fVar38 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar39 = (fVar38 * (fVar38 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar9 & 0xff800000);
    }
    fVar33 = (fVar32 * 6.2831855) / fVar33;
    fVar38 = sinf(fVar33);
    fVar32 = cosf(fVar33);
    fVar44 = fVar39 + -1.0;
    fVar61 = fVar39 + 1.0;
    fVar35 = fVar61 * fVar32;
    fVar34 = fVar39 * -2.0 * (fVar35 + fVar44);
    fVar38 = fVar38 * SQRT(fVar39) * 1.4142135;
    fVar52 = fVar44 * fVar32 + fVar61;
    fVar61 = fVar61 - fVar44 * fVar32;
    fVar33 = (fVar52 + fVar38) * fVar39;
    fVar39 = (fVar52 - fVar38) * fVar39;
    fVar32 = fVar61 + fVar38;
    goto LAB_02e09650;
  case 4:
    fVar38 = tanf((fVar32 * 3.1415927) / fVar33);
    fVar38 = 1.0 / fVar38;
    fVar39 = fVar38 * 1.4142135;
    fVar38 = fVar38 * fVar38;
    fVar61 = fVar38 + 1.0;
    fVar33 = 1.0 / (fVar61 + fVar39);
    fVar34 = fVar33 + fVar33;
    goto LAB_02e09a8c;
  case 5:
    fVar38 = tanf((fVar32 * 3.1415927) / fVar33);
    fVar39 = fVar38 * 1.4142135;
    fVar38 = fVar38 * fVar38;
    fVar61 = fVar38 + 1.0;
    fVar33 = 1.0 / (fVar61 + fVar39);
    fVar34 = fVar33 * -2.0;
LAB_02e09a8c:
    fVar32 = 1.0;
    fVar52 = fVar34 - fVar34 * fVar38;
    fVar61 = fVar33 * (fVar61 - fVar39);
    fVar39 = fVar33;
    break;
  case 6:
    fVar33 = (fVar32 * 6.2831855) / fVar33;
    fVar52 = cosf(fVar33);
    fVar33 = sinf(fVar33);
    fVar33 = fVar33 / (fVar38 + fVar38);
    fVar52 = fVar52 * -2.0;
    fVar32 = fVar33 + 1.0;
    fVar61 = 1.0 - fVar33;
    fVar39 = -fVar33;
    break;
  case 7:
    fVar33 = (fVar32 * 6.2831855) / fVar33;
    fVar34 = cosf(fVar33);
    fVar32 = sinf(fVar33);
    fVar32 = fVar32 / (fVar38 + fVar38);
    fVar33 = 1.0;
    fVar39 = 1.0;
LAB_02e09734:
    fVar61 = 1.0 - fVar32;
    fVar34 = fVar34 * -2.0;
    fVar32 = fVar32 + 1.0;
    fVar52 = fVar34;
    break;
  case 8:
    if (fVar39 * 0.025 < -37.0) {
      fVar39 = 0.0;
    }
    else {
      uVar9 = (uint)(fVar39 * 696658.8 + 1.0653532e+09);
      fVar39 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar39 = (fVar39 * (fVar39 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar9 & 0xff800000);
    }
    fVar33 = (fVar32 * 6.2831855) / fVar33;
    fVar32 = sinf(fVar33);
    fVar33 = cosf(fVar33);
    fVar44 = fVar39 + -1.0;
    fVar61 = fVar39 + 1.0;
    fVar35 = fVar61 * fVar33;
    fVar34 = fVar39 * ((fVar44 - fVar35) + (fVar44 - fVar35));
    fVar38 = (fVar32 * (SQRT(fVar39) + SQRT(fVar39))) / (fVar38 + fVar38);
    fVar32 = fVar61 - fVar44 * fVar33;
    fVar61 = fVar44 * fVar33 + fVar61;
    fVar33 = (fVar38 + fVar32) * fVar39;
    fVar39 = (fVar32 - fVar38) * fVar39;
    fVar32 = fVar38 + fVar61;
    goto LAB_02e094d4;
  case 9:
    if (fVar39 * 0.025 < -37.0) {
      fVar39 = 0.0;
    }
    else {
      uVar9 = (uint)(fVar39 * 696658.8 + 1.0653532e+09);
      fVar39 = (float)(uVar9 & 0x7fffff | 0x3f800000);
      fVar39 = (fVar39 * (fVar39 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar9 & 0xff800000);
    }
    fVar33 = (fVar32 * 6.2831855) / fVar33;
    fVar32 = sinf(fVar33);
    fVar33 = cosf(fVar33);
    fVar44 = fVar39 + -1.0;
    fVar38 = (fVar32 * (SQRT(fVar39) + SQRT(fVar39))) / (fVar38 + fVar38);
    fVar61 = fVar39 + 1.0;
    fVar35 = fVar61 * fVar33;
    fVar52 = fVar44 * fVar33 + fVar61;
    fVar61 = fVar61 - fVar44 * fVar33;
    fVar32 = fVar38 + fVar61;
    fVar33 = (fVar38 + fVar52) * fVar39;
    fVar34 = fVar39 * -2.0 * (fVar35 + fVar44);
    fVar39 = (fVar52 - fVar38) * fVar39;
LAB_02e09650:
    fVar52 = (fVar44 - fVar35) + (fVar44 - fVar35);
LAB_02e094e0:
    fVar61 = fVar61 - fVar38;
    break;
  default:
    fVar61 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar39 = 0.0;
    fVar52 = 0.0;
  }
  fVar32 = 1.0 / fVar32;
  FUN_02e09ab0(fVar33 * fVar32,fVar34 * fVar32,fVar39 * fVar32,fVar52 * fVar32,fVar61 * fVar32,
               param_1 + 6);
  uVar10 = (ulong)*(ushort *)(param_2 + 2);
LAB_02e0950c:
  FUN_02e09c70(param_1 + 6,__src,uVar18,uVar10,auStack_88);
LAB_02e09290:
  uVar6 = *(uint *)((long)param_1 + 0xc);
  uVar1 = uVar2 - uVar6;
  uVar7 = *(uint *)((long)param_1 + 0x24);
  uVar8 = uVar3 - uVar7;
  uVar19 = (uint)uVar5;
  uVar9 = uVar19;
  if (uVar1 <= uVar19) {
    uVar9 = uVar1;
  }
  memcpy((void *)(*(long *)*param_1 + (ulong)uVar6 * 4),__src,(ulong)(uVar9 << 2));
  if (uVar1 < uVar19) {
    memcpy(*(void **)*param_1,(void *)((long)__src + (ulong)uVar1 * 4),(ulong)((uVar18 - uVar1) * 4)
          );
  }
  uVar9 = uVar19;
  if (uVar8 < uVar18 || uVar8 == uVar19) {
    uVar9 = uVar8;
  }
  memcpy((void *)(*(long *)param_1[3] + (ulong)uVar7 * 4),pvVar14,(ulong)(uVar9 << 2));
  if (uVar8 < uVar19) {
    memcpy(*(void **)param_1[3],(void *)((long)pvVar14 + (ulong)uVar8 * 4),
           (ulong)((uVar19 - uVar8) * 4));
  }
  uVar9 = 0;
  if (uVar2 != 0) {
    uVar9 = (uVar6 + uVar18) / uVar2;
  }
  *(uint *)((long)param_1 + 0xc) = (uVar6 + uVar18) - uVar9 * uVar2;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = (uVar7 + uVar18) / uVar3;
  }
  *(uint *)((long)param_1 + 0x24) = (uVar7 + uVar18) - uVar2 * uVar3;
  return;
}


