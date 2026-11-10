/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d79c8; name: FUN_029d79c8
 */


void FUN_029d79c8(long param_1,byte *param_2,byte param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  char cVar13;
  long lVar14;
  long lVar15;
  
  bVar9 = *param_2;
  uVar6 = (ulong)bVar9;
  if (uVar6 < 0x1e) {
    param_2[uVar6 + 0x1f] = param_3;
    param_2[uVar6 + 1] = 0;
    *param_2 = bVar9 + 1;
  }
  if (param_3 < 0x1e) {
    param_2[(ulong)param_3 + 0xf4] = 1;
    if (param_2[(ulong)param_3 + 0x112] < 100) {
      param_2[(ulong)param_3 + 0x112] = param_2[(ulong)param_3 + 0x112] + 1;
    }
    if (param_3 < 6) {
      lVar11 = 0;
    }
    else if (param_3 < 0xc) {
      lVar11 = 2;
    }
    else if (param_3 < 0x12) {
      lVar11 = 1;
    }
    else {
      if (0x17 < param_3) goto LAB_029d7a74;
      lVar11 = 3;
    }
  }
  else {
LAB_029d7a74:
    lVar11 = (ulong)(param_3 < 0x1e) << 2;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  pbVar12 = (byte *)(lVar7 + lVar11 * 0x38 + 0x38);
  if (*pbVar12 != 0) {
    uVar6 = 0;
    cVar13 = '\0';
    do {
      lVar14 = *(long *)(lVar7 + lVar11 * 0x38 + 8 + uVar6 * 8);
      lVar15 = *(long *)(lVar14 + 0x60);
      uVar5 = FUN_02c6cf3c(*(undefined8 *)(lVar15 + 0x98));
      bVar4 = false;
      if (((uVar5 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar15 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
        bVar4 = *(short *)(lVar14 + 0x74) != 0;
      }
      cVar13 = cVar13 + bVar4;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *pbVar12);
    if (cVar13 != '\0') goto LAB_029d7bb4;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x48);
  pcVar8 = (char *)(lVar7 + lVar11 + 8);
  if (*pcVar8 == '\x05') {
    bVar9 = *(byte *)(lVar7 + 8);
    bVar2 = *(byte *)(lVar7 + 9);
    if (bVar9 == 5) {
      bVar9 = 0xff;
    }
    uVar3 = (uint)(char)bVar9;
    if ((bVar2 != 5) && ((uVar3 == bVar2 || (int)uVar3 < (int)(uint)bVar2) || 0x7fffffff < uVar3)) {
      bVar9 = bVar2;
    }
    bVar2 = *(byte *)(lVar7 + 10);
    if (bVar2 != 5) {
      uVar3 = (uint)(char)bVar9;
      if ((uVar3 == bVar2 || (int)uVar3 < (int)(uint)bVar2) || 0x7fffffff < uVar3) {
        bVar9 = bVar2;
      }
    }
    bVar2 = *(byte *)(lVar7 + 0xb);
    if (bVar2 != 5) {
      uVar3 = (uint)(char)bVar9;
      if ((uVar3 == bVar2 || (int)uVar3 < (int)(uint)bVar2) || 0x7fffffff < uVar3) {
        bVar9 = bVar2;
      }
    }
    bVar2 = *(byte *)(lVar7 + 0xc);
    if (bVar2 != 5) {
      uVar3 = (uint)(char)bVar9;
      if ((uVar3 == bVar2 || (int)uVar3 < (int)(uint)bVar2) || 0x7fffffff < uVar3) {
        bVar9 = bVar2;
      }
    }
    *pcVar8 = bVar9 + 1;
  }
LAB_029d7bb4:
  lVar11 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0x10) + 8) + (ulong)param_3 * 8 +
                   0x120);
  iVar1 = *(int *)(lVar7 + 0x398);
  iVar10 = 0xffff;
  if (iVar1 + 1U < 0xffff) {
    iVar10 = iVar1 + 1;
  }
  *(int *)(lVar7 + 0x398) = iVar10;
  FUN_02a3e6b8(*(undefined8 *)(lVar11 + 0x18),0x35,param_3,1,1);
  lVar11 = *(long *)(param_1 + 0x20);
  *(undefined4 *)
   (*(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0x10) + 8) + (ulong)param_3 * 8 + 0x120
             ) + 0x3b4) = 0;
  FUN_02a3e6b8(*(undefined8 *)(lVar11 + 0x18),0x34,param_3,8,0);
  return;
}


