/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14ed0; name: FUN_02a14ed0
 */


void FUN_02a14ed0(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  uVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 8) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 8) + 0x58) + 0x55),
                       param_2 & 0xff);
  pbVar6 = (byte *)(lVar7 + (ulong)param_2 * 0x38 + 0x38);
  bVar1 = *pbVar6;
  if ((int)uVar2 < (int)(uint)bVar1) {
    uVar4 = (uint)bVar1;
    while( true ) {
      if ((uVar2 & 0xff) < (uint)bVar1) {
        lVar5 = *(long *)(lVar7 + (ulong)param_2 * 0x38 + (ulong)(uVar2 & 0xff) * 8 + 8);
      }
      else {
        lVar5 = 0;
      }
      iVar3 = FUN_029506a8(lVar5,0x10);
      if (iVar3 == 0x95) {
        *(ushort *)(lVar5 + 0x87) = *(ushort *)(lVar5 + 0x87) & 0xffbf;
        *(undefined1 *)(lVar5 + 0x28e) = 0x1f;
      }
      if (uVar4 - 1 == uVar2) break;
      bVar1 = *pbVar6;
      uVar2 = uVar2 + 1;
    }
  }
  return;
}


