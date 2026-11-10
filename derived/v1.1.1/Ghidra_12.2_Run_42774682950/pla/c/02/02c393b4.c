/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c393b4; name: FUN_02c393b4
 */


void FUN_02c393b4(long *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  ushort *puVar17;
  ulong uVar18;
  
  uVar18 = (ulong)param_2;
  *(undefined4 *)(param_1[0x1f] + uVar18 * 8) = param_3;
  *(undefined4 *)(param_1[0x1f] + uVar18 * 8 + 4) = 1;
  lVar6 = (**(code **)(*param_1 + 0x90))();
  if (lVar6 == 0) {
    uVar7 = 0x20000;
  }
  else {
    uVar7 = FUN_02c2e33c(lVar6,param_3,param_1[0xd]);
    uVar7 = uVar7 & 0xffff | 0x20000;
  }
  if (param_2 < *(uint *)(param_1 + 0x12)) {
    lVar6 = uVar18 * 0x18;
    lVar12 = param_1[0xd];
    *(ulong *)(param_1[0x13] + lVar6 + 8) = uVar7;
    lVar10 = param_1[0x13];
    lVar8 = *(long *)(lVar10 + lVar6);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      uVar11 = (uint)*(ushort *)(lVar8 + 0x78);
      if (*(ushort *)(lVar8 + 0x78) == 0) {
        iVar9 = 0;
      }
      else {
        puVar14 = *(ushort **)(lVar12 + 0x58);
        iVar9 = 0;
        puVar13 = *(ushort **)(lVar8 + 0x58);
        do {
          while( true ) {
            uVar2 = *puVar14;
            *puVar13 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c39584;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
            iVar9 = iVar9 + 1;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_02c39570;
          }
          uVar2 = puVar14[1];
          uVar1 = uVar2 + 2;
          bVar4 = uVar11 < uVar1;
          uVar11 = uVar11 - uVar1;
          if (bVar4 || uVar11 == 0) {
            *puVar13 = 0;
            goto LAB_02c39584;
          }
          uVar16 = uVar2 + 1;
          uVar5 = uVar16 & 7;
          puVar17 = puVar13 + 1;
          *puVar17 = uVar2;
          puVar3 = puVar14 + 1;
          puVar15 = puVar14;
          if (uVar5 != 0) {
            lVar10 = 0;
            do {
              lVar12 = lVar10;
              uVar16 = uVar16 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar13 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar14 + lVar12 + 4);
              lVar10 = lVar12 + 2;
            } while (uVar5 != 0);
            puVar17 = (ushort *)((long)puVar13 + lVar12 + 4);
            puVar15 = (ushort *)((long)puVar14 + lVar12 + 2);
            puVar3 = puVar15 + 1;
            puVar13 = puVar17;
          }
          puVar14 = puVar3;
          if (6 < uVar2) {
            puVar13 = puVar17;
            do {
              puVar13[1] = puVar15[2];
              puVar13[2] = puVar14[2];
              puVar13[3] = puVar14[3];
              puVar13[4] = puVar14[4];
              puVar13[5] = puVar14[5];
              puVar13[6] = puVar14[6];
              puVar15 = puVar14 + 7;
              puVar13[7] = *puVar15;
              puVar14 = puVar14 + 8;
              uVar16 = uVar16 - 8;
              puVar13 = puVar13 + 8;
              *puVar13 = *puVar14;
            } while (uVar16 != 0);
          }
          iVar9 = uVar1 + iVar9;
        } while (uVar11 != 0);
LAB_02c39570:
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          puVar13[-1] = 0;
        }
      }
LAB_02c39584:
      *(short *)(lVar8 + 0x7a) = (short)iVar9;
      lVar10 = param_1[0x13];
    }
    *(undefined2 *)(lVar10 + lVar6 + 0x10) = 0;
    *(ushort *)(param_1[0x13] + lVar6 + 0x12) = *(ushort *)(param_1[0x13] + lVar6 + 0x12) & 0xfffe;
  }
  lVar6 = param_1[0x13] + uVar18 * 0x18;
  *(ushort *)(lVar6 + 0x12) = *(ushort *)(lVar6 + 0x12) | 1;
  return;
}


