/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009418b8; name: FUN_009418b8
 */


void FUN_009418b8(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar3 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x98) + 0x370);
  lVar4 = FUN_0294d664(*(undefined8 *)(lVar11 + 8),0);
  bVar2 = *(byte *)(lVar4 + 0x30);
  if ((ulong)bVar2 != 0) {
    uVar12 = 0;
    do {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x150) + 0x68);
      bVar1 = *(byte *)(*(long *)(lVar4 + 8) + 0x88);
      uVar8 = (uint)bVar1;
      if ((uint)bVar1 == (uint)uVar12) {
        iVar7 = 0;
      }
      else {
        bVar1 = *(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x98) + 0x370) + 8) + 0x38);
        uVar9 = (uint)bVar1;
        if (bVar1 != 0) {
          iVar7 = 0;
          uVar10 = uVar12 & 0xffffffff;
          do {
            if ((uVar8 != 0) && (iVar7 = iVar7 + 1, (int)uVar10 == 0)) goto LAB_00941908;
            uVar9 = uVar9 - 1;
            uVar10 = (ulong)((int)uVar10 - 1);
            uVar8 = uVar8 - 1;
          } while (uVar9 != 0);
        }
        iVar7 = 0x1f;
      }
LAB_00941908:
      lVar5 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),iVar7);
      lVar4 = uVar12 * 4;
      uVar12 = uVar12 + 1;
      *(undefined4 *)(lVar3 + lVar4 + 0x264) = *(undefined4 *)(*(long *)(lVar5 + 0x70) + 700);
    } while (uVar12 != bVar2);
  }
  if (*(int *)(lVar3 + 0x54) == 1) {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 8);
    lVar4 = lVar3 + (ulong)*(byte *)(lVar5 + 0x88) * 4;
    *(int *)(lVar4 + 0x264) = *(int *)(lVar4 + 0x264) + *(int *)(lVar5 + 0x410);
  }
  uVar6 = FUN_0295e480(lVar11);
  bVar2 = FUN_02963880(uVar6,1);
  *(byte *)(lVar3 + 0x27c) = bVar2 & 1;
  return;
}


