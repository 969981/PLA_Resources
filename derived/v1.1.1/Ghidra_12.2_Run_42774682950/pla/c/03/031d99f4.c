/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d99f4; name: FUN_031d99f4
 */


uint FUN_031d99f4(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10;
  if ((int)*(short *)(lVar1 + 10) + (int)*(short *)(lVar1 + 8) < 0x17) {
    lVar1 = FUN_031dbecc((long *)(param_1 + 0x10));
    if ((lVar1 != 0) &&
       (uVar3 = (ulong)*(uint *)(lVar1 + 4) | (lVar1 - *(long *)(param_1 + 0x20)) * 0x20000000,
       -1 < (int)uVar3)) {
      return *(uint *)(*(long *)(param_1 + 0x10) + ((long)(uVar3 << 0x20) >> 0x1d) + 4) & 0x400000;
    }
  }
  else {
    lVar1 = FUN_031dc4f4((long *)(param_1 + 0x30));
    if ((lVar1 != 0) &&
       (uVar2 = *(uint *)(lVar1 + 4) |
                ((int)lVar1 - (int)*(undefined8 *)(param_1 + 0x40)) * 0x20000000, -1 < (int)uVar2))
    {
      return (uint)(*(char *)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x28 + 0xc) != '\0');
    }
  }
  return 0;
}


