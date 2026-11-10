/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c8300; name: FUN_030c8300
 */


void FUN_030c8300(long param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  bool bVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined1 (*pauVar34) [12];
  long *plVar35;
  uint uVar36;
  undefined8 *puVar37;
  int *piVar38;
  uint *puVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  long *plVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined1 auStack_90 [8];
  long local_88;
  uint local_80;
  undefined1 auStack_78 [8];
  long local_70;
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x290) + 0x738);
  local_80 = (uint)(iVar2 != 0);
  if (iVar2 != 0) {
    FUN_032d5acc(auStack_90);
  }
  uVar44 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(*param_2 + 0x90),
                                      (uint)*(ushort *)(*param_2 + 0x90)),4);
  uVar30 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x50);
  uVar19 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(*param_3 + 0x90),
                                      (uint)*(ushort *)(*param_3 + 0x90)),4);
  local_f8 = CONCAT44((float)((ulong)uVar30 >> 0x20) *
                      ((float)((ulong)uVar44 >> 0x20) + (float)((ulong)uVar19 >> 0x20)),
                      (float)uVar30 * ((float)uVar44 + (float)uVar19));
  fVar46 = *(float *)(param_2[5] + 0x20);
  fVar47 = *(float *)(param_3[5] + 0x20);
  local_110 = CONCAT44(fVar46,fVar46);
  uStack_108 = CONCAT44(fVar47,fVar47);
  local_100 = CONCAT44(fVar46 + fVar47,fVar46 + fVar47);
  pauVar34 = (undefined1 (*) [12])param_3[6];
  uVar52 = (undefined4)((ulong)*(undefined8 *)(pauVar34[3] + 4) >> 0x20);
  uVar49 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
  uVar51 = (undefined4)((ulong)*(undefined8 *)pauVar34[2] >> 0x20);
  auVar9._12_4_ = uVar51;
  auVar9._0_12_ = *(undefined1 (*) [12])(pauVar34[1] + 4);
  auVar10._12_4_ = uVar51;
  auVar10._0_12_ = *(undefined1 (*) [12])(pauVar34[1] + 4);
  NEON_ext(auVar9,auVar10,8,1);
  auVar53._12_4_ = uVar49;
  auVar53._0_12_ = *pauVar34;
  auVar54._12_4_ = uVar49;
  auVar54._0_12_ = *pauVar34;
  NEON_ext(auVar53,auVar54,8,1);
  auVar20._12_4_ = uVar52;
  auVar20._0_12_ = *(undefined1 (*) [12])(pauVar34[2] + 8);
  auVar21._12_4_ = uVar52;
  auVar21._0_12_ = *(undefined1 (*) [12])(pauVar34[2] + 8);
  NEON_ext(auVar20,auVar21,8,1);
  puVar37 = (undefined8 *)param_2[6];
  uVar49 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
  pauVar4 = (undefined1 (*) [12])(pauVar34[1] + 4);
  uVar51 = (undefined4)((ulong)*(undefined8 *)pauVar34[2] >> 0x20);
  pauVar1 = (undefined1 (*) [12])(pauVar34[2] + 8);
  uVar52 = (undefined4)((ulong)*(undefined8 *)(pauVar34[3] + 4) >> 0x20);
  fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar11._12_4_ = uVar51;
  auVar11._0_12_ = *pauVar4;
  auVar12._12_4_ = uVar51;
  auVar12._0_12_ = *pauVar4;
  auVar54 = NEON_ext(auVar11,auVar12,8,1);
  auVar55._12_4_ = uVar49;
  auVar55._0_12_ = *pauVar34;
  auVar56._12_4_ = uVar49;
  auVar56._0_12_ = *pauVar34;
  auVar53 = NEON_ext(auVar55,auVar56,8,1);
  auVar22._12_4_ = uVar52;
  auVar22._0_12_ = *pauVar1;
  auVar23._12_4_ = uVar52;
  auVar23._0_12_ = *pauVar1;
  auVar55 = NEON_ext(auVar22,auVar23,8,1);
  fVar48 = (float)puVar37[5];
  fVar46 = (float)puVar37[4];
  fVar47 = (float)((ulong)puVar37[4] >> 0x20);
  uStack_c8 = CONCAT44(auVar55._4_4_ * fVar48 + fVar50 * fVar46 + auVar55._4_4_ * fVar47,
                       auVar55._0_4_ * fVar48 +
                       (float)*(undefined8 *)*pauVar1 * fVar46 + fVar50 * fVar47);
  local_d0 = CONCAT44(auVar54._0_4_ * fVar48 +
                      (float)*(undefined8 *)*pauVar4 * fVar46 +
                      (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20) * fVar47,
                      auVar53._0_4_ * fVar48 +
                      (float)*(undefined8 *)*pauVar34 * fVar46 +
                      (float)((ulong)*(undefined8 *)*pauVar34 >> 0x20) * fVar47);
  uVar49 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
  pauVar4 = (undefined1 (*) [12])(pauVar34[1] + 4);
  uVar51 = (undefined4)((ulong)*(undefined8 *)pauVar34[2] >> 0x20);
  pauVar1 = (undefined1 (*) [12])(pauVar34[2] + 8);
  uVar52 = (undefined4)((ulong)*(undefined8 *)(pauVar34[3] + 4) >> 0x20);
  fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar13._12_4_ = uVar51;
  auVar13._0_12_ = *pauVar4;
  auVar14._12_4_ = uVar51;
  auVar14._0_12_ = *pauVar4;
  auVar54 = NEON_ext(auVar13,auVar14,8,1);
  auVar5._12_4_ = uVar49;
  auVar5._0_12_ = *pauVar34;
  auVar6._12_4_ = uVar49;
  auVar6._0_12_ = *pauVar34;
  auVar53 = NEON_ext(auVar5,auVar6,8,1);
  auVar24._12_4_ = uVar52;
  auVar24._0_12_ = *pauVar1;
  auVar25._12_4_ = uVar52;
  auVar25._0_12_ = *pauVar1;
  auVar55 = NEON_ext(auVar24,auVar25,8,1);
  fVar48 = (float)puVar37[3];
  fVar46 = (float)puVar37[2];
  fVar47 = (float)((ulong)puVar37[2] >> 0x20);
  uStack_d8 = CONCAT44(auVar55._4_4_ * fVar48 + fVar50 * fVar46 + auVar55._4_4_ * fVar47,
                       auVar55._0_4_ * fVar48 +
                       (float)*(undefined8 *)*pauVar1 * fVar46 + fVar50 * fVar47);
  local_e0 = CONCAT44(auVar54._0_4_ * fVar48 +
                      (float)*(undefined8 *)*pauVar4 * fVar46 +
                      (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20) * fVar47,
                      auVar53._0_4_ * fVar48 +
                      (float)*(undefined8 *)*pauVar34 * fVar46 +
                      (float)((ulong)*(undefined8 *)*pauVar34 >> 0x20) * fVar47);
  uVar49 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
  pauVar4 = (undefined1 (*) [12])(pauVar34[1] + 4);
  uVar51 = (undefined4)((ulong)*(undefined8 *)pauVar34[2] >> 0x20);
  pauVar1 = (undefined1 (*) [12])(pauVar34[2] + 8);
  uVar52 = (undefined4)((ulong)*(undefined8 *)(pauVar34[3] + 4) >> 0x20);
  fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar15._12_4_ = uVar51;
  auVar15._0_12_ = *pauVar4;
  auVar16._12_4_ = uVar51;
  auVar16._0_12_ = *pauVar4;
  auVar54 = NEON_ext(auVar15,auVar16,8,1);
  auVar7._12_4_ = uVar49;
  auVar7._0_12_ = *pauVar34;
  auVar8._12_4_ = uVar49;
  auVar8._0_12_ = *pauVar34;
  auVar53 = NEON_ext(auVar7,auVar8,8,1);
  auVar26._12_4_ = uVar52;
  auVar26._0_12_ = *pauVar1;
  auVar27._12_4_ = uVar52;
  auVar27._0_12_ = *pauVar1;
  auVar55 = NEON_ext(auVar26,auVar27,8,1);
  fVar48 = (float)puVar37[1];
  fVar46 = (float)*puVar37;
  fVar47 = (float)((ulong)*puVar37 >> 0x20);
  uStack_e8 = CONCAT44(auVar55._4_4_ * fVar48 + fVar50 * fVar46 + auVar55._4_4_ * fVar47,
                       auVar55._0_4_ * fVar48 +
                       (float)*(undefined8 *)*pauVar1 * fVar46 + fVar50 * fVar47);
  local_f0 = CONCAT44(auVar54._0_4_ * fVar48 +
                      (float)*(undefined8 *)*pauVar4 * fVar46 +
                      (float)((ulong)*(undefined8 *)*pauVar4 >> 0x20) * fVar47,
                      auVar53._0_4_ * fVar48 +
                      (float)*(undefined8 *)*pauVar34 * fVar46 +
                      (float)((ulong)*(undefined8 *)*pauVar34 >> 0x20) * fVar47);
  uVar51 = (undefined4)((ulong)*(undefined8 *)(*pauVar34 + 8) >> 0x20);
  fVar46 = ((float)puVar37[6] - (float)*(undefined8 *)pauVar34[4]) +
           ((float)puVar37[8] - (float)*(undefined8 *)(pauVar34[5] + 4));
  fVar47 = ((float)((ulong)puVar37[6] >> 0x20) - (float)((ulong)*(undefined8 *)pauVar34[4] >> 0x20))
           + ((float)((ulong)puVar37[8] >> 0x20) -
             (float)((ulong)*(undefined8 *)(pauVar34[5] + 4) >> 0x20));
  fVar48 = ((float)puVar37[7] - (float)*(undefined8 *)(pauVar34[4] + 8)) +
           ((float)puVar37[9] - (float)*(undefined8 *)pauVar34[6]);
  auVar53 = *(undefined1 (*) [16])(pauVar34[1] + 4);
  pauVar1 = (undefined1 (*) [12])(pauVar34[2] + 8);
  uVar49 = (undefined4)((ulong)*(undefined8 *)(pauVar34[3] + 4) >> 0x20);
  fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar28._12_4_ = uVar51;
  auVar28._0_12_ = *pauVar34;
  auVar29._12_4_ = uVar51;
  auVar29._0_12_ = *pauVar34;
  auVar54 = NEON_ext(auVar28,auVar29,8,1);
  auVar55 = NEON_ext(auVar53,auVar53,8,1);
  auVar17._12_4_ = uVar49;
  auVar17._0_12_ = *pauVar1;
  auVar18._12_4_ = uVar49;
  auVar18._0_12_ = *pauVar1;
  auVar56 = NEON_ext(auVar17,auVar18,8,1);
  uStack_b8 = CONCAT44(auVar56._4_4_ * fVar48 + fVar50 * fVar46 + auVar56._4_4_ * fVar47,
                       auVar56._0_4_ * fVar48 +
                       (float)*(undefined8 *)*pauVar1 * fVar46 + fVar50 * fVar47);
  local_c0 = CONCAT44(auVar55._0_4_ * fVar48 + auVar53._0_4_ * fVar46 + auVar53._4_4_ * fVar47,
                      auVar54._0_4_ * fVar48 +
                      (float)*(undefined8 *)*pauVar34 * fVar46 +
                      (float)((ulong)*(undefined8 *)*pauVar34 >> 0x20) * fVar47);
  uStack_a8 = 0;
  local_a0 = *(long *)(param_1 + 0x290) + 0x58;
  plVar45 = (long *)(param_1 + 0xe0);
  lVar43 = *(long *)(param_1 + 0x298);
  local_b0 = param_4;
  if (*plVar45 == 0) goto LAB_030c861c;
  if (*(char *)(param_1 + 0xfa) == '\0') {
    FUN_0301e778(param_1 + 0x80,lVar43,param_1);
    goto LAB_030c861c;
  }
  uVar44 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(*plVar45 + 8) = 0x7777;
  FUN_032bffbc(param_1 + 0xd0,*(undefined8 *)(param_1 + 200));
  plVar35 = *(long **)(param_1 + 200);
  uVar32 = *(uint *)((long)plVar35 + 0x1c);
  lVar41 = *plVar35;
  if (uVar32 == 0) {
    piVar38 = (int *)(lVar41 + 0x18);
    iVar2 = *piVar38;
    if (iVar2 < 2) goto LAB_030c85a0;
    puVar37 = (undefined8 *)plVar35[1];
    lVar40 = *(long *)(*(long *)(lVar41 + 0x10) + (long)(iVar2 + -2) * 8);
    iVar3 = *(int *)(puVar37 + 0xb);
    lVar42 = puVar37[1];
    *(undefined8 *)(lVar42 + (long)iVar3 * 8) =
         *(undefined8 *)(*(long *)(lVar41 + 0x10) + (long)(iVar2 + -1) * 8);
    *(int *)(puVar37 + 0xb) = iVar3 + 1;
    if (*(int *)((long)puVar37 + 0x5c) <= iVar3 + 1) {
      (**(code **)(*(long *)*puVar37 + 0x28))((long *)*puVar37,lVar42 + (long)(iVar3 + -5) * 8,6);
      *(int *)(puVar37 + 0xb) = iVar3 + -5;
    }
    *(undefined8 *)(lVar40 + 8) = 0;
    uVar32 = 0xffffffff;
  }
  else {
LAB_030c85a0:
    puVar39 = (uint *)plVar35[2];
    lVar40 = plVar35[3];
    puVar39[2] = 0;
    puVar39[3] = 0;
    *puVar39 = *puVar39 & 0xffff0000 | uVar32 & 0xffff;
    *puVar39 = *puVar39 & 0xffff | (int)lVar40 << 0x10;
    piVar38 = (int *)(lVar41 + 8);
  }
  *piVar38 = *piVar38 + uVar32;
  *plVar35 = 0;
  plVar35[2] = 0;
  FUN_032bf658(*(undefined8 *)(param_1 + 200),uVar44,param_1 + 0xd0);
  plVar35 = *(long **)(param_1 + 200);
  lVar41 = plVar35[3];
  iVar2 = *(int *)((long)plVar35 + 0x1c);
  iVar3 = *(int *)(*plVar35 + 8);
  *(long *)(param_1 + 0xd0) = plVar35[2];
  *(short *)(param_1 + 0xd8) = (short)lVar41;
  *(short *)(param_1 + 0xda) = (short)iVar2;
  *(int *)(param_1 + 0xdc) = -(iVar2 + iVar3);
  *plVar45 = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
