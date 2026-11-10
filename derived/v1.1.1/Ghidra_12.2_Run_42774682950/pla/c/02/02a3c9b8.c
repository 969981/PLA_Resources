/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3c9b8; name: FUN_02a3c9b8
 */


void FUN_02a3c9b8(long param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  
  uVar1 = param_2 & 0xff;
  uVar5 = FUN_02949cec(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),uVar1);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8);
  uVar3 = FUN_0294da60(*(undefined4 *)(lVar7 + 0x110),
                       *(undefined1 *)(*(long *)(lVar7 + 0x58) + 0x55),uVar1);
  pbVar8 = (byte *)(lVar9 + (ulong)param_2 * 0x38 + 0x38);
  bVar2 = *pbVar8;
  if ((int)uVar3 < (int)(uint)bVar2) {
    uVar6 = (uint)bVar2;
    while( true ) {
      if ((uVar3 & 0xff) < (uint)bVar2) {
        lVar7 = *(long *)(lVar9 + (ulong)param_2 * 0x38 + (ulong)(uVar3 & 0xff) * 8 + 8);
      }
      else {
        lVar7 = 0;
      }
      iVar4 = FUN_029506a8(lVar7,0x10);
      if (iVar4 == 0x95) {
        *(ushort *)(lVar7 + 0x87) = *(ushort *)(lVar7 + 0x87) & 0xffbf;
        *(undefined1 *)(lVar7 + 0x28e) = 0x1f;
      }
      if (uVar6 - 1 == uVar3) break;
      bVar2 = *pbVar8;
      uVar3 = uVar3 + 1;
    }
  }
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x3b,uVar1);
  return;
}


