/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029486c0; name: FUN_029486c0
 */


void FUN_029486c0(long param_1,long param_2,undefined1 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  bVar1 = *(byte *)(param_2 + 0x30);
  if ((bVar1 == 0) || (bVar1 == 1)) {
LAB_02948760:
    uVar6 = 0;
LAB_02948764:
    uVar2 = FUN_0294da60(*(undefined4 *)(param_1 + 0x110),
                         *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),param_3);
    bVar1 = *(byte *)(param_2 + 0x30);
    if ((int)uVar2 < (int)(uint)bVar1) {
      do {
        if ((uVar2 & 0xff) < (uint)bVar1) {
          lVar7 = *(long *)(param_2 + (ulong)(uVar2 & 0xff) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar3 = FUN_029506a8(lVar7,0x11);
        if (((int)uVar6 <= (int)uVar2) && (iVar3 == 0x95)) {
          *(ushort *)(lVar7 + 0x87) = *(ushort *)(lVar7 + 0x87) & 0xffbf;
          *(undefined1 *)(lVar7 + 0x28e) = 0x1f;
        }
        bVar1 = *(byte *)(param_2 + 0x30);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)(uint)bVar1);
    }
    return;
  }
  uVar6 = (ulong)(byte)(bVar1 - 1);
  cVar5 = bVar1 - 1;
  if (bVar1 <= uVar6) goto LAB_02948710;
  do {
    lVar7 = *(long *)(param_2 + uVar6 * 8);
    while( true ) {
      lVar8 = *(long *)(lVar7 + 0x60);
      uVar4 = FUN_02c6cf3c(*(undefined8 *)(lVar8 + 0x98));
      if ((((uVar4 & 1) == 0) &&
          ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
         (*(short *)(lVar7 + 0x74) != 0)) goto LAB_02948764;
      if (cVar5 == '\x01') goto LAB_02948760;
      uVar6 = uVar6 - 1;
      cVar5 = cVar5 + -1;
      if (uVar6 < *(byte *)(param_2 + 0x30)) break;
LAB_02948710:
      lVar7 = 0;
    }
  } while( true );
}