LAB_030c861c:
  plVar35 = *(long **)(param_1 + 0xb8);
  bVar31 = true;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(long **)(param_1 + 200) = plVar35;
  if ((*(byte *)(param_1 + 0x88) >> 1 & 1) == 0) {
    bVar31 = (*(byte *)((long)param_4 + 10) & 0x90) != 0;
  }
  *(bool *)(param_1 + 0xf8) = bVar31;
  *(byte *)(param_1 + 0xf9) = *(byte *)((long)param_4 + 10) >> 4 & 1;
  iVar3 = *(int *)(*plVar35 + 8);
  lVar41 = plVar35[3];
  iVar2 = *(int *)((long)plVar35 + 0x1c);
  *(long *)(param_1 + 0xd0) = plVar35[2];
  *(short *)(param_1 + 0xd8) = (short)lVar41;
  *(short *)(param_1 + 0xda) = (short)iVar2;
  *(int *)(param_1 + 0xdc) = -(iVar2 + iVar3);
  if ((int)plVar35[3] < 0xdd1) {
    lVar41 = plVar35[2] + (long)(int)plVar35[3] + 0x20;
  }
  else {
    lVar41 = FUN_032bf82c();
    plVar35 = *(long **)(param_1 + 200);
  }
  *(long *)(param_1 + 0xe0) = lVar41;
  *(int *)(plVar35 + 3) = (int)plVar35[3] + 0x10;
  *(int *)((long)plVar35 + 0x1c) = *(int *)((long)plVar35 + 0x1c) + 1;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 4) = param_4[1];
  **(undefined4 **)(param_1 + 0xe0) = *param_4;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0xe) = 0;
  *(undefined2 *)(*(long *)(param_1 + 0xe0) + 0xc) = *(undefined2 *)((long)param_4 + 10);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(char *)(param_1 + 0x84) != '\0') {
    plVar35 = *(long **)(*(long *)(lVar43 + 8) + 0x658);
    (**(code **)(*plVar35 + 0x60))
              (plVar35,0,
               *(long *)(lVar43 + 0x500) + ((ulong)*(uint *)(param_1 + 0x80) & 0xffffff) * 0x20);
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = param_4[1];
  *(undefined4 *)(param_1 + 0xf4) = 2;
  puVar37 = *(undefined8 **)(param_1 + 0xe0);
  if (*(char *)((long)puVar37 + 0xe) != '\0') {
    iVar2 = *(int *)(*(long *)(param_1 + 200) + 0x18);
    if (iVar2 < 0xed1) {
      puVar33 = (undefined8 *)(*(long *)(*(long *)(param_1 + 200) + 0x10) + (long)iVar2 + 0x20);
    }
    else {
      puVar33 = (undefined8 *)FUN_032bf82c();
      puVar37 = (undefined8 *)*plVar45;
    }
    uVar44 = puVar37[1];
    *puVar33 = *puVar37;
    puVar33[1] = uVar44;
    *(undefined8 **)(param_1 + 0xe0) = puVar33;
    *(undefined4 *)(puVar33 + 1) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xe0) + 0xe) = 0;
    lVar43 = *(long *)(param_1 + 200);
    *(int *)(lVar43 + 0x18) = *(int *)(lVar43 + 0x18) + 0x10;
    *(int *)(lVar43 + 0x1c) = *(int *)(lVar43 + 0x1c) + 1;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 200) + 0x18);
  if (iVar2 < 0xde1) {
    lVar43 = *(long *)(*(long *)(param_1 + 200) + 0x10) + (long)iVar2 + 0x20;
  }
  else {
    lVar43 = FUN_032bf82c();
  }
  uVar32 = FUN_030c89dc(&DAT_0442d540,*(undefined8 *)(param_1 + 0x298),param_1,&local_110,param_2,
                        param_3,local_b0,lVar43,&local_118);
  if (local_80 != 0) {
    FUN_032d5acc(auStack_78);
    *(long *)(local_118 + 8) = (local_70 - local_88) + *(long *)(local_118 + 8);
    *(int *)(local_118 + 0x10) = *(int *)(local_118 + 0x10) + 1;
  }
  if (uVar32 != 0) {
    lVar43 = *(long *)(param_1 + 200);
    if (*(long *)(param_1 + 0xe8) == 0) {
      *(long *)(param_1 + 0xe8) = *(long *)(lVar43 + 0x10) + (long)*(int *)(lVar43 + 0x18) + 0x20;
    }
    if (0 < (int)uVar32) {
      lVar41 = *(long *)(lVar43 + 0x10) + (long)*(int *)(lVar43 + 0x18);
      uVar36 = *(uint *)(*(long *)(lVar41 + 200) + 0x14) | *(uint *)(param_1 + 0xf0) |
               *(uint *)(*(long *)(lVar41 + 0xd0) + 0x14);
      *(uint *)(param_1 + 0xf0) = uVar36;
      if (uVar32 != 1) {
        lVar40 = (ulong)uVar32 - 1;
        lVar41 = 0x1b0;
        do {
          lVar40 = lVar40 + -1;
          lVar42 = *(long *)(lVar43 + 0x10) + (long)*(int *)(lVar43 + 0x18) + lVar41;
          lVar41 = lVar41 + 0x100;
          uVar36 = *(uint *)(*(long *)(lVar42 + 0x18) + 0x14) | uVar36 |
                   *(uint *)(*(long *)(lVar42 + 0x20) + 0x14);
          *(uint *)(param_1 + 0xf0) = uVar36;
        } while (lVar40 != 0);
      }
    }
    *(uint *)(lVar43 + 0x18) = *(int *)(lVar43 + 0x18) + uVar32 * 0x100;
    *(int *)(lVar43 + 0x1c) = *(int *)(lVar43 + 0x1c) + 1;
    *(uint *)(*(long *)(param_1 + 0xe0) + 8) = *(int *)(*(long *)(param_1 + 0xe0) + 8) + uVar32;
    *(undefined1 *)(param_1 + 0xfa) = 0;
    for (; 1 < (int)uVar32; uVar32 = uVar32 - 1) {
      *(int *)(*(long *)(param_1 + 200) + 0x1c) = *(int *)(*(long *)(param_1 + 200) + 0x1c) + 1;
    }
  }
  return;
}


