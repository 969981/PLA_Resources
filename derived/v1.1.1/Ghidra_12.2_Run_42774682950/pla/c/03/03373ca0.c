/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03373ca0; name: FUN_03373ca0
 */


void FUN_03373ca0(double *param_1,double *param_2,double *param_3,double *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  long lVar36;
  double dVar37;
  double dVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  int iVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  long lVar50;
  double dVar51;
  byte bVar52;
  double dVar53;
  double dVar54;
  
  dVar6 = *param_1;
  dVar7 = param_1[1];
  dVar35 = param_1[2];
  dVar21 = param_1[3];
  dVar17 = *param_2;
  dVar49 = param_2[1];
  dVar18 = *param_3;
  dVar51 = param_3[1];
  dVar19 = param_2[2];
  dVar34 = param_2[3];
  lVar23 = (((ulong)((ushort)((ulong)dVar35 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  lVar36 = (((ulong)((ushort)((ulong)dVar21 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  lVar8 = (((ulong)((ushort)((ulong)dVar17 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  lVar22 = (((ulong)((ushort)((ulong)dVar49 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  lVar50 = (((ulong)((ushort)((ulong)dVar34 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  bVar1 = (byte)((ulong)lVar23 >> 0x38);
  bVar52 = (char)bVar1 >> 7;
  dVar33 = param_3[2];
  dVar20 = param_3[3];
  bVar42 = (byte)((ulong)lVar36 >> 0x38);
  bVar39 = (char)bVar42 >> 7;
  dVar24 = (double)((ulong)CONCAT11(bVar1 & ~bVar52,(byte)((ulong)lVar23 >> 0x30) & ~bVar52) << 0x30
                   );
  dVar37 = (double)((ulong)CONCAT11(bVar42 & ~bVar39,(byte)((ulong)lVar36 >> 0x30) & ~bVar39) <<
                   0x30);
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar39 = (char)bVar1 >> 7;
  bVar42 = (byte)((ulong)lVar22 >> 0x38);
  bVar52 = (char)bVar42 >> 7;
  dVar53 = (double)((ulong)CONCAT11(bVar42 & ~bVar52,(byte)((ulong)lVar22 >> 0x30) & ~bVar52) <<
                   0x30);
  bVar42 = (byte)((ulong)lVar50 >> 0x38);
  bVar52 = (char)bVar42 >> 7;
  dVar32 = (double)((ulong)CONCAT11(bVar42 & ~bVar52,(byte)((ulong)lVar50 >> 0x30) & ~bVar52) <<
                   0x30);
  lVar22 = (((ulong)((ushort)((ulong)dVar18 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  lVar23 = (((ulong)((ushort)((ulong)dVar51 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  dVar54 = (double)((ulong)CONCAT11(bVar1 & ~bVar39,(byte)((ulong)lVar8 >> 0x30) & ~bVar39) << 0x30)
  ;
  lVar8 = (((ulong)((ushort)((ulong)dVar20 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  bVar1 = (byte)((ulong)lVar22 >> 0x38);
  bVar52 = (char)bVar1 >> 7;
  bVar42 = (byte)((ulong)lVar23 >> 0x38);
  bVar39 = (char)bVar42 >> 7;
  dVar25 = (double)((ulong)CONCAT11(bVar1 & ~bVar52,(byte)((ulong)lVar22 >> 0x30) & ~bVar52) << 0x30
                   );
  dVar38 = (double)((ulong)CONCAT11(bVar42 & ~bVar39,(byte)((ulong)lVar23 >> 0x30) & ~bVar39) <<
                   0x30);
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar42 = (char)bVar1 >> 7;
  dVar16 = (double)((ulong)CONCAT11(bVar1 & ~bVar42,(byte)((ulong)lVar8 >> 0x30) & ~bVar42) << 0x30)
  ;
  dVar44 = dVar34 * dVar51;
  FUN_032c8f00();
  FUN_032c8f00(dVar19);
  dVar9 = (double)FUN_032c8f00(dVar34);
  FUN_032c8f00(dVar17);
  FUN_032c8f00(dVar33);
  FUN_032c8f00(dVar20);
  dVar10 = (double)FUN_032c8f00(dVar51);
  FUN_032c8f00(dVar18);
  lVar8 = (((ulong)((ushort)((ulong)dVar44 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar39 = (char)bVar1 >> 7;
  dVar26 = dVar49 * dVar20;
  FUN_032c8f00(dVar19);
  FUN_032c8f00(dVar34);
  dVar11 = (double)FUN_032c8f00(dVar49);
  FUN_032c8f00(dVar17);
  FUN_032c8f00(dVar51);
  FUN_032c8f00(dVar33);
  dVar12 = (double)FUN_032c8f00(dVar20);
  FUN_032c8f00(dVar18);
  lVar22 = (((ulong)((ushort)((ulong)dVar26 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  bVar42 = (byte)((ulong)lVar22 >> 0x38);
  bVar40 = (char)bVar42 >> 7;
  dVar27 = dVar49 * dVar33 - dVar19 * dVar51;
  dVar45 = dVar44 - dVar26;
  dVar28 = dVar17 * dVar18 - dVar17 * dVar18;
  dVar46 = dVar19 * dVar20 - dVar34 * dVar33;
  lVar23 = (((ulong)((ushort)((ulong)dVar45 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  bVar52 = (byte)((ulong)lVar23 >> 0x38);
  bVar41 = (char)bVar52 >> 7;
  dVar9 = dVar10 * dVar32 + dVar32 * dVar38 + dVar9 * dVar38 +
          (double)((ulong)CONCAT11(bVar1 & ~bVar39,(byte)((ulong)lVar8 >> 0x30) & ~bVar39) << 0x30)
          + (double)((ulong)CONCAT11(bVar52 & ~bVar41,(byte)((ulong)lVar23 >> 0x30) & ~bVar41) <<
                    0x30) +
          (double)((ulong)CONCAT11(bVar42 & ~bVar40,(byte)((ulong)lVar22 >> 0x30) & ~bVar40) << 0x30
                  ) + dVar53 * dVar16 + dVar11 * dVar16 + dVar12 * dVar53;
  dVar10 = dVar17 * dVar20;
  FUN_032c8f00(dVar28,dVar34);
  FUN_032c8f00(dVar19);
  dVar11 = (double)FUN_032c8f00(dVar17);
  FUN_032c8f00(dVar49);
  FUN_032c8f00(dVar33);
  FUN_032c8f00(dVar18);
  dVar12 = (double)FUN_032c8f00(dVar20);
  FUN_032c8f00(dVar51);
  lVar8 = (((ulong)((ushort)((ulong)dVar10 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar39 = (char)bVar1 >> 7;
  dVar13 = dVar34 * dVar18;
  FUN_032c8f00(dVar19);
  FUN_032c8f00(dVar17);
  dVar14 = (double)FUN_032c8f00(dVar34);
  FUN_032c8f00(dVar49);
  FUN_032c8f00(dVar20);
  FUN_032c8f00(dVar33);
  dVar15 = (double)FUN_032c8f00(dVar18);
  FUN_032c8f00(dVar51);
  lVar22 = (((ulong)((ushort)((ulong)dVar13 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  bVar42 = (byte)((ulong)lVar22 >> 0x38);
  bVar40 = (char)bVar42 >> 7;
  dVar29 = dVar34 * dVar33 - dVar19 * dVar20;
  dVar30 = dVar19 * dVar18 - dVar17 * dVar33;
  dVar47 = dVar10 - dVar13;
  dVar31 = dVar49 * dVar51 - dVar49 * dVar51;
  lVar23 = (((ulong)((ushort)((ulong)dVar47 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  bVar52 = (byte)((ulong)lVar23 >> 0x38);
  bVar41 = (char)bVar52 >> 7;
  dVar11 = (double)((ulong)CONCAT11(bVar52 & ~bVar41,(byte)((ulong)lVar23 >> 0x30) & ~bVar41) <<
                   0x30) +
           (double)((ulong)CONCAT11(bVar1 & ~bVar39,(byte)((ulong)lVar8 >> 0x30) & ~bVar39) << 0x30)
           + dVar54 * dVar16 + dVar11 * dVar16 + dVar12 * dVar54 +
           (double)((ulong)CONCAT11(bVar42 & ~bVar40,(byte)((ulong)lVar22 >> 0x30) & ~bVar40) <<
                   0x30) + dVar32 * dVar25 + dVar14 * dVar25 + dVar15 * dVar32;
  FUN_032c8f00(dVar31,dVar49);
  FUN_032c8f00(dVar34);
  dVar12 = (double)FUN_032c8f00(dVar17);
  FUN_032c8f00(dVar19);
  FUN_032c8f00(dVar20);
  FUN_032c8f00(dVar18);
  dVar14 = (double)FUN_032c8f00(dVar51);
  FUN_032c8f00(dVar33);
  uVar2 = (ushort)((ulong)(dVar17 * dVar51) >> 0x30);
  lVar8 = (((ulong)(uVar2 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar39 = (char)bVar1 >> 7;
  FUN_032c8f00(dVar34);
  FUN_032c8f00(dVar17);
  dVar15 = (double)FUN_032c8f00(dVar49);
  FUN_032c8f00(dVar19);
  FUN_032c8f00(dVar51);
  FUN_032c8f00(dVar20);
  dVar16 = (double)FUN_032c8f00(dVar18);
  FUN_032c8f00(dVar33);
  uVar3 = (ushort)((ulong)(dVar49 * dVar18) >> 0x30);
  lVar22 = (((ulong)(uVar3 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar42 = (byte)((ulong)lVar22 >> 0x38);
  bVar40 = (char)bVar42 >> 7;
  dVar48 = dVar19 * dVar33 - dVar19 * dVar33;
  dVar32 = dVar17 * dVar51 - dVar49 * dVar18;
  uVar4 = (ushort)((ulong)dVar32 >> 0x30);
  lVar23 = (((ulong)(uVar4 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar52 = (byte)((ulong)lVar23 >> 0x38);
  bVar41 = (char)bVar52 >> 7;
  dVar12 = (double)((ulong)CONCAT11(bVar52 & ~bVar41,(byte)((ulong)lVar23 >> 0x30) & ~bVar41) <<
                   0x30) +
           (double)((ulong)CONCAT11(bVar1 & ~bVar39,(byte)((ulong)lVar8 >> 0x30) & ~bVar39) << 0x30)
           + dVar54 * dVar38 + dVar12 * dVar38 + dVar14 * dVar54 +
           (double)((ulong)CONCAT11(bVar42 & ~bVar40,(byte)((ulong)lVar22 >> 0x30) & ~bVar40) <<
                   0x30) + dVar53 * dVar25 + dVar15 * dVar25 + dVar16 * dVar53;
  FUN_032c8f00(dVar48,dVar49);
  FUN_032c8f00(dVar19);
  dVar14 = (double)FUN_032c8f00(dVar17);
  FUN_032c8f00(dVar34);
  FUN_032c8f00(dVar33);
  FUN_032c8f00(dVar18);
  dVar15 = (double)FUN_032c8f00(dVar51);
  FUN_032c8f00(dVar20);
  lVar8 = (((ulong)(uVar2 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar39 = (char)bVar1 >> 7;
  FUN_032c8f00(dVar19);
  FUN_032c8f00(dVar17);
  dVar17 = (double)FUN_032c8f00(dVar49);
  FUN_032c8f00(dVar34);
  FUN_032c8f00(dVar51);
  FUN_032c8f00(dVar33);
  dVar18 = (double)FUN_032c8f00(dVar18);
  FUN_032c8f00(dVar20);
  lVar22 = (((ulong)(uVar3 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar42 = (byte)((ulong)lVar22 >> 0x38);
  bVar40 = (char)bVar42 >> 7;
  dVar49 = dVar34 * dVar20 - dVar34 * dVar20;
  lVar23 = (((ulong)(uVar4 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  iVar43 = (int)(lVar23 >> 0x3f);
  bVar52 = (byte)((ulong)lVar23 >> 0x38);
  bVar41 = (char)bVar52 >> 7;
  dVar17 = (double)((ulong)CONCAT11(bVar52 & ~bVar41,(byte)((ulong)lVar23 >> 0x30) & ~bVar41) <<
                   0x30) +
           (double)((ulong)CONCAT11(bVar1 & ~bVar39,(byte)((ulong)lVar8 >> 0x30) & ~bVar39) << 0x30)
           + dVar54 * dVar38 + dVar14 * dVar38 + dVar15 * dVar54 +
           (double)((ulong)CONCAT11(bVar42 & ~bVar40,(byte)((ulong)lVar22 >> 0x30) & ~bVar40) <<
                   0x30) + dVar53 * dVar25 + dVar17 * dVar25 + dVar18 * dVar53;
  dVar51 = dVar7 * dVar46;
  FUN_032c8f00(dVar49,dVar21,dVar21,CONCAT44(iVar43,iVar43),dVar6 * dVar28);
  FUN_032c8f00(dVar7);
  dVar18 = (double)FUN_032c8f00(dVar35);
  FUN_032c8f00(dVar6);
  FUN_032c8f00(dVar27);
  FUN_032c8f00(dVar46);
  dVar19 = (double)FUN_032c8f00(dVar45);
  FUN_032c8f00(dVar28);
  lVar8 = (((ulong)((ushort)((ulong)(dVar45 * dVar35) >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar42 = (char)bVar1 >> 7;
  dVar33 = dVar45 * dVar35 + dVar27 * dVar21 + dVar51;
  uVar5 = (ulong)dVar33 & 0x7ff0000000000000;
  if (uVar5 < 0x340000000000001) {
    uVar5 = 0x340000000000000;
  }
  dVar18 = (double)((ulong)CONCAT11(bVar1 & ~bVar42,(byte)((ulong)lVar8 >> 0x30) & ~bVar42) << 0x30)
           + dVar9 * dVar24 + dVar9 * dVar18 + dVar19 * dVar24 +
           (double)(uVar5 + 0xfcc0000000000000);
  FUN_032c8f00(dVar6,dVar6,dVar51,dVar7 * dVar31);
  FUN_032c8f00(dVar21);
  dVar19 = (double)FUN_032c8f00(dVar35);
  FUN_032c8f00(dVar7);
  FUN_032c8f00(dVar29);
  FUN_032c8f00(dVar30);
  dVar51 = (double)FUN_032c8f00(dVar47);
  FUN_032c8f00(dVar31);
  lVar8 = (((ulong)((ushort)((ulong)(dVar47 * dVar35) >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  iVar43 = (int)(lVar8 >> 0x3f);
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar42 = (char)bVar1 >> 7;
  dVar34 = dVar47 * dVar35 + dVar30 * dVar21 + dVar6 * dVar29;
  uVar5 = (ulong)dVar34 & 0x7ff0000000000000;
  if (uVar5 < 0x340000000000001) {
    uVar5 = 0x340000000000000;
  }
  dVar19 = (double)((ulong)CONCAT11(bVar1 & ~bVar42,(byte)((ulong)lVar8 >> 0x30) & ~bVar42) << 0x30)
           + dVar11 * dVar24 + dVar11 * dVar19 + dVar51 * dVar24 +
           (double)(uVar5 + 0xfcc0000000000000);
  FUN_032c8f00(dVar6,dVar6,CONCAT44(iVar43,iVar43),dVar48 * dVar35);
  FUN_032c8f00(dVar7);
  dVar51 = (double)FUN_032c8f00(dVar21);
  FUN_032c8f00(dVar35);
  FUN_032c8f00(dVar26 - dVar44);
  FUN_032c8f00(dVar13 - dVar10);
  dVar20 = (double)FUN_032c8f00(dVar32);
  FUN_032c8f00(dVar48);
  lVar8 = (((ulong)((ushort)((ulong)(dVar32 * dVar21) >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar42 = (char)bVar1 >> 7;
  dVar54 = dVar32 * dVar21 + dVar6 * (dVar26 - dVar44) + dVar7 * (dVar13 - dVar10);
  uVar5 = (ulong)dVar54 & 0x7ff0000000000000;
  if (uVar5 < 0x340000000000001) {
    uVar5 = 0x340000000000000;
  }
  dVar51 = (double)((ulong)CONCAT11(bVar1 & ~bVar42,(byte)((ulong)lVar8 >> 0x30) & ~bVar42) << 0x30)
           + dVar12 * dVar37 + dVar12 * dVar51 + dVar20 * dVar37 +
           (double)(uVar5 + 0xfcc0000000000000);
  FUN_032c8f00(dVar6);
  FUN_032c8f00(dVar7);
  dVar20 = (double)FUN_032c8f00(dVar35);
  FUN_032c8f00(dVar21);
  FUN_032c8f00(dVar27);
  FUN_032c8f00(dVar30);
  dVar21 = (double)FUN_032c8f00(dVar32);
  FUN_032c8f00(dVar49);
  lVar8 = (((ulong)((ushort)((ulong)(dVar32 * dVar35) >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
          -0x340000000000000;
  bVar1 = (byte)((ulong)lVar8 >> 0x38);
  bVar42 = (char)bVar1 >> 7;
  dVar35 = dVar32 * dVar35 + dVar6 * dVar27 + dVar7 * dVar30;
  uVar5 = (ulong)dVar35 & 0x7ff0000000000000;
  param_4[2] = -dVar54;
  param_4[3] = dVar35;
  if (uVar5 < 0x340000000000001) {
    uVar5 = 0x340000000000000;
  }
  dVar35 = (double)((ulong)CONCAT11(bVar1 & ~bVar42,(byte)((ulong)lVar8 >> 0x30) & ~bVar42) << 0x30)
           + dVar17 * dVar24 + dVar17 * dVar20 + dVar21 * dVar24 +
           (double)(uVar5 + 0xfcc0000000000000);
  *param_4 = -dVar33;
  param_4[1] = -dVar34;
  param_4[4] = dVar18 + dVar18;
  param_4[5] = dVar19 + dVar19;
  param_4[6] = dVar51 + dVar51;
  param_4[7] = dVar35 + dVar35;
  return;
}


