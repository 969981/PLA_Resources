/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02948360; name: FUN_02948360
 */


uint FUN_02948360(long param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  char cVar11;
  
  puVar8 = *(uint **)(param_1 + 0x58);
  if (*puVar8 == 4) {
    uVar7 = 1;
  }
  else if ((*(byte *)(param_1 + 0x13a) & 1) == 0) {
    if ((char)puVar8[0x436] == '\x06') {
      puVar10 = *(uint **)(*(long *)(param_1 + 0x390) + 0x1e8);
      uVar7 = *puVar10;
      uVar9 = (ulong)uVar7;
      if (uVar7 == 0) {
        uVar7 = *(uint *)(param_1 + 0x128);
        if (uVar7 == 8) {
          uVar7 = 1;
          *(undefined4 *)(param_1 + 0x128) = 1;
        }
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x130);
        bVar5 = false;
        bVar4 = false;
        iVar1 = *(int *)(param_1 + 0x110);
        puVar10 = puVar10 + 1;
        do {
          bVar3 = (byte)*puVar10;
          if (iVar1 == 2) {
LAB_02948404:
            if (bVar3 < 5) {
              cVar11 = (&DAT_03a7ebe0)[bVar3];
            }
            else {
              cVar11 = '\x02';
            }
            if (bVar2 < 5) {
              cVar6 = (&DAT_03a7ebe0)[bVar2];
            }
            else {
LAB_029483c8:
              cVar6 = '\x02';
            }
          }
          else if (iVar1 == 1) {
            if (bVar3 < 5) {
              cVar11 = (&DAT_03a7ebe5)[bVar3];
            }
            else {
              cVar11 = '\x02';
            }
            if (4 < bVar2) goto LAB_029483c8;
            cVar6 = (&DAT_03a7ebe5)[bVar2];
          }
          else {
            if (iVar1 == 0) goto LAB_02948404;
            cVar11 = '\x02';
            cVar6 = '\x02';
          }
          uVar9 = uVar9 - 1;
          bVar4 = (bool)(bVar4 | cVar11 == cVar6);
          bVar5 = (bool)(bVar5 | cVar11 != cVar6);
          puVar10 = (uint *)((long)puVar10 + 1);
        } while (uVar9 != 0);
        if (bVar4) {
          uVar7 = 2;
          if (*puVar8 < 2) {
            uVar7 = 3;
          }
          if (!bVar5) {
            uVar7 = 3;
          }
        }
        else {
          uVar7 = 4;
        }
      }
    }
    else {
      uVar7 = 5;
    }
  }
  else {
    uVar7 = 6;
  }
  puVar8[0x435] = uVar7;
  return uVar7;
}


