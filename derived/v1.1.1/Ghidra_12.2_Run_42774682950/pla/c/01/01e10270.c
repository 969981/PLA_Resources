/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e10270; name: FUN_01e10270
 */


undefined8 FUN_01e10270(long param_1,ulong *param_2)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  if ((lVar3 != lVar9) && (lVar9 != lVar3)) {
    bVar4 = *(char *)(lVar9 + 8) != '\0';
    if (*(char *)(lVar9 + 8) == '\0' && lVar9 + 0xc != lVar3) {
      lVar9 = lVar9 + 0x18;
      do {
        pcVar1 = (char *)(lVar9 + -4);
        bVar4 = (bool)(bVar4 | *pcVar1 != '\0');
        bVar5 = lVar3 != lVar9;
        lVar9 = lVar9 + 0xc;
      } while (*pcVar1 == '\0' && bVar5);
    }
    if (bVar4) {
      uVar6 = *param_2;
      uVar8 = param_2[1];
      do {
        uVar10 = uVar6 ^ uVar8;
        iVar7 = (int)uVar8;
        uVar8 = uVar10 >> 0x1b | uVar10 << 0x25;
        uVar2 = (int)uVar6 + iVar7 & 0x7f;
        uVar6 = uVar10 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar10 << 0x10;
      } while (99 < uVar2);
      *param_2 = uVar6;
      param_2[1] = uVar8;
      if ((int)uVar2 < *(int *)(param_1 + 8)) {
        return 1;
      }
    }
  }
  return 0;
}


