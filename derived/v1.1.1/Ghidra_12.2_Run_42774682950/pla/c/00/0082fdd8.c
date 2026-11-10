/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082fdd8; name: FUN_0082fdd8
 */


/* WARNING: Removing unreachable block (ram,0x0082fea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082fdd8(ushort *param_1,long param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined4 local_50 [4];
  undefined4 local_40 [4];
  
  if (param_2 == 0) {
    return;
  }
  local_40[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  uVar19 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_0082deb0(param_2 + 8);
  bVar4 = FUN_0082e514(uVar19,uVar5);
  if (bVar4 == 0xff) {
    return;
  }
  if (*param_1 <= (ushort)bVar4) {
    return;
  }
  bVar3 = (byte)param_1[3] != bVar4;
  if (!bVar3) {
    param_1[3] = 0xfdff;
    *(undefined1 *)(param_1 + 4) = 0xfd;
  }
  FUN_0082e308(local_50,*(undefined8 *)(param_1 + 8),param_2);
  uVar6 = *param_1;
  uVar15 = (ulong)uVar6;
  if (uVar15 != 0) {
    lVar8 = *(long *)(param_1 + 0xc);
    lVar13 = *(long *)(param_1 + 0x10);
    uVar7 = (ulong)bVar4;
    lVar12 = *(long *)(lVar8 + uVar7 * 8);
    lVar9 = *(long *)(lVar13 + uVar7 * 8);
    if (uVar6 == 1) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      puVar16 = (undefined4 *)(lVar12 + 4);
      plVar17 = (long *)(lVar8 + 8);
      plVar18 = (long *)(lVar13 + 8);
      do {
        puVar16[-1] = 0;
        puVar1 = (undefined1 *)(lVar9 + lVar14);
        *(undefined4 *)(plVar17[-1] + uVar7 * 4) = 0;
        *puVar1 = 0;
        *(undefined1 *)(plVar18[-1] + uVar7) = 0;
        *puVar16 = 0;
        lVar14 = lVar14 + 2;
        *(undefined4 *)(*plVar17 + uVar7 * 4) = 0;
        puVar1[1] = 0;
        *(undefined1 *)(*plVar18 + uVar7) = 0;
        puVar16 = puVar16 + 2;
        plVar17 = plVar17 + 2;
        plVar18 = plVar18 + 2;
      } while (uVar15 - (uVar15 & 1) != lVar14);
      if ((uVar6 & 1) == 0) goto LAB_0082ff24;
    }
    *(undefined4 *)(lVar12 + lVar14 * 4) = 0;
    *(undefined4 *)(*(long *)(lVar8 + lVar14 * 8) + uVar7 * 4) = 0;
    *(undefined1 *)(lVar9 + lVar14) = 0;
    *(undefined1 *)(*(long *)(lVar13 + lVar14 * 8) + uVar7) = 0;
  }
LAB_0082ff24:
  bVar4 = *(byte *)(param_2 + 0x90);
  uVar15 = (ulong)bVar4;
  if ((uVar15 != 0xfd) && (*(char *)(param_2 + 0x91) != -3)) {
    if (bVar3) {
      lVar8 = *(long *)(param_1 + 8);
      if ((bVar4 < *(byte *)(lVar8 + 3)) &&
         (*(int *)(*(long *)(lVar8 + 0x10) + uVar15 * 0x18 + 0x10) == 0)) {
        *(undefined1 *)(*(long *)(param_1 + 0x14) + uVar15) = 0xff;
      }
      else {
        bVar11 = (byte)param_1[3];
        uVar7 = (ulong)bVar11;
        if (*(byte *)((long)param_1 + 7) != bVar4) {
          if (bVar4 < *(byte *)(lVar8 + 3)) {
            lVar13 = *(long *)(lVar8 + 0x10) + uVar15 * 0x18;
            lVar8 = *(long *)(lVar13 + 8);
            if (*(long *)(lVar13 + 8) != lVar13) goto LAB_0082ffe4;
          }
          else {
            lVar13 = 0;
            lVar8 = _DAT_00000008;
            if (_DAT_00000008 != 0) {
LAB_0082ffe4:
              lVar12 = (long)*(int *)(lVar13 + 0x14);
              lVar8 = lVar8 - lVar12;
              bVar2 = 1;
              bVar4 = 1;
              bVar11 = 0xff;
              lVar9 = *(long *)(lVar8 + 0x10);
              bVar10 = bVar11;
              if (*(char *)(lVar9 + 0x78) != '\0') goto LAB_00830050;
              do {
                bVar11 = *(byte *)(lVar8 + 0x1c);
                if (*(int *)(*(long *)(*(long *)(param_1 + 0xc) + uVar7 * 8) + (ulong)bVar11 * 4) ==
                    1) {
                  if ((byte)param_1[4] <= *(byte *)(lVar9 + 0x91)) goto LAB_008300d0;
                  bVar3 = (bool)(bVar4 | bVar10 == 0xff);
                  bVar4 = 0;
                  if (!bVar3) {
                    bVar11 = bVar10;
                  }
                  bVar2 = bVar2 & (bVar3 ^ 1U);
                }
                else {
                  bVar3 = (bool)(bVar2 | bVar10 == 0xff);
                  bVar2 = 0;
                  if (!bVar3) {
                    bVar11 = bVar10;
                  }
                  bVar4 = bVar4 | bVar3;
                }
                while( true ) {
                  lVar8 = *(long *)(lVar8 + lVar12 + 8) - lVar12;
                  if (lVar8 == lVar13 - lVar12) goto LAB_008300d0;
                  lVar9 = *(long *)(lVar8 + 0x10);
                  bVar10 = bVar11;
                  if (*(char *)(lVar9 + 0x78) == '\0') break;
LAB_00830050:
                  if (bVar11 == 0xff) {
                    bVar11 = *(byte *)(lVar8 + 0x1c);
                    bVar4 = 1;
                    bVar2 = 1;
                  }
                }
              } while( true );
            }
          }
          bVar11 = 0xff;
        }
LAB_008300d0:
        *(byte *)(*(long *)(param_1 + 0x14) + uVar15) = bVar11;
      }
    }
    else if (*(char *)((long)param_1 + 3) != '\0') {
      uVar6 = 0;
      do {
        uVar15 = (ulong)uVar6;
        uVar6 = uVar6 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x14) + uVar15) = 0xff;
      } while (uVar6 < *(byte *)((long)param_1 + 3));
    }
    FUN_0082f6bc(param_1);
  }
  return;
}


