/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a700; name: FUN_0040a700
 */


int FUN_0040a700(code *param_1,undefined8 param_2,long param_3,int param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  byte abStack_184 [292];
  
  if (0x7f < (int)param_5) {
    param_5 = 0x80;
  }
  param_5 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU);
  uVar8 = param_5;
  if (5 < (int)param_5) {
    uVar8 = 6;
  }
  iVar13 = (param_5 - uVar8) + 3;
  iVar14 = (param_5 - uVar8) + 6;
  if (-1 < iVar13) {
    iVar14 = iVar13;
  }
  iVar3 = -(iVar14 >> 2) + 0x10;
  uVar8 = 0;
  if (iVar3 != 0) {
    uVar8 = param_4 / iVar3;
  }
  if ((int)(uVar8 * iVar3) < param_4) {
    uVar8 = uVar8 + 1;
  }
  if ((int)uVar8 < 1) {
    iVar13 = 0;
  }
  else {
    if (iVar13 < 0x40) {
      iVar6 = 0;
      uVar12 = 0;
      iVar13 = 0;
      do {
        iVar5 = (int)uVar12 * iVar3;
        uVar7 = FUN_00403120(abStack_184,0x121,"%*s%04x - ",param_5,&DAT_03996322,iVar5);
        uVar17 = uVar7 & 0xffffffff;
        uVar7 = (ulong)(int)uVar7;
        lVar15 = 0;
        if (0x121 - uVar7 < 4) goto LAB_0040a880;
LAB_0040a89c:
        if (iVar6 + (int)lVar15 < param_4) {
          uVar9 = 0x2d;
          if (lVar15 != 7) {
            uVar9 = 0x20;
          }
          FUN_00403120(abStack_184 + uVar7,4,"%02x%c",*(undefined1 *)(param_3 + iVar6 + lVar15),
                       uVar9);
        }
        else {
          pbVar1 = abStack_184 + uVar7;
          pbVar1[0] = 0x20;
          pbVar1[1] = 0x20;
          pbVar1[2] = 0x20;
          pbVar1[3] = 0;
        }
        uVar17 = (ulong)((int)uVar17 + 3);
LAB_0040a880:
        while( true ) {
          lVar15 = lVar15 + 1;
          uVar7 = (ulong)(int)uVar17;
          if (iVar3 <= lVar15) break;
          if (3 < 0x121 - uVar7) goto LAB_0040a89c;
        }
        if (2 < 0x121 - uVar7) {
          abStack_184[uVar7 + 2] = 0;
          uVar2 = (int)uVar17 + 2;
          uVar17 = (ulong)uVar2;
          (abStack_184 + uVar7)[0] = 0x20;
          (abStack_184 + uVar7)[1] = 0x20;
          uVar7 = (ulong)(int)uVar2;
        }
        iVar16 = (int)uVar17;
        bVar4 = (uVar7 | 1) == 0x121;
        if (iVar5 < param_4) {
          uVar10 = uVar7;
          lVar15 = 0;
          do {
            iVar5 = (int)uVar17;
            if (bVar4) {
              uVar7 = (ulong)iVar5;
            }
            else {
              bVar11 = *(byte *)(param_3 + iVar6 + lVar15);
              uVar7 = (long)iVar5 + 1;
              if (0x5e < bVar11 - 0x20) {
                bVar11 = 0x2e;
              }
              abStack_184[uVar10] = bVar11;
              abStack_184[(long)iVar5 + 1] = 0;
              uVar17 = uVar7;
            }
            iVar16 = (int)uVar17;
            bVar4 = (uVar7 | 1) == 0x121;
          } while ((lVar15 + 1 < (long)iVar3) &&
                  (iVar5 = (int)lVar15, uVar10 = uVar7, lVar15 = lVar15 + 1,
                  iVar6 + iVar5 + 1 < param_4));
        }
        if (bVar4) {
          lVar15 = (long)iVar16;
        }
        else {
          lVar15 = (long)iVar16 + 1;
          abStack_184[uVar7] = 10;
          abStack_184[(long)iVar16 + 1] = 0;
        }
        iVar5 = (*param_1)(abStack_184,lVar15,param_2);
        iVar6 = iVar6 + -(iVar14 >> 2) + 0x10;
        uVar12 = uVar12 + 1;
        iVar13 = iVar5 + iVar13;
        if (uVar12 == uVar8) {
          return iVar13;
        }
      } while( true );
    }
    iVar14 = 0;
    iVar13 = 0;
    uVar12 = (ulong)uVar8;
    do {
      iVar6 = FUN_00403120(abStack_184,0x121,"%*s%04x - ",param_5,&DAT_03996322,iVar14);
      uVar7 = (ulong)iVar6;
      if (2 < 0x121 - uVar7) {
        iVar6 = iVar6 + 2;
        pbVar1 = abStack_184 + uVar7;
        abStack_184[uVar7 + 2] = 0;
        uVar7 = (ulong)iVar6;
        pbVar1[0] = 0x20;
        pbVar1[1] = 0x20;
      }
      if ((uVar7 | 1) != 0x121) {
        abStack_184[uVar7] = 10;
        uVar7 = (long)iVar6 + 1;
        abStack_184[(long)iVar6 + 1] = 0;
      }
      iVar6 = (*param_1)(abStack_184,uVar7,param_2);
      iVar13 = iVar6 + iVar13;
      uVar12 = uVar12 - 1;
      iVar14 = iVar14 + iVar3;
    } while (uVar12 != 0);
  }
  return iVar13;
}


