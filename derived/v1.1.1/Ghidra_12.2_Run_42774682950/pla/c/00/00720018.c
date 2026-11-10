/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00720018; name: FUN_00720018
 */


void FUN_00720018(long param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar7 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar8 = uVar7 + uVar5;
    iVar3 = (int)lVar8;
  }
  else {
    uVar6 = 0;
    do {
      pbVar4 = (byte *)FUN_0032b79c(param_1 + 0x10,uVar6);
      uVar1 = (ulong)(*pbVar4 >> 1);
      if ((*pbVar4 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar4 + 8);
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar1 + uVar7 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar5 != uVar6);
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar8 = uVar7 + uVar5;
    iVar3 = (int)lVar8;
  }
  if (0 < (int)uVar5) {
    uVar6 = 0;
    do {
      pbVar4 = (byte *)FUN_0032b79c(param_1 + 0x28,uVar6);
      uVar7 = (ulong)(*pbVar4 >> 1);
      if ((*pbVar4 & 1) != 0) {
        uVar7 = *(ulong *)(pbVar4 + 8);
      }
      uVar6 = uVar6 + 1;
      lVar8 = uVar7 + lVar8 + (ulong)(((uint)LZCOUNT((uint)uVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      iVar3 = (int)lVar8;
    } while (uVar5 != uVar6);
  }
  pbVar4 = *(byte **)(param_1 + 0x40);
  bVar2 = *pbVar4;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_00720160;
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_00720160;
  uVar5 = (uint)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
  }
  iVar3 = iVar3 + uVar5 + (((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_00720160:
  if (*(char *)(param_1 + 0x48) != '\0') {
    iVar3 = iVar3 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar7 + 8);
    if ((bVar2 & 1) == 0) {
      uVar5 = (uint)(bVar2 >> 1);
    }
    else {
      uVar5 = (uint)*(undefined8 *)(uVar7 + 0x10);
    }
    iVar3 = uVar5 + iVar3;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  return;
}


