/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f17678; name: FUN_02f17678
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02f17678(ulong param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (((((param_1 & 1) != 0) && (DAT_0440ae08 != 0)) && (DAT_0440ae44 == '\0')) &&
     (uVar10 = DAT_0440ae08 - 1, -1 < (int)uVar10)) {
    do {
      lVar6 = *(long *)(DAT_0440ae00 + (ulong)uVar10 * 8);
      lVar8 = *(long *)(lVar6 + 0x20);
      if (lVar8 != 0) {
        if (((*(long *)(lVar8 + 0x20) != 0) && ((~*(byte *)(lVar8 + 0x168) & 3) != 0)) &&
           (((*(byte *)(*(long *)(lVar8 + 0x50) + 0x50) >> 2 & 1) != 0 &&
            (((*(byte *)(lVar8 + 0x168) >> 3 & 1) == 0 &&
             (lVar5 = *(long *)(*(long *)(lVar8 + 0x50) + 0x58), lVar5 != 0)))))) {
          FUN_02f295dc(lVar6,lVar5,lVar8);
        }
        lVar8 = *(long *)(lVar8 + 0x40);
        if (lVar8 != 0) {
          if (*(long *)(lVar8 + 0x20) == 0) goto LAB_02f17750;
          bVar2 = *(byte *)(lVar8 + 0x168);
          if ((~bVar2 & 3) == 0) goto LAB_02f17750;
          lVar5 = *(long *)(lVar8 + 0x50);
          bVar3 = *(byte *)(lVar5 + 0x50);
          do {
            if ((((bVar3 >> 2 & 1) != 0) && ((bVar2 >> 3 & 1) == 0)) &&
               (*(long *)(lVar5 + 0x58) != 0)) {
              FUN_02f295dc(lVar6,*(long *)(lVar5 + 0x58),lVar8);
            }
LAB_02f17750:
            do {
              lVar8 = *(long *)(lVar8 + 0x40);
              if (lVar8 == 0) goto LAB_02f17784;
            } while ((*(long *)(lVar8 + 0x20) == 0) ||
                    (bVar2 = *(byte *)(lVar8 + 0x168), (~bVar2 & 3) == 0));
            lVar5 = *(long *)(lVar8 + 0x50);
            bVar3 = *(byte *)(lVar5 + 0x50);
          } while( true );
        }
      }
LAB_02f17784:
      lVar8 = FUN_02f29984(lVar6);
      if (*(long *)(lVar6 + 0x28) == 0) {
        if (((*(short *)(lVar8 + 0x12) != 0) &&
            ((*(long *)(lVar6 + 0x68) == 0 || (*(long *)(*(long *)(lVar6 + 0x68) + 0x88) == 0)))) &&
           (lVar5 = FUN_02eca560(lVar6 + 0x68), lVar5 != 0)) {
          fVar11 = *(float *)(lVar5 + 0x140) * *(float *)(lVar6 + 0x98) * (float)DAT_042aa0e8;
          fVar12 = DAT_042aa0e8._4_4_ * *(float *)(lVar6 + 0x9c) * *(float *)(lVar5 + 0x144);
          if (*(long *)(lVar5 + 0x148) != 0) {
            FUN_02ef4730(fVar11,fVar12,lVar8,*(undefined8 *)(lVar5 + 0x150));
            *(undefined2 *)(*(long *)(lVar5 + 0x150) + 0x12) = *(undefined2 *)(lVar8 + 0x12);
          }
          (**(code **)(**(long **)(lVar5 + 0x138) + 0x48))
                    (fVar11,fVar12,*(long **)(lVar5 + 0x138),lVar8);
        }
        lVar8 = 0;
      }
      uVar10 = uVar10 - 1;
      *(long *)(lVar6 + 0x58) = lVar8;
      uVar7 = DAT_0440ae08;
    } while (-1 < (int)uVar10);
joined_r0x02f17810:
    uVar7 = uVar7 - 1;
    if (-1 < (int)uVar7) {
      do {
        lVar6 = *(long *)(DAT_0440ae00 + (ulong)uVar7 * 8);
        iVar1 = *(int *)(lVar6 + 0x84);
        *(undefined4 *)(lVar6 + 0x84) = 0x11;
        uVar9 = 4;
        if (iVar1 != 0x11) {
          uVar9 = 1;
        }
        *(undefined4 *)(lVar6 + 0x340) = uVar9;
        *(undefined8 *)(lVar6 + 0x58) = 0;
        *(undefined2 *)(lVar6 + 0x8a) = 0;
        if (*(short *)(lVar6 + 0x338) == 0) {
          if ((*(short *)(lVar6 + 0x128) == 0) && (*(long *)(lVar6 + 0x2b0) != 0)) {
            iVar1 = *(int *)(lVar6 + 700);
            *(undefined4 *)(lVar6 + 700) = 0x11;
            uVar9 = 4;
            if (iVar1 != 0x11) {
              uVar9 = 1;
            }
            *(undefined4 *)(lVar6 + 0x340) = uVar9;
            *(undefined2 *)(lVar6 + 0x2c2) = 0;
            if (*(short *)(lVar6 + 0x1a8) != 0) goto LAB_02f1786c;
LAB_02f17864:
            if (*(long *)(lVar6 + 0x2c8) == 0) goto LAB_02f1786c;
            iVar1 = *(int *)(lVar6 + 0x2d4);
            *(undefined4 *)(lVar6 + 0x2d4) = 0x11;
            uVar9 = 4;
            if (iVar1 != 0x11) {
              uVar9 = 1;
            }
            *(undefined4 *)(lVar6 + 0x340) = uVar9;
            *(undefined2 *)(lVar6 + 0x2da) = 0;
            if (*(short *)(lVar6 + 0x228) == 0) goto LAB_02f17874;
LAB_02f1787c:
            sVar4 = *(short *)(lVar6 + 0x2a8);
          }
          else {
            if (*(short *)(lVar6 + 0x1a8) == 0) goto LAB_02f17864;
LAB_02f1786c:
            if (*(short *)(lVar6 + 0x228) != 0) goto LAB_02f1787c;
LAB_02f17874:
            if (*(long *)(lVar6 + 0x2e0) == 0) goto LAB_02f1787c;
            iVar1 = *(int *)(lVar6 + 0x2ec);
            *(undefined4 *)(lVar6 + 0x2ec) = 0x11;
            uVar9 = 4;
            if (iVar1 != 0x11) {
              uVar9 = 1;
            }
            *(undefined4 *)(lVar6 + 0x340) = uVar9;
            *(undefined2 *)(lVar6 + 0x2f2) = 0;
            sVar4 = *(short *)(lVar6 + 0x2a8);
          }
          if ((sVar4 == 0) && (*(long *)(lVar6 + 0x2f8) != 0)) {
            iVar1 = *(int *)(lVar6 + 0x304);
            *(undefined4 *)(lVar6 + 0x304) = 0x11;
            uVar9 = 4;
            if (iVar1 != 0x11) {
              uVar9 = 1;
            }
            *(undefined4 *)(lVar6 + 0x340) = uVar9;
            *(undefined2 *)(lVar6 + 0x30a) = 0;
          }
        }
        memset(*(void **)(lVar6 + 0x78),0,
               (ulong)*(ushort *)(lVar6 + 0x88) * (ulong)*(byte *)(lVar6 + 0x80) * 4);
        if (DAT_0440ae40 != '\x01') goto joined_r0x02f17810;
        FUN_02f17d34(lVar6);
        uVar7 = uVar7 - 1;
        if ((int)uVar7 < 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}


