/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb1868; name: FUN_02bb1868
 */


void FUN_02bb1868(long param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  
  puVar10 = *(undefined4 **)(param_1 + 0x78);
  puVar3 = *(undefined4 **)(param_1 + 0x80);
  if (puVar10 != puVar3) {
    do {
      if (*(byte *)(puVar10 + 4) == (param_3 & 1)) {
        lVar7 = *(long *)(puVar10 + 2);
        uVar4 = *(uint *)(lVar7 + 0xa0);
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar9 = *(ulong *)(*(long *)(lVar7 + 0x98) + 0x138);
        uVar8 = (uint)uVar9;
        if (uVar4 < 3) {
          uVar8 = uVar8 & uVar4 - 1;
        }
        else {
          iVar5 = 0;
          if ((ulong)uVar4 != 0) {
            iVar5 = (int)(uVar9 / uVar4);
          }
          uVar8 = uVar8 - iVar5 * uVar4;
        }
        uVar6 = FUN_02bc0470((long)(int)uVar8,lVar7 + 0x58);
        FUN_02b9cd4c(param_2,uVar1,uVar2,uVar6);
      }
      puVar10 = puVar10 + 6;
    } while (puVar3 != puVar10);
  }
  puVar10 = *(undefined4 **)(param_1 + 0xb0);
  puVar3 = *(undefined4 **)(param_1 + 0xb8);
  if (puVar10 != puVar3) {
    do {
      if (*(byte *)(puVar10 + 4) == (param_3 & 1)) {
        lVar7 = *(long *)(puVar10 + 2);
        uVar4 = *(uint *)(lVar7 + 0xa0);
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar9 = *(ulong *)(*(long *)(lVar7 + 0x98) + 0x138);
        uVar8 = (uint)uVar9;
        if (uVar4 < 3) {
          uVar8 = uVar8 & uVar4 - 1;
        }
        else {
          iVar5 = 0;
          if ((ulong)uVar4 != 0) {
            iVar5 = (int)(uVar9 / uVar4);
          }
          uVar8 = uVar8 - iVar5 * uVar4;
        }
        uVar6 = FUN_02bc0470((long)(int)uVar8,lVar7 + 0x58);
        FUN_02b9ce4c(param_2,uVar1,uVar2,uVar6);
      }
      puVar10 = puVar10 + 6;
    } while (puVar3 != puVar10);
  }
  return;
}


