/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307583c; name: FUN_0307583c
 */


void FUN_0307583c(undefined8 *param_1,long param_2,undefined8 *param_3,uint *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  uint local_68 [2];
  
  puVar12 = (undefined8 *)param_1[0x67];
  auVar20 = NEON_fmov(0x3f800000,4);
  uVar9 = auVar20._8_8_;
  uVar8 = auVar20._0_8_;
  if (puVar12 == param_3) {
    uVar11 = 0;
    goto LAB_03075a1c;
  }
  bVar4 = *(byte *)((long)param_3 + 0x89);
  if ((puVar12 == (undefined8 *)0x0) || (*(byte *)((long)puVar12 + 0x89) != bVar4)) {
    lVar15 = *(long *)(param_2 + 0x10);
    uVar7 = (ulong)bVar4;
    if (*(int *)(lVar15 + (ulong)bVar4 * 0x40 + 0x18) <=
        *(int *)(lVar15 + (ulong)*(byte *)(param_1[0x60] + 0x89) * 0x40 + 0x18)) {
      uVar7 = (ulong)*(byte *)(param_1[0x60] + 0x89);
    }
    lVar15 = lVar15 + uVar7 * 0x40;
    uVar2 = *(undefined4 *)(lVar15 + 0x38);
    param_1[0x372] = *(undefined8 *)(lVar15 + 0x30);
    *(undefined4 *)(param_1 + 0x373) = uVar2;
  }
  param_1[0x67] = param_3;
  param_1[0x220] = 0;
  param_1[0x1fa] = 0;
  *(undefined4 *)(param_1 + 0x21b) = 0;
  param_1[0x21c] = 8;
  uVar16 = *param_3;
  param_1[0x1f1] = param_3[1];
  param_1[0x1f0] = uVar16;
  uVar16 = param_3[2];
  param_1[499] = param_3[3];
  param_1[0x1f2] = uVar16;
  uVar16 = param_3[4];
  param_1[0x1f5] = param_3[5];
  param_1[500] = uVar16;
  uVar16 = param_3[6];
  param_1[0x1f7] = param_3[7];
  param_1[0x1f6] = uVar16;
  auVar20 = *(undefined1 (*) [16])(param_3 + 8);
  param_1[0x21f] = uVar9;
  param_1[0x21e] = uVar8;
  param_1[0x1f9] = auVar20._8_8_;
  param_1[0x1f8] = auVar20._0_8_;
  local_78 = 0x34000000;
  uVar7 = FUN_032c91c4(param_3,&DAT_03aae430,&local_78);
  if ((uVar7 & 1) != 0) {
    uVar11 = *(uint *)(param_1 + 0x21c);
    *(uint *)(param_1 + 0x21c) = uVar11 | 4;
    if (ABS(*(float *)(param_3 + 7)) <= 1.1920929e-07 &&
        (ABS(*(float *)(param_3 + 6)) <= 1.1920929e-07 &&
        ABS(*(float *)((long)param_3 + 0x34)) <= 1.1920929e-07)) {
      *(uint *)(param_1 + 0x21c) = uVar11 | 5;
    }
  }
  *(undefined2 *)(param_1 + 0x36f) = 0xffff;
  lVar15 = *(long *)(param_1[0x60] + 0x78);
  if (*(char *)(lVar15 + 0x18) == '\x15') {
    uVar11 = 0xffffffff;
    if (lVar15 != 0) {
      bVar4 = *(byte *)((long)param_4 + 0xe) >> 5;
      plVar13 = (long *)(lVar15 + (ulong)bVar4 * 8 + 0x48);
      lVar15 = *plVar13;
      if (lVar15 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar15 + (long)plVar13;
      }
      uVar11 = (uint)bVar4 << 0x1d | 0x1fffffff;
    }
LAB_030759ac:
    *(uint *)(param_1 + 99) = uVar11;
    param_1[100] = lVar15;
    bVar4 = *(byte *)((long)param_4 + 0xe);
    param_1[0x67] = param_3;
    lVar14 = param_3[0xf];
    if ((lVar14 == 0) || (*(char *)(lVar14 + 0x18) != '\x15')) {
      *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
      param_1[0x6b] = lVar14;
    }
    else {
      plVar13 = (long *)(lVar14 + ((ulong)(bVar4 >> 2) & 7) * 8 + 0x48);
      lVar14 = *plVar13;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar14 + (long)plVar13;
      }
      param_1[0x6b] = lVar14;
      *(uint *)(param_1 + 0x6a) = (uint)(bVar4 >> 2) << 0x1d | 0x1fffffff;
    }
    if (*(char *)(lVar15 + 0x19) == '\x02') {
      param_1[0x65] = lVar15;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar15 + 0x18) * 0x200 + 0xa8))
                (lVar15,param_1 + 0x374,param_1 + 0x37c,param_1 + 0x4f6);
    }
  }
  else {
    if (*(char *)(param_3[0xf] + 0x18) == '\x15') {
      uVar11 = 0xffffffff;
      goto LAB_030759ac;
    }
    param_1[0x67] = param_3;
    lVar15 = param_3[0xf];
    if ((lVar15 == 0) || (*(char *)(lVar15 + 0x18) != '\x15')) {
      *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
      param_1[0x6b] = lVar15;
    }
    else {
      lVar14 = *(long *)(lVar15 + 0x50);
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar14 + lVar15 + 0x50;
      }
      param_1[0x6b] = lVar14;
      *(undefined4 *)(param_1 + 0x6a) = 0x3fffffff;
    }
  }
  uVar11 = 1;
