/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d7850; name: FUN_029d7850
 */


void FUN_029d7850(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  
  uVar2 = *(undefined1 *)(param_2 + 0x7d);
  if (*(char *)(param_2 + 0x2b0) != '/') goto LAB_029d78fc;
  uVar5 = *(ulong *)(param_2 + 0x210);
  switch((uint)uVar5 & 7) {
  case 1:
  case 2:
  case 3:
    uVar7 = (uint)(uVar5 >> 0xe);
    if ((uVar5 >> 0xe & 0xffff) == 0) break;
LAB_029d78b8:
    uVar7 = uVar7 & 0xffff;
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (uVar5 >> 3 & 0x1f) * 8 + 0x120);
    if (*(uint *)(lVar6 + 0x300) != uVar7) {
      if (*(uint *)(lVar6 + 0x31c) != uVar7) {
        if (*(uint *)(lVar6 + 0x338) != uVar7) {
          if (*(uint *)(lVar6 + 0x354) != uVar7) break;
          goto LAB_029d7958;
        }
        goto LAB_029d7944;
      }
      goto LAB_029d7930;
    }
    goto LAB_029d791c;
  case 4:
    uVar7 = (uint)(uVar5 >> 0x14);
    if ((uVar5 >> 0x14 & 0xffff) != 0) goto LAB_029d78b8;
  }
LAB_029d78fc:
  if (((param_3 == (long *)0x0) || (lVar6 = *param_3, lVar6 == 0)) ||
     (iVar1 = (int)param_3[1], iVar1 == 0)) {
    return;
  }
  if (*(int *)(lVar6 + 0x300) == iVar1) {
LAB_029d791c:
    lVar4 = 0;
  }
  else if (*(int *)(lVar6 + 0x31c) == iVar1) {
LAB_029d7930:
    lVar4 = 1;
  }
  else if (*(int *)(lVar6 + 0x338) == iVar1) {
LAB_029d7944:
    lVar4 = 2;
  }
  else {
    if (*(int *)(lVar6 + 0x354) != iVar1) {
      return;
    }
LAB_029d7958:
    lVar4 = 3;
  }
  bVar3 = *(byte *)(lVar6 + 0x7d);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 8) + (ulong)bVar3 * 8 +
                   0x120);
  if ((uint)lVar4 < (uint)*(byte *)(lVar8 + 0x368)) {
    lVar9 = lVar8 + lVar4 * 0x1c;
    cVar10 = -1;
    if ((*(byte *)(lVar9 + 0x309) + 1 & 0x100) == 0) {
      cVar10 = *(byte *)(lVar9 + 0x309) + 1;
    }
    *(char *)(lVar9 + 0x309) = cVar10;
    if (*(char *)(lVar9 + 0x30c) != '\0') {
      *(char *)(lVar8 + lVar4 * 0x1c + 0x2fd) = cVar10;
    }
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),9,(ulong)bVar3,lVar4,uVar2);
  return;
}


