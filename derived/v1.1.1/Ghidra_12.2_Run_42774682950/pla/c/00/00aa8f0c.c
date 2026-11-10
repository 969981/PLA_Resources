/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aa8f0c; name: FUN_00aa8f0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00aa8f0c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  short sVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  long *local_48;
  long *local_38;
  
  if (**(char **)(param_2 + 8) != '\0') {
    plVar11 = (long *)*param_1;
    local_48 = plVar11;
    if (plVar11 == (long *)0x0) {
      FUN_00aa9b50(&local_38,&local_48);
      plVar7 = local_38;
    }
    else {
      lVar12 = plVar11[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00aa9b50(&local_38,&local_48);
      lVar12 = plVar11[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar7 = local_38;
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
        plVar7 = local_38;
      }
    }
    if (plVar7 != (long *)0x0) {
      puVar3 = (undefined8 *)plVar7[0xc];
      for (puVar10 = (undefined8 *)plVar7[0xb]; puVar10 != puVar3; puVar10 = puVar10 + 2) {
        sVar8 = FUN_02b6f370(*puVar10,param_2);
        if (-1 < sVar8) {
          if ((~((uint)*(ushort *)((long)puVar10 + 10) + (int)sVar8) & 0xffff) != 0) {
            puVar10 = (undefined8 *)FUN_02b6962c(plVar7);
            uVar13 = puVar10[1];
            uVar9 = *puVar10;
            uVar15 = puVar10[3];
            uVar14 = puVar10[2];
            bVar20 = (byte)_DAT_038897c0;
            bVar21 = (byte)((ulong)_DAT_038897c0 >> 8);
            bVar22 = (byte)((ulong)_DAT_038897c0 >> 0x10);
            bVar23 = (byte)((ulong)_DAT_038897c0 >> 0x18);
            bVar24 = (byte)((ulong)_DAT_038897c0 >> 0x20);
            bVar25 = (byte)((ulong)_DAT_038897c0 >> 0x28);
            bVar26 = (byte)((ulong)_DAT_038897c0 >> 0x30);
            bVar27 = (byte)((ulong)_DAT_038897c0 >> 0x38);
            bVar28 = (byte)_UNK_038897c8;
            bVar29 = (byte)((ulong)_UNK_038897c8 >> 8);
            bVar30 = (byte)((ulong)_UNK_038897c8 >> 0x10);
            bVar31 = (byte)((ulong)_UNK_038897c8 >> 0x18);
            bVar32 = (byte)((ulong)_UNK_038897c8 >> 0x20);
            bVar33 = (byte)((ulong)_UNK_038897c8 >> 0x28);
            bVar34 = (byte)((ulong)_UNK_038897c8 >> 0x30);
            bVar35 = (byte)((ulong)_UNK_038897c8 >> 0x38);
            uVar17 = puVar10[5];
            uVar16 = puVar10[4];
            uVar19 = puVar10[7];
            uVar18 = puVar10[6];
            param_3[1] = CONCAT17((byte)((ulong)uVar13 >> 0x38) & bVar35,
                                  CONCAT16((byte)((ulong)uVar13 >> 0x30) & bVar34,
                                           CONCAT15((byte)((ulong)uVar13 >> 0x28) & bVar33,
                                                    CONCAT14((byte)((ulong)uVar13 >> 0x20) & bVar32,
                                                             CONCAT13((byte)((ulong)uVar13 >> 0x18)
                                                                      & bVar31,CONCAT12((byte)((
                                                  ulong)uVar13 >> 0x10) & bVar30,
                                                  CONCAT11((byte)((ulong)uVar13 >> 8) & bVar29,
                                                           (byte)uVar13 & bVar28)))))));
            *param_3 = CONCAT17((byte)((ulong)uVar9 >> 0x38) & bVar27,
                                CONCAT16((byte)((ulong)uVar9 >> 0x30) & bVar26,
                                         CONCAT15((byte)((ulong)uVar9 >> 0x28) & bVar25,
                                                  CONCAT14((byte)((ulong)uVar9 >> 0x20) & bVar24,
                                                           CONCAT13((byte)((ulong)uVar9 >> 0x18) &
                                                                    bVar23,CONCAT12((byte)((ulong)
                                                  uVar9 >> 0x10) & bVar22,
                                                  CONCAT11((byte)((ulong)uVar9 >> 8) & bVar21,
                                                           (byte)uVar9 & bVar20)))))));
            param_3[3] = CONCAT17((byte)((ulong)uVar15 >> 0x38) & bVar35,
                                  CONCAT16((byte)((ulong)uVar15 >> 0x30) & bVar34,
                                           CONCAT15((byte)((ulong)uVar15 >> 0x28) & bVar33,
                                                    CONCAT14((byte)((ulong)uVar15 >> 0x20) & bVar32,
                                                             CONCAT13((byte)((ulong)uVar15 >> 0x18)
                                                                      & bVar31,CONCAT12((byte)((
                                                  ulong)uVar15 >> 0x10) & bVar30,
                                                  CONCAT11((byte)((ulong)uVar15 >> 8) & bVar29,
                                                           (byte)uVar15 & bVar28)))))));
            param_3[2] = CONCAT17((byte)((ulong)uVar14 >> 0x38) & bVar27,
                                  CONCAT16((byte)((ulong)uVar14 >> 0x30) & bVar26,
                                           CONCAT15((byte)((ulong)uVar14 >> 0x28) & bVar25,
                                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) & bVar24,
                                                             CONCAT13((byte)((ulong)uVar14 >> 0x18)
                                                                      & bVar23,CONCAT12((byte)((
                                                  ulong)uVar14 >> 0x10) & bVar22,
                                                  CONCAT11((byte)((ulong)uVar14 >> 8) & bVar21,
                                                           (byte)uVar14 & bVar20)))))));
            param_3[5] = CONCAT17((byte)((ulong)uVar17 >> 0x38) & bVar35,
                                  CONCAT16((byte)((ulong)uVar17 >> 0x30) & bVar34,
                                           CONCAT15((byte)((ulong)uVar17 >> 0x28) & bVar33,
                                                    CONCAT14((byte)((ulong)uVar17 >> 0x20) & bVar32,
                                                             CONCAT13((byte)((ulong)uVar17 >> 0x18)
                                                                      & bVar31,CONCAT12((byte)((
                                                  ulong)uVar17 >> 0x10) & bVar30,
                                                  CONCAT11((byte)((ulong)uVar17 >> 8) & bVar29,
                                                           (byte)uVar17 & bVar28)))))));
            param_3[4] = CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar27,
                                  CONCAT16((byte)((ulong)uVar16 >> 0x30) & bVar26,
                                           CONCAT15((byte)((ulong)uVar16 >> 0x28) & bVar25,
                                                    CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar24,
                                                             CONCAT13((byte)((ulong)uVar16 >> 0x18)
                                                                      & bVar23,CONCAT12((byte)((
                                                  ulong)uVar16 >> 0x10) & bVar22,
                                                  CONCAT11((byte)((ulong)uVar16 >> 8) & bVar21,
                                                           (byte)uVar16 & bVar20)))))));
            param_3[7] = CONCAT17((byte)((ulong)uVar19 >> 0x38) & bVar35,
                                  CONCAT16((byte)((ulong)uVar19 >> 0x30) & bVar34,
                                           CONCAT15((byte)((ulong)uVar19 >> 0x28) & bVar33,
                                                    CONCAT14((byte)((ulong)uVar19 >> 0x20) & bVar32,
                                                             CONCAT13((byte)((ulong)uVar19 >> 0x18)
                                                                      & bVar31,CONCAT12((byte)((
                                                  ulong)uVar19 >> 0x10) & bVar30,
                                                  CONCAT11((byte)((ulong)uVar19 >> 8) & bVar29,
                                                           (byte)uVar19 & bVar28)))))));
            param_3[6] = CONCAT17((byte)((ulong)uVar18 >> 0x38) & bVar27,
                                  CONCAT16((byte)((ulong)uVar18 >> 0x30) & bVar26,
                                           CONCAT15((byte)((ulong)uVar18 >> 0x28) & bVar25,
                                                    CONCAT14((byte)((ulong)uVar18 >> 0x20) & bVar24,
                                                             CONCAT13((byte)((ulong)uVar18 >> 0x18)
                                                                      & bVar23,CONCAT12((byte)((
                                                  ulong)uVar18 >> 0x10) & bVar22,
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) & bVar21,
                                                           (byte)uVar18 & bVar20)))))));
            bVar5 = true;
            goto LAB_00aa8fdc;
          }
          break;
        }
      }
      bVar5 = false;
LAB_00aa8fdc:
      plVar11 = plVar7 + 10;
      do {
        iVar2 = (int)*plVar11 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = iVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      if (bVar5) {
        return 1;
      }
    }
  }
  return 0;
}


