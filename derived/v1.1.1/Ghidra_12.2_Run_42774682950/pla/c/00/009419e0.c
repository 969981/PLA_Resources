/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009419e0; name: FUN_009419e0
 */


void FUN_009419e0(long param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = FUN_0294d664(*(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x98) + 0x370) + 8),0);
  bVar1 = *(byte *)(lVar4 + 0x30);
  if ((ulong)bVar1 != 0) {
    uVar10 = 0;
    do {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x150) + 0x68);
      bVar2 = *(byte *)(*(long *)(lVar4 + 8) + 0x88);
      uVar7 = (uint)bVar2;
      if ((uint)bVar2 == (uint)uVar10) {
        iVar6 = 0;
      }
      else {
        bVar2 = *(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0x98) + 0x370) + 8) + 0x38);
        uVar8 = (uint)bVar2;
        if (bVar2 != 0) {
          iVar6 = 0;
          uVar9 = uVar10 & 0xffffffff;
          do {
            if ((uVar7 != 0) && (iVar6 = iVar6 + 1, (int)uVar9 == 0)) goto LAB_00941a7c;
            uVar8 = uVar8 - 1;
            uVar9 = (ulong)((int)uVar9 - 1);
            uVar7 = uVar7 - 1;
          } while (uVar8 != 0);
        }
        iVar6 = 0x1f;
      }
LAB_00941a7c:
      lVar4 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),iVar6);
      lVar5 = *(long *)(lVar4 + 0x70);
      sVar3 = *(short *)(lVar5 + 0x70);
      if (sVar3 == 0x19c) {
        if (*(short *)(lVar5 + 0x74) != 0) {
          uVar9 = FUN_029519e0(lVar5,4);
          if ((uVar9 & 1) == 0) {
            sVar3 = *(short *)(*(long *)(lVar4 + 0x70) + 0x70);
            goto joined_r0x00941ae0;
          }
          goto LAB_00941ae4;
        }
      }
      else {
joined_r0x00941ae0:
        if (sVar3 == 0x1a5) {
LAB_00941ae4:
          lVar4 = FUN_00923bbc(*(undefined8 *)(param_1 + 8));
          *(undefined1 *)(lVar4 + uVar10 + 0x27d) = 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != bVar1);
  }
  return;
}


