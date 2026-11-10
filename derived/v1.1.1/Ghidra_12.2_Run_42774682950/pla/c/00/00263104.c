/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00263104; name: FUN_00263104
 */


long FUN_00263104(undefined8 param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint *puVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar15 = 0;
  lVar14 = 0;
  puVar12 = (undefined4 *)0x0;
LAB_00263170:
  puVar13 = *(undefined4 **)(*(long *)(param_2 + 0x18) + uVar15 * 8);
  switch(*puVar13) {
  case 0:
    if ((puVar12 == (undefined4 *)0x0) || ((*(byte *)((long)puVar13 + 0x91) >> 1 & 1) == 0)) {
      lVar14 = lVar14 + 0xe0;
      piVar5 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
    }
    else {
      uVar3 = *(ushort *)
               (*(long *)(puVar12 + 0x28) + (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10);
      uVar7 = (ulong)uVar3;
      if (uVar7 == 0) {
LAB_00263424:
        lVar6 = 0;
      }
      else {
        uVar8 = uVar7 & 3;
        lVar11 = *(long *)(*(long *)(puVar12 + 0x28) +
                           (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10 + 8);
        if (uVar7 - 1 < 3) {
          lVar6 = 0;
          uVar9 = 0;
        }
        else {
          lVar6 = 0;
          uVar9 = 0;
          piVar5 = (int *)(lVar11 + 0x74);
          do {
            if (piVar5[-0x1c] != 0) {
              uVar9 = uVar9 + 1;
            }
            iVar16 = *piVar5;
            if (piVar5[-0xe] != 0) {
              uVar9 = uVar9 + 1;
            }
            piVar1 = piVar5 + 0xe;
            piVar5 = piVar5 + 0x38;
            if (iVar16 != 0) {
              uVar9 = uVar9 + 1;
            }
            lVar6 = lVar6 + 4;
            if (*piVar1 != 0) {
              uVar9 = uVar9 + 1;
            }
          } while (uVar7 - uVar8 != lVar6);
        }
        if ((uVar3 & 3) != 0) {
          piVar5 = (int *)(lVar11 + lVar6 * 0x38 + 4);
          do {
            if (*piVar5 != 0) {
              uVar9 = uVar9 + 1;
            }
            uVar8 = uVar8 - 1;
            piVar5 = piVar5 + 0xe;
          } while (uVar8 != 0);
        }
        if (uVar9 == 0) goto LAB_00263424;
        lVar6 = (ulong)uVar9 * 0x88 + 0xd8;
        if (uVar3 == 1) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = *(uint *)(lVar11 + 4);
          puVar4 = (uint *)(lVar11 + 0x40);
          while( true ) {
            if (uVar9 != 0) {
              lVar6 = lVar6 + (ulong)puVar4[-0xe] * 0x18;
            }
            if (puVar4[-1] != 0) {
              lVar6 = lVar6 + (ulong)*puVar4 * 0x18;
            }
            lVar10 = lVar10 + 2;
            if (uVar7 - (uVar7 & 1) == lVar10) break;
            uVar9 = puVar4[0xd];
            puVar4 = puVar4 + 0x1c;
          }
        }
        if (((uVar3 & 1) != 0) && (*(int *)(lVar11 + lVar10 * 0x38 + 4) != 0)) {
          lVar6 = lVar6 + (ulong)*(uint *)(lVar11 + lVar10 * 0x38 + 8) * 0x18;
        }
      }
      lVar14 = lVar14 + lVar6 + 0xe0;
      piVar5 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
    }
    if (piVar5 != (int *)0x0) {
      iVar16 = 0;
      iVar2 = *piVar5;
joined_r0x002634b8:
      if (iVar2 == 0x50434756) {
        if (iVar16 == puVar13[0x26]) {
          lVar11 = FUN_00263104(param_1);
          lVar14 = lVar11 + lVar14;
LAB_00263508:
          uVar15 = uVar15 + 1;
          if (*(uint *)(param_2 + 0x10) <= uVar15) {
            return lVar14;
          }
          goto LAB_00263170;
        }
        iVar16 = iVar16 + 1;
        piVar5 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
      }
      else {
        piVar5 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
      }
      if (piVar5 == (int *)0x0) goto LAB_00263508;
      iVar2 = *piVar5;
      goto joined_r0x002634b8;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 5:
    if ((puVar12 == (undefined4 *)0x0) || ((*(byte *)((long)puVar13 + 0x91) >> 1 & 1) == 0)) {
      lVar11 = 0x40;
    }
    else {
      uVar3 = *(ushort *)
               (*(long *)(puVar12 + 0x28) + (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10);
      uVar7 = (ulong)uVar3;
      if (uVar7 == 0) {
LAB_002632dc:
        lVar11 = 0;
      }
      else {
        uVar8 = uVar7 & 3;
        lVar6 = *(long *)(*(long *)(puVar12 + 0x28) +
                          (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10 + 8);
        if (uVar7 - 1 < 3) {
          lVar11 = 0;
          uVar9 = 0;
        }
        else {
          lVar11 = 0;
          uVar9 = 0;
          piVar5 = (int *)(lVar6 + 0x74);
          do {
            if (piVar5[-0x1c] != 0) {
              uVar9 = uVar9 + 1;
            }
            iVar16 = *piVar5;
            if (piVar5[-0xe] != 0) {
              uVar9 = uVar9 + 1;
            }
            piVar1 = piVar5 + 0xe;
            piVar5 = piVar5 + 0x38;
            if (iVar16 != 0) {
              uVar9 = uVar9 + 1;
            }
            lVar11 = lVar11 + 4;
            if (*piVar1 != 0) {
              uVar9 = uVar9 + 1;
            }
          } while (uVar7 - uVar8 != lVar11);
        }
        if ((uVar3 & 3) != 0) {
          piVar5 = (int *)(lVar6 + lVar11 * 0x38 + 4);
          do {
            if (*piVar5 != 0) {
              uVar9 = uVar9 + 1;
            }
            uVar8 = uVar8 - 1;
            piVar5 = piVar5 + 0xe;
          } while (uVar8 != 0);
        }
        if (uVar9 == 0) goto LAB_002632dc;
        lVar11 = (ulong)uVar9 * 0x88 + 0xd8;
        if (uVar3 == 1) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = *(uint *)(lVar6 + 4);
          puVar4 = (uint *)(lVar6 + 0x40);
          while( true ) {
            if (uVar9 != 0) {
              lVar11 = lVar11 + (ulong)puVar4[-0xe] * 0x18;
            }
            if (puVar4[-1] != 0) {
              lVar11 = lVar11 + (ulong)*puVar4 * 0x18;
            }
            lVar10 = lVar10 + 2;
            if (uVar7 - (uVar7 & 1) == lVar10) break;
            uVar9 = puVar4[0xd];
            puVar4 = puVar4 + 0x1c;
          }
        }
        if (((uVar3 & 1) != 0) && (*(int *)(lVar6 + lVar10 * 0x38 + 4) != 0)) {
          lVar11 = lVar11 + (ulong)*(uint *)(lVar6 + lVar10 * 0x38 + 8) * 0x18;
        }
      }
      lVar11 = lVar11 + 0x40;
    }
    lVar14 = lVar14 + 0xa0 + lVar11;
    break;
  case 4:
    lVar11 = FUN_0025eee4(puVar13,puVar12);
    lVar14 = lVar14 + lVar11 + 0x100;
    uVar15 = uVar15 + 1;
    if (*(uint *)(param_2 + 0x10) <= uVar15) {
      return lVar14;
    }
    goto LAB_00263170;
  case 6:
    goto switchD_00263190_caseD_6;
  }
  uVar15 = uVar15 + 1;
  if (*(uint *)(param_2 + 0x10) <= uVar15) {
    return lVar14;
  }
  goto LAB_00263170;
switchD_00263190_caseD_6:
  uVar15 = uVar15 + 1;
  puVar12 = puVar13;
  if (*(uint *)(param_2 + 0x10) <= uVar15) {
    return lVar14;
  }
  goto LAB_00263170;
}