LAB_03075a1c:
  lVar15 = param_1[0x6b];
  if (*(char *)(lVar15 + 0x19) == '\x02') {
    lVar14 = *(long *)(param_2 + 0x20);
    uVar5 = *(ushort *)(param_1[0x67] + 0x8a);
    param_1[0x6c] = lVar15;
    param_1[0x69] = lVar14 + (ulong)uVar5 * 0x50;
  }
  else {
    local_68[0] = *param_4;
    uVar3 = *(uint *)(param_1 + 0x21c);
    lVar15 = *(long *)(param_1[0x67] + 0x78);
    *(uint *)(param_1 + 0x6a) = local_68[0];
    if (*(char *)(lVar15 + 0x18) == '\x15') {
      plVar13 = (long *)(lVar15 + ((ulong)(local_68[0] >> 0x1a) & 0x38) + 0x48);
      lVar15 = *plVar13;
      if (lVar15 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar15 + (long)plVar13;
      }
    }
    param_1[0x6b] = lVar15;
    param_1[0x220] = 0;
    param_1[0x1fa] = 0;
    *(undefined4 *)(param_1 + 0x21b) = 0;
    param_1[0x21c] = 8;
    uVar16 = *param_3;
    param_1[0x1f1] = param_3[1];
    param_1[0x1f0] = uVar16;
    uVar16 = param_3[2];
    param_1[499] = param_3[3];
    param_1[0x1f2] = uVar16;
    uVar16 = param_3[4];
    param_1[0x1f5] = param_3[5];
    param_1[500] = uVar16;
    uVar16 = param_3[6];
    param_1[0x1f7] = param_3[7];
    param_1[0x1f6] = uVar16;
    auVar20 = *(undefined1 (*) [16])(param_3 + 8);
    param_1[0x21f] = uVar9;
    param_1[0x21e] = uVar8;
    param_1[0x1f9] = auVar20._8_8_;
    param_1[0x1f8] = auVar20._0_8_;
    local_78 = 0x34000000;
    uVar7 = FUN_032c91c4(param_3,&DAT_03aae430,&local_78);
    if ((uVar7 & 1) != 0) {
      uVar10 = *(uint *)(param_1 + 0x21c);
      *(uint *)(param_1 + 0x21c) = uVar10 | 4;
      if (ABS(*(float *)(param_3 + 7)) <= 1.1920929e-07 &&
          (ABS(*(float *)(param_3 + 6)) <= 1.1920929e-07 &&
          ABS(*(float *)((long)param_3 + 0x34)) <= 1.1920929e-07)) {
        *(uint *)(param_1 + 0x21c) = uVar10 | 5;
      }
    }
    *(undefined2 *)(param_1 + 0x36f) = 0xffff;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_1[0x67] + 0x78) + 0x18) * 0x200 +
                0xb8))(*(long *)(param_1[0x67] + 0x78),local_68,1,param_1 + 0x1f0);
    uVar10 = *(uint *)(param_1 + 0x21c);
    if ((uVar10 >> 4 & 1) == 0) {
      lVar15 = param_1[0x220];
    }
    else {
      lVar15 = FUN_02fed7a0(param_1 + 0x1f0,0,param_1 + 0x3e);
      uVar10 = *(uint *)(param_1 + 0x21c);
    }
    param_1[0x6c] = lVar15;
    lVar14 = *(long *)(param_2 + 0x20);
    uVar11 = uVar3 & 2 | uVar11 | uVar10 & 2;
    param_1[0x69] = lVar14 + (ulong)*(ushort *)((long)param_4 + 0x16) * 0x50;
  }
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar15 + 0x18) * 0x200 + 0xa8))
            (lVar15,param_1 + 0x4f6,param_1 + 0x4fe,param_1 + 0x678);
  if ((*(char *)(param_1[100] + 0x19) != '\x02') &&
     (local_68[0] = param_4[1], local_68[0] != *(uint *)(param_1 + 99))) {
    uVar3 = *(uint *)(param_1 + 0x9a);
    lVar15 = *(long *)(param_1[0x60] + 0x78);
    *(uint *)(param_1 + 99) = local_68[0];
    if (*(char *)(lVar15 + 0x18) == '\x15') {
      plVar13 = (long *)(lVar15 + ((ulong)(local_68[0] >> 0x1a) & 0x38) + 0x48);
      lVar15 = *plVar13;
      if (lVar15 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar15 + (long)plVar13;
      }
    }
    param_1[0x6f] = param_1[1];
    param_1[0x6e] = *param_1;
    param_1[0x71] = param_1[3];
    param_1[0x70] = param_1[2];
    param_1[0x73] = param_1[5];
    param_1[0x72] = param_1[4];
    param_1[0x75] = param_1[7];
    param_1[0x74] = param_1[6];
    param_1[0x77] = param_1[9];
    param_1[0x76] = param_1[8];
    param_1[0x9a] = 8;
    param_1[100] = lVar15;
    param_1[0x9e] = 0;
    param_1[0x78] = 0;
    *(undefined4 *)(param_1 + 0x99) = 0;
    param_1[0x9d] = uVar9;
    param_1[0x9c] = uVar8;
    local_78 = 0x34000000;
    uVar7 = FUN_032c91c4(param_1,&DAT_03aae430,&local_78);
    if ((uVar7 & 1) != 0) {
      uVar10 = *(uint *)(param_1 + 0x9a);
      *(uint *)(param_1 + 0x9a) = uVar10 | 4;
      if (ABS(*(float *)(param_1 + 7)) <= 1.1920929e-07 &&
          (ABS(*(float *)(param_1 + 6)) <= 1.1920929e-07 &&
          ABS(*(float *)((long)param_1 + 0x34)) <= 1.1920929e-07)) {
        *(uint *)(param_1 + 0x9a) = uVar10 | 5;
      }
    }
    *(undefined2 *)(param_1 + 0x1ed) = 0xffff;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_1[0x60] + 0x78) + 0x18) * 0x200 +
                0xb8))(*(long *)(param_1[0x60] + 0x78),local_68,1,param_1 + 0x6e);
    if ((*(byte *)(param_1 + 0x9a) >> 4 & 1) == 0) {
      lVar15 = param_1[0x9e];
    }
    else {
      lVar15 = FUN_02fed7a0(param_1 + 0x6e,0,param_1 + 0x1c);
    }
    param_1[0x65] = lVar15;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar15 + 0x18) * 0x200 + 0xa8))
              (lVar15,param_1 + 0x374,param_1 + 0x37c,param_1 + 0x4f6);
    uVar10 = local_68[0];
    lVar15 = param_1[0x60];
    plVar13 = *(long **)(param_2 + 0x48);
    uVar11 = uVar3 & 2 | uVar11 | *(uint *)(param_1 + 0x9a) & 2;
    local_78 = CONCAT22(local_78._2_2_,*(undefined2 *)(lVar15 + 0x8a));
    local_74 = *(undefined4 *)(lVar15 + 0x8c);
    local_70 = *(undefined8 *)(lVar15 + 0x98);
    uVar3 = *(uint *)(param_1 + 0x99);
    uVar6 = *(undefined2 *)(param_1 + 0x1ed);
    uVar16 = *(undefined8 *)(lVar15 + 0x78);
    uVar8 = param_1[0x78];
    uVar9 = param_1[0x65];
    if (0 < (int)uVar3) {
      bVar4 = *(byte *)(param_1[0x7a] + 0x1c);
      uVar7 = (ulong)bVar4;
      uVar18 = (*(int *)(param_1 + 0x7b) + 1 << (ulong)(-(uint)bVar4 & 0x1f)) - 1U | DAT_03aa74b0;
      (**(code **)(*plVar13 + 0x40))
                (plVar13,*(undefined2 *)(param_1 + 0x79),6,lVar15,uVar16,param_1[0x7a],uVar18,
                 param_1[0x7c],&local_78);
      if (uVar3 != 1) {
        lVar17 = (ulong)uVar3 - 1;
        puVar12 = param_1 + 0x80;
        do {
          puVar1 = &DAT_03aa74b0 + uVar7;
          uVar3 = (int)uVar7 + (uint)*(byte *)(puVar12[-2] + 0x1c);
          uVar7 = (ulong)uVar3;
          uVar18 = (*(int *)(puVar12 + -1) + 1 << (ulong)(-uVar3 & 0x1f)) - 1U | *puVar1 & uVar18;
          (**(code **)(*plVar13 + 0x40))
                    (plVar13,*(undefined2 *)(puVar12 + -3),6,lVar15,uVar16,puVar12[-2],uVar18,
                     *puVar12,&local_78);
          lVar17 = lVar17 + -1;
          puVar12 = puVar12 + 4;
        } while (lVar17 != 0);
      }
    }
    (**(code **)(*plVar13 + 0x40))(plVar13,uVar6,6,lVar15,uVar16,uVar8,uVar10,uVar9,&local_78);
    param_1[0x62] = lVar14 + (ulong)(ushort)local_78 * 0x50;
  }
  if (uVar11 != 0) {
    FUN_032ca574(param_1 + 10,param_1[0x6d],param_1[0x66]);
    fVar19 = *(float *)(param_1[0x65] + 0x20) + *(float *)(param_1[0x6c] + 0x20);
    param_1[0x1a] = CONCAT44(fVar19,fVar19);
  }
  return;
}


