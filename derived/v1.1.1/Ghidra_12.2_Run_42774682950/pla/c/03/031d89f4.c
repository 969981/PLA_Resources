/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d89f4; name: FUN_031d89f4
 */


ulong FUN_031d89f4(long param_1,int *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10;
  if ((int)*(short *)(lVar2 + 10) + (int)*(short *)(lVar2 + 8) < 0x17) {
    lVar2 = FUN_031dbecc(param_1 + 0x10);
    if (lVar2 == 0) {
LAB_031d8a70:
      uVar5 = 0;
      uVar3 = 0xffffffff;
      goto LAB_031d8a5c;
    }
    uVar1 = *(uint *)(lVar2 + 4);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = FUN_031dc4f4(param_1 + 0x30);
    if (lVar2 == 0) goto LAB_031d8a70;
    uVar1 = *(uint *)(lVar2 + 4);
    lVar4 = *(long *)(param_1 + 0x40);
  }
  uVar3 = (ulong)uVar1;
  uVar5 = (lVar2 - lVar4) * 0x20000000;
LAB_031d8a5c:
  return (uVar3 | uVar5) >> 0x1f & 1;
}


