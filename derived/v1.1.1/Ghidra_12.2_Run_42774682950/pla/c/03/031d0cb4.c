/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d0cb4; name: FUN_031d0cb4
 */


void FUN_031d0cb4(long param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  ulong uVar18;
  void *pvVar19;
  void *__dest;
  undefined1 uVar20;
  int iVar21;
  undefined4 uVar22;
  int *piVar23;
  ulong uVar24;
  ushort *puVar25;
  long lVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int *piVar36;
  ushort *puVar37;
  long lVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  uint *puVar45;
  int iVar46;
  long lVar47;
  undefined8 *puVar48;
  undefined *puVar49;
  ulong uVar50;
  short *psVar51;
  ushort *puVar52;
  long lVar53;
  uint *puVar54;
  undefined2 *puVar55;
  undefined1 auVar56 [16];
  ulong local_1c8;
  uint local_1bc;
  long local_1a8;
  uint local_10c;
  byte local_d8;
  long *local_d0;
  ulong local_c8;
  int local_a0 [2];
  int local_98 [2];
  long local_90;
  undefined8 local_88;
  int local_80 [2];
  long local_78;
  undefined8 local_70;
  
  lVar39 = *(long *)(param_1 + 0x20);
  uVar3 = *param_2;
  uVar42 = (ulong)uVar3 & 0x3fffff;
  iVar40 = (int)uVar42;
  iVar21 = iVar40 - *(int *)(lVar39 + 0x20);
  if (iVar40 < *(int *)(lVar39 + 0x20)) {
    iVar21 = iVar40;
    if ((*(int *)(lVar39 + 0x98) == 0) ||
       (iVar21 = *(int *)(*(long *)(lVar39 + 0x90) + uVar42 * 4), iVar21 != -1)) {
      lVar29 = *(long *)(lVar39 + 0xb0);
      goto LAB_031d0d1c;
    }
    piVar23 = (int *)(*(long *)(lVar39 + 0x18) + uVar42 * 0x10);
  }
  else {
    lVar29 = *(long *)(lVar39 + 0xd0);
LAB_031d0d1c:
    piVar23 = (int *)(lVar29 + (long)iVar21 * 0x10);
  }
  local_78 = CONCAT44(local_78._4_4_,iVar40);
  if (*(int *)(lVar39 + 0x108) == 0) {
    local_d0 = (long *)0x0;
  }
  else if ((*(byte *)(*(long *)(lVar39 + 0x100) + uVar42) >> 3 & 1) == 0) {
    local_d0 = (long *)0x0;
  }
  else {
    lVar29 = FUN_031920dc((long *)(lVar39 + 0x188),&local_78);
    if (lVar29 == 0) {
      uVar28 = 0;
      uVar41 = 0xffffffff;
    }
    else {
      uVar41 = *(uint *)(lVar29 + 4);
      uVar28 = ((int)lVar29 - (int)*(undefined8 *)(lVar39 + 0x198)) * 0x20000000;
    }
    local_d0 = (long *)(*(long *)(lVar39 + 0x188) + (long)(int)(uVar41 | uVar28) * 0x38 + 8);
  }
  local_78 = 0;
  local_70 = -0x8000000000000000;
  uVar41 = param_2[4];
  if (uVar41 == 0) {
    local_80[0] = iVar40;
    FUN_0318acbc(param_1,local_80);
    puVar49 = PTR_PTR_0434a090;
    goto LAB_031d18a4;
  }
  uVar28 = param_2[0xc];
  uVar4 = param_2[0x14];
  if ((int)uVar28 < 1) {
    if (uVar28 != 0) {
LAB_031d1950:
      local_70 = CONCAT44(local_70._4_4_,uVar28);
    }
  }
  else {
    local_78 = FUN_0315f314(PTR_PTR_0434a090,uVar28,0,0,(long)&local_70 + 4);
    if ((uint)local_70 != uVar28) goto LAB_031d1950;
  }
  if (0 < (int)uVar41) {
    uVar24 = 0;
    lVar39 = 0;
    do {
      uVar13 = *(ushort *)(*(long *)(param_2 + 2) + uVar24 * 6);
      if (uVar13 != 0) {
        lVar39 = (long)(int)lVar39;
        uVar28 = uVar13 & 3;
        uVar22 = (undefined4)uVar24;
        if (2 < uVar13 - 1) {
          lVar29 = 0;
          lVar34 = lVar39 * 4;
          do {
            lVar38 = lVar29 * 4;
            lVar29 = lVar29 + 4;
            *(undefined4 *)(local_78 + lVar34 + lVar38) = uVar22;
            *(undefined4 *)(local_78 + lVar34 + lVar38 + 4) = uVar22;
            *(undefined4 *)(local_78 + lVar34 + lVar38 + 8) = uVar22;
            *(undefined4 *)(local_78 + lVar34 + lVar38 + 0xc) = uVar22;
          } while (uVar13 - uVar28 != (int)lVar29);
          lVar39 = lVar39 + lVar29;
        }
        if ((uVar13 & 3) != 0) {
          do {
            *(undefined4 *)(local_78 + lVar39 * 4) = uVar22;
            lVar39 = lVar39 + 1;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar41);
  }
  lVar39 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar39 + 0x108) == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = *(byte *)(*(long *)(lVar39 + 0x100) + uVar42);
  }
  iVar21 = *(int *)(lVar39 + 0xf8);
  uVar28 = *(uint *)(lVar39 + 0x60);
  iVar5 = *(int *)(lVar39 + 0x30);
  iVar6 = *(int *)(lVar39 + 0xe8);
  iVar7 = *(int *)(lVar39 + 0x20);
  iVar8 = *(int *)(lVar39 + 0xd8);
  iVar9 = *(int *)(lVar39 + 0x40);
  lVar29 = tpidr_el0;
  uVar10 = *(uint *)(lVar39 + 0x50);
  iVar14 = ((int)(short)piVar23[2] + 1U) * 0x10;
  if ((uint)(int)(short)piVar23[2] < 0xffffffff) {
    lVar39 = *(long *)(lVar29 + 0x38d490);
    if (lVar39 == 0) {
      lVar39 = FUN_0333d16c(0,1);
      *(long *)(lVar29 + 0x38d490) = lVar39;
    }
    lVar39 = *(long *)(lVar39 + 8);
    uVar42 = (ulong)(int)(iVar14 + 0x7fU & 0xffffff80);
    if (uVar42 <= *(ulong *)(lVar39 + 0x10)) {
      local_1a8 = *(long *)(lVar39 + 0x18);
      uVar42 = local_1a8 + uVar42;
      if (uVar42 <= *(ulong *)(lVar39 + 0x20)) {
        *(ulong *)(lVar39 + 0x18) = uVar42;
        goto LAB_031d0edc;
      }
    }
    local_1a8 = FUN_032ce670();
  }
  else {
    local_1a8 = 0;
  }
LAB_031d0edc:
  FUN_0318a9b0(param_1,*(undefined8 *)(param_2 + 0x12),uVar4);
  puVar49 = PTR_PTR_0434a090;
  uVar24 = (ulong)(int)param_2[0xc];
  uVar42 = (long)(int)param_2[0x10] + uVar24;
  iVar46 = (int)uVar42;
  local_90 = CONCAT44(local_90._4_4_,iVar46);
  if (iVar46 < 1) {
    lVar39 = 0;
    local_1c8 = 0;
    if (iVar46 != 0) {
      uVar44 = -(uVar42 >> 0x1f & 1) & 0xffffffc000000000 | uVar42 * 0x40 & 0x3fffffffc0;
      local_1bc = 0x80000000;
      goto LAB_031d0f34;
    }
    local_1bc = 0x80000000;
  }
  else {
    lVar39 = FUN_032cf190(PTR_PTR_0434a090,0x40,&local_90);
    local_1bc = (uint)local_90;
    local_1c8 = uVar42 & 0xffffffff;
    uVar44 = lVar39 + uVar42 * 0x40;
LAB_031d0f34:
    lVar34 = 0;
    do {
      lVar38 = lVar39 + lVar34;
      lVar34 = lVar34 + 0x40;
      *(undefined8 *)(lVar38 + 8) = 0xffffffffffffffff;
      *(undefined4 *)(lVar38 + 0x10) = 4;
      *(long *)(lVar38 + 0x18) = lVar38 + 0x28;
      *(undefined4 *)(lVar38 + 0x20) = 0;
      *(undefined4 *)(lVar38 + 0x24) = 0x80000004;
      *(undefined2 *)(lVar38 + 0x38) = 0xffff;
    } while (uVar44 - lVar39 != lVar34);
  }
  local_90 = 0;
  local_88 = 0x8000000000000000;
  if (0 < (int)uVar41) {
    local_90 = FUN_031d6110(puVar49,uVar41,(long)&local_88 + 4);
  }
  lVar34 = local_90;
  puVar17 = PTR_PTR_0434a080;
  if (param_2[4] == 0) {
    uVar43 = local_88 & 0xffffffff;
    uVar44 = 0;
  }
  else {
    uVar3 = uVar3 & 0xffc00000;
    uVar43 = (ulong)(int)local_88;
    iVar21 = iVar21 + iVar9;
    puVar37 = *(ushort **)(param_2 + 2);
    lVar33 = uVar43 * 0x38;
    puVar25 = puVar37 + (long)(int)param_2[4] * 3;
    lVar35 = 0;
    iVar46 = 0;
    iVar9 = *(int *)(*(long *)(param_1 + 0x20) + 0xe8) + *(int *)(*(long *)(param_1 + 0x20) + 0x30);
    local_c8 = 0;
    local_10c = 0;
    lVar38 = local_90;
    iVar30 = (int)local_88;
    do {
      iVar30 = iVar30 + 1;
      iVar1 = (int)uVar43;
      uVar44 = local_c8 & 0xffffffff;
      lVar26 = lVar35 + (long)iVar30 * 0x38;
      uVar13 = *puVar37;
      uVar11 = puVar37[1];
      piVar36 = (int *)(lVar34 + (long)iVar1 * 0x38);
      lVar53 = (long)iVar1;
      uVar43 = (ulong)(iVar1 + 1U);
      local_88 = CONCAT44(local_88._4_4_,iVar1 + 1U);
      lVar47 = lVar38;
      do {
        lVar31 = lVar47 + lVar33;
        lVar26 = lVar26 + -0x38;
        *(undefined4 *)(lVar31 + 0x20) = 0;
        *(undefined4 *)(lVar31 + 0x24) = 0x80000004;
        lVar47 = lVar47 + 0x38;
        *(long *)(lVar31 + 0x18) = lVar31 + 0x28;
      } while (lVar33 != lVar26);
      *piVar36 = -1;
      lVar47 = lVar34 + lVar53 * 0x38;
      puVar52 = (ushort *)(lVar47 + 8);
      puVar52[0] = 0;
      puVar52[1] = 0;
      puVar52[2] = 0xffff;
      puVar52[3] = 0xcdcd;
      *(int *)(lVar47 + 4) = -1;
      local_98[0] = iVar40;
      auVar56 = FUN_03153e20(param_1,local_98);
      puVar48 = (undefined8 *)(lVar47 + 0x18);
      pvVar19 = (void *)*puVar48;
      puVar45 = (uint *)(lVar47 + 0x24);
      uVar50 = auVar56._8_8_ - (long)auVar56._0_8_;
      uVar18 = uVar50 >> 2;
      if ((int)(*puVar45 & 0x3fffffff) < (int)(uint)uVar18) {
        pvVar19 = (void *)FUN_032bd1d4(puVar17,uVar18,4,pvVar19,
                                       *(undefined4 *)(lVar34 + lVar53 * 0x38 + 0x20),puVar45);
        *puVar48 = pvVar19;
      }
      lVar26 = lVar34 + lVar53 * 0x38;
      memcpy(pvVar19,auVar56._0_8_,(long)(uVar50 * 0x40000000) >> 0x1e);
      puVar54 = (uint *)(lVar26 + 0x20);
      *puVar54 = (uint)uVar18;
      *(byte *)(lVar26 + 0x10) = local_d8 ^ 2;
      *puVar52 = *puVar37;
      iVar1 = (int)uVar24 + iVar9;
      *piVar36 = iVar46 + iVar9;
      if (puVar37[1] == 0) {
        iVar1 = -1;
      }
      *(int *)(lVar47 + 4) = iVar1;
      *(ushort *)(lVar47 + 10) = puVar37[1];
      *(short *)(lVar47 + 0xc) = (short)piVar23[3];
      uVar12 = puVar37[2];
      lVar47 = *(long *)(param_2 + 6);
      pvVar19 = (void *)*puVar48;
      if ((int)(*puVar45 & 0x3fffffff) < (int)uVar10) {
        pvVar19 = (void *)FUN_032bd1d4(puVar17,(ulong)uVar10,4,pvVar19,uVar18,puVar45);
        *puVar48 = pvVar19;
      }
      uVar18 = uVar44 + uVar13;
      memcpy(pvVar19,(void *)(lVar47 + (long)(int)(uVar10 * uVar12) * 4),
             -(ulong)(uVar10 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar10 << 2);
      *puVar54 = uVar10;
      if (uVar13 != 0) {
        puVar55 = (undefined2 *)(lVar39 + 0x38 + (long)iVar46 * 0x40);
        lVar47 = 0;
        lVar26 = uVar44 << 3;
        do {
          uVar41 = (uint)local_c8;
          if ((uVar44 - uVar18) + 1 + lVar47 != 0) {
            uVar41 = uVar41 + (int)lVar47 + 1;
          }
          puVar52 = (ushort *)(*(long *)(param_2 + 10) + lVar26);
          uVar12 = *(ushort *)(*(long *)(param_2 + 10) + (ulong)uVar41 * 8);
          uVar13 = *puVar52;
          *(undefined4 *)(puVar55 + -0x14) = 0;
          *(uint *)(puVar55 + -0x1c) = iVar21 + (uint)uVar13;
          *(uint *)(puVar55 + -0x1a) = iVar21 + (uint)uVar12;
          *(undefined8 *)(puVar55 + -0x18) = 0xffffffffffffffff;
          bVar2 = (byte)puVar52[1] & 3;
          if (bVar2 == 1) {
            *(undefined8 *)(puVar55 + -0x18) = 0xffffffffffffffff;
            uVar20 = 1;
LAB_031d1368:
            *(undefined1 *)(puVar55 + -0x14) = uVar20;
            iVar1 = *(int *)(puVar55 + -0xc);
            if (iVar1 < (int)uVar28) {
              *(uint *)(puVar55 + -0xc) = uVar28;
              memset((void *)(*(long *)(puVar55 + -0x10) + (long)iVar1 * 4),0,
                     (ulong)((uVar28 - 1) - iVar1) * 4 + 4);
            }
            else if ((int)uVar28 < iVar1) {
              *(uint *)(puVar55 + -0xc) = uVar28;
            }
          }
          else {
            if (bVar2 == 2) {
              iVar1 = *(int *)(local_78 + (long)*(int *)(puVar52 + 2) * 4);
              *(uint *)(puVar55 + -0x18) = iVar6 + iVar5 + *(int *)(puVar52 + 2) | uVar3;
              *(uint *)(puVar55 + -0x16) = iVar8 + iVar7 + iVar1 | uVar3;
              uVar20 = 2;
              goto LAB_031d1368;
            }
            lVar53 = *(long *)(param_1 + 0x20);
            iVar15 = *(int *)(puVar52 + 2);
            iVar1 = *piVar23 + iVar15;
            iVar27 = iVar1 - *(int *)(lVar53 + 0x30);
            if (iVar1 < *(int *)(lVar53 + 0x30)) {
              lVar31 = *(long *)(lVar53 + 0x28);
              iVar27 = iVar1;
              if (*(int *)(lVar53 + 0x78) != 0) {
                iVar27 = *(int *)(*(long *)(lVar53 + 0x70) + (long)iVar1 * 4);
              }
              if (iVar27 != -1) {
                plVar32 = (long *)(lVar53 + 0xc0);
                goto LAB_031d13d4;
              }
              iVar27 = iVar1;
            }
            else {
              plVar32 = (long *)(lVar53 + 0xe0);
LAB_031d13d4:
              lVar31 = *plVar32;
            }
            *(byte *)(puVar55 + -0x14) = *(byte *)(lVar31 + (long)iVar27 * 0x14 + 0x10) & 0x40 | 4;
            lVar53 = *(long *)(param_1 + 0x20);
            iVar27 = *(int *)(lVar53 + 0x60);
            if (iVar1 < *(int *)(lVar53 + 0x30)) {
              lVar31 = *(long *)(lVar53 + 0x58);
              iVar16 = iVar1;
              if (*(int *)(lVar53 + 0x78) != 0) {
                iVar16 = *(int *)(*(long *)(lVar53 + 0x70) + (long)iVar1 * 4);
              }
              if (iVar16 != -1) {
                lVar31 = *(long *)(lVar53 + 0x130);
                iVar1 = iVar16;
              }
            }
            else {
              lVar31 = *(long *)(lVar53 + 0x150);
              iVar1 = iVar1 - *(int *)(lVar53 + 0x30);
            }
            pvVar19 = *(void **)(puVar55 + -0x10);
            if ((int)(*(uint *)(puVar55 + -10) & 0x3fffffff) < iVar27) {
              pvVar19 = (void *)FUN_032bd1d4(puVar17,iVar27,4,pvVar19,
                                             *(undefined4 *)(puVar55 + -0xc));
              *(void **)(puVar55 + -0x10) = pvVar19;
            }
            memcpy(pvVar19,(void *)(lVar31 + (long)(iVar1 * iVar27) * 4),(long)iVar27 << 2);
            *(int *)(puVar55 + -0xc) = iVar27;
            *puVar55 = (short)iVar15;
          }
          lVar47 = lVar47 + 1;
          lVar26 = lVar26 + 8;
          puVar55 = puVar55 + 0x20;
        } while (uVar44 + lVar47 < uVar18);
        iVar46 = iVar46 + (int)lVar47;
      }
      uVar50 = (ulong)uVar11 + (ulong)local_10c;
      if (uVar11 != 0) {
        uVar44 = (ulong)local_10c;
        lVar47 = uVar44 << 3;
        psVar51 = (short *)(lVar39 + 0x38 + (long)(int)uVar24 * 0x40);
        do {
          puVar52 = (ushort *)(*(long *)(param_2 + 0xe) + lVar47);
          uVar13 = puVar52[1];
          *(uint *)(psVar51 + -0x1c) = iVar21 + (uint)*puVar52;
          *(uint *)(psVar51 + -0x1a) = iVar21 + (uint)uVar13;
          psVar51[-0x18] = -1;
          psVar51[-0x17] = -1;
          psVar51[-0x16] = -1;
          psVar51[-0x15] = -1;
          psVar51[-0x14] = 4;
          psVar51[-0x13] = 0;
          uVar13 = puVar52[3];
          if ((uint)uVar13 < (uint)*(ushort *)((long)piVar23 + 10)) {
            iVar1 = piVar23[1] + (uint)uVar13;
            lVar26 = *(long *)(param_1 + 0x20);
            uVar41 = *(uint *)(lVar26 + 0x60);
            iVar15 = iVar1 - *(int *)(lVar26 + 0x30);
            if (iVar1 < *(int *)(lVar26 + 0x30)) {
              iVar15 = iVar1;
              if (*(int *)(lVar26 + 0x78) != 0) {
                iVar15 = *(int *)(*(long *)(lVar26 + 0x70) + (long)iVar1 * 4);
              }
              if (iVar15 == -1) {
                pvVar19 = (void *)(*(long *)(lVar26 + 0x58) + (long)(int)(uVar41 * iVar1) * 4);
                lVar26 = *(long *)(lVar26 + 0x28) + (long)iVar1 * 0x14;
              }
              else {
                pvVar19 = (void *)(*(long *)(lVar26 + 0x130) + (long)(int)(iVar15 * uVar41) * 4);
                lVar26 = *(long *)(lVar26 + 0xc0) + (long)iVar15 * 0x14;
              }
            }
            else {
              pvVar19 = (void *)(*(long *)(lVar26 + 0x150) + (long)(int)(uVar41 * iVar15) * 4);
              lVar26 = *(long *)(lVar26 + 0xe0) + (long)iVar15 * 0x14;
            }
          }
          else {
            iVar1 = (uint)uVar13 - (int)(short)*(ushort *)((long)piVar23 + 10);
            lVar26 = *local_d0 + (long)iVar1 * 0x14;
            pvVar19 = (void *)(local_d0[2] + (long)(int)(iVar1 * uVar28) * 4);
            uVar41 = uVar28;
          }
          *(byte *)(psVar51 + -0x14) = *(byte *)(lVar26 + 0x10) & 0x60 | 0x14;
          __dest = *(void **)(psVar51 + -0x10);
          psVar51[-0x13] = *(short *)(lVar26 + 0x12);
          if ((int)(*(uint *)(psVar51 + -10) & 0x3fffffff) < (int)uVar41) {
            __dest = (void *)FUN_032bd1d4(puVar17,uVar41,4,__dest,*(undefined4 *)(psVar51 + -0xc));
            *(void **)(psVar51 + -0x10) = __dest;
          }
          memcpy(__dest,pvVar19,(long)((ulong)uVar41 << 0x20) >> 0x1e);
          *(uint *)(psVar51 + -0xc) = uVar41;
          uVar44 = uVar44 + 1;
          lVar47 = lVar47 + 8;
          uVar24 = (ulong)((int)uVar24 + 1);
          *psVar51 = puVar52[3] + (short)piVar23[2];
          psVar51 = psVar51 + 0x20;
        } while (uVar44 < uVar50);
      }
      puVar37 = puVar37 + 3;
      lVar35 = lVar35 + -0x38;
      lVar38 = lVar38 + 0x38;
      uVar44 = uVar50 & 0xffffffff;
      local_10c = (uint)uVar50;
      local_c8 = uVar18;
    } while (puVar37 != puVar25);
  }
  FUN_0318adac(uVar44,param_1,lVar39,uVar42);
  local_a0[0] = iVar40;
  FUN_0318aaa8(param_1,local_a0,lVar34,uVar43);
  puVar17 = PTR_PTR_0434a080;
  if ((int)uVar43 != 0) {
    lVar38 = (long)(int)uVar43 * 0x38;
    do {
      lVar33 = lVar34 + lVar38;
      *(undefined4 *)(lVar33 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar33 + -0x14)) && (*(long *)(lVar33 + -0x20) != 0)) {
        FUN_032cf244(puVar17,*(long *)(lVar33 + -0x20),4,*(uint *)(lVar33 + -0x14) & 0x3fffffff);
      }
      lVar38 = lVar38 + -0x38;
      *(undefined8 *)(lVar33 + -0x20) = 0;
      *(undefined4 *)(lVar33 + -0x14) = 0x80000000;
    } while (lVar38 != 0);
  }
  uVar42 = local_88;
  uVar3 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < (long)uVar42) && (local_90 != 0)) {
    FUN_032cf244(puVar49,local_90,0x38,uVar3 & 0x3fffffff);
  }
  puVar17 = PTR_PTR_0434a080;
  if ((int)local_1c8 != 0) {
    uVar42 = -(local_1c8 >> 0x1f) & 0xffffffc000000000 | local_1c8 << 6;
    do {
      lVar34 = lVar39 + uVar42;
      *(undefined4 *)(lVar34 + -0x20) = 0;
      if ((-1 < (int)*(uint *)(lVar34 + -0x1c)) && (*(long *)(lVar34 + -0x28) != 0)) {
        FUN_032cf244(puVar17,*(long *)(lVar34 + -0x28),4,*(uint *)(lVar34 + -0x1c) & 0x3fffffff);
      }
      uVar42 = uVar42 - 0x40;
      *(undefined8 *)(lVar34 + -0x28) = 0;
      *(undefined4 *)(lVar34 + -0x1c) = 0x80000000;
    } while (uVar42 != 0);
  }
  if ((-1 < (int)local_1bc) && (lVar39 != 0)) {
    FUN_032cf244(puVar49,lVar39,0x40,local_1bc & 0x3fffffff);
  }
  lVar39 = *(long *)(lVar29 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar29 + 0x38d490) = lVar39;
  }
  lVar39 = *(long *)(lVar39 + 8);
  uVar42 = (ulong)(int)(iVar14 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar39 + 0x10) < uVar42) || (*(long *)(lVar39 + 0x18) != local_1a8 + uVar42)) ||
     (*(long *)(lVar39 + 0x28) == local_1a8)) {
    FUN_032cedf0();
  }
  else {
    *(long *)(lVar39 + 0x18) = local_1a8;
  }
LAB_031d18a4:
  lVar39 = local_70;
  uVar3 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar39) && (local_78 != 0)) {
    FUN_032cf244(puVar49,local_78,4,uVar3 & 0x3fffffff);
  }
  return;
}


