/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a11a4c; name: FUN_02a11a4c
 */


undefined8 FUN_02a11a4c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  short sVar1;
  short sVar2;
  long lVar3;
  undefined1 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x80);
  sVar2 = 0;
  if ((lVar3 != 0) && (sVar2 = *(short *)(lVar3 + 0x2730), sVar2 != 0)) {
    *param_3 = *(undefined1 *)(lVar3 + 0x2736);
  }
  lVar3 = *(long *)(param_1 + 0x90);
  if ((lVar3 != 0) &&
     (sVar1 = *(short *)(lVar3 + 0x2730), (ushort)(sVar1 - 1U) < (ushort)(sVar2 - 1U))) {
    *param_3 = *(undefined1 *)(lVar3 + 0x2736);
    sVar2 = sVar1;
  }
  lVar3 = *(long *)(param_1 + 0xa0);
  if ((lVar3 != 0) &&
     (sVar1 = *(short *)(lVar3 + 0x2730), (ushort)(sVar1 - 1U) < (ushort)(sVar2 - 1U))) {
    *param_3 = *(undefined1 *)(lVar3 + 0x2736);
    sVar2 = sVar1;
  }
  lVar3 = *(long *)(param_1 + 0xb0);
  if ((lVar3 != 0) &&
     (sVar1 = *(short *)(lVar3 + 0x2730), (ushort)(sVar1 - 1U) < (ushort)(sVar2 - 1U))) {
    *param_3 = *(undefined1 *)(lVar3 + 0x2736);
    sVar2 = sVar1;
  }
  lVar3 = *(long *)(param_1 + 0xc0);
  if ((lVar3 == 0) || ((ushort)(sVar2 - 1U) <= (ushort)(*(short *)(lVar3 + 0x2730) - 1U))) {
    if (sVar2 != 0) goto LAB_02a11b4c;
    uVar4 = 0;
    sVar2 = 1;
  }
  else {
    uVar4 = *(undefined1 *)(lVar3 + 0x2736);
    sVar2 = *(short *)(lVar3 + 0x2730);
  }
  *param_3 = uVar4;
LAB_02a11b4c:
  *(short *)(param_1 + 0x78) = sVar2;
  return 0;
}


