/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d5bb4; name: FUN_031d5bb4
 */


void FUN_031d5bb4(long param_1,int *param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  uint uVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  short *psVar12;
  int iVar13;
  short sVar14;
  long lVar15;
  byte *pbVar16;
  ushort uVar17;
  long lVar18;
  int local_80 [2];
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar11 = *(long *)(param_1 + 0x20);
    lVar10 = lVar11;
  }
  else {
    lVar10 = FUN_02898b44();
    lVar11 = *(long *)(param_1 + 0x20);
  }
  local_78[0] = *param_2;
  lVar18 = *(long *)(lVar11 + 0x18) + (long)local_78[0] * 0x10;
  sVar14 = *(short *)(lVar18 + 8);
  sVar7 = *(short *)(lVar18 + 10);
  iVar2 = *(int *)(lVar11 + 0x20);
  iVar3 = *(int *)(lVar11 + 0x30);
  cVar9 = FUN_031d2ff4(param_1,local_78,local_68,local_70);
  if (cVar9 != '\0') {
    lVar11 = (long)local_68[0];
    if (local_68[0] != local_70[0]) {
      uVar1 = sVar7 + sVar14;
      do {
        local_80[0] = iVar2 + (int)lVar11;
        lVar18 = *(long *)(lVar10 + 0xd0);
        FUN_0318ac98(param_1,local_80);
        lVar18 = lVar18 + lVar11 * 0x10;
        psVar12 = (short *)(lVar18 + 10);
        sVar14 = *psVar12;
        if (0 < sVar14) {
          iVar13 = 0;
          do {
            iVar4 = *(int *)(lVar18 + 4);
            iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x30);
            lVar15 = (long)((iVar13 + iVar4) - *(int *)(lVar10 + 0x30));
            if (iVar13 + iVar4 < iVar5) {
              uVar17 = 0xffff;
            }
            else {
              uVar17 = *(ushort *)
                        (*(long *)(*(long *)(param_1 + 0x20) + 0x110) +
                        (long)(iVar13 + (iVar4 - iVar5)) * 2);
            }
            pbVar16 = (byte *)(*(long *)(lVar10 + 0xe0) + lVar15 * 0x14 + 0x10);
            bVar6 = *pbVar16;
            if (((uVar1 <= uVar17) && ((bVar6 >> 3 & 1) == 0)) &&
               (uVar8 = (int)(short)uVar17 - (uint)uVar1,
               (*(uint *)(*(long *)(param_3 + 0x10) + (long)((int)uVar8 >> 5) * 4) &
               1 << (ulong)(uVar8 & 0x1f)) != 0)) {
              *(undefined8 *)(*(long *)(lVar10 + 0xe0) + lVar15 * 0x14 + 8) = 0xffffffffffffffff;
              *pbVar16 = bVar6 & 0xbf | 8;
              *(int *)(lVar10 + 0x164) = *(int *)(lVar10 + 0x164) + 1;
              *(undefined2 *)(*(long *)(lVar10 + 0x110) + (long)((iVar13 - iVar3) + iVar4) * 2) =
                   0xffff;
              sVar14 = *psVar12;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < sVar14);
        }
        lVar11 = lVar11 + 1;
      } while (local_70[0] != (int)lVar11);
    }
  }
  return;
}


