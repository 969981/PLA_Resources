/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03153350; name: FUN_03153350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03153350(undefined8 *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  short *psVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  short *psVar15;
  short sVar16;
  uint *puVar17;
  uint uVar18;
  float local_70 [4];
  
  *param_1 = &PTR_LAB_042ef7d0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_02fd9a00(param_1 + 0x114,1);
  plVar1 = param_1 + 0x136;
  lVar7 = 0;
  puVar2 = (uint *)(param_1 + 0x137);
  puVar17 = (uint *)((long)param_1 + 0x9bc);
  *plVar1 = 0;
  param_1[0x137] = 0x8000000000000000;
  psVar9 = (short *)(param_1 + 3);
  param_1[0x147] = 0;
  param_1[0x150] = 0;
  do {
    lVar11 = 0;
    uVar8 = 0;
    uVar13 = 0;
    iVar12 = 6;
    iVar14 = -1;
    psVar15 = (short *)((long)param_1 + 0x5a);
    while( true ) {
      sVar16 = 0xff;
      if (lVar11 != 0) {
        sVar16 = (short)iVar14 + (short)((uint)(((int)lVar11 >> 0x10) * iVar14) >> 1);
      }
      psVar15[-0x21] = sVar16;
      if ((uVar13 | 1) == 0x21) break;
      uVar6 = uVar8 >> 1;
      sVar16 = (short)uVar13;
      uVar13 = uVar13 + 2;
      uVar8 = uVar8 + iVar12;
      iVar12 = iVar12 + 8;
      iVar14 = iVar14 + 2;
      lVar11 = lVar11 + 0x20000;
      *psVar15 = sVar16 + (short)uVar6;
      psVar15 = psVar15 + 0x42;
    }
    while( true ) {
      lVar11 = lVar7;
      puVar5 = PTR_PTR_0434a080;
      lVar7 = lVar11 + 1;
      psVar9 = psVar9 + 1;
      if (lVar7 == 0x21) {
        if ((*(uint *)((long)param_1 + 0x9bc) & 0x3fffffff) < 0x31) {
          uVar8 = (*(uint *)((long)param_1 + 0x9bc) & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar8) {
            uVar8 = 0x3fffffff;
          }
          if (uVar8 < 0x32) {
            uVar8 = 0x31;
          }
          lVar7 = FUN_032bd1d4(PTR_PTR_0434a080,uVar8,0x10,*plVar1,*puVar2,puVar17);
          *plVar1 = lVar7;
        }
        iVar12 = 0;
        do {
          local_70[0] = (float)iVar12 * 0.16666667;
          local_70[1] = 0.0;
          uVar6 = *puVar17;
          uVar18 = *puVar2;
          uVar8 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
            lVar7 = *plVar1;
          }
          else {
            lVar7 = *plVar1;
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar8);
              uVar6 = *puVar17;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar3 = uVar8;
            if ((int)uVar8 <= (int)uVar6) {
              uVar3 = uVar6;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar3,0x10,lVar7,uVar18,puVar17);
            *plVar1 = lVar7;
            uVar18 = *puVar2;
          }
          *puVar2 = uVar8;
          FUN_001c7328(local_70,lVar7 + (long)(int)uVar18 * 0x10);
          local_70[1] = 0.16666667;
          uVar6 = *puVar17;
          uVar18 = *puVar2;
          uVar8 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
            lVar7 = *plVar1;
          }
          else {
            lVar7 = *plVar1;
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar8);
              uVar6 = *puVar17;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar3 = uVar8;
            if ((int)uVar8 <= (int)uVar6) {
              uVar3 = uVar6;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar3,0x10,lVar7,uVar18,puVar17);
            *plVar1 = lVar7;
            uVar18 = *puVar2;
          }
          *puVar2 = uVar8;
          FUN_001c7328(local_70,lVar7 + (long)(int)uVar18 * 0x10);
          local_70[1] = 0.33333334;
          uVar6 = *puVar17;
          uVar18 = *puVar2;
          uVar8 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
            lVar7 = *plVar1;
          }
          else {
            lVar7 = *plVar1;
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar8);
              uVar6 = *puVar17;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar3 = uVar8;
            if ((int)uVar8 <= (int)uVar6) {
              uVar3 = uVar6;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar3,0x10,lVar7,uVar18,puVar17);
            *plVar1 = lVar7;
            uVar18 = *puVar2;
          }
          *puVar2 = uVar8;
          FUN_001c7328(local_70,lVar7 + (long)(int)uVar18 * 0x10);
          local_70[1] = 0.5;
          uVar6 = *puVar17;
          uVar18 = *puVar2;
          uVar8 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
            lVar7 = *plVar1;
          }
          else {
            lVar7 = *plVar1;
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar8);
              uVar6 = *puVar17;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar3 = uVar8;
            if ((int)uVar8 <= (int)uVar6) {
              uVar3 = uVar6;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar3,0x10,lVar7,uVar18,puVar17);
            *plVar1 = lVar7;
            uVar18 = *puVar2;
          }
          *puVar2 = uVar8;
          FUN_001c7328(local_70,lVar7 + (long)(int)uVar18 * 0x10);
          local_70[1] = 0.6666667;
          uVar6 = *puVar17;
          uVar18 = *puVar2;
          uVar8 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
            lVar7 = *plVar1;
          }
          else {
            lVar7 = *plVar1;
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar8);
              uVar6 = *puVar17;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar3 = uVar8;
            if ((int)uVar8 <= (int)uVar6) {
              uVar3 = uVar6;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar3,0x10,lVar7,uVar18,puVar17);
            *plVar1 = lVar7;
            uVar18 = *puVar2;
          }
          *puVar2 = uVar8;
          FUN_001c7328(local_70,lVar7 + (long)(int)uVar18 * 0x10);
          local_70[1] = 0.8333334;
          uVar6 = *puVar17;
          uVar18 = *puVar2;
          uVar8 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
            lVar7 = *plVar1;
          }
          else {
            lVar7 = *plVar1;
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar8);
              uVar6 = *puVar17;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar3 = uVar8;
            if ((int)uVar8 <= (int)uVar6) {
              uVar3 = uVar6;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar3,0x10,lVar7,uVar18,puVar17);
            *plVar1 = lVar7;
            uVar18 = *puVar2;
          }
          *puVar2 = uVar8;
          FUN_001c7328(local_70,lVar7 + (long)(int)uVar18 * 0x10);
          local_70[1] = 1.0;
          uVar6 = *puVar17;
          uVar18 = *puVar2;
          uVar8 = uVar18 + 1;
          if ((int)uVar18 < (int)(uVar6 & 0x3fffffff)) {
            lVar7 = *plVar1;
          }
          else {
            lVar7 = *plVar1;
            if (0x3ffffffe < (int)uVar18) {
              FUN_032bd0a8(uVar8);
              uVar6 = *puVar17;
            }
            uVar6 = (uVar6 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar6) {
              uVar6 = 0x3fffffff;
            }
            uVar3 = uVar8;
            if ((int)uVar8 <= (int)uVar6) {
              uVar3 = uVar6;
            }
            lVar7 = FUN_032bd1d4(puVar5,uVar3,0x10,lVar7,uVar18,puVar17);
            *plVar1 = lVar7;
            uVar18 = *puVar2;
          }
          *puVar2 = uVar8;
          FUN_001c7328(local_70,lVar7 + (long)(int)uVar18 * 0x10);
          iVar12 = iVar12 + 1;
        } while (iVar12 != 7);
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_1 + 0x149) = 0;
        param_1[0x142] = 0x100ffffff;
        param_1[0x14e] = 0xffffffffffffffff;
        FUN_02ffef1c(param_1 + 0x138,0);
        uVar4 = _DAT_043499f0;
        param_1[0x139] = uRam00000000043499f8;
        param_1[0x138] = uVar4;
        uVar4 = _DAT_04349a00;
        param_1[0x13b] = uRam0000000004349a08;
        param_1[0x13a] = uVar4;
        uVar4 = _DAT_04349a10;
        param_1[0x13d] = uRam0000000004349a18;
        param_1[0x13c] = uVar4;
        uVar4 = _DAT_04349a20;
        param_1[0x13f] = uRam0000000004349a28;
        param_1[0x13e] = uVar4;
        uVar4 = _DAT_04349a30;
        param_1[0x141] = uRam0000000004349a38;
        param_1[0x140] = uVar4;
        param_1[0x14b] = 0;
        return;
      }
      if (lVar7 == 0) break;
      lVar10 = 0;
      iVar12 = (int)lVar11;
      psVar15 = psVar9;
      do {
        if ((int)lVar10 == 0 && (int)lVar7 == 0) {
          sVar16 = 0xff;
        }
        else {
          iVar14 = iVar12;
          if (lVar10 != 0) {
            iVar14 = (int)lVar10 + -1;
          }
          sVar16 = (short)iVar14 + (short)((iVar12 * 0x10000 + 0x10000 >> 0x10) * iVar12 >> 1);
          if (lVar11 <= iVar14) {
            sVar16 = (short)lVar11 +
                     (short)((iVar14 * 0x10000 + 0x10000 >> 0x10) * (int)(short)iVar14 >> 1);
          }
        }
        lVar10 = lVar10 + 1;
        *psVar15 = sVar16;
        psVar15 = psVar15 + 0x21;
      } while (lVar10 != 0x21);
    }
  } while( true );
}


