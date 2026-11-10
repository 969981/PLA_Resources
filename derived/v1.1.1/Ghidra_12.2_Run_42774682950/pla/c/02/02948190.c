/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02948190; name: FUN_02948190
 */


void FUN_02948190(long param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  char cVar10;
  undefined4 *puVar11;
  
  pcVar2 = (char *)(*(long *)(param_1 + 0x58) + 0x10d8);
  if (*pcVar2 != '\x06') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x110);
  bVar4 = *(byte *)(param_2 + 1);
  uVar8 = (ulong)bVar4;
  uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x58) + 0x55);
  if (iVar3 == 2) {
    if (5 < bVar4) goto LAB_02948208;
    puVar11 = (undefined4 *)&DAT_03a7ebc8;
  }
  else if (iVar3 == 1) {
    if (5 < bVar4) {
LAB_02948208:
      cVar10 = '\0';
      goto LAB_02948348;
    }
    if (uVar9 - 1 < 5) {
      puVar11 = (undefined4 *)(&PTR_DAT_042767f8)[(char)(uVar9 - 1)];
    }
    else {
      puVar11 = &DAT_03a7eb68;
    }
  }
  else {
    if ((iVar3 != 0) || (5 < bVar4)) goto LAB_02948208;
    puVar11 = (undefined4 *)&DAT_03a7eb50;
  }
  cVar10 = '\0';
  if (bVar4 != 0) {
    cVar10 = '\0';
    pbVar1 = (byte *)(puVar11 + uVar8);
    if (*pbVar1 != 5) {
      cVar10 = '\0';
      do {
        uVar5 = (int)uVar8 - 1;
        uVar6 = (ulong)uVar5;
        if (iVar3 == 2) {
          uVar7 = 5;
          if ((uVar5 & 0xff) < 6) {
            uVar7 = *(uint *)(&DAT_03a7ebc8 + (uVar6 & 0xff) * 4);
          }
        }
        else if (iVar3 == 1) {
          uVar7 = 5;
          if ((uVar5 & 0xff) < 6) {
            uVar6 = uVar6 & 0xff;
            if (uVar9 - 1 < 3) {
              uVar7 = (&DAT_03a7eb80)[uVar6];
            }
            else if (uVar9 == 4) {
              uVar7 = *(uint *)(&DAT_03a7eb98 + uVar6 * 4);
            }
            else if (uVar9 == 5) {
              uVar7 = *(uint *)(&DAT_03a7ebb0 + uVar6 * 4);
            }
            else {
              uVar7 = (&DAT_03a7eb68)[uVar6];
            }
          }
        }
        else {
          uVar7 = 5;
          if ((iVar3 == 0) && (uVar7 = 5, (uVar5 & 0xff) < 6)) {
            uVar7 = *(uint *)(&DAT_03a7eb50 + (uVar6 & 0xff) * 4);
          }
        }
        if (uVar7 == *pbVar1) {
          cVar10 = cVar10 + '\x01';
        }
        uVar8 = uVar8 - 1;
      } while ((uVar5 & 0xff) != 0);
    }
  }
LAB_02948348:
  *pcVar2 = cVar10;
  *(char *)(*(long *)(param_1 + 0x58) + 0x10d9) = (char)*(undefined4 *)(param_2 + 4);
  return;
}


