/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f976d0; name: FUN_01f976d0
 */


void FUN_01f976d0(char *param_1,char *param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  undefined8 uVar22;
  ulong uVar23;
  char *pcVar24;
  char *__src;
  char *__src_00;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  char *local_200;
  char *local_1f8;
  char *local_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [207];
  undefined1 auStack_109 [169];
  
LAB_01f97718:
  pcVar24 = param_2 + -0x180;
  __src_00 = param_2 + -0x170;
  __src = param_2 + -0xc0;
  pcVar21 = param_1;
LAB_01f9772c:
  while( true ) {
    param_1 = pcVar21;
    uVar17 = (long)param_2 - (long)param_1;
    uVar23 = ((long)uVar17 >> 7) * -0x5555555555555555;
    if (uVar23 < 2) {
      return;
    }
    switch(uVar23) {
    case 2:
      uVar22 = *(undefined8 *)(*param_3 + 0x198);
      fVar27 = (float)uVar22;
      fVar28 = (float)((ulong)uVar22 >> 0x20);
      uVar22 = *(undefined8 *)(*param_3 + 400);
      fVar25 = (float)uVar22;
      fVar26 = (float)((ulong)uVar22 >> 0x20);
      fVar29 = fVar25 - (float)*(undefined8 *)(param_2 + -0xc0);
      fVar30 = fVar26 - (float)((ulong)*(undefined8 *)(param_2 + -0xc0) >> 0x20);
      fVar31 = fVar27 - (float)*(undefined8 *)(param_2 + -0xb8);
      fVar32 = fVar28 - (float)((ulong)*(undefined8 *)(param_2 + -0xb8) >> 0x20);
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      auVar13._4_4_ = fVar30;
      auVar13._0_4_ = fVar29;
      auVar13._8_4_ = fVar31;
      auVar13._12_4_ = fVar32;
      auVar14._4_4_ = fVar30;
      auVar14._0_4_ = fVar29;
      auVar14._8_4_ = fVar31;
      auVar14._12_4_ = fVar32;
      auVar33 = NEON_ext(auVar13,auVar14,8,1);
      fVar25 = fVar25 - *(float *)(param_1 + 0xc0);
      fVar26 = fVar26 - *(float *)(param_1 + 0xc4);
      fVar27 = fVar27 - *(float *)(param_1 + 200);
      fVar28 = fVar28 - *(float *)(param_1 + 0xcc);
      fVar25 = fVar25 * fVar25;
      fVar26 = fVar26 * fVar26;
      fVar27 = fVar27 * fVar27;
      fVar28 = fVar28 * fVar28;
      auVar5._4_4_ = fVar26;
      auVar5._0_4_ = fVar25;
      auVar5._8_4_ = fVar27;
      auVar5._12_4_ = fVar28;
      auVar6._4_4_ = fVar26;
      auVar6._0_4_ = fVar25;
      auVar6._8_4_ = fVar27;
      auVar6._12_4_ = fVar28;
      auVar41 = NEON_ext(auVar5,auVar6,8,1);
      if (SQRT(auVar33._0_4_ + fVar29 + auVar33._4_4_ + fVar30) <
          SQRT(auVar41._0_4_ + fVar25 + auVar41._4_4_ + fVar26)) {
        cVar2 = *param_1;
        bVar1 = cVar2 == '\0';
        if (!bVar1) {
          memcpy(auStack_109,param_1 + 0x10,0xa0);
        }
        uVar22 = *(undefined8 *)(param_1 + 0xb0);
        memcpy(auStack_1e0,param_1 + 0xb8,200);
        if (cVar2 == '\0') {
          if (*pcVar24 != '\0') {
            memcpy(param_1 + 0x10,__src_00,0xa0);
            *param_1 = '\x01';
          }
        }
        else if (*pcVar24 == '\0') {
          *param_1 = '\0';
        }
        else {
          memcpy(param_1 + 0x10,__src_00,0x98);
        }
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + -0xd0);
        memcpy(param_1 + 0xc0,__src,0xc0);
        if (*pcVar24 == '\0') {
          if (!bVar1) {
            memcpy(__src_00,auStack_109,0xa0);
            *pcVar24 = '\x01';
          }
        }
        else if (bVar1) {
          *pcVar24 = '\0';
        }
        else {
          memcpy(__src_00,auStack_109,0x98);
        }
        *(undefined8 *)(param_2 + -0xd0) = uVar22;
        memcpy(__src,auStack_1d8,0xc0);
        return;
      }
      return;
    case 3:
      FUN_01f984d0(param_1,param_1 + 0x180,pcVar24,param_3);
      return;
    case 4:
      FUN_01f98b70(param_1,param_1 + 0x180,param_1 + 0x300,pcVar24,param_3);
      return;
    case 5:
      FUN_01f98fe0(param_1,param_1 + 0x180,param_1 + 0x300,param_1 + 0x480,pcVar24);
      return;
    }
    if ((long)uVar17 < 0xa80) {
      FUN_01f995b0(param_1,param_2,param_3);
      return;
    }
    uVar23 = uVar17 / 0x300;
    local_1f8 = param_1 + uVar23 * 0x180;
    if ((long)uVar17 < 0x5da81) {
      iVar15 = FUN_01f984d0(param_1,local_1f8,pcVar24,param_3);
    }
    else {
      lVar18 = (uVar17 / 0x600) * 0x180;
      iVar15 = FUN_01f98fe0(param_1,param_1 + lVar18,local_1f8,local_1f8 + lVar18,pcVar24,param_3);
    }
    uVar22 = *(undefined8 *)(*param_3 + 0x198);
    fVar27 = (float)uVar22;
    fVar28 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = *(undefined8 *)(*param_3 + 400);
    fVar25 = (float)uVar22;
    fVar26 = (float)((ulong)uVar22 >> 0x20);
    fVar29 = fVar25 - (float)*(undefined8 *)(param_1 + 0xc0);
    fVar30 = fVar26 - (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
    fVar31 = fVar27 - (float)*(undefined8 *)(param_1 + 200);
    fVar32 = fVar28 - (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
    fVar29 = fVar29 * fVar29;
    fVar30 = fVar30 * fVar30;
    fVar31 = fVar31 * fVar31;
    fVar32 = fVar32 * fVar32;
    auVar33._4_4_ = fVar30;
    auVar33._0_4_ = fVar29;
    auVar33._8_4_ = fVar31;
    auVar33._12_4_ = fVar32;
    auVar41._4_4_ = fVar30;
    auVar41._0_4_ = fVar29;
    auVar41._8_4_ = fVar31;
    auVar41._12_4_ = fVar32;
    auVar33 = NEON_ext(auVar33,auVar41,8,1);
    auVar34._0_4_ =
         (fVar25 - *(float *)(param_1 + uVar23 * 0x180 + 0xc0)) *
         (fVar25 - *(float *)(param_1 + uVar23 * 0x180 + 0xc0));
    auVar34._4_4_ =
         (fVar26 - *(float *)(param_1 + uVar23 * 0x180 + 0xc4)) *
         (fVar26 - *(float *)(param_1 + uVar23 * 0x180 + 0xc4));
    auVar34._8_4_ =
         (fVar27 - *(float *)(param_1 + uVar23 * 0x180 + 200)) *
         (fVar27 - *(float *)(param_1 + uVar23 * 0x180 + 200));
    auVar34._12_4_ =
         (fVar28 - *(float *)(param_1 + uVar23 * 0x180 + 0xcc)) *
         (fVar28 - *(float *)(param_1 + uVar23 * 0x180 + 0xcc));
    auVar41 = NEON_ext(auVar34,auVar34,8,1);
    fVar29 = SQRT(auVar33._0_4_ + fVar29 + auVar33._4_4_ + fVar30);
    fVar30 = SQRT(auVar41._0_4_ + auVar34._0_4_ + auVar41._4_4_ + auVar34._4_4_);
    local_1e8 = pcVar24;
    if (fVar29 < fVar30) break;
    pcVar21 = (char *)0x0;
    while (pcVar20 = pcVar21, param_1 + (0x300 - (long)param_2) != pcVar20) {
      auVar42._0_4_ =
           (fVar25 - *(float *)(param_2 + (long)(pcVar20 + -0x240))) *
           (fVar25 - *(float *)(param_2 + (long)(pcVar20 + -0x240)));
      auVar42._4_4_ =
           (fVar26 - *(float *)(param_2 + (long)(pcVar20 + -0x23c))) *
           (fVar26 - *(float *)(param_2 + (long)(pcVar20 + -0x23c)));
      auVar42._8_4_ =
           (fVar27 - *(float *)(param_2 + (long)(pcVar20 + -0x238))) *
           (fVar27 - *(float *)(param_2 + (long)(pcVar20 + -0x238)));
      auVar42._12_4_ =
           (fVar28 - *(float *)(param_2 + (long)(pcVar20 + -0x234))) *
           (fVar28 - *(float *)(param_2 + (long)(pcVar20 + -0x234)));
      auVar33 = NEON_ext(auVar42,auVar42,8,1);
      pcVar21 = pcVar20 + -0x180;
      if (SQRT(auVar33._0_4_ + auVar42._0_4_ + auVar33._4_4_ + auVar42._4_4_) < fVar30)
      goto code_r0x01f97bf4;
    }
    auVar37._0_4_ = (fVar25 - *(float *)(param_2 + -0xc0)) * (fVar25 - *(float *)(param_2 + -0xc0));
    auVar37._4_4_ = (fVar26 - *(float *)(param_2 + -0xbc)) * (fVar26 - *(float *)(param_2 + -0xbc));
    auVar37._8_4_ = (fVar27 - *(float *)(param_2 + -0xb8)) * (fVar27 - *(float *)(param_2 + -0xb8));
    auVar37._12_4_ = (fVar28 - *(float *)(param_2 + -0xb4)) * (fVar28 - *(float *)(param_2 + -0xb4))
    ;
    auVar33 = NEON_ext(auVar37,auVar37,8,1);
    local_1f8 = param_1 + 0x180;
    if (SQRT(auVar33._0_4_ + auVar37._0_4_ + auVar33._4_4_ + auVar37._4_4_) <= fVar29) {
      if (local_1f8 == pcVar24) {
        return;
      }
      local_1f8 = param_1 + 0x300;
      while (auVar40._0_4_ =
                  (fVar25 - *(float *)(local_1f8 + -0xc0)) *
                  (fVar25 - *(float *)(local_1f8 + -0xc0)),
            auVar40._4_4_ =
                 (fVar26 - *(float *)(local_1f8 + -0xbc)) * (fVar26 - *(float *)(local_1f8 + -0xbc))
            , auVar40._8_4_ =
                   (fVar27 - *(float *)(local_1f8 + -0xb8)) *
                   (fVar27 - *(float *)(local_1f8 + -0xb8)),
            auVar40._12_4_ =
                 (fVar28 - *(float *)(local_1f8 + -0xb4)) * (fVar28 - *(float *)(local_1f8 + -0xb4))
            , auVar33 = NEON_ext(auVar40,auVar40,8,1),
            SQRT(auVar33._0_4_ + auVar40._0_4_ + auVar33._4_4_ + auVar40._4_4_) <= fVar29) {
        local_1f8 = local_1f8 + 0x180;
        if (param_2 == local_1f8) {
          return;
        }
      }
      pcVar21 = local_1f8 + -0x180;
      cVar2 = *pcVar21;
      bVar1 = cVar2 != '\0';
      if (bVar1) {
        memcpy(auStack_109,local_1f8 + -0x170,0xa0);
      }
      uVar22 = *(undefined8 *)(local_1f8 + -0xd0);
      memcpy(auStack_1e0,local_1f8 + -200,200);
      if (cVar2 == '\0') {
        if (*pcVar24 != '\0') {
          memcpy(local_1f8 + -0x170,__src_00,0xa0);
          *pcVar21 = '\x01';
        }
      }
      else if (*pcVar24 == '\0') {
        *pcVar21 = '\0';
      }
      else {
        memcpy(local_1f8 + -0x170,__src_00,0x98);
      }
      *(undefined8 *)(local_1f8 + -0xd0) = *(undefined8 *)(param_2 + -0xd0);
      memcpy(local_1f8 + -0xc0,__src,0xc0);
      if (*pcVar24 == '\0') {
        if (bVar1) {
          memcpy(__src_00,auStack_109,0xa0);
          *pcVar24 = '\x01';
        }
      }
      else if (bVar1) {
        memcpy(__src_00,auStack_109,0x98);
      }
      else {
        *pcVar24 = '\0';
      }
      *(undefined8 *)(param_2 + -0xd0) = uVar22;
      memcpy(__src,auStack_1d8,0xc0);
    }
    if (local_1f8 == pcVar24) {
      return;
    }
    while( true ) {
      uVar22 = *(undefined8 *)(*param_3 + 0x198);
      fVar27 = (float)uVar22;
      fVar28 = (float)((ulong)uVar22 >> 0x20);
      uVar22 = *(undefined8 *)(*param_3 + 400);
      fVar25 = (float)uVar22;
      fVar26 = (float)((ulong)uVar22 >> 0x20);
      fVar29 = fVar25 - (float)*(undefined8 *)(param_1 + 0xc0);
      fVar30 = fVar26 - (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
      fVar31 = fVar27 - (float)*(undefined8 *)(param_1 + 200);
      fVar32 = fVar28 - (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20);
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      auVar11._4_4_ = fVar30;
      auVar11._0_4_ = fVar29;
      auVar11._8_4_ = fVar31;
      auVar11._12_4_ = fVar32;
      auVar12._4_4_ = fVar30;
      auVar12._0_4_ = fVar29;
      auVar12._8_4_ = fVar31;
      auVar12._12_4_ = fVar32;
      auVar33 = NEON_ext(auVar11,auVar12,8,1);
      fVar29 = SQRT(auVar33._0_4_ + fVar29 + auVar33._4_4_ + fVar30);
      pcVar21 = local_1f8 + -0x180;
      do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 0x180;
        auVar38._0_4_ =
             (fVar25 - *(float *)(pcVar20 + 0x240)) * (fVar25 - *(float *)(pcVar20 + 0x240));
        auVar38._4_4_ =
             (fVar26 - *(float *)(pcVar20 + 0x244)) * (fVar26 - *(float *)(pcVar20 + 0x244));
        auVar38._8_4_ =
             (fVar27 - *(float *)(pcVar20 + 0x248)) * (fVar27 - *(float *)(pcVar20 + 0x248));
        auVar38._12_4_ =
             (fVar28 - *(float *)(pcVar20 + 0x24c)) * (fVar28 - *(float *)(pcVar20 + 0x24c));
        auVar33 = NEON_ext(auVar38,auVar38,8,1);
      } while (SQRT(auVar33._0_4_ + auVar38._0_4_ + auVar33._4_4_ + auVar38._4_4_) <= fVar29);
      local_1f8 = pcVar20 + 0x300;
      do {
        pcVar19 = local_1e8;
        auVar39._0_4_ =
             (fVar25 - *(float *)(pcVar19 + -0xc0)) * (fVar25 - *(float *)(pcVar19 + -0xc0));
        auVar39._4_4_ =
             (fVar26 - *(float *)(pcVar19 + -0xbc)) * (fVar26 - *(float *)(pcVar19 + -0xbc));
        auVar39._8_4_ =
             (fVar27 - *(float *)(pcVar19 + -0xb8)) * (fVar27 - *(float *)(pcVar19 + -0xb8));
        auVar39._12_4_ =
             (fVar28 - *(float *)(pcVar19 + -0xb4)) * (fVar28 - *(float *)(pcVar19 + -0xb4));
        auVar33 = NEON_ext(auVar39,auVar39,8,1);
        local_1e8 = pcVar19 + -0x180;
      } while (fVar29 < SQRT(auVar33._0_4_ + auVar39._0_4_ + auVar33._4_4_ + auVar39._4_4_));
      if (local_1e8 <= pcVar21) break;
      cVar2 = *pcVar21;
      bVar1 = cVar2 != '\0';
      if (bVar1) {
        memcpy(auStack_109,pcVar20 + 400,0xa0);
      }
      uVar22 = *(undefined8 *)(pcVar20 + 0x230);
      memcpy(auStack_1e0,pcVar20 + 0x238,200);
      if (cVar2 == '\0') {
        if (*local_1e8 != '\0') {
          memcpy(pcVar20 + 400,pcVar19 + -0x170,0xa0);
          *pcVar21 = '\x01';
        }
      }
      else if (*local_1e8 == '\0') {
        *pcVar21 = '\0';
      }
      else {
        memcpy(pcVar20 + 400,pcVar19 + -0x170,0x98);
      }
      *(undefined8 *)(pcVar20 + 0x230) = *(undefined8 *)(pcVar19 + -0xd0);
      memcpy(pcVar20 + 0x240,pcVar19 + -0xc0,0xc0);
      if (*local_1e8 == '\0') {
        if (bVar1) {
          memcpy(pcVar19 + -0x170,auStack_109,0xa0);
          *local_1e8 = '\x01';
        }
      }
      else if (bVar1) {
        memcpy(pcVar19 + -0x170,auStack_109,0x98);
      }
      else {
        *local_1e8 = '\0';
      }
      *(undefined8 *)(pcVar19 + -0xd0) = uVar22;
      memcpy(pcVar19 + -0xc0,auStack_1d8,0xc0);
    }
  }
  goto LAB_01f979f0;
code_r0x01f97bf4:
  cVar2 = *param_1;
  local_1e8 = param_2 + (long)(pcVar20 + -0x300);
  bVar1 = cVar2 != '\0';
  if (bVar1) {
    memcpy(auStack_109,param_1 + 0x10,0xa0);
  }
  uVar22 = *(undefined8 *)(param_1 + 0xb0);
  memcpy(auStack_1e0,param_1 + 0xb8,200);
  if (cVar2 == '\0') {
    if (*local_1e8 != '\0') {
      memcpy(param_1 + 0x10,param_2 + (long)(pcVar20 + -0x2f0),0xa0);
      *param_1 = '\x01';
    }
  }
  else if (*local_1e8 == '\0') {
    *param_1 = '\0';
  }
  else {
    memcpy(param_1 + 0x10,param_2 + (long)(pcVar20 + -0x2f0),0x98);
  }
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + (long)(pcVar20 + -0x250));
  memcpy(param_1 + 0xc0,param_2 + (long)(pcVar20 + -0x240),0xc0);
  if (*local_1e8 == '\0') {
    if (bVar1) {
      memcpy(param_2 + (long)(pcVar20 + -0x2f0),auStack_109,0xa0);
      *local_1e8 = '\x01';
    }
  }
  else if (bVar1) {
    memcpy(param_2 + (long)(pcVar20 + -0x2f0),auStack_109,0x98);
  }
  else {
    *local_1e8 = '\0';
  }
  *(undefined8 *)(param_2 + (long)(pcVar20 + -0x250)) = uVar22;
  memcpy(param_2 + (long)(pcVar20 + -0x240),auStack_1d8,0xc0);
  iVar15 = iVar15 + 1;
LAB_01f979f0:
  local_200 = param_1 + 0x180;
  if (local_200 < local_1e8) {
    while( true ) {
      uVar22 = *(undefined8 *)(*param_3 + 0x198);
      fVar27 = (float)uVar22;
      fVar28 = (float)((ulong)uVar22 >> 0x20);
      uVar22 = *(undefined8 *)(*param_3 + 400);
      fVar25 = (float)uVar22;
      fVar26 = (float)((ulong)uVar22 >> 0x20);
      fVar29 = fVar25 - (float)*(undefined8 *)(local_1f8 + 0xc0);
      fVar30 = fVar26 - (float)((ulong)*(undefined8 *)(local_1f8 + 0xc0) >> 0x20);
      fVar31 = fVar27 - (float)*(undefined8 *)(local_1f8 + 200);
      fVar32 = fVar28 - (float)((ulong)*(undefined8 *)(local_1f8 + 200) >> 0x20);
      fVar29 = fVar29 * fVar29;
      fVar30 = fVar30 * fVar30;
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      auVar7._4_4_ = fVar30;
      auVar7._0_4_ = fVar29;
      auVar7._8_4_ = fVar31;
      auVar7._12_4_ = fVar32;
      auVar8._4_4_ = fVar30;
      auVar8._0_4_ = fVar29;
      auVar8._8_4_ = fVar31;
      auVar8._12_4_ = fVar32;
      auVar33 = NEON_ext(auVar7,auVar8,8,1);
      fVar29 = SQRT(auVar33._0_4_ + fVar29 + auVar33._4_4_ + fVar30);
      pcVar21 = local_200 + -0x180;
      do {
        pcVar20 = pcVar21;
        pcVar21 = pcVar20 + 0x180;
        auVar35._0_4_ =
             (fVar25 - *(float *)(pcVar20 + 0x240)) * (fVar25 - *(float *)(pcVar20 + 0x240));
        auVar35._4_4_ =
             (fVar26 - *(float *)(pcVar20 + 0x244)) * (fVar26 - *(float *)(pcVar20 + 0x244));
        auVar35._8_4_ =
             (fVar27 - *(float *)(pcVar20 + 0x248)) * (fVar27 - *(float *)(pcVar20 + 0x248));
        auVar35._12_4_ =
             (fVar28 - *(float *)(pcVar20 + 0x24c)) * (fVar28 - *(float *)(pcVar20 + 0x24c));
        auVar33 = NEON_ext(auVar35,auVar35,8,1);
      } while (SQRT(auVar33._0_4_ + auVar35._0_4_ + auVar33._4_4_ + auVar35._4_4_) < fVar29);
      local_200 = pcVar20 + 0x300;
      do {
        pcVar19 = local_1e8;
        local_1e8 = pcVar19 + -0x180;
        auVar36._0_4_ =
             (fVar25 - *(float *)(pcVar19 + -0xc0)) * (fVar25 - *(float *)(pcVar19 + -0xc0));
        auVar36._4_4_ =
             (fVar26 - *(float *)(pcVar19 + -0xbc)) * (fVar26 - *(float *)(pcVar19 + -0xbc));
        auVar36._8_4_ =
             (fVar27 - *(float *)(pcVar19 + -0xb8)) * (fVar27 - *(float *)(pcVar19 + -0xb8));
        auVar36._12_4_ =
             (fVar28 - *(float *)(pcVar19 + -0xb4)) * (fVar28 - *(float *)(pcVar19 + -0xb4));
        auVar33 = NEON_ext(auVar36,auVar36,8,1);
      } while (fVar29 <= SQRT(auVar33._0_4_ + auVar36._0_4_ + auVar33._4_4_ + auVar36._4_4_));
      if (local_1e8 < pcVar21) break;
      cVar2 = *pcVar21;
      bVar1 = cVar2 != '\0';
      if (bVar1) {
        memcpy(auStack_109,pcVar20 + 400,0xa0);
      }
      uVar22 = *(undefined8 *)(pcVar20 + 0x230);
      memcpy(auStack_1e0,pcVar20 + 0x238,200);
      if (cVar2 == '\0') {
        if (*local_1e8 != '\0') {
          memcpy(pcVar20 + 400,pcVar19 + -0x170,0xa0);
          *pcVar21 = '\x01';
        }
      }
      else if (*local_1e8 == '\0') {
        *pcVar21 = '\0';
      }
      else {
        memcpy(pcVar20 + 400,pcVar19 + -0x170,0x98);
      }
      *(undefined8 *)(pcVar20 + 0x230) = *(undefined8 *)(pcVar19 + -0xd0);
      memcpy(pcVar20 + 0x240,pcVar19 + -0xc0,0xc0);
      if (*local_1e8 == '\0') {
        if (bVar1) {
          memcpy(pcVar19 + -0x170,auStack_109,0xa0);
          *local_1e8 = '\x01';
        }
      }
      else if (bVar1) {
        memcpy(pcVar19 + -0x170,auStack_109,0x98);
      }
      else {
        *local_1e8 = '\0';
      }
      *(undefined8 *)(pcVar19 + -0xd0) = uVar22;
      memcpy(pcVar19 + -0xc0,auStack_1d8,0xc0);
      iVar15 = iVar15 + 1;
      pcVar20 = local_1e8;
      if (local_1f8 != pcVar21) {
        pcVar20 = local_1f8;
      }
      local_1f8 = pcVar20;
    }
    local_200 = pcVar21;
  }
  if (local_200 != local_1f8) {
    uVar22 = *(undefined8 *)(*param_3 + 0x198);
    fVar27 = (float)uVar22;
    fVar28 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = *(undefined8 *)(*param_3 + 400);
    fVar25 = (float)uVar22;
    fVar26 = (float)((ulong)uVar22 >> 0x20);
    fVar29 = fVar25 - (float)*(undefined8 *)(local_1f8 + 0xc0);
    fVar30 = fVar26 - (float)((ulong)*(undefined8 *)(local_1f8 + 0xc0) >> 0x20);
    fVar31 = fVar27 - (float)*(undefined8 *)(local_1f8 + 200);
    fVar32 = fVar28 - (float)((ulong)*(undefined8 *)(local_1f8 + 200) >> 0x20);
    fVar29 = fVar29 * fVar29;
    fVar30 = fVar30 * fVar30;
    fVar31 = fVar31 * fVar31;
    fVar32 = fVar32 * fVar32;
    auVar9._4_4_ = fVar30;
    auVar9._0_4_ = fVar29;
    auVar9._8_4_ = fVar31;
    auVar9._12_4_ = fVar32;
    auVar10._4_4_ = fVar30;
    auVar10._0_4_ = fVar29;
    auVar10._8_4_ = fVar31;
    auVar10._12_4_ = fVar32;
    auVar33 = NEON_ext(auVar9,auVar10,8,1);
    fVar25 = fVar25 - *(float *)(local_200 + 0xc0);
    fVar26 = fVar26 - *(float *)(local_200 + 0xc4);
    fVar27 = fVar27 - *(float *)(local_200 + 200);
    fVar28 = fVar28 - *(float *)(local_200 + 0xcc);
    fVar25 = fVar25 * fVar25;
    fVar26 = fVar26 * fVar26;
    fVar27 = fVar27 * fVar27;
    fVar28 = fVar28 * fVar28;
    auVar3._4_4_ = fVar26;
    auVar3._0_4_ = fVar25;
    auVar3._8_4_ = fVar27;
    auVar3._12_4_ = fVar28;
    auVar4._4_4_ = fVar26;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar27;
    auVar4._12_4_ = fVar28;
    auVar41 = NEON_ext(auVar3,auVar4,8,1);
    if (SQRT(auVar33._0_4_ + fVar29 + auVar33._4_4_ + fVar30) <
        SQRT(auVar41._0_4_ + fVar25 + auVar41._4_4_ + fVar26)) {
      cVar2 = *local_200;
      bVar1 = cVar2 != '\0';
      if (bVar1) {
        memcpy(auStack_109,local_200 + 0x10,0xa0);
      }
      uVar22 = *(undefined8 *)(local_200 + 0xb0);
      memcpy(auStack_1e0,local_200 + 0xb8,200);
      if (cVar2 == '\0') {
        if (*local_1f8 != '\0') {
          memcpy(local_200 + 0x10,local_1f8 + 0x10,0xa0);
          *local_200 = '\x01';
        }
      }
      else if (*local_1f8 == '\0') {
        *local_200 = '\0';
      }
      else {
        memcpy(local_200 + 0x10,local_1f8 + 0x10,0x98);
      }
      *(undefined8 *)(local_200 + 0xb0) = *(undefined8 *)(local_1f8 + 0xb0);
      memcpy(local_200 + 0xc0,local_1f8 + 0xc0,0xc0);
      if (*local_1f8 == '\0') {
        if (bVar1) {
          memcpy(local_1f8 + 0x10,auStack_109,0xa0);
          *local_1f8 = '\x01';
        }
      }
      else if (bVar1) {
        memcpy(local_1f8 + 0x10,auStack_109,0x98);
      }
      else {
        *local_1f8 = '\0';
      }
      *(undefined8 *)(local_1f8 + 0xb0) = uVar22;
      memcpy(local_1f8 + 0xc0,auStack_1d8,0xc0);
      iVar15 = iVar15 + 1;
    }
  }
  if (iVar15 == 0) {
    uVar16 = FUN_01f99840(param_1,local_200,param_3);
    uVar17 = FUN_01f99840(local_200 + 0x180,param_2,param_3);
    if ((uVar17 & 1) != 0) goto LAB_01f98250;
    pcVar21 = local_200 + 0x180;
    if ((uVar16 & 1) != 0) goto LAB_01f9772c;
  }
  if (((long)param_2 - (long)local_200 >> 7) * -0x5555555555555555 <=
      ((long)local_200 - (long)param_1 >> 7) * -0x5555555555555555) {
    FUN_01f976d0(local_200 + 0x180,param_2,param_3);
    param_2 = local_200;
    goto LAB_01f97718;
  }
  FUN_01f976d0(param_1,local_200,param_3);
  pcVar21 = local_200 + 0x180;
  goto LAB_01f9772c;
LAB_01f98250:
  param_2 = local_200;
  if ((uVar16 & 1) != 0) {
    return;
  }
  goto LAB_01f97718;
}


