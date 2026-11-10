/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082fb40; name: FUN_0082fb40
 */


/* WARNING: Removing unreachable block (ram,0x0082fbd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082fb40(ushort *param_1,long param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_2 == 0) {
    return;
  }
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  uVar19 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_0082deb0(param_2 + 8);
  bVar5 = FUN_0082e514(uVar19,uVar6);
  if (bVar5 == 0xff) {
    return;
  }
  uVar2 = *param_1;
  if (uVar2 <= bVar5) {
    return;
  }
  bVar12 = (byte)param_1[3];
  uVar8 = (ulong)bVar12;
  if (bVar12 == bVar5) {
    return;
  }
  if (uVar2 != 0) {
    lVar10 = *(long *)(param_1 + 0xc);
    lVar14 = *(long *)(param_1 + 0x10);
    uVar9 = (ulong)bVar5;
    lVar15 = *(long *)(lVar10 + uVar9 * 8);
    lVar13 = *(long *)(lVar14 + uVar9 * 8);
    if (uVar2 == 1) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      plVar7 = (long *)(lVar14 + 8);
      puVar17 = (undefined4 *)(lVar15 + 4);
      plVar18 = (long *)(lVar10 + 8);
      do {
        puVar17[-1] = 0;
        puVar1 = (undefined1 *)(lVar13 + lVar16);
        *(undefined4 *)(plVar18[-1] + uVar9 * 4) = 0;
        *puVar1 = 0;
        *(undefined1 *)(plVar7[-1] + uVar9) = 0;
        *puVar17 = 0;
        lVar16 = lVar16 + 2;
        *(undefined4 *)(*plVar18 + uVar9 * 4) = 0;
        puVar1[1] = 0;
        *(undefined1 *)(*plVar7 + uVar9) = 0;
        plVar7 = plVar7 + 2;
        puVar17 = puVar17 + 2;
        plVar18 = plVar18 + 2;
      } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar16);
      if ((uVar2 & 1) == 0) goto LAB_0082fc54;
    }
    *(undefined4 *)(lVar15 + lVar16 * 4) = 0;
    *(undefined4 *)(*(long *)(lVar10 + lVar16 * 8) + uVar9 * 4) = 0;
    *(undefined1 *)(lVar13 + lVar16) = 0;
    *(undefined1 *)(*(long *)(lVar14 + lVar16 * 8) + uVar9) = 0;
  }
LAB_0082fc54:
  bVar5 = *(byte *)(param_2 + 0x90);
  uVar9 = (ulong)bVar5;
  if ((uVar9 != 0xfd) && (*(char *)(param_2 + 0x91) != -3)) {
    lVar10 = *(long *)(param_1 + 8);
    if ((*(byte *)(lVar10 + 3) <= bVar5) ||
       (*(int *)(*(long *)(lVar10 + 0x10) + uVar9 * 0x18 + 0x10) != 0)) {
      if (*(byte *)((long)param_1 + 7) != bVar5) {
        if (bVar5 < *(byte *)(lVar10 + 3)) {
          lVar14 = *(long *)(lVar10 + 0x10) + uVar9 * 0x18;
          lVar10 = *(long *)(lVar14 + 8);
          if (*(long *)(lVar14 + 8) != lVar14) goto LAB_0082fcdc;
        }
        else {
          lVar14 = 0;
          lVar10 = _DAT_00000008;
          if (_DAT_00000008 != 0) {
LAB_0082fcdc:
            lVar15 = (long)*(int *)(lVar14 + 0x14);
            lVar10 = lVar10 - lVar15;
            bVar4 = 1;
            bVar5 = 1;
            bVar11 = 0xff;
            lVar13 = *(long *)(lVar10 + 0x10);
            bVar12 = bVar11;
            if (*(char *)(lVar13 + 0x78) != '\0') goto LAB_0082fd48;
            do {
              bVar12 = *(byte *)(lVar10 + 0x1c);
              if (*(int *)(*(long *)(*(long *)(param_1 + 0xc) + uVar8 * 8) + (ulong)bVar12 * 4) == 1
                 ) {
                if ((byte)param_1[4] <= *(byte *)(lVar13 + 0x91)) goto LAB_0082fdb8;
                bVar3 = (bool)(bVar5 | bVar11 == 0xff);
                bVar5 = 0;
                if (!bVar3) {
                  bVar12 = bVar11;
                }
                bVar4 = bVar4 & (bVar3 ^ 1U);
              }
              else {
                bVar3 = (bool)(bVar4 | bVar11 == 0xff);
                bVar4 = 0;
                if (!bVar3) {
                  bVar12 = bVar11;
                }
                bVar5 = bVar5 | bVar3;
              }
              while( true ) {
                lVar10 = *(long *)(lVar10 + lVar15 + 8) - lVar15;
                if (lVar10 == lVar14 - lVar15) goto LAB_0082fdb8;
                lVar13 = *(long *)(lVar10 + 0x10);
                bVar11 = bVar12;
                if (*(char *)(lVar13 + 0x78) == '\0') break;
LAB_0082fd48:
                if (bVar12 == 0xff) {
                  bVar12 = *(byte *)(lVar10 + 0x1c);
                  bVar5 = 1;
                  bVar4 = 1;
                }
              }
            } while( true );
          }
        }
        bVar12 = 0xff;
      }
LAB_0082fdb8:
      *(byte *)(*(long *)(param_1 + 0x14) + uVar9) = bVar12;
    }
    FUN_0082f6bc(param_1);
  }
  return;
}


