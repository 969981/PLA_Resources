/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004306d0; name: FUN_004306d0
 */


long FUN_004306d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (0 < param_1) {
    lVar12 = 1;
    piVar11 = &DAT_04164440;
    do {
      if (piVar11[-8] == param_1) {
        lVar12 = lVar12 + -1;
LAB_00430734:
        lVar4 = FUN_0040de30();
        if (lVar4 == 0) {
          FUN_004014b0(0x10,0xaf,0x41,"external/openssl/crypto/ec/ec_curve.c",0xbd4);
          lVar12 = 0;
          lVar5 = 0;
LAB_00430830:
          lVar6 = 0;
          lVar14 = 0;
          lVar13 = 0;
          lVar16 = 0;
          lVar15 = 0;
          lVar7 = 0;
LAB_00430848:
          FUN_0042dac0(lVar7);
          lVar7 = 0;
        }
        else {
          piVar11 = *(int **)(lVar12 * 0x20 + 0x4164428);
          iVar1 = piVar11[1];
          iVar3 = piVar11[2];
          lVar16 = (long)(piVar11 + 4) + (long)iVar1;
          lVar12 = FUN_0040c710(lVar16,iVar3,0);
          if (lVar12 == 0) {
LAB_004307e4:
            lVar5 = 0;
LAB_004307e8:
            FUN_004014b0(0x10,0xaf,3,"external/openssl/crypto/ec/ec_curve.c",0xbe1);
            goto LAB_00430830;
          }
          lVar13 = (long)iVar3;
          lVar5 = FUN_0040c710(lVar16 + lVar13,iVar3,0);
          if (lVar5 == 0) goto LAB_004307e4;
          lVar6 = FUN_0040c710(lVar16 + lVar13 * 2,iVar3,0);
          if (lVar6 == 0) goto LAB_004307e8;
          if (*piVar11 == 0x196) {
            lVar7 = FUN_00430d50(lVar12,lVar5,lVar6,lVar4);
            if (lVar7 != 0) goto LAB_004308fc;
            uVar9 = 0xbee;
LAB_00430a28:
            FUN_004014b0(0x10,0xaf,0x10,"external/openssl/crypto/ec/ec_curve.c",uVar9);
            lVar14 = 0;
            lVar13 = 0;
            lVar16 = 0;
            lVar15 = 0;
            goto LAB_00430848;
          }
          lVar7 = FUN_00430de0(lVar12,lVar5,lVar6,lVar4);
          if (lVar7 == 0) {
            uVar9 = 0xbf7;
            goto LAB_00430a28;
          }
LAB_004308fc:
          FUN_0042e3d0(lVar7,param_1);
          lVar15 = FUN_0042df90(lVar7);
          if (lVar15 == 0) {
            FUN_004014b0(0x10,0xaf,0x10,"external/openssl/crypto/ec/ec_curve.c",0xc00);
            lVar14 = 0;
LAB_00430a0c:
            lVar13 = 0;
            lVar16 = 0;
            goto LAB_00430848;
          }
          lVar14 = FUN_0040c710(lVar16 + lVar13 * 3,iVar3,0);
          if ((lVar14 == 0) || (lVar13 = FUN_0040c710(lVar16 + lVar13 * 4,iVar3,0), lVar13 == 0)) {
            FUN_004014b0(0x10,0xaf,3,"external/openssl/crypto/ec/ec_curve.c",0xc06);
            goto LAB_00430a0c;
          }
          iVar2 = FUN_0042ea00(lVar7,lVar15,lVar14,lVar13,lVar4);
          if (iVar2 == 0) {
            FUN_004014b0(0x10,0xaf,0x10,"external/openssl/crypto/ec/ec_curve.c",0xc0a);
            lVar16 = 0;
            goto LAB_00430848;
          }
          lVar16 = FUN_0040c710(lVar16 + iVar3 * 5,iVar3,0);
          if ((lVar16 == 0) || (iVar3 = FUN_0040c6b0(lVar14,piVar11[3]), iVar3 == 0)) {
            uVar10 = 0xc0f;
            uVar9 = 3;
LAB_00430ab8:
            FUN_004014b0(0x10,0xaf,uVar9,"external/openssl/crypto/ec/ec_curve.c",uVar10);
            goto LAB_00430848;
          }
          iVar3 = FUN_0042e1a0(lVar7,lVar15,lVar16,lVar14);
          if (iVar3 == 0) {
            uVar10 = 0xc13;
LAB_00430ab0:
            uVar9 = 0x10;
            goto LAB_00430ab8;
          }
          if ((iVar1 != 0) && (lVar8 = FUN_0042e430(lVar7,piVar11 + 4,(long)iVar1), lVar8 == 0)) {
            uVar10 = 0xc18;
            goto LAB_00430ab0;
          }
        }
        FUN_0042db80(lVar15);
        FUN_0040def0(lVar4);
        FUN_0040c1e0(lVar12);
        FUN_0040c1e0(lVar5);
        FUN_0040c1e0(lVar6);
        FUN_0040c1e0(lVar16);
        FUN_0040c1e0(lVar14);
        FUN_0040c1e0(lVar13);
        if (lVar7 != 0) {
          return lVar7;
        }
        break;
      }
      if (*piVar11 == param_1) goto LAB_00430734;
      lVar12 = lVar12 + 2;
      piVar11 = piVar11 + 0x10;
    } while (lVar12 != 0x53);
    FUN_004014b0(0x10,0xae,0x81,"external/openssl/crypto/ec/ec_curve.c",0xc3c);
  }
  return 0;
}


