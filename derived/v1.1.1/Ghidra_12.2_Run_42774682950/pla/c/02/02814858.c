/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02814858; name: FUN_02814858
 */


void FUN_02814858(long param_1,ulong param_2,int param_3,long *param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  long lVar16;
  ushort *puVar17;
  long *plVar18;
  
  lVar9 = param_1 + (param_2 & 0xffffffff) * 0x30;
  lVar8 = *(long *)(lVar9 + 0x498);
  *(int *)(lVar9 + 0x490) = param_3;
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    uVar11 = (uint)*(ushort *)(lVar8 + 0x78);
    if (*(ushort *)(lVar8 + 0x78) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = 0;
      puVar13 = *(ushort **)(*param_4 + 0x58);
      puVar12 = *(ushort **)(lVar8 + 0x58);
      do {
        while( true ) {
          uVar2 = *puVar13;
          *puVar12 = uVar2;
          if (uVar2 == 0x10) break;
          if (uVar2 == 0) goto LAB_028149a0;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02814a18;
        }
        uVar2 = puVar13[1];
        uVar1 = uVar2 + 2;
        bVar5 = uVar11 < uVar1;
        uVar11 = uVar11 - uVar1;
        if (bVar5 || uVar11 == 0) {
          *puVar12 = 0;
          goto LAB_028149a0;
        }
        uVar15 = uVar2 + 1;
        uVar7 = uVar15 & 7;
        puVar17 = puVar12 + 1;
        *puVar17 = uVar2;
        puVar4 = puVar13 + 1;
        puVar14 = puVar13;
        if (uVar7 != 0) {
          lVar3 = 0;
          do {
            lVar16 = lVar3;
            uVar15 = uVar15 - 1;
            uVar7 = uVar7 - 1;
            *(undefined2 *)((long)puVar12 + lVar16 + 4) =
                 *(undefined2 *)((long)puVar13 + lVar16 + 4);
            lVar3 = lVar16 + 2;
          } while (uVar7 != 0);
          puVar17 = (ushort *)((long)puVar12 + lVar16 + 4);
          puVar14 = (ushort *)((long)puVar13 + lVar16 + 2);
          puVar4 = puVar14 + 1;
          puVar12 = puVar17;
        }
        puVar13 = puVar4;
        if (6 < uVar2) {
          puVar12 = puVar17;
          do {
            puVar12[1] = puVar14[2];
            puVar12[2] = puVar13[2];
            puVar12[3] = puVar13[3];
            puVar12[4] = puVar13[4];
            puVar12[5] = puVar13[5];
            puVar12[6] = puVar13[6];
            puVar14 = puVar13 + 7;
            puVar12[7] = *puVar14;
            puVar13 = puVar13 + 8;
            uVar15 = uVar15 - 8;
            puVar12 = puVar12 + 8;
            *puVar12 = *puVar13;
          } while (uVar15 != 0);
        }
        iVar10 = uVar1 + iVar10;
      } while (uVar11 != 0);
LAB_02814a18:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar12[-1] = 0;
      }
    }
LAB_028149a0:
    *(short *)(lVar8 + 0x7a) = (short)iVar10;
    param_3 = *(int *)(lVar9 + 0x490);
  }
  if (param_3 < 0xd) {
    lVar8 = (long)param_3;
    param_1 = param_1 + (param_2 & 0xffffffff) * 0x30;
    *(undefined8 *)(param_1 + 0x4a0) = (&DAT_043eb278)[lVar8 * 6];
    *(undefined8 *)(param_1 + 0x4a8) = (&DAT_043eb280)[lVar8 * 6];
    *(undefined8 *)(param_1 + 0x4b0) = (&DAT_043eb288)[lVar8 * 6];
    plVar18 = (long *)(&DAT_043eb290)[lVar8 * 6];
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    plVar6 = *(long **)(param_1 + 0x4b8);
    *(long **)(param_1 + 0x4b8) = plVar18;
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02814a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))();
      return;
    }
  }
  return;
}


