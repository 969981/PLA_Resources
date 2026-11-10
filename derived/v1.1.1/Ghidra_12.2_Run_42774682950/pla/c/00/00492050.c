/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00492050; name: FUN_00492050
 */


int FUN_00492050(ulong param_1,ushort *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar12 = param_3 + 1;
  uVar3 = 0;
  if (uVar12 != 0) {
    uVar3 = 0x1be / uVar12;
  }
  uVar8 = (ulong)*param_2;
  uVar5 = 1;
  uVar2 = 1 << (ulong)(uVar12 & 0x1f);
  *(undefined8 *)(param_1 + (ulong)(uVar3 + 2) * 8) = 0xffffffff;
  uVar12 = uVar3 + 1;
  do {
    uVar8 = (uint)((int)(*(ulong *)(param_2 + (ulong)(uVar5 >> 2) * 4) >> ((uVar5 & 3) << 4)) <<
                  0x10) + uVar8;
    do {
      if ((uVar8 & 0xffff) != 0) {
        lVar13 = (long)(int)uVar12;
        piVar4 = (int *)(param_1 + 4 + (long)(int)uVar12 * 8);
        do {
          if (lVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("position >= 0","external/openssl/crypto/ec/curve448/curve448.c",0x243,
                          "recode_wnaf");
          }
          uVar7 = (uint)uVar8;
          uVar12 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
          uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          uVar14 = (uint)LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
          uVar7 = uVar7 >> (ulong)(uVar14 & 0x1f);
          uVar12 = 0;
          if ((uVar7 & uVar2) != 0) {
            uVar12 = uVar2;
          }
          iVar11 = (uVar7 & uVar2 - 1) - uVar12;
          uVar8 = uVar8 - (long)(iVar11 << (ulong)(uVar14 & 0x1f));
          piVar4[-1] = uVar5 * 0x10 + -0x10 + uVar14;
          *piVar4 = iVar11;
          lVar13 = lVar13 + -1;
          piVar4 = piVar4 + -2;
        } while ((uVar8 & 0xffff) != 0);
        uVar12 = (uint)lVar13;
      }
      uVar5 = uVar5 + 1;
      uVar8 = uVar8 >> 0x10;
      if (uVar5 == 0x1e) {
        if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("current == 0","external/openssl/crypto/ec/curve448/curve448.c",0x24d,
                        "recode_wnaf");
        }
        uVar3 = uVar3 + 3 + ~uVar12;
        if (uVar3 == 0) goto LAB_0049219c;
        uVar8 = (ulong)uVar3;
        if (uVar3 < 8) {
          uVar6 = 0;
          goto LAB_00492144;
        }
        uVar6 = 0;
        if ((-uVar12 - 2 < (uint)(uVar8 - 1)) || (uVar8 - 1 >> 0x20 != 0)) goto LAB_00492144;
        uVar5 = uVar12 + 1;
        if ((param_1 < param_1 + (uVar8 + uVar5) * 8) &&
           (param_1 + (ulong)uVar5 * 8 < param_1 + uVar8 * 8)) {
          uVar6 = 0;
          uVar9 = 0xffffffffffffffff;
          if ((uVar3 & 1) == 0) goto LAB_00492160;
          goto LAB_0049214c;
        }
        uVar9 = 0;
        uVar6 = uVar8 & 0xfffffff8;
        puVar10 = (undefined8 *)(param_1 + 0x20);
        do {
          iVar11 = (int)uVar9;
          uVar9 = uVar9 + 8;
          puVar1 = (undefined8 *)(param_1 + (ulong)(uVar5 + iVar11) * 8);
          uVar15 = *puVar1;
          uVar17 = puVar1[3];
          uVar16 = puVar1[2];
          uVar19 = puVar1[5];
          uVar18 = puVar1[4];
          uVar21 = puVar1[7];
          uVar20 = puVar1[6];
          puVar10[-3] = puVar1[1];
          puVar10[-4] = uVar15;
          puVar10[-1] = uVar17;
          puVar10[-2] = uVar16;
          puVar10[1] = uVar19;
          *puVar10 = uVar18;
          puVar10[3] = uVar21;
          puVar10[2] = uVar20;
          puVar10 = puVar10 + 8;
        } while (uVar9 != uVar6);
        if (uVar6 != uVar8) {
LAB_00492144:
          uVar9 = ~uVar6;
          if ((uVar3 & 1) != 0) {
LAB_0049214c:
            *(undefined8 *)(param_1 + uVar6 * 8) =
                 *(undefined8 *)(param_1 + (ulong)(uVar12 + 1 + (int)uVar6) * 8);
            uVar6 = uVar6 | 1;
          }
LAB_00492160:
          if (uVar9 + uVar8 != 0) {
            puVar10 = (undefined8 *)(param_1 + uVar6 * 8 + 8);
            do {
              iVar11 = uVar12 + (int)uVar6;
              uVar6 = uVar6 + 2;
              puVar10[-1] = *(undefined8 *)(param_1 + (ulong)(iVar11 + 1) * 8);
              *puVar10 = *(undefined8 *)(param_1 + (ulong)(iVar11 + 2) * 8);
              puVar10 = puVar10 + 2;
            } while (uVar6 != uVar8);
          }
        }
LAB_0049219c:
        return uVar3 - 1;
      }
    } while (0x1b < uVar5);
  } while( true );
}


