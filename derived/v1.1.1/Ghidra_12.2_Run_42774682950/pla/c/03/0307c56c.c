/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307c56c; name: FUN_0307c56c
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0307c56c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ushort uVar12;
  char cVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float *pfVar33;
  byte bVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long *plVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  int *piVar45;
  long *plVar46;
  ulong uVar47;
  undefined8 *puVar48;
  int iVar49;
  int *piVar50;
  int iVar51;
  ushort uVar52;
  undefined8 *puVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 uVar70;
  undefined1 auVar71 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  float fVar84;
  undefined8 uVar85;
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [16];
  ulong local_3528;
  int local_3518;
  undefined8 local_3510;
  undefined8 uStack_3508;
  undefined1 local_34f8 [8];
  undefined8 local_34f0;
  undefined8 uStack_34e8;
  undefined8 local_34e0;
  undefined8 uStack_34d8;
  undefined8 local_34d0;
  undefined8 uStack_34c8;
  long local_34c0;
  undefined8 local_34b8;
  long local_34b0;
  uint local_34a8;
  long local_34a0;
  undefined8 local_3498;
  long local_3490;
  uint local_3488;
  undefined1 auStack_3480 [80];
  undefined1 local_3430 [16];
  undefined8 uStack_3420;
  undefined4 uStack_3418;
  undefined4 uStack_3414;
  undefined1 local_3410 [16];
  undefined8 uStack_3400;
  undefined8 uStack_33f8;
  undefined1 auStack_33a0 [272];
  undefined1 auStack_3290 [272];
  long local_3180;
  long local_3178;
  long local_3170;
  long local_3158;
  float *local_3150;
  long local_3148;
  long local_3140;
  long local_3138;
  long local_3120;
  undefined8 local_3110;
  float fStack_3108;
  float fStack_3104;
  float local_3100;
  float fStack_30fc;
  float fStack_30f8;
  float fStack_30f4;
  undefined8 local_30f0;
  float fStack_30e8;
  float fStack_30e4;
  undefined1 local_30e0 [16];
  undefined1 local_30d0 [16];
  undefined *local_2f80;
  long *local_2f78;
  undefined8 local_2500;
  undefined4 uStack_24f8;
  undefined4 uStack_24f4;
  undefined1 local_24f0 [16];
  undefined1 local_24e0 [16];
  undefined *local_2370;
  long *local_2368;
  float local_18f0;
  undefined1 auStack_18e0 [6184];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  float local_88;
  
  lVar39 = tpidr_el0;
  if (*(long *)(lVar39 + 0x38d490) == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
    local_b8 = *(long *)(lVar43 + 0x10);
  }
  else {
    local_b8 = *(long *)(*(long *)(lVar39 + 0x38d490) + 0x10);
  }
  if (local_b8 != 0) {
    FUN_032d5af0(local_b8,"TtSCNeighborWelding",0x13);
  }
  uVar42 = (long)param_6 - (long)param_5;
  uVar41 = (uint)(uVar42 >> 4);
  if (uVar41 == 0) goto LAB_0307db40;
  FUN_0307555c(auStack_3480,param_2,*(undefined4 *)(*param_5 + 4));
  local_34a0 = 0;
  local_3498 = 0x8000000000000000;
  lVar43 = *(long *)(lVar39 + 0x38d490);
  local_3488 = uVar41;
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
  }
  lVar36 = *(long *)(lVar43 + 8);
  uVar40 = (ulong)((int)uVar42 << 3);
  if (*(ulong *)(lVar36 + 0x10) < uVar40) {
LAB_0307c764:
    local_3490 = FUN_032ce670();
    lVar43 = *(long *)(lVar39 + 0x38d490);
  }
  else {
    local_3490 = *(long *)(lVar36 + 0x18);
    uVar40 = local_3490 + uVar40;
    if (*(ulong *)(lVar36 + 0x20) < uVar40) goto LAB_0307c764;
    *(ulong *)(lVar36 + 0x18) = uVar40;
  }
  local_3498 = CONCAT44(uVar41,(int)local_3498) | 0x8000000000000000;
  local_34c0 = 0;
  local_34b8 = 0x8000000000000000;
  local_34a8 = uVar41;
  local_34a0 = local_3490;
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
  }
  lVar36 = *(long *)(lVar43 + 8);
  uVar40 = (long)(uVar42 * 0x80000000 + 0x7f00000000) >> 0x20 & 0xffffffffffffff80;
  if (*(ulong *)(lVar36 + 0x10) < uVar40) {
LAB_0307c788:
    local_34b0 = FUN_032ce670();
    lVar43 = *(long *)(lVar39 + 0x38d490);
  }
  else {
    local_34b0 = *(long *)(lVar36 + 0x18);
    uVar40 = uVar40 + local_34b0;
    if (*(ulong *)(lVar36 + 0x20) < uVar40) goto LAB_0307c788;
    *(ulong *)(lVar36 + 0x18) = uVar40;
  }
  local_34b8 = CONCAT44(uVar41,(int)local_34b8) | 0x8000000000000000;
  local_34c0 = local_34b0;
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
    lVar43 = *(long *)(lVar43 + 0x10);
  }
  else {
    lVar43 = *(long *)(lVar43 + 0x10);
  }
  if (lVar43 != 0) {
    FUN_032d5af0(lVar43,"TtGetManifolds",0xe);
  }
  puVar4 = PTR_PTR_0434a080;
  uVar40 = uVar42 >> 4 & 0xffffffff;
  if ((int)uVar41 < 1) {
    local_3518 = 0;
  }
  else {
    uVar54 = 0;
    local_3518 = 0;
    plVar38 = param_5 + 1;
    do {
      if (*(char *)(plVar38[-1] + 0xe) == '\0') {
        lVar43 = *plVar38;
        lVar36 = *(long *)(lVar43 + 0x98);
        iVar3 = (int)local_34b8 + 1;
        iVar51 = (int)local_34b8;
        if ((int)(local_34b8._4_4_ & 0x3fffffff) <= (int)local_34b8) {
          local_34c0 = FUN_0307e3ec(puVar4,iVar3,local_34c0,local_34b8 & 0xffffffff,
                                    (long)&local_34b8 + 4);
          iVar51 = (int)local_34b8;
        }
        local_34b8 = CONCAT44(local_34b8._4_4_,iVar3);
        *(ulong *)(local_34c0 + (long)iVar51 * 8) =
             (ulong)*(uint *)(lVar43 + 0xa0) << 0x20 |
             uVar54 & 0xffff | (((ulong)*(byte *)(lVar43 + 0x96) & 0x10) >> 4) << 0x1f;
        if (((*(byte *)(lVar43 + 0x96) >> 4 & 1) != 0) && (*(char *)(lVar43 + 0x97) == '\0')) {
          FUN_0307583c(auStack_3480,param_2,
                       *(long *)(*(long *)(param_2 + 8) + 0x38) +
                       ((ulong)*(uint *)plVar38[-1] & 0xffffff) * 0xc0,
                       *(undefined8 *)(lVar43 + 0x98));
          iVar3 = (int)local_3498 + 1;
          if ((int)(local_3498._4_4_ & 0x3fffffff) <= (int)local_3498) {
            local_34a0 = FUN_0307e560(puVar4,iVar3,local_34a0,local_3498 & 0xffffffff,
                                      (long)&local_3498 + 4);
          }
          puVar6 = (undefined8 *)(local_34a0 + (long)(int)local_3498 * 0x80);
          local_3498 = CONCAT44(local_3498._4_4_,iVar3);
          *(int *)((long)puVar6 + 0x44) = (int)uVar54;
          *(undefined1 *)((long)puVar6 + 0x51) = 0;
          puVar6[0xb] = lVar36;
          uVar83 = *(undefined8 *)(lVar43 + 0x88);
          puVar53 = puVar6 + 0xc;
          *puVar53 = *(undefined8 *)(lVar43 + 0x80);
          pfVar5 = (float *)(puVar6 + 0xd);
          *pfVar5 = (float)uVar83;
          uVar83 = *(undefined8 *)(lVar43 + 0x18);
          *(long *)((long)puVar6 + 0x6c) = *(long *)(lVar43 + 0x10);
          *(int *)((long)puVar6 + 0x74) = (int)uVar83;
          *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)(lVar43 + 4);
          *(undefined4 *)(puVar6 + 9) = *(undefined4 *)(lVar43 + 4);
          *(undefined4 *)((long)puVar6 + 0x4c) = *(undefined4 *)(lVar43 + 0xa0);
          uVar52 = *(ushort *)(local_3120 + 0x1a);
          *(byte *)((long)puVar6 + 0x52) = (byte)(uVar52 >> 9) & 1;
          if ((uVar52 >> 9 & 1) != 0) {
            uVar83 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x20);
            fVar60 = (float)uVar83;
            fVar84 = (float)((ulong)uVar83 >> 0x20);
            local_b0._0_4_ = fVar60 * (float)*(undefined8 *)(local_3178 + 0x38);
            local_b0._4_4_ = fVar84 * (float)((ulong)*(undefined8 *)(local_3178 + 0x38) >> 0x20);
            uStack_a8 = CONCAT44(fVar84 * 0.0,
                                 fVar60 * (float)((ulong)*(undefined8 *)(local_3178 + 0x30) >> 0x20)
                                );
            FUN_03073310(*(undefined4 *)(lVar43 + 4),*(long *)(param_3 + 8),auStack_3480,&local_b0,0
                         ,puVar53,lVar36 + 0x10,puVar6 + 9,&local_34d0);
            auVar73._8_4_ = fStack_3108;
            auVar73._0_8_ = local_3110;
            auVar67._8_4_ = fStack_3108;
            auVar67._0_8_ = local_3110;
            auVar67._12_4_ = fStack_3104;
            auVar73._12_4_ = fStack_3104;
            auVar67 = NEON_ext(auVar67,auVar73,8,1);
            auVar32._4_4_ = fStack_30fc;
            auVar32._0_4_ = local_3100;
            auVar32._8_4_ = fStack_30f8;
            auVar32._12_4_ = fStack_30f4;
            auVar18._8_4_ = fStack_30e8;
            auVar18._0_8_ = local_30f0;
            auVar74._8_4_ = fStack_30e8;
            auVar74._0_8_ = local_30f0;
            auVar73 = NEON_ext(auVar32,auVar32,8,1);
            auVar74._12_4_ = fStack_30e4;
            auVar18._12_4_ = fStack_30e4;
            auVar74 = NEON_ext(auVar74,auVar18,8,1);
            fVar60 = (float)uStack_a8;
            *puVar53 = CONCAT44((float)((ulong)local_34d0 >> 0x20) *
                                (auVar73._0_4_ * fVar60 +
                                local_3100 * (float)local_b0 + fStack_30fc * local_b0._4_4_) +
                                (float)((ulong)*puVar53 >> 0x20),
                                (float)local_34d0 *
                                (auVar67._0_4_ * fVar60 +
                                (float)local_3110 * (float)local_b0 +
                                (float)((ulong)local_3110 >> 0x20) * local_b0._4_4_) +
                                (float)*puVar53);
            *pfVar5 = (float)local_34d0 *
                      (auVar74._0_4_ * fVar60 +
                      (float)local_30f0 * (float)local_b0 +
                      (float)((ulong)local_30f0 >> 0x20) * local_b0._4_4_) + *pfVar5;
            iVar3 = *(int *)(local_3120 + 0x40);
            if (iVar3 == 0) {
              puVar53 = (undefined8 *)0x0;
            }
            else {
              puVar53 = (undefined8 *)((long)iVar3 + local_3120 + 0x40);
            }
            fVar62 = (float)uStack_33f8;
            fVar61 = (float)uStack_3400;
            fVar64 = (float)((ulong)uStack_3400 >> 0x20);
            fVar59 = (float)*puVar53 - fVar61;
            fVar72 = (float)((ulong)*puVar53 >> 0x20) - fVar64;
            fVar65 = *(float *)(puVar53 + 1) - fVar62;
            auVar20._8_4_ = uStack_3418;
            auVar20._0_8_ = uStack_3420;
            auVar19._8_4_ = uStack_3418;
            auVar19._0_8_ = uStack_3420;
            fVar77 = (float)uStack_3420;
            fVar63 = (float)((ulong)uStack_3420 >> 0x20);
            auVar19._12_4_ = uStack_3414;
            auVar20._12_4_ = uStack_3414;
            auVar73 = NEON_ext(auVar19,auVar20,8,1);
            auVar67 = NEON_ext(local_3430,local_3430,8,1);
            auVar74 = NEON_ext(local_3410,local_3410,8,1);
            fVar81 = local_3410._4_4_;
            fVar60 = local_3430._0_4_;
            fVar84 = local_3430._4_4_;
            fVar82 = local_3410._0_4_;
            puVar6[1] = CONCAT44(auVar74._4_4_ * fVar65 + fVar81 * fVar59 + auVar74._4_4_ * fVar72,
                                 auVar74._0_4_ * fVar65 + fVar82 * fVar59 + fVar81 * fVar72);
            *puVar6 = CONCAT44(auVar73._0_4_ * fVar65 + fVar77 * fVar59 + fVar63 * fVar72,
                               auVar67._0_4_ * fVar65 + fVar60 * fVar59 + fVar84 * fVar72);
            iVar3 = *(int *)(local_3120 + 0x44);
            iVar51 = 0;
            if (iVar3 != 0) {
              iVar51 = 1 / iVar3;
            }
            puVar48 = (undefined8 *)((long)puVar53 + (ulong)(1 - iVar51 * iVar3) * 0xc);
            uVar83 = *puVar48;
            fVar59 = (float)uVar83 - fVar61;
            fVar72 = (float)((ulong)uVar83 >> 0x20) - fVar64;
            fVar65 = *(float *)(puVar48 + 1) - fVar62;
            auVar22._8_4_ = uStack_3418;
            auVar22._0_8_ = uStack_3420;
            auVar21._8_4_ = uStack_3418;
            auVar21._0_8_ = uStack_3420;
            auVar21._12_4_ = uStack_3414;
            auVar22._12_4_ = uStack_3414;
            auVar73 = NEON_ext(auVar21,auVar22,8,1);
            auVar67 = NEON_ext(local_3430,local_3430,8,1);
            auVar74 = NEON_ext(local_3410,local_3410,8,1);
            puVar6[3] = CONCAT44(auVar74._4_4_ * fVar65 + fVar81 * fVar59 + auVar74._4_4_ * fVar72,
                                 auVar74._0_4_ * fVar65 + fVar82 * fVar59 + fVar81 * fVar72);
            puVar6[2] = CONCAT44(auVar73._0_4_ * fVar65 + fVar77 * fVar59 + fVar63 * fVar72,
                                 auVar67._0_4_ * fVar65 + fVar60 * fVar59 + fVar84 * fVar72);
            iVar3 = *(int *)(local_3120 + 0x44);
            iVar51 = 0;
            if (iVar3 != 0) {
              iVar51 = 2 / iVar3;
            }
            puVar48 = (undefined8 *)((long)puVar53 + (ulong)(2 - iVar51 * iVar3) * 0xc);
            uVar83 = *puVar48;
            fVar59 = (float)uVar83 - fVar61;
            fVar72 = (float)((ulong)uVar83 >> 0x20) - fVar64;
            fVar65 = *(float *)(puVar48 + 1) - fVar62;
            auVar24._8_4_ = uStack_3418;
            auVar24._0_8_ = uStack_3420;
            auVar23._8_4_ = uStack_3418;
            auVar23._0_8_ = uStack_3420;
            auVar23._12_4_ = uStack_3414;
            auVar24._12_4_ = uStack_3414;
            auVar73 = NEON_ext(auVar23,auVar24,8,1);
            auVar67 = NEON_ext(local_3430,local_3430,8,1);
            auVar74 = NEON_ext(local_3410,local_3410,8,1);
            puVar6[5] = CONCAT44(auVar74._4_4_ * fVar65 + fVar81 * fVar59 + auVar74._4_4_ * fVar72,
                                 auVar74._0_4_ * fVar65 + fVar82 * fVar59 + fVar81 * fVar72);
            puVar6[4] = CONCAT44(auVar73._0_4_ * fVar65 + fVar77 * fVar59 + fVar63 * fVar72,
                                 auVar67._0_4_ * fVar65 + fVar60 * fVar59 + fVar84 * fVar72);
            iVar3 = *(int *)(local_3120 + 0x44);
            iVar51 = 0;
            if (iVar3 != 0) {
              iVar51 = 3 / iVar3;
            }
            puVar53 = (undefined8 *)((long)puVar53 + (ulong)(3 - iVar51 * iVar3) * 0xc);
            uVar83 = *puVar53;
            fVar61 = (float)uVar83 - fVar61;
            fVar64 = (float)((ulong)uVar83 >> 0x20) - fVar64;
            fVar62 = *(float *)(puVar53 + 1) - fVar62;
            auVar26._8_4_ = uStack_3418;
            auVar26._0_8_ = uStack_3420;
            auVar25._8_4_ = uStack_3418;
            auVar25._0_8_ = uStack_3420;
            auVar25._12_4_ = uStack_3414;
            auVar26._12_4_ = uStack_3414;
            auVar73 = NEON_ext(auVar25,auVar26,8,1);
            auVar67 = NEON_ext(local_3430,local_3430,8,1);
            auVar74 = NEON_ext(local_3410,local_3410,8,1);
            puVar6[7] = CONCAT44(auVar74._4_4_ * fVar62 + fVar81 * fVar61 + auVar74._4_4_ * fVar64,
                                 auVar74._0_4_ * fVar62 + fVar82 * fVar61 + fVar81 * fVar64);
            puVar6[6] = CONCAT44(auVar73._0_4_ * fVar62 + fVar77 * fVar61 + fVar63 * fVar64,
                                 auVar67._0_4_ * fVar62 + fVar60 * fVar61 + fVar84 * fVar64);
            *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(local_3120 + 0x20);
            *(byte *)((long)puVar6 + 0x52) = 1;
            *(char *)(puVar6 + 10) = (char)*(undefined4 *)(local_3120 + 0x44);
            local_b0 = *(long *)((long)puVar6 + 0x6c);
            uStack_a8 = CONCAT44(*(undefined4 *)((long)puVar6 + 0x74),
                                 *(undefined4 *)((long)puVar6 + 0x74));
            FUN_03070a40(auStack_3480,lVar36,&local_b0);
          }
        }
      }
      else {
        lVar43 = *(long *)*plVar38;
        puVar7 = (ushort *)(*(long *)(lVar43 + 0x20) + (ulong)*(ushort *)(lVar43 + 0x28));
        uVar35 = FUN_0307e300(*(undefined8 *)(local_3180 + 0x78),lVar43);
        iVar3 = (int)local_34b8 + 1;
        iVar51 = (int)local_34b8;
        if ((int)(local_34b8._4_4_ & 0x3fffffff) <= (int)local_34b8) {
          local_34c0 = FUN_0307e3ec(puVar4,iVar3,local_34c0,local_34b8 & 0xffffffff,
                                    (long)&local_34b8 + 4);
          iVar51 = (int)local_34b8;
        }
        local_34b8 = CONCAT44(local_34b8._4_4_,iVar3);
        *(ulong *)(local_34c0 + (long)iVar51 * 8) =
             (ulong)uVar35 << 0x20 | uVar54 & 0xffff | (((ulong)*puVar7 & 0x800) >> 0xb) << 0x1f;
        if ((*(byte *)((long)puVar7 + 1) >> 4 & 1) != 0) {
          FUN_0307583c(auStack_3480,param_2,
                       *(long *)(*(long *)(param_2 + 8) + 0x38) +
                       ((ulong)*(uint *)(puVar7 + 6) & 0xffffff) * 0xc0,lVar43);
          iVar3 = (int)local_3498 + 1;
          if ((int)(local_3498._4_4_ & 0x3fffffff) <= (int)local_3498) {
            local_34a0 = FUN_0307e560(puVar4,iVar3,local_34a0,local_3498 & 0xffffffff,
                                      (long)&local_3498 + 4);
          }
          lVar36 = (long)(int)local_3498;
          local_3498 = CONCAT44(local_3498._4_4_,iVar3);
          lVar36 = local_34a0 + lVar36 * 0x80;
          *(undefined8 *)(lVar36 + 0x44) = 0xff7fffeeffffffff;
          *(undefined1 *)(lVar36 + 0x51) = 1;
          *(long *)(lVar36 + 0x58) = lVar43;
          uVar11 = *(undefined4 *)(local_3120 + 0x44);
          *(uint *)(lVar36 + 0x4c) = uVar35;
          *(char *)(lVar36 + 0x50) = (char)uVar11;
          FUN_03072510(auStack_3480,puVar7,lVar36,lVar36 + 0x60);
          *(undefined4 *)(lVar36 + 0x40) = *(undefined4 *)(local_3120 + 0x20);
          local_3518 = local_3518 + 1;
        }
      }
      uVar54 = uVar54 + 1;
      plVar38 = plVar38 + 2;
    } while (uVar40 != uVar54);
  }
  lVar43 = *(long *)(lVar39 + 0x38d490);
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
  }
  if (*(long *)(lVar43 + 0x10) != 0) {
    FUN_032d5b34(*(long *)(lVar43 + 0x10),&DAT_0390f40e);
    lVar43 = *(long *)(lVar39 + 0x38d490);
  }
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
    lVar43 = *(long *)(lVar43 + 0x10);
  }
  else {
    lVar43 = *(long *)(lVar43 + 0x10);
  }
  if (lVar43 != 0) {
    FUN_032d5af0(lVar43,"TtSort",6);
  }
  iVar3 = (int)local_3498;
  lVar43 = (long)(int)local_3498;
  if (1 < (int)local_3498) {
    FUN_0307e830(local_34a0,0,(int)local_3498 + -1);
  }
  lVar36 = *(long *)(lVar39 + 0x38d490);
  if (lVar36 == 0) {
    lVar36 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar36;
    lVar37 = *(long *)(lVar36 + 0x10);
  }
  else {
    lVar37 = *(long *)(lVar36 + 0x10);
  }
  if (lVar37 != 0) {
    FUN_032d5b34(lVar37,&DAT_0390f40e);
    lVar36 = *(long *)(lVar39 + 0x38d490);
  }
  if (lVar36 == 0) {
    lVar36 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar36;
    lVar37 = *(long *)(lVar36 + 0x10);
  }
  else {
    lVar37 = *(long *)(lVar36 + 0x10);
  }
  if (lVar37 != 0) {
    FUN_032d5c48((float)local_3518,lVar37,"MiJacs");
    lVar36 = *(long *)(lVar39 + 0x38d490);
  }
  if (lVar36 == 0) {
    lVar36 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar36;
    lVar37 = *(long *)(lVar36 + 0x10);
  }
  else {
    lVar37 = *(long *)(lVar36 + 0x10);
  }
  if (lVar37 != 0) {
    FUN_032d5c48((float)(iVar3 - local_3518),lVar37,"MiManifolds");
    lVar36 = *(long *)(lVar39 + 0x38d490);
  }
  if (lVar36 == 0) {
    lVar36 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar36;
    lVar36 = *(long *)(lVar36 + 0x10);
  }
  else {
    lVar36 = *(long *)(lVar36 + 0x10);
  }
  if (lVar36 != 0) {
    FUN_032d5af0(lVar36,"TtWeld",6);
  }
  lVar36 = local_34a0;
  if (iVar3 != 0) {
    lVar37 = local_34a0 + 0x4c;
    lVar56 = local_34a0 + 0x78;
    uVar83 = NEON_fmov(0x3f800000,4);
    uVar54 = 0;
    do {
      uVar47 = -(uVar54 >> 0x1f) & 0xffffff8000000000 | uVar54 << 7;
      uVar44 = (ulong)(int)uVar54;
      piVar50 = (int *)(lVar37 + uVar47);
      lVar58 = uVar54 << 0x20;
      iVar51 = *(int *)(lVar36 + uVar47 + 0x4c);
      do {
        lVar57 = lVar58;
        uVar47 = uVar44 & 0xffffffff;
        uVar35 = (uint)uVar44;
        iVar10 = iVar51;
        if (lVar43 <= (long)uVar44) break;
        iVar10 = *piVar50;
        pcVar1 = (char *)((long)piVar50 + 5);
        uVar44 = uVar44 + 1;
        uVar9 = (uint)uVar54;
        if (iVar10 != iVar51) {
          uVar9 = uVar35;
        }
        uVar54 = (ulong)uVar9;
        piVar50 = piVar50 + 0x20;
        lVar58 = lVar57 + 0x100000000;
        iVar51 = iVar10;
      } while (*pcVar1 != '\0');
      if ((int)uVar35 < iVar3) {
        pfVar5 = (float *)(lVar56 + (long)(int)uVar54 * 0x80);
        uVar44 = lVar57 >> 0x20;
        do {
          puVar6 = (undefined8 *)(lVar36 + uVar44 * 0x80);
          if (*(int *)((long)puVar6 + 0x4c) != iVar10) {
            uVar47 = uVar44 & 0xffffffff;
            break;
          }
          piVar50 = (int *)(param_5 + (long)*(int *)((long)puVar6 + 0x44) * 2)[1];
          lVar58 = *(long *)(piVar50 + 0x26);
          FUN_0307583c(auStack_3480,param_2,
                       *(long *)(*(long *)(param_2 + 8) + 0x38) +
                       ((ulong)*(uint *)param_5[(long)*(int *)((long)puVar6 + 0x44) * 2] & 0xffffff)
                       * 0xc0,lVar58);
          fVar60 = local_18f0;
          fVar84 = (float)piVar50[1];
          if (*(char *)((long)puVar6 + 0x52) == '\0') {
            uVar52 = 0xffff;
            *(undefined2 *)(lVar58 + 0x9a) = 0xffff;
            if (fVar84 < local_18f0) {
              uVar12 = 0xffff;
              local_3528._0_4_ = -1;
              goto LAB_0307d230;
            }
            bVar34 = *(byte *)(*(long *)(piVar50 + 0x26) + 0xe) & 3;
            uVar35 = *(uint *)(local_3148 + 0x54) | *(uint *)(local_3180 + 0x54) |
                     *(uint *)(local_3170 + 0x14) | *(uint *)(local_3138 + 0x14);
            if (bVar34 == 1) {
              uVar35 = uVar35 & 0xffffff7f;
            }
            else if (bVar34 == 2) {
              uVar35 = uVar35 | 0x80;
            }
            if (*(long *)(param_2 + 8) != 0) {
              uVar35 = *(uint *)(*(long *)(param_2 + 8) + 0x80c) | uVar35;
            }
            uVar35 = *(uint *)(*(long *)(param_2 + 0x30) +
                               (ulong)*(ushort *)(local_3140 + 0x58) * 0x70 + 4) |
                     *(uint *)(*(long *)(param_2 + 0x30) +
                               (ulong)*(ushort *)(local_3178 + 0x58) * 0x70 + 4) | uVar35;
            if ((**(uint **)(param_2 + 0x40) & uVar35) != 0) {
              *(undefined2 *)(lVar58 + 0x86) = 0;
              lVar57 = 0;
              *(undefined2 *)(lVar58 + 0x94) = 0;
              local_88 = (float)piVar50[1];
              fVar59 = (float)*(undefined8 *)(piVar50 + 6);
              fVar60 = (float)*(undefined8 *)(piVar50 + 4);
              fVar84 = (float)((ulong)*(undefined8 *)(piVar50 + 4) >> 0x20);
              local_90 = *(undefined8 *)(piVar50 + 0x26);
              fVar61 = (float)piVar50[0x20] - fVar60 * local_88;
              fVar72 = (float)piVar50[0x21] - fVar84 * local_88;
              fVar64 = (float)piVar50[0x22] - fVar59 * local_88;
              auVar67 = *(undefined1 (*) [16])(local_3150 + 4);
              auVar73 = *(undefined1 (*) [16])(local_3150 + 8);
              auVar74 = *(undefined1 (*) [16])(local_3150 + 0xc);
              uStack_a8 = CONCAT44(auVar74._12_4_ +
                                   auVar73._12_4_ * fVar64 +
                                   local_3150[3] * fVar61 + auVar67._12_4_ * fVar72,
                                   auVar74._8_4_ +
                                   auVar73._8_4_ * fVar64 +
                                   local_3150[2] * fVar61 + auVar67._8_4_ * fVar72);
              local_b0 = CONCAT44(auVar74._4_4_ +
                                  auVar73._4_4_ * fVar64 +
                                  local_3150[1] * fVar61 + auVar67._4_4_ * fVar72,
                                  auVar74._0_4_ +
                                  auVar73._0_4_ * fVar64 +
                                  *local_3150 * fVar61 + auVar67._0_4_ * fVar72);
              uStack_98 = CONCAT44(auVar73._12_4_ * fVar59 +
                                   auVar67._12_4_ * fVar84 + local_3150[3] * fVar60,
                                   auVar73._8_4_ * fVar59 +
                                   auVar67._8_4_ * fVar84 + local_3150[2] * fVar60);
              local_a0 = CONCAT44(auVar73._4_4_ * fVar59 +
                                  auVar67._4_4_ * fVar84 + local_3150[1] * fVar60,
                                  auVar73._0_4_ * fVar59 +
                                  auVar67._0_4_ * fVar84 + *local_3150 * fVar60);
              puVar53 = *(undefined8 **)(param_2 + 0x40);
              puVar6 = puVar53;
              do {
                if ((*(uint *)(puVar6 + 1) & uVar35) != 0) {
                  plVar38 = (long *)puVar6[2];
                  (**(code **)(*plVar38 + 0x18))
                            (plVar38,param_2,param_3,&local_3180,&local_3148,&local_b0);
                }
                lVar57 = lVar57 + 1;
                puVar6 = puVar6 + 2;
              } while (lVar57 < *(int *)((long)puVar53 + 4));
            }
          }
          else {
            *(short *)(lVar58 + 0x9a) = (short)uVar44;
            uVar70 = puVar6[0xc];
            puVar53 = (undefined8 *)((long)puVar6 + 0x6c);
            fVar59 = *(float *)((long)puVar6 + 0x74);
            fVar61 = *(float *)(puVar6 + 8) + *(float *)(puVar6 + 0xf);
            uStack_34c8 = CONCAT44(*(float *)(puVar6 + 0xd) - fVar59 * fVar61,
                                   *(float *)(puVar6 + 0xd) - fVar59 * fVar61);
            local_34d0 = CONCAT44((float)((ulong)uVar70 >> 0x20) -
                                  (float)((ulong)*puVar53 >> 0x20) * fVar61,
                                  (float)uVar70 - (float)*puVar53 * fVar61);
            fVar59 = *(float *)((long)puVar6 + 0x74);
            local_34e0 = *puVar53;
            uStack_34d8 = CONCAT44(fVar59,fVar59);
            if ((long)(int)uVar54 < (long)uVar44) {
              uVar12 = 0xffff;
              local_3528 = 0xffffffff;
              uVar52 = 0xffff;
              cVar13 = *(char *)((long)pfVar5 + -0x27);
              pfVar33 = pfVar5;
              uVar55 = uVar54;
              do {
                if (cVar13 != '\0') {
                  fVar59 = pfVar33[-1];
                  local_b0 = *(long *)(pfVar33 + -3);
                  lVar57 = *(long *)(pfVar33 + -8);
                  auVar66._0_4_ = (float)local_b0 * ((float)*(undefined8 *)(pfVar33 + -6) + 0.0);
                  auVar66._4_4_ =
                       (float)((ulong)local_b0 >> 0x20) *
                       ((float)((ulong)*(undefined8 *)(pfVar33 + -6) >> 0x20) + 0.0);
                  auVar66._8_4_ = fVar59 * (pfVar33[-4] + 0.0);
                  auVar66._12_4_ = fVar59 * (pfVar33[-4] + 0.0);
                  auVar67 = NEON_ext(auVar66,auVar66,8,1);
                  uStack_a8 = CONCAT44((pfVar33[-0xe] + *pfVar33) -
                                       (auVar66._0_4_ + auVar66._4_4_ + auVar67._0_4_),fVar59);
                  if (fVar84 < fVar60) {
                    local_3510 = *puVar53;
                    uStack_3508 = CONCAT44(*(undefined4 *)((long)puVar6 + 0x74),
                                           *(undefined4 *)((long)puVar6 + 0x74));
                    bVar34 = FUN_03070b40(local_34f8,auStack_18e0,&local_3510,&local_34d0,puVar6,
                                          *(undefined1 *)(puVar6 + 10),lVar58 + 0x10,&local_b0,
                                          pfVar33 + -0x1e,*(undefined1 *)(pfVar33 + -10),
                                          lVar57 + 0x9c,&local_34f0,lVar58 + 0x9c);
                  }
                  else {
                    local_3510 = *puVar53;
                    uStack_3508 = CONCAT44(*(undefined4 *)((long)puVar6 + 0x74),
                                           *(undefined4 *)((long)puVar6 + 0x74));
                    bVar34 = FUN_030719c0(local_34f8,auStack_18e0,&local_3510,&local_34d0,puVar6,
                                          &local_b0,pfVar33 + -0x1e,lVar57 + 0x9c,&local_34f0,
                                          lVar58 + 0x9c);
                  }
                  if (((bVar34 & 0x7f) != 0) &&
                     (((bVar34 & 0x7f) != 3 || ((*(byte *)(lVar58 + 0x99) & 0x7f) != 3)))) {
                    *(byte *)(lVar58 + 0x99) = bVar34;
                    if (-1 < (char)bVar34) {
                      uVar12 = *(ushort *)(lVar57 + 0x86);
                      uVar52 = *(ushort *)(lVar57 + 0x94);
                    }
                    uStack_34d8 = uStack_34e8;
                    local_34e0 = local_34f0;
                    local_3528._0_4_ = (int)uVar55;
                    if ((bVar34 & 0x7f) != 3) goto joined_r0x0307d1dc;
                    local_3528 = uVar55;
                  }
                }
                uVar35 = (int)uVar55 + 1;
                uVar55 = (ulong)uVar35;
                if ((uint)uVar44 == uVar35) goto joined_r0x0307d1dc;
                cVar13 = *(char *)((long)pfVar33 + 0x59);
                pfVar33 = pfVar33 + 0x20;
              } while( true );
            }
            uVar52 = 0xffff;
            uVar12 = 0xffff;
            local_3528._0_4_ = -1;
joined_r0x0307d1dc:
            if (fVar84 < fVar60) {
              *(undefined1 *)((long)puVar6 + 0x51) = 1;
              bVar34 = *(byte *)(lVar58 + 0x99);
            }
            else {
              bVar34 = *(byte *)(lVar58 + 0x99);
              if ((bVar34 & 0x7f) == 0) {
                bVar34 = *(byte *)(*(long *)(piVar50 + 0x26) + 0xe) & 3;
                uVar35 = *(uint *)(local_3148 + 0x54) | *(uint *)(local_3180 + 0x54) |
                         *(uint *)(local_3170 + 0x14) | *(uint *)(local_3138 + 0x14);
                if (bVar34 == 1) {
                  uVar35 = uVar35 & 0xffffff7f;
                }
                else if (bVar34 == 2) {
                  uVar35 = uVar35 | 0x80;
                }
                if (*(long *)(param_2 + 8) != 0) {
                  uVar35 = *(uint *)(*(long *)(param_2 + 8) + 0x80c) | uVar35;
                }
                uVar35 = *(uint *)(*(long *)(param_2 + 0x30) +
                                   (ulong)*(ushort *)(local_3140 + 0x58) * 0x70 + 4) |
                         *(uint *)(*(long *)(param_2 + 0x30) +
                                   (ulong)*(ushort *)(local_3178 + 0x58) * 0x70 + 4) | uVar35;
                if ((**(uint **)(param_2 + 0x40) & uVar35) != 0) {
                  *(undefined2 *)(lVar58 + 0x86) = 0;
                  lVar57 = 0;
                  *(undefined2 *)(lVar58 + 0x94) = 0;
                  local_88 = (float)piVar50[1];
                  fVar59 = (float)*(undefined8 *)(piVar50 + 6);
                  fVar60 = (float)*(undefined8 *)(piVar50 + 4);
                  fVar84 = (float)((ulong)*(undefined8 *)(piVar50 + 4) >> 0x20);
                  local_90 = *(undefined8 *)(piVar50 + 0x26);
                  fVar61 = (float)piVar50[0x20] - fVar60 * local_88;
                  fVar72 = (float)piVar50[0x21] - fVar84 * local_88;
                  fVar64 = (float)piVar50[0x22] - fVar59 * local_88;
                  auVar67 = *(undefined1 (*) [16])(local_3150 + 4);
                  auVar73 = *(undefined1 (*) [16])(local_3150 + 8);
                  auVar74 = *(undefined1 (*) [16])(local_3150 + 0xc);
                  uStack_a8 = CONCAT44(auVar74._12_4_ +
                                       auVar73._12_4_ * fVar64 +
                                       local_3150[3] * fVar61 + auVar67._12_4_ * fVar72,
                                       auVar74._8_4_ +
                                       auVar73._8_4_ * fVar64 +
                                       local_3150[2] * fVar61 + auVar67._8_4_ * fVar72);
                  local_b0 = CONCAT44(auVar74._4_4_ +
                                      auVar73._4_4_ * fVar64 +
                                      local_3150[1] * fVar61 + auVar67._4_4_ * fVar72,
                                      auVar74._0_4_ +
                                      auVar73._0_4_ * fVar64 +
                                      *local_3150 * fVar61 + auVar67._0_4_ * fVar72);
                  uStack_98 = CONCAT44(auVar73._12_4_ * fVar59 +
                                       auVar67._12_4_ * fVar84 + local_3150[3] * fVar60,
                                       auVar73._8_4_ * fVar59 +
                                       auVar67._8_4_ * fVar84 + local_3150[2] * fVar60);
                  local_a0 = CONCAT44(auVar73._4_4_ * fVar59 +
                                      auVar67._4_4_ * fVar84 + local_3150[1] * fVar60,
                                      auVar73._0_4_ * fVar59 +
                                      auVar67._0_4_ * fVar84 + *local_3150 * fVar60);
                  puVar53 = *(undefined8 **)(param_2 + 0x40);
                  puVar6 = puVar53;
                  do {
                    if ((*(uint *)(puVar6 + 1) & uVar35) != 0) {
                      plVar38 = (long *)puVar6[2];
                      (**(code **)(*plVar38 + 0x18))
                                (plVar38,param_2,param_3,&local_3180,&local_3148,&local_b0);
                    }
                    lVar57 = lVar57 + 1;
                    puVar6 = puVar6 + 2;
                  } while (lVar57 < *(int *)((long)puVar53 + 4));
                }
                goto LAB_0307d354;
              }
            }
            if (-1 < (char)bVar34) {
              FUN_03072080(auStack_18e0,puVar6,*(undefined1 *)(puVar6 + 10),&local_34e0,&local_b0,
                           puVar6 + 0xc,&local_34f0);
            }
LAB_0307d230:
            *(char *)((long)piVar50 + 0x96) = *(char *)((long)puVar6 + 0x52) << 3;
            lVar57 = (long)*(int *)((long)puVar6 + 0x44) * 8;
            *(ulong *)(local_34c0 + lVar57) = *(ulong *)(local_34c0 + lVar57) & 0xffffffff7fffffff;
            uVar70 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x10);
            fVar60 = (float)uVar70;
            fVar84 = fVar60 * (float)*(undefined8 *)(local_3178 + 0x60);
            fVar59 = (float)((ulong)uVar70 >> 0x20) *
                     (float)((ulong)*(undefined8 *)(local_3178 + 0x60) >> 0x20);
            fVar60 = fVar60 * (float)*(undefined8 *)(local_3178 + 0x68);
            auVar15._8_4_ = uStack_24f8;
            auVar15._0_8_ = local_2500;
            auVar14._8_4_ = uStack_24f8;
            auVar14._0_8_ = local_2500;
            auVar73 = NEON_ext(local_24f0,local_24f0,8,1);
            auVar14._12_4_ = uStack_24f4;
            auVar15._12_4_ = uStack_24f4;
            auVar67 = NEON_ext(auVar14,auVar15,8,1);
            auVar74 = NEON_ext(local_24e0,local_24e0,8,1);
            uStack_a8 = CONCAT44(auVar74._4_4_ * fVar60 +
                                 local_24e0._4_4_ * fVar84 + auVar74._4_4_ * fVar59,
                                 auVar74._0_4_ * fVar60 +
                                 local_24e0._0_4_ * fVar84 + local_24e0._4_4_ * fVar59);
            local_b0 = CONCAT44(auVar73._0_4_ * fVar60 +
                                local_24f0._0_4_ * fVar84 + local_24f0._4_4_ * fVar59,
                                auVar67._0_4_ * fVar60 +
                                (float)local_2500 * fVar84 +
                                (float)((ulong)local_2500 >> 0x20) * fVar59);
            puVar53 = (undefined8 *)((long)puVar6 + 0x6c);
            fVar60 = (float)*puVar53;
            fVar84 = (float)((ulong)*puVar53 >> 0x20);
            fVar59 = *(float *)((long)puVar6 + 0x74);
            uStack_34c8 = CONCAT44(fStack_3104 * fVar60 + fStack_30f4 * fVar84 +
                                   fStack_30e4 * fVar59,
                                   fStack_3108 * fVar60 + fStack_30f8 * fVar84 +
                                   fStack_30e8 * fVar59);
            local_34d0 = CONCAT44((float)((ulong)local_3110 >> 0x20) * fVar60 + fStack_30fc * fVar84
                                  + (float)((ulong)local_30f0 >> 0x20) * fVar59,
                                  (float)local_3110 * fVar60 + local_3100 * fVar84 +
                                  (float)local_30f0 * fVar59);
            FUN_03073750(param_2,&local_3180,&local_3148,local_3430,puVar6 + 0xc,&local_34d0,0,
                         &local_b0,lVar58,piVar50);
            uVar8 = *(ushort *)(lVar58 + 0x86);
            if (uVar12 <= *(ushort *)(lVar58 + 0x86)) {
              uVar8 = uVar12;
            }
            *(ushort *)(lVar58 + 0x86) = uVar8;
            uVar12 = *(ushort *)(lVar58 + 0x94);
            if (uVar52 <= *(ushort *)(lVar58 + 0x94)) {
              uVar12 = uVar52;
            }
            *(ushort *)(lVar58 + 0x94) = uVar12;
            if ((*piVar50 == 0) && ((*(byte *)(lVar58 + 0x99) & 0x7e) == 2)) {
              lVar57 = lVar36 + (long)(int)local_3528 * 0x80;
              if (-1 < *(int *)(lVar57 + 0x44)) {
                fVar60 = *(float *)(lVar57 + 0x74);
                fVar59 = (float)*(undefined8 *)(lVar57 + 0x6c);
                fVar61 = (float)((ulong)*(undefined8 *)(lVar57 + 0x6c) >> 0x20);
                fVar72 = *(float *)(lVar57 + 0x78);
                uVar70 = *(undefined8 *)(lVar57 + 0x60);
                fVar84 = *(float *)(lVar57 + 0x68);
                piVar45 = (int *)param_5[(long)*(int *)(lVar57 + 0x44) * 2 + 1];
                if ((*(byte *)(lVar58 + 0x99) & 0x7f) == 2) {
                  fVar64 = *(float *)((long)puVar6 + 0x74);
                  uVar78 = puVar6[0xc];
                  fVar62 = (float)*puVar53;
                  fVar63 = (float)((ulong)*puVar53 >> 0x20);
                  auVar75._0_4_ = fVar62 * ((float)uVar78 + 0.0);
                  auVar75._4_4_ = fVar63 * ((float)((ulong)uVar78 >> 0x20) + 0.0);
                  auVar75._8_4_ = fVar64 * (*(float *)(puVar6 + 0xd) + 0.0);
                  auVar75._12_4_ = fVar64 * (*(float *)(puVar6 + 0xd) + 0.0);
                  auVar67 = NEON_ext(auVar75,auVar75,8,1);
                  fVar65 = (*(float *)(puVar6 + 0xf) + 0.0) -
                           (auVar75._0_4_ + auVar75._4_4_ + auVar67._0_4_);
                  uVar78 = uVar83;
                }
                else {
                  fVar64 = (float)puVar6[1];
                  fVar62 = (float)((ulong)puVar6[1] >> 0x20);
                  fVar65 = (float)*puVar6;
                  fVar77 = (float)((ulong)*puVar6 >> 0x20);
                  auVar68._0_4_ = *(float *)(puVar6 + 2) - fVar65;
                  auVar68._4_4_ = *(float *)((long)puVar6 + 0x14) - fVar77;
                  auVar68._8_4_ = *(float *)(puVar6 + 3) - fVar64;
                  auVar68._12_4_ = *(float *)((long)puVar6 + 0x1c) - fVar62;
                  auVar76._0_4_ = *(float *)(puVar6 + 4) - fVar65;
                  auVar76._4_4_ = *(float *)((long)puVar6 + 0x24) - fVar77;
                  auVar76._8_4_ = *(float *)(puVar6 + 5) - fVar64;
                  auVar76._12_4_ = *(float *)((long)puVar6 + 0x2c) - fVar62;
                  auVar67 = NEON_ext(auVar68,auVar68,4,1);
                  auVar73 = NEON_ext(auVar76,auVar76,4,1);
                  auVar69._0_4_ = auVar68._0_4_ * auVar73._0_4_ - auVar76._0_4_ * auVar67._0_4_;
                  auVar69._4_4_ = auVar68._4_4_ * auVar73._4_4_ - auVar76._4_4_ * auVar67._4_4_;
                  auVar69._8_4_ = auVar68._8_4_ * auVar76._0_4_ - auVar76._8_4_ * auVar68._0_4_;
                  auVar69._12_4_ = auVar68._12_4_ * auVar76._4_4_ - auVar76._12_4_ * auVar68._4_4_;
                  auVar67 = NEON_ext(auVar69,auVar69,4,1);
                  fVar80 = auVar67._0_4_;
                  fVar87 = auVar67._4_4_;
                  fVar65 = fVar65 * fVar80;
                  fVar77 = fVar77 * fVar87;
                  fVar81 = fVar80 * fVar80 + fVar87 * fVar87 + auVar69._0_4_ * auVar69._0_4_;
                  fVar82 = fVar80 * fVar80 + fVar87 * fVar87 + auVar69._0_4_ * auVar69._0_4_;
                  uVar78 = CONCAT44(fVar82,fVar81);
                  uVar79 = NEON_frsqrte(uVar78,4);
                  fVar88 = (float)uVar79;
                  fVar89 = (float)((ulong)uVar79 >> 0x20);
                  uVar79 = NEON_frsqrts(uVar78,CONCAT44(fVar89 * fVar89,fVar88 * fVar88),4);
                  fVar88 = fVar88 * (float)uVar79;
                  fVar89 = fVar89 * (float)((ulong)uVar79 >> 0x20);
                  uVar78 = NEON_frsqrts(uVar78,CONCAT44(fVar89 * fVar89,fVar88 * fVar88),4);
                  fVar88 = (float)uVar78 * fVar88;
                  fVar89 = (float)((ulong)uVar78 >> 0x20) * fVar89;
                  auVar16._4_4_ = fVar77;
                  auVar16._0_4_ = fVar65;
                  auVar16._8_4_ = fVar64 * auVar69._0_4_;
                  auVar16._12_4_ = fVar62 * auVar69._4_4_;
                  auVar17._4_4_ = fVar77;
                  auVar17._0_4_ = fVar65;
                  auVar17._8_4_ = fVar64 * auVar69._0_4_;
                  auVar17._12_4_ = fVar62 * auVar69._4_4_;
                  auVar67 = NEON_ext(auVar16,auVar17,8,1);
                  fVar62 = fVar88 * fVar80;
                  fVar63 = fVar89 * fVar87;
                  fVar64 = fVar88 * auVar69._0_4_;
                  fVar65 = fVar89 * -(fVar65 + fVar77 + auVar67._0_4_) - *(float *)(puVar6 + 8);
                  uVar78 = CONCAT44(fVar59 * fVar80 + fVar61 * fVar87 + fVar60 * auVar69._0_4_,
                                    fVar59 * fVar80 + fVar61 * fVar87 + fVar60 * auVar69._0_4_);
                  uVar79 = NEON_frecpe(uVar78,4);
                  uVar85 = NEON_frecps(uVar78,uVar79,4);
                  fVar77 = (float)uVar79 * (float)uVar85;
                  fVar80 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
                  uVar78 = NEON_frecps(uVar78,CONCAT44(fVar80,fVar77),4);
                  uVar78 = CONCAT44(fVar89 * fVar82 * fVar80 * (float)((ulong)uVar78 >> 0x20),
                                    fVar88 * fVar81 * fVar77 * (float)uVar78);
                }
                piVar50[1] = 0x5f7ffff0;
                iVar51 = *piVar45;
                if (0 < iVar51) {
                  auVar71._0_4_ = fVar59 * ((float)uVar70 + 0.0);
                  auVar71._4_4_ = fVar61 * ((float)((ulong)uVar70 >> 0x20) + 0.0);
                  auVar71._8_4_ = fVar60 * (fVar84 + 0.0);
                  auVar71._12_4_ = fVar60 * (fVar84 + 0.0);
                  auVar67 = NEON_ext(auVar71,auVar71,8,1);
                  fVar84 = (fVar72 + 0.0) - (auVar71._0_4_ + auVar71._4_4_ + auVar67._0_4_);
                  iVar49 = 0;
                  lVar58 = 0;
                  do {
                    auVar31._8_4_ = fStack_3108;
                    auVar31._0_8_ = local_3110;
                    auVar31._12_4_ = fStack_3104;
                    auVar67 = NEON_ext(auVar31,auVar31,8,1);
                    auVar30._4_4_ = fStack_30fc;
                    auVar30._0_4_ = local_3100;
                    auVar30._8_4_ = fStack_30f8;
                    auVar29._4_4_ = fStack_30fc;
                    auVar29._0_4_ = local_3100;
                    auVar29._8_4_ = fStack_30f8;
                    auVar28._8_4_ = fStack_30e8;
                    auVar28._0_8_ = local_30f0;
                    auVar27._8_4_ = fStack_30e8;
                    auVar27._0_8_ = local_30f0;
                    fVar80 = (float)((ulong)local_30f0 >> 0x20);
                    auVar29._12_4_ = fStack_30f4;
                    auVar30._12_4_ = fStack_30f4;
                    auVar73 = NEON_ext(auVar29,auVar30,8,1);
                    pfVar33 = (float *)(piVar45 + lVar58 * 4 + 0x10);
                    fVar72 = (float)((ulong)local_3110 >> 0x20);
                    auVar27._12_4_ = fStack_30e4;
                    auVar28._12_4_ = fStack_30e4;
                    auVar74 = NEON_ext(auVar27,auVar28,8,1);
                    fVar77 = (*pfVar33 - local_30e0._0_4_) - local_30d0._0_4_;
                    fVar81 = (pfVar33[1] - local_30e0._4_4_) - local_30d0._4_4_;
                    fVar82 = (pfVar33[2] - local_30e0._8_4_) - local_30d0._8_4_;
                    fVar87 = (float)piVar45[lVar58 + 0xc] + *(float *)(local_3158 + 0x20);
                    fVar88 = auVar67._0_4_ * fVar82 + (float)local_3110 * fVar77 + fVar72 * fVar81 +
                             fVar59 * fVar87;
                    fVar89 = auVar73._0_4_ * fVar82 + local_3100 * fVar77 + fStack_30fc * fVar81 +
                             fVar61 * fVar87;
                    fVar90 = auVar74._0_4_ * fVar82 + (float)local_30f0 * fVar77 + fVar80 * fVar81 +
                             fVar60 * fVar87;
                    fVar82 = auVar74._4_4_ * fVar82 + fVar80 * fVar77 + auVar74._4_4_ * fVar81 +
                             fVar84 * fVar87;
                    auVar86._0_4_ = fVar62 * fVar88;
                    auVar86._4_4_ = fVar63 * fVar89;
                    auVar86._8_4_ = fVar64 * fVar90;
                    auVar86._12_4_ = fVar65 * fVar82;
                    auVar67 = NEON_ext(auVar86,auVar86,8,1);
                    fVar77 = auVar67._0_4_ + fVar65;
                    fVar81 = (float)uVar78 * (auVar86._0_4_ + auVar86._4_4_ + fVar77);
                    fVar77 = (float)((ulong)uVar78 >> 0x20) *
                             (auVar86._0_4_ + auVar86._4_4_ + fVar77);
                    fVar88 = fVar88 - fVar81 * (float)*puVar53;
                    fVar89 = fVar89 - fVar77 * (float)((ulong)*puVar53 >> 0x20);
                    fVar90 = fVar90 - fVar81 * *(float *)((long)puVar6 + 0x74);
                    fVar82 = fVar82 - fVar77 * *(float *)((long)puVar6 + 0x74);
                    auVar91._0_4_ = fVar59 * fVar88;
                    auVar91._4_4_ = fVar61 * fVar89;
                    auVar91._8_4_ = fVar60 * fVar90;
                    auVar91._12_4_ = fVar84 * fVar82;
                    auVar67 = NEON_ext(auVar91,auVar91,8,1);
                    if (auVar91._0_4_ + auVar91._4_4_ + auVar67._0_4_ + fVar84 <= 0.0) {
                      fVar81 = fVar81 - *(float *)(local_3158 + 0x20);
                      piVar50[(long)iVar49 * 4 + 0x12] =
                           (int)(local_30e0._8_4_ + local_30d0._8_4_ +
                                fStack_30e8 * fVar90 + fStack_3108 * fVar88 + fStack_30f8 * fVar89);
                      piVar50[(long)iVar49 * 4 + 0x13] =
                           (int)(local_30e0._12_4_ + local_30d0._12_4_ +
                                fStack_30e4 * fVar90 + fStack_3104 * fVar88 + fStack_30f4 * fVar89);
                      piVar50[(long)iVar49 * 4 + 0x10] =
                           (int)(local_30e0._0_4_ + local_30d0._0_4_ +
                                (float)local_30f0 * fVar90 +
                                (float)local_3110 * fVar88 + local_3100 * fVar89);
                      piVar50[(long)iVar49 * 4 + 0x11] =
                           (int)(local_30e0._4_4_ + local_30d0._4_4_ +
                                fVar80 * fVar90 + fVar72 * fVar88 + fStack_30fc * fVar89);
                      piVar50[(long)*piVar50 + 0xc] = (int)fVar81;
                      if (fVar81 < (float)piVar50[1]) {
                        piVar50[1] = (int)fVar81;
                        piVar50[0x22] = (int)fVar90;
                        piVar50[0x23] = (int)fVar82;
                        piVar50[0x20] = (int)fVar88;
                        piVar50[0x21] = (int)fVar89;
                      }
                      iVar49 = *piVar50 + 1;
                      *piVar50 = iVar49;
                      iVar51 = *piVar45;
                    }
                    lVar58 = lVar58 + 1;
                  } while (lVar58 < iVar51);
                  if (iVar49 - 1U < 3) {
                    lVar58 = (long)iVar49;
                    do {
                      uVar70 = *(undefined8 *)(piVar50 + 0x10);
                      *(undefined8 *)(piVar50 + lVar58 * 4 + 0x10 + 2) =
                           *(undefined8 *)(piVar50 + 0x12);
                      *(undefined8 *)(piVar50 + lVar58 * 4 + 0x10) = uVar70;
                      lVar57 = lVar58 + 1;
                      piVar50[lVar58 + 0xc] = piVar50[0xc];
                      lVar58 = lVar57;
                    } while (lVar57 < 4);
                  }
                }
              }
            }
          }
LAB_0307d354:
          uVar44 = uVar44 + 1;
          uVar47 = (ulong)((int)uVar47 + 1);
        } while (iVar3 != (int)uVar44);
      }
      uVar54 = uVar47;
    } while ((int)uVar47 != iVar3);
  }
  lVar43 = *(long *)(lVar39 + 0x38d490);
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
    lVar36 = *(long *)(lVar43 + 0x10);
  }
  else {
    lVar36 = *(long *)(lVar43 + 0x10);
  }
  if (lVar36 != 0) {
    FUN_032d5b34(lVar36,&DAT_0390f40e);
    lVar43 = *(long *)(lVar39 + 0x38d490);
  }
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
    lVar43 = *(long *)(lVar43 + 0x10);
  }
  else {
    lVar43 = *(long *)(lVar43 + 0x10);
  }
  if (lVar43 != 0) {
    FUN_032d5af0(lVar43,"TtSort2",7);
  }
  if (1 < (int)local_34b8) {
    FUN_0307ea30(local_34c0,0,(int)local_34b8 + -1);
  }
  uStack_a8 = 0x8000000000000000;
  local_b0 = 0;
  uStack_98 = CONCAT44(uStack_98._4_4_,uVar41);
  lVar43 = *(long *)(lVar39 + 0x38d490);
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
  }
  lVar43 = *(long *)(lVar43 + 8);
  uVar54 = (long)(((uVar42 & 0xfffffff0) << 0x20) + 0x7f00000000) >> 0x20 & 0xffffffffffffff80;
  if (*(ulong *)(lVar43 + 0x10) < uVar54) {
LAB_0307dbf4:
    lVar36 = FUN_032ce670();
  }
  else {
    lVar36 = *(long *)(lVar43 + 0x18);
    uVar54 = uVar54 + lVar36;
    if (*(ulong *)(lVar43 + 0x20) < uVar54) goto LAB_0307dbf4;
    *(ulong *)(lVar43 + 0x18) = uVar54;
  }
  lVar43 = (long)(int)uStack_a8;
  iVar3 = (int)uStack_a8 + uVar41;
  local_b0 = lVar36;
  local_a0 = lVar36;
  uVar35 = uVar41 | 0x80000000;
  if ((int)(uVar41 & 0x3fffffff) < iVar3) {
    uVar54 = uStack_a8 & 0xffffffff;
    uStack_a8._4_4_ = uVar41 | 0x80000000;
    local_b0 = FUN_0306c8b0(PTR_PTR_0434a080,iVar3,lVar36,uVar54,(long)&uStack_a8 + 4);
    uVar35 = uStack_a8._4_4_;
  }
  uStack_a8._4_4_ = uVar35;
  lVar36 = local_a0;
  if (param_5 != param_6) {
    plVar46 = (long *)(local_b0 + lVar43 * 0x10);
    plVar38 = param_5;
    if (((uint)(uVar42 - 0x10) >> 4 & 1) == 0) {
      lVar43 = param_5[1];
      *plVar46 = *param_5;
      plVar46[1] = lVar43;
      plVar46 = plVar46 + 2;
      plVar38 = param_5 + 2;
    }
    if (0xf < uVar42 - 0x10) {
      do {
        lVar43 = plVar38[1];
        *plVar46 = *plVar38;
        plVar46[1] = lVar43;
        plVar2 = plVar38 + 2;
        lVar43 = plVar38[3];
        plVar38 = plVar38 + 4;
        plVar46[2] = *plVar2;
        plVar46[3] = lVar43;
        plVar46 = plVar46 + 4;
      } while (plVar38 != param_6);
    }
  }
  uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar3);
  if (0 < (int)uVar41) {
    uVar42 = 0;
    do {
      lVar43 = uVar42 * 8;
      uVar42 = uVar42 + 1;
      plVar38 = (long *)(local_b0 + (ulong)*(ushort *)(local_34c0 + lVar43) * 0x10);
      lVar43 = plVar38[1];
      *param_5 = *plVar38;
      param_5[1] = lVar43;
      param_5 = param_5 + 2;
    } while (uVar40 != uVar42);
  }
  if (local_a0 == local_b0) {
    uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
  }
  iVar3 = (int)uStack_98;
  lVar43 = *(long *)(lVar39 + 0x38d490);
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
  }
  lVar43 = *(long *)(lVar43 + 8);
  uVar42 = (ulong)(int)(iVar3 * 0x10 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar43 + 0x10) < uVar42) || (*(long *)(lVar43 + 0x18) != uVar42 + lVar36)) ||
     (*(long *)(lVar43 + 0x28) == lVar36)) {
    FUN_032cedf0(lVar43,lVar36);
  }
  else {
    *(long *)(lVar43 + 0x18) = lVar36;
  }
  uVar40 = uStack_a8;
  puVar4 = PTR_PTR_0434a080;
  uVar42 = uStack_a8 >> 0x20;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  if ((-1 < (long)uVar40) && (local_b0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_b0,0x10,(uint)uVar42 & 0x3fffffff);
  }
  if (*(long *)(lVar39 + 0x38d490) == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar43;
    lVar43 = *(long *)(lVar43 + 0x10);
  }
  else {
    lVar43 = *(long *)(*(long *)(lVar39 + 0x38d490) + 0x10);
  }
  if (lVar43 != 0) {
    FUN_032d5b34(lVar43,&DAT_0390f40e);
  }
  uVar41 = local_34a8;
  lVar36 = local_34b0;
  lVar43 = local_34c0;
  if (local_34b0 == local_34c0) {
    local_34b8 = local_34b8 & 0xffffffff00000000;
  }
  lVar37 = *(long *)(lVar39 + 0x38d490);
  if (lVar37 == 0) {
    lVar37 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar37;
  }
  lVar37 = *(long *)(lVar37 + 8);
  uVar42 = (ulong)(int)(uVar41 * 8 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar37 + 0x10) < uVar42) || (*(long *)(lVar37 + 0x18) != uVar42 + lVar36)) ||
     (*(long *)(lVar37 + 0x28) == lVar36)) {
    FUN_032cedf0(lVar37,lVar36);
  }
  else {
    *(long *)(lVar37 + 0x18) = lVar36;
  }
  uVar42 = local_34b8 & 0xffffffff00000000;
  if ((lVar43 != 0) && (local_34b8._4_4_ = (uint)(uVar42 >> 0x20), -1 < (long)uVar42)) {
    uVar41 = local_34b8._4_4_ & 0x3fffffff;
    local_34b8 = uVar42;
    FUN_032cf244(puVar4,lVar43,8,uVar41);
    uVar42 = local_34b8;
  }
  local_34b8 = uVar42;
  lVar36 = local_3490;
  lVar43 = local_34a0;
  if (local_3490 == local_34a0) {
    local_3498 = local_3498 & 0xffffffff00000000;
  }
  lVar56 = (long)(int)local_3488;
  lVar37 = *(long *)(lVar39 + 0x38d490);
  if (lVar37 == 0) {
    lVar37 = FUN_0333d16c(0,1);
    *(long *)(lVar39 + 0x38d490) = lVar37;
  }
  lVar39 = *(long *)(lVar37 + 8);
  if (((*(ulong *)(lVar39 + 0x10) < (ulong)(lVar56 * 0x80)) ||
      (*(long *)(lVar39 + 0x18) != lVar56 * 0x80 + lVar36)) || (*(long *)(lVar39 + 0x28) == lVar36))
  {
    FUN_032cedf0(lVar39,lVar36);
  }
  else {
    *(long *)(lVar39 + 0x18) = lVar36;
  }
  uVar42 = local_3498 & 0xffffffff00000000;
  if ((lVar43 != 0) && (local_3498._4_4_ = (uint)(uVar42 >> 0x20), -1 < (long)uVar42)) {
    uVar41 = local_3498._4_4_ & 0x3fffffff;
    local_3498 = uVar42;
    FUN_032cf244(puVar4,lVar43,0x80,uVar41);
    uVar42 = local_3498;
  }
  local_3498 = uVar42;
  puVar4 = PTR_DAT_043724f0 + 0x10;
  local_2370 = puVar4;
  if (local_2368 != (long *)0x0) {
    (**(code **)(*local_2368 + 8))();
  }
  local_2f80 = puVar4;
  if (local_2f78 != (long *)0x0) {
    (**(code **)(*local_2f78 + 8))();
  }
  FUN_02fd9ab8(auStack_3290);
  FUN_02fd9ab8(auStack_33a0);
LAB_0307db40:
  if (local_b8 != 0) {
    FUN_032d5b34(local_b8,&DAT_0390f40e);
  }
  return;
}


