/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e37b0; name: FUN_029e37b0
 */


void FUN_029e37b0(long param_1,undefined1 *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  char *pcVar10;
  byte bVar11;
  long lVar12;
  
  *param_2 = 0;
  pcVar10 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar2 = *param_3;
  uVar7 = (ulong)bVar2;
  if ((((((*pcVar10 == '\0') || (pcVar10[2] != bVar2)) &&
        ((pcVar10[3] == '\0' || (pcVar10[5] != bVar2)))) &&
       ((pcVar10[6] == '\0' || (pcVar10[8] != bVar2)))) &&
      ((pcVar10[9] == '\0' || (pcVar10[0xb] != bVar2)))) &&
     ((pcVar10[0xc] == '\0' || (pcVar10[0xe] != bVar2)))) {
    if (pcVar10[0xf] == '\0') {
      return;
    }
    if (pcVar10[0x11] != bVar2) {
      return;
    }
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + uVar7 * 8 + 0x120);
  if (*(short *)(lVar8 + 0x74) == 0) {
    return;
  }
  bVar2 = param_3[1];
  if (bVar2 == 0x12) goto LAB_029e3874;
  bVar4 = (*(byte *)(lVar8 + 0x168) & 7) != 0;
  bVar11 = *(byte *)(lVar8 + 0x2dc);
  bVar3 = *(byte *)(lVar8 + 0x2dd);
  bVar5 = bVar3 != 0x12;
  bVar6 = bVar3 == 2;
  bVar9 = bVar3;
  if (*(char *)(lVar8 + 0x389) < '\0') {
    if (bVar11 != 0x12 && (bVar11 != 2 || !bVar4)) {
      if (!bVar5 || bVar4 && bVar6) goto LAB_029e3964;
    }
    else {
      bVar11 = bVar3;
      if (!bVar5 || bVar4 && bVar6) {
        bVar11 = 0x12;
LAB_029e3964:
        bVar9 = bVar11;
      }
    }
  }
  else if (bVar11 != 0x12 && (bVar11 != 2 || !bVar4)) {
    if (!bVar5 || bVar4 && bVar6) goto LAB_029e3964;
  }
  else {
    bVar11 = 0;
    bVar9 = 0;
    if (bVar5 && (!bVar4 || !bVar6)) {
      bVar11 = bVar3;
      bVar9 = bVar3;
    }
  }
  if (bVar11 == bVar2 || bVar9 == bVar2) {
    return;
  }
  if (*(byte *)(lVar8 + 0x2de) == bVar2) {
    return;
  }
LAB_029e3874:
  lVar8 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 8) + uVar7 * 8 + 0x120);
  uVar1 = *(uint *)(param_3 + 4);
  if ((*(byte *)(lVar12 + 0x2dc) != bVar2) && (*(byte *)(lVar12 + 0x2dd) != bVar2)) {
    *(byte *)(lVar12 + 0x2de) = bVar2;
    *(uint *)(lVar12 + 0x2e0) = uVar1;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x1b,uVar7,bVar2,uVar1 & 0xff);
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x121,*param_3,param_3[1],
               0xffff0000);
  *param_2 = 1;
  return;
}


