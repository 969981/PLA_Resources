/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ecc24; name: FUN_007ecc24
 */


/* WARNING: Removing unreachable block (ram,0x007ecdbc) */

uint FUN_007ecc24(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pcVar12 = *(char **)(param_1 + 8);
  if ((((pcVar12 == (char *)0x0) || (*(int *)(param_1 + 0x10) == 0)) ||
      (*(int *)(param_1 + 0x14) != 0)) || (*(int *)(param_1 + 0x18) != 0)) {
    return 0xffffffff;
  }
  local_40 = *param_3;
  uStack_38 = param_3[1];
  local_30 = param_3[2];
  uStack_28 = param_3[3];
  uVar5 = nn::util::VSNPrintf(pcVar12,*(int *)(param_1 + 0x10),param_2,&local_40);
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar7 = *(uint *)(param_1 + 0x10);
  if (((int)uVar5 < 0) || ((int)uVar7 <= (int)uVar5)) {
    pcVar12[uVar7 - 1] = '\0';
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar5 = uVar7 - 1;
  }
  uVar10 = 0;
  *(uint *)(param_1 + 0x14) = uVar5;
  if ((uVar5 != 0) && (pbVar8 = *(byte **)(param_1 + 8), pbVar8 != (byte *)0x0)) {
    if (*(int *)(param_1 + 0x18) != 1) {
      if (*(int *)(param_1 + 0x18) == 2) {
        if (uVar5 >> 1 < uVar7 >> 2) {
          return uVar5 >> 1;
        }
      }
      else if (uVar7 >> 2 != 0) {
        return 0;
      }
      goto LAB_007ecdd8;
    }
    bVar3 = *pbVar8;
    pbVar1 = pbVar8;
    uVar10 = 0;
    while ((bVar3 != 0 && ((long)pbVar1 - (long)pbVar8 < (long)(ulong)uVar5))) {
      if ((char)bVar3 < 0) {
        if ((int)(char)bVar3 + 0x3eU < 0x1e) {
          uVar11 = 2;
        }
        else if ((bVar3 & 0xf0) == 0xe0) {
          uVar11 = 3;
        }
        else if ((bVar3 & 0xf8) == 0xf0) {
          uVar11 = 4;
        }
        else {
          uVar11 = 5;
          if (((bVar3 & 0xfc) != 0xf8) && (uVar11 = 6, (bVar3 & 0xfe) != 0xfc)) {
            uVar11 = 0;
          }
        }
      }
      else {
        uVar11 = 1;
      }
      uVar2 = uVar11;
      if (uVar11 == 0) {
        uVar2 = 1;
      }
      pbVar1 = pbVar1 + uVar2;
      if (uVar11 == 0) break;
      bVar3 = *pbVar1;
      uVar10 = uVar10 + 1;
    }
  }
  if (uVar10 < uVar7 >> 2) {
    return uVar10;
  }
LAB_007ecdd8:
  if (uVar7 < 8) {
    uVar5 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    uVar5 = 0;
    uVar10 = 1;
    cVar4 = *pcVar12;
    while (cVar4 != '\0') {
      uVar11 = (uint)cVar4;
      if ((int)uVar11 < 0) {
        if (uVar11 + 0x3e < 0x1e) {
          iVar9 = 2;
        }
        else if ((uVar11 & 0xfffffff0) == 0xffffffe0) {
          iVar9 = 3;
        }
        else if ((uVar11 & 0xfffffff8) == 0xfffffff0) {
          iVar9 = 4;
        }
        else {
          iVar9 = 5;
          if (((uVar11 & 0xfffffffc) != 0xfffffff8) &&
             (iVar9 = 6, (uVar11 & 0xfffffffe) != 0xfffffffc)) {
            iVar9 = 0;
          }
        }
      }
      else {
        iVar9 = 1;
      }
      if (iVar9 == 0) {
        iVar9 = 1;
      }
      else {
        uVar5 = uVar10;
      }
      iVar6 = iVar9 + iVar6;
      uVar10 = uVar5 + 1;
      if (uVar7 >> 2 <= uVar10) break;
      cVar4 = pcVar12[iVar6];
    }
  }
  pcVar12[iVar6] = '\0';
  *(int *)(param_1 + 0x14) = iVar6;
  return uVar5;
}


