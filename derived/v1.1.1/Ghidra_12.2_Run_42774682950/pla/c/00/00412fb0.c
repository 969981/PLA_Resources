/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00412fb0; name: FUN_00412fb0
 */


undefined8 FUN_00412fb0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  iVar3 = (int)param_4[1];
  lVar5 = FUN_0040c660(param_1,iVar3);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    lVar5 = lVar7;
    if (*param_2 != 0) {
      lVar5 = *param_2;
    }
    lVar17 = lVar7;
    if (*param_3 != 0) {
      lVar17 = *param_3;
    }
    if (iVar3 != 0) {
      uVar9 = 0;
      uVar16 = 0;
      lVar14 = 0;
      uVar10 = 0;
      lVar15 = 0;
      uVar8 = (ulong)iVar3;
      do {
        uVar13 = *(uint *)(lVar5 + lVar14 * 4) &
                 (uint)((long)(uVar16 - (long)(int)param_2[1]) >> 0x3f);
        uVar1 = *(uint *)(lVar17 + lVar15 * 4) &
                (uint)((long)(uVar16 - (long)(int)param_3[1]) >> 0x3f);
        *(uint *)(lVar7 + uVar16 * 4) = (uVar13 + uVar9) - uVar1;
        if (uVar13 != uVar1) {
          uVar10 = (uint)(uVar13 < uVar1);
        }
        lVar11 = uVar16 - (long)*(int *)((long)param_2 + 0xc);
        lVar18 = uVar16 - (long)*(int *)((long)param_3 + 0xc);
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 - (lVar11 + 1 >> 0x3f);
        lVar15 = lVar15 - (lVar18 + 1 >> 0x3f);
        uVar9 = -uVar10;
      } while (uVar16 < uVar8);
      if (iVar3 != 0) {
        lVar5 = *param_4;
        uVar16 = 0;
        uVar13 = 0;
        do {
          lVar17 = uVar16 * 4;
          uVar16 = uVar16 + 1;
          uVar2 = *(uint *)(lVar5 + lVar17) & uVar9;
          uVar4 = *(uint *)(lVar7 + lVar17);
          uVar1 = uVar2 + uVar13;
          uVar12 = 2;
          if (!CARRY4(uVar2,uVar13)) {
            uVar12 = 1;
          }
          *(uint *)(lVar7 + lVar17) = uVar1 + uVar4;
          uVar13 = (uint)CARRY4(uVar2,uVar13);
          if (CARRY4(uVar1,uVar4)) {
            uVar13 = uVar12;
          }
        } while (uVar16 < uVar8);
        if (iVar3 != 0) {
          uVar16 = 0;
          uVar9 = 0;
          do {
            lVar17 = uVar16 * 4;
            uVar16 = uVar16 + 1;
            uVar2 = *(uint *)(lVar5 + lVar17) & uVar13 - uVar10;
            uVar4 = *(uint *)(lVar7 + lVar17);
            uVar1 = uVar2 + uVar9;
            uVar12 = 2;
            if (!CARRY4(uVar2,uVar9)) {
              uVar12 = 1;
            }
            *(uint *)(lVar7 + lVar17) = uVar1 + uVar4;
            uVar9 = (uint)CARRY4(uVar2,uVar9);
            if (CARRY4(uVar1,uVar4)) {
              uVar9 = uVar12;
            }
          } while (uVar16 < uVar8);
        }
      }
    }
    uVar6 = 1;
    *(int *)(param_1 + 1) = iVar3;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar6;
}


