/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03358eb0; name: FUN_03358eb0
 */


void FUN_03358eb0(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  float *pfVar17;
  undefined8 *puVar18;
  long lVar19;
  float *pfVar20;
  undefined8 *puVar21;
  float *pfVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  byte bVar32;
  byte bVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined **local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac;
  undefined3 local_4ab;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  uint local_4a0;
  uint local_49c;
  long local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  float local_480 [256];
  float *local_80;
  ulong local_70 [2];
  
  local_480[0] = 1.4013e-45;
  pfVar27 = (float *)((ulong)local_480 | 4);
  uVar28 = 0;
  fVar16 = 0.0;
  local_80 = pfVar27;
  do {
    lVar8 = (long)(int)local_80[-1] * 0x80 + *param_1;
    fVar37 = *(float *)((long)param_1 + lVar8 + 0x60);
    if (*(char *)((long)param_1 + lVar8 + 0x70) == '\0') {
      pfVar17 = local_80 + -1;
      if (fVar37 != 0.0) {
        local_80[-1] = fVar37;
        pfVar17 = local_80;
      }
      local_80 = pfVar17;
      fVar37 = *(float *)((long)param_1 + lVar8 + 100);
      if (fVar37 != 0.0) {
        *local_80 = fVar37;
        local_80 = local_80 + 1;
      }
      fVar37 = *(float *)((long)param_1 + lVar8 + 0x68);
      if (fVar37 != 0.0) {
        *local_80 = fVar37;
        local_80 = local_80 + 1;
      }
      fVar37 = *(float *)((long)param_1 + lVar8 + 0x6c);
      if (fVar37 != 0.0) {
        *local_80 = fVar37;
        local_80 = local_80 + 1;
      }
    }
    else {
      fVar39 = fVar16;
      if ((int)fVar16 <= (int)fVar37) {
        fVar39 = fVar37;
      }
      if (fVar37 != -NAN) {
        fVar16 = fVar39;
      }
      fVar39 = *(float *)((long)param_1 + lVar8 + 100);
      if (fVar37 != -NAN) {
        uVar28 = uVar28 + 1;
      }
      fVar37 = fVar16;
      if ((int)fVar16 <= (int)fVar39) {
        fVar37 = fVar39;
      }
      if (fVar39 != -NAN) {
        uVar28 = uVar28 + 1;
        fVar16 = fVar37;
      }
      fVar39 = *(float *)((long)param_1 + lVar8 + 0x68);
      fVar35 = *(float *)((long)param_1 + lVar8 + 0x6c);
      fVar37 = fVar16;
      if ((int)fVar16 <= (int)fVar39) {
        fVar37 = fVar39;
      }
      if (fVar39 != -NAN) {
        uVar28 = uVar28 + 1;
        fVar16 = fVar37;
      }
      fVar37 = fVar16;
      if ((int)fVar16 <= (int)fVar35) {
        fVar37 = fVar35;
      }
      if (fVar35 != -NAN) {
        uVar28 = uVar28 + 1;
        fVar16 = fVar37;
      }
      local_80 = local_80 + -1;
    }
    puVar6 = PTR_PTR_0434a090;
  } while (local_480 != local_80);
  local_4c8 = (undefined **)CONCAT44(local_4c8._4_4_,(int)fVar16 + 1);
  if ((int)fVar16 < 0) {
    lVar8 = 0;
    uVar11 = 0x80000000;
  }
  else {
    lVar8 = FUN_032cf190(PTR_PTR_0434a090,0x20,&local_4c8);
    uVar11 = (uint)local_4c8;
  }
  puVar5 = PTR_PTR_0434a080;
  local_4c8 = &PTR_LAB_04363a18;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_4b0 = 1;
  local_4ac = 1;
  local_4ab = 0;
  uStack_4a8 = 0;
  uStack_4a4 = 0;
  local_4a0 = 0;
  local_49c = 0x80000000;
  local_498 = 0;
  local_490 = -0x8000000000000000;
  uStack_488 = 0;
  if (0 < (int)uVar28) {
    if (0x3fffffff < (int)uVar28) {
      FUN_032bd0a8(uVar28);
    }
    uVar12 = (local_49c & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    if ((int)uVar28 <= (int)uVar12) {
      uVar28 = uVar12;
    }
    FUN_032bd100(uVar28,0x10,local_49c,local_70);
    uVar28 = local_49c;
    uVar31 = (ulong)local_49c;
    uVar9 = (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_70[0],local_70);
    if (-1 < (int)uVar28) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,0,(uVar31 & 0x3fffffff) << 4);
    }
    if (local_70[0] < 0x3fffffff0) {
      local_49c = (uint)(local_70[0] >> 4);
    }
    else {
      local_49c = 0x3fffffff;
    }
    uStack_4a8 = (undefined4)uVar9;
    uStack_4a4 = (undefined4)((ulong)uVar9 >> 0x20);
  }
  local_480[0] = 1.4013e-45;
  local_80 = pfVar27;
  do {
    pfVar27 = (float *)((long)param_1 + (long)(int)local_80[-1] * 0x80 + *param_1);
    if (*(char *)(pfVar27 + 0x1c) == '\0') {
      pfVar17 = local_80 + -1;
      if (pfVar27[0x18] != 0.0) {
        local_80[-1] = pfVar27[0x18];
        pfVar17 = local_80;
      }
      local_80 = pfVar17;
      if (pfVar27[0x19] != 0.0) {
        *local_80 = pfVar27[0x19];
        local_80 = local_80 + 1;
      }
      if (pfVar27[0x1a] != 0.0) {
        *local_80 = pfVar27[0x1a];
        local_80 = local_80 + 1;
      }
      if (pfVar27[0x1b] != 0.0) {
        *local_80 = pfVar27[0x1b];
        local_80 = local_80 + 1;
      }
    }
    else {
      lVar30 = 0;
      local_80 = local_80 + -1;
      do {
        uVar28 = local_4a0;
        fVar16 = pfVar27[lVar30 + 0x18];
        if (fVar16 != -NAN) {
          iVar29 = (int)lVar30;
          pfVar17 = pfVar27 + 0xc;
          pfVar20 = pfVar27;
          pfVar22 = pfVar27 + 8;
          pfVar23 = pfVar27 + 0x14;
          pfVar25 = pfVar27 + 0x10;
          pfVar26 = pfVar27 + 4;
          if (((iVar29 != 0) &&
              (pfVar17 = pfVar27 + 0xe, pfVar20 = pfVar27 + 2, pfVar22 = pfVar27 + 10,
              pfVar23 = pfVar27 + 0x16, pfVar25 = pfVar27 + 0x12, pfVar26 = pfVar27 + 6, iVar29 != 2
              )) && (pfVar17 = pfVar27 + 0xd, pfVar20 = pfVar27 + 1, pfVar22 = pfVar27 + 9,
                    pfVar23 = pfVar27 + 0x15, pfVar25 = pfVar27 + 0x11, pfVar26 = pfVar27 + 5,
                    iVar29 != 1)) {
            pfVar17 = pfVar27 + 0xf;
            pfVar20 = pfVar27 + 3;
            pfVar22 = pfVar27 + 0xb;
            pfVar23 = pfVar27 + 0x17;
            pfVar25 = pfVar27 + 0x13;
            pfVar26 = pfVar27 + 7;
          }
          fVar37 = *pfVar20;
          fVar35 = *pfVar25;
          puVar10 = (undefined8 *)(lVar8 + (long)(int)fVar16 * 0x20);
          fVar39 = *pfVar22;
          fVar40 = *pfVar23;
          fVar36 = *pfVar26;
          fVar38 = *pfVar17;
          puVar10[1] = (ulong)(uint)fVar35;
          *puVar10 = CONCAT17((char)((uint)fVar39 >> 0x18),
                              CONCAT16((char)((uint)fVar39 >> 0x10),
                                       CONCAT15((char)((uint)fVar39 >> 8),
                                                CONCAT14(SUB41(fVar39,0),fVar37))));
          puVar10[3] = (ulong)(uint)fVar40;
          puVar10[2] = CONCAT44(fVar38,fVar36);
          uVar31 = (ulong)local_4a0;
          fVar37 = (fVar37 + fVar36) * 0.5;
          fVar39 = (fVar39 + fVar38) * 0.5;
          fVar35 = (fVar35 + fVar40) * 0.5;
          puVar4 = (undefined8 *)CONCAT44(uStack_4a4,uStack_4a8);
          uVar12 = local_4a0 + 1;
          puVar10 = puVar4;
          if ((int)(local_49c & 0x3fffffff) <= (int)local_4a0) {
            if (0x3ffffffe < (int)local_4a0) {
              FUN_032bd0a8(uVar12);
            }
            uVar13 = (local_49c & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar13) {
              uVar13 = 0x3fffffff;
            }
            uVar34 = uVar12;
            if ((int)uVar12 <= (int)uVar13) {
              uVar34 = uVar13;
            }
            FUN_032bd100(uVar34,0x10,local_49c,local_70);
            uVar13 = local_49c;
            uVar14 = (ulong)local_49c;
            puVar10 = (undefined8 *)
                      (**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_70[0],local_70);
            if (0 < (int)uVar28) {
              puVar10[1] = puVar4[1];
              *puVar10 = *puVar4;
              if (uVar28 != 1) {
                puVar10[3] = puVar4[3];
                puVar10[2] = puVar4[2];
                if (uVar28 != 2) {
                  puVar10[5] = puVar4[5];
                  puVar10[4] = puVar4[4];
                  if (uVar28 != 3) {
                    lVar15 = uVar31 - 3;
                    puVar18 = puVar4 + 6;
                    puVar21 = puVar10 + 6;
                    do {
                      puVar21[1] = puVar18[1];
                      lVar15 = lVar15 + -1;
                      *puVar21 = *puVar18;
                      puVar18 = puVar18 + 2;
                      puVar21 = puVar21 + 2;
                    } while (lVar15 != 0);
                  }
                }
              }
            }
            if (-1 < (int)uVar13) {
              (**(code **)(*(long *)puVar5 + 0x18))(puVar5,puVar4,(uVar14 & 0x3fffffff) << 4);
            }
            if (local_70[0] < 0x3fffffff0) {
              local_49c = (uint)(local_70[0] >> 4);
            }
            else {
              local_49c = 0x3fffffff;
            }
            uStack_4a8 = SUB84(puVar10,0);
            uStack_4a4 = (undefined4)((ulong)puVar10 >> 0x20);
          }
          bVar1 = (byte)((uint)fVar37 >> 0x18);
          bVar32 = (char)bVar1 >> 7;
          bVar2 = (byte)((uint)fVar39 >> 0x18);
          bVar33 = (char)bVar2 >> 7;
          uVar28 = CONCAT13(bVar32,CONCAT12(bVar32,CONCAT11(bVar32,bVar32))) >> 1;
          uVar13 = CONCAT13(bVar33,CONCAT12(bVar33,CONCAT11(bVar33,bVar33))) >> 1;
          uVar34 = (uint)((int)fVar35 >> 0x1f) >> 1;
          bVar3 = (byte)((uint)fVar35 >> 0x18);
          puVar10 = puVar10 + (long)(int)local_4a0 * 2;
          puVar10[1] = (ulong)CONCAT13((byte)((char)bVar3 >> 7) >> 1 ^ bVar3,
                                       CONCAT12((byte)(uVar34 >> 0x10) ^
                                                (byte)((uint)fVar35 >> 0x10),
                                                CONCAT11((byte)(uVar34 >> 8) ^
                                                         (byte)((uint)fVar35 >> 8),
                                                         (byte)uVar34 ^ SUB41(fVar35,0))));
          *puVar10 = CONCAT17(bVar33 >> 1 ^ bVar2,
                              CONCAT16((byte)(uVar13 >> 0x10) ^ (byte)((uint)fVar39 >> 0x10),
                                       CONCAT15((byte)(uVar13 >> 8) ^ (byte)((uint)fVar39 >> 8),
                                                CONCAT14((byte)uVar13 ^ SUB41(fVar39,0),
                                                         CONCAT13(bVar32 >> 1 ^ bVar1,
                                                                  CONCAT12((byte)(uVar28 >> 0x10) ^
                                                                           (byte)((uint)fVar37 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)(uVar28 >>
                                                                                          8) ^
                                                                                    (byte)((uint)
                                                  fVar37 >> 8),(byte)uVar28 ^ SUB41(fVar37,0))))))))
          ;
          *(float *)((long)puVar10 + 0xc) = fVar16;
          local_4a0 = uVar12;
        }
        lVar30 = lVar30 + 1;
      } while (lVar30 != 4);
    }
  } while (local_480 != local_80);
  FUN_03350fc0(param_1,&local_4c8,lVar8);
  lVar15 = local_490;
  lVar30 = *param_1;
  if (lVar30 != 0) {
    lVar30 = lVar30 + (long)param_1;
  }
  iVar29 = (int)param_1[1];
  if (iVar29 != 0) {
    uVar31 = (long)iVar29 * 0x80 - 0x80;
    uVar28 = ((uint)(uVar31 >> 7) & 0x1ffffff) + 1;
    lVar19 = lVar30;
    if ((uVar28 & 7) != 0) {
      lVar24 = -((ulong)uVar28 & 7);
      do {
        *(undefined1 *)(lVar19 + 0x71) = 1;
        lVar19 = lVar19 + 0x80;
        bVar7 = lVar24 != -1;
        lVar24 = lVar24 + 1;
      } while (bVar7);
    }
    if (0x37f < uVar31) {
      do {
        *(undefined1 *)(lVar19 + 0x71) = 1;
        *(undefined1 *)(lVar19 + 0xf1) = 1;
        *(undefined1 *)(lVar19 + 0x171) = 1;
        *(undefined1 *)(lVar19 + 0x1f1) = 1;
        *(undefined1 *)(lVar19 + 0x271) = 1;
        *(undefined1 *)(lVar19 + 0x2f1) = 1;
        *(undefined1 *)(lVar19 + 0x371) = 1;
        *(undefined1 *)(lVar19 + 0x3f1) = 1;
        lVar19 = lVar19 + 0x400;
      } while (lVar30 + (long)iVar29 * 0x80 != lVar19);
    }
  }
  local_4c8 = &PTR_LAB_04363a18;
  uVar31 = (ulong)local_490._4_4_;
  local_490 = (ulong)local_490._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_498 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5,local_498,(uVar31 & 0x3fffffff) << 5);
  }
  local_490 = CONCAT44(0x80000000,(undefined4)local_490);
  local_498 = 0;
  local_4a0 = 0;
  if ((-1 < (int)local_49c) && (CONCAT44(uStack_4a4,uStack_4a8) != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,CONCAT44(uStack_4a4,uStack_4a8),((ulong)local_49c & 0x3fffffff) << 4);
  }
  if ((lVar8 != 0) && (-1 < (int)uVar11)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,lVar8,(ulong)(uVar11 & 0x3fffffff) << 5);
  }
  return;
}


