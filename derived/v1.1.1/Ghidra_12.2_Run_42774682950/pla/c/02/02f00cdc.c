/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f00cdc; name: FUN_02f00cdc
 */


int FUN_02f00cdc(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  
  if ((param_2 & 0xf00) == 0x100) {
    uVar4 = param_2 >> 0xc;
    uVar2 = uVar4 & 0xffff7;
    uVar6 = param_2 - (uVar4 - uVar2 >> 3);
    if ((uVar6 & 0xfe) != 0) {
      puVar10 = *(uint **)(param_1 + 0x78);
      uVar3 = *(uint *)(param_1 + 0x80);
      uVar5 = uVar2 << 0xc | uVar6 & 0xff | 0x100;
      if ((uVar3 == 0) || (*puVar10 == uVar5)) {
        puVar9 = puVar10;
      }
      else {
        lVar7 = (ulong)uVar3 * 0x10;
        puVar11 = puVar10;
        do {
          lVar7 = lVar7 + -0x10;
          if (lVar7 == 0) goto LAB_02f00de4;
          puVar9 = puVar11 + 4;
          puVar1 = puVar11 + 4;
          puVar11 = puVar9;
        } while (*puVar1 != uVar5);
      }
      if (puVar9 == puVar10 + (ulong)uVar3 * 4) {
LAB_02f00de4:
        lVar7 = FUN_02ec87f4(param_1,uVar5);
        iVar8 = 1;
        if (lVar7 == 0) {
          iVar8 = 2;
        }
      }
      else {
        iVar8 = 1;
      }
      if ((param_2 >> 0xe & 1) == 0) {
        return iVar8;
      }
      if (iVar8 != 1) {
        return iVar8;
      }
      uVar4 = uVar6 - (uVar2 - (uVar4 & 0xffff3) >> 2) & 0xff | (uVar4 & 0xffff3) << 0xc | 0x100;
      puVar10 = *(uint **)(param_1 + 0x78);
      uVar2 = *(uint *)(param_1 + 0x80);
      if ((uVar2 == 0) || (*puVar10 == uVar4)) {
        puVar9 = puVar10;
      }
      else {
        lVar7 = (ulong)uVar2 * 0x10;
        puVar11 = puVar10;
        do {
          lVar7 = lVar7 + -0x10;
          if (lVar7 == 0) goto LAB_02f00e58;
          puVar9 = puVar11 + 4;
          puVar1 = puVar11 + 4;
          puVar11 = puVar9;
        } while (*puVar1 != uVar4);
      }
      if (puVar9 == puVar10 + (ulong)uVar2 * 4) {
LAB_02f00e58:
        lVar7 = FUN_02ec87f4(param_1);
        iVar8 = 1;
        if (lVar7 == 0) {
          iVar8 = 2;
        }
        return iVar8;
      }
    }
  }
  return 1;
}


