/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293afa4; name: FUN_0293afa4
 */


undefined4 FUN_0293afa4(long param_1,byte param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x58) + 0x110);
  lVar4 = 3;
  if (0x17 < param_2) {
    lVar4 = (ulong)(param_2 < 0x1e) << 2;
  }
  lVar1 = 1;
  if (0x11 < param_2) {
    lVar1 = lVar4;
  }
  lVar4 = 2;
  if (0xb < param_2) {
    lVar4 = lVar1;
  }
  lVar1 = 0;
  if (5 < param_2) {
    lVar1 = lVar4;
  }
  if (2 < uVar2) {
    return 0;
  }
  uVar3 = 0;
  if ((((int)param_3 < 0x13) && ((byte)(&PTR_DAT_042764e0)[(int)uVar2][lVar1] < 2)) &&
     (lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) +
                        (ulong)(byte)(&PTR_DAT_042764e0)[(int)uVar2][lVar1] * 0x260 +
                        (ulong)param_3 * 0x20 + 8), uVar3 = 0, lVar4 != 0)) {
    uVar3 = *(undefined4 *)(lVar4 + 0x1c);
  }
  return uVar3;
}


