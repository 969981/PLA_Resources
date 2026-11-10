/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1030c; name: FUN_01e1030c
 */


undefined4 FUN_01e1030c(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar2 = (*(long *)(param_1 + 0x18) - (long)*(undefined4 **)(param_1 + 0x10) >> 2) *
          -0x5555555555555555;
  if (lVar2 == 1) {
    return **(undefined4 **)(param_1 + 0x10);
  }
  if (lVar2 != 0) {
    uVar3 = *param_2;
    uVar6 = param_2[1];
    do {
      uVar7 = uVar3 ^ uVar6;
      iVar5 = (int)uVar6;
      uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
      uVar1 = (int)uVar3 + iVar5 & 0x7f;
      uVar3 = uVar7 ^ (uVar3 >> 0x28 | uVar3 << 0x18) ^ uVar7 << 0x10;
    } while (99 < uVar1);
    *param_2 = uVar3;
    param_2[1] = uVar6;
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    if (puVar4 != *(undefined4 **)(param_1 + 0x18)) {
      iVar5 = 0;
      do {
        iVar5 = puVar4[1] + iVar5;
        if ((int)uVar1 < iVar5) {
          return *puVar4;
        }
        puVar4 = puVar4 + 3;
      } while (*(undefined4 **)(param_1 + 0x18) != puVar4);
    }
  }
  return 0;
}


