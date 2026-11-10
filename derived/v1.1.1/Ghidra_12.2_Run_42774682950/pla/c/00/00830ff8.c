/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00830ff8; name: FUN_00830ff8
 */


void FUN_00830ff8(ushort *param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_0082deb0(param_2 + 8);
  bVar4 = FUN_0082e514(uVar11,uVar5);
  if (((bVar4 != 0xff) && (uVar3 = *param_1, bVar4 < uVar3)) && (uVar3 != 0)) {
    lVar6 = *(long *)(param_1 + 0x10);
    uVar7 = (ulong)bVar4;
    pcVar8 = *(char **)(lVar6 + uVar7 * 8);
    uVar9 = 0;
    cVar2 = *pcVar8;
    while( true ) {
      if (cVar2 != '\0') {
        pcVar8[uVar9] = '\0';
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xc) + uVar7 * 8) + uVar9 * 4) = 2;
      }
      lVar10 = *(long *)(lVar6 + uVar9 * 8);
      if (*(char *)(lVar10 + uVar7) != '\0') {
        *(undefined1 *)(lVar10 + uVar7) = 0;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xc) + uVar9 * 8) + uVar7 * 4) = 2;
      }
      uVar1 = (int)uVar9 + 1;
      if ((uint)uVar3 <= (uVar1 & 0xff)) break;
      uVar9 = (ulong)uVar1 & 0xff;
      cVar2 = pcVar8[uVar9];
    }
  }
  return;
}


