/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03261230; name: FUN_03261230
 */


/* WARNING: Removing unreachable block (ram,0x032612bc) */

bool FUN_03261230(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 3) {
    return true;
  }
  puVar3 = (uint *)*param_1;
  uVar4 = *puVar3;
  if (uVar2 == 3) {
    iVar6 = ((puVar3[1] - uVar4) * 2 & 0x10000) + (puVar3[1] - uVar4);
    iVar1 = ((puVar3[2] - uVar4) * 2 & 0x10000) + (puVar3[2] - uVar4);
    return (iVar1 >> 0x10) * (int)(short)iVar6 <= (int)(short)iVar1 * (iVar6 >> 0x10);
  }
  uVar5 = uVar4;
  if (uVar2 == 2) {
    lVar8 = 1;
  }
  else {
    lVar7 = 0;
    do {
      lVar8 = lVar7;
      uVar5 = (puVar3[lVar8 + 1] + uVar5 >> 1 & 0x3fff3fff) + puVar3[lVar8 + 2] >> 1 & 0x3fff3fff;
      lVar7 = lVar8 + 2;
    } while (~((ulong)(uVar2 - 1) & 1) + (ulong)uVar2 != lVar8 + 2);
    lVar8 = lVar8 + 3;
    if ((uVar2 - 1 & 1) == 0) goto LAB_0326130c;
  }
  uVar5 = puVar3[lVar8] + uVar5 >> 1 & 0x3fff3fff;
LAB_0326130c:
  if (0 < (int)uVar2) {
    lVar7 = 0;
    iVar6 = uVar2 - 1;
    while( true ) {
      iVar1 = ((uVar4 - uVar5) * 2 & 0x10000) + (uVar4 - uVar5);
      iVar6 = ((puVar3[iVar6] - uVar5) * 2 & 0x10000) + (puVar3[iVar6] - uVar5);
      if ((iVar6 >> 0x10) * (int)(short)iVar1 < (int)(short)iVar6 * (iVar1 >> 0x10)) {
        return false;
      }
      if ((ulong)uVar2 - 1 == lVar7) break;
      uVar4 = puVar3[lVar7 + 1];
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 1;
    }
  }
  return true;
}


