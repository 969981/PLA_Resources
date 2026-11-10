/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec860; name: FUN_002ec860
 */


ulong FUN_002ec860(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  if (param_1 == 0) {
    *param_2 = 0x30;
    param_2[1] = 0;
    return 1;
  }
  uVar6 = 0;
  cVar2 = '\x01';
  if (param_1 < 0) {
    cVar2 = -1;
  }
  lVar10 = param_1;
  do {
    uVar1 = lVar10 + 9;
    param_2[uVar6] = ((char)lVar10 + (char)(lVar10 / 10) * -10) * cVar2 + '0';
    uVar6 = uVar6 + 1;
    lVar10 = lVar10 / 10;
  } while (0x12 < uVar1);
  uVar5 = (uint)uVar6;
  if (param_1 < 0) {
    param_2[uVar6 & 0xffffffff] = 0x2d;
    uVar5 = uVar5 + 1;
    uVar6 = (ulong)uVar5;
  }
  puVar4 = param_2 + (int)uVar5;
  puVar7 = puVar4 + -1;
  if (param_2 < puVar7) {
    do {
      puVar9 = param_2 + 1;
      uVar3 = *param_2;
      *param_2 = *puVar7;
      puVar8 = puVar7 + -1;
      *puVar7 = uVar3;
      puVar7 = puVar8;
      param_2 = puVar9;
    } while (puVar9 < puVar8);
  }
  *puVar4 = 0;
  return uVar6;
}


