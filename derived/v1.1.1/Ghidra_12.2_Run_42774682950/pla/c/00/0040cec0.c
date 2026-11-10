/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040cec0; name: FUN_0040cec0
 */


undefined4 FUN_0040cec0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_3 != 0) {
    uVar6 = -(ulong)(param_3 - 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(param_3 - 1U) << 2;
    uVar1 = *(uint *)(param_1 + uVar6);
    uVar2 = *(uint *)(param_2 + uVar6);
    bVar3 = uVar2 <= uVar1;
    bVar4 = uVar1 == uVar2;
    if (!bVar4) {
LAB_0040cf0c:
      uVar5 = 0xffffffff;
      if (bVar3 && !bVar4) {
        uVar5 = 1;
      }
      return uVar5;
    }
    if (-1 < param_3 + -2) {
      lVar7 = (long)(param_3 + -2);
      do {
        uVar1 = *(uint *)(param_1 + lVar7 * 4);
        uVar2 = *(uint *)(param_2 + lVar7 * 4);
        bVar3 = uVar2 <= uVar1;
        bVar4 = uVar1 == uVar2;
        if (!bVar4) goto LAB_0040cf0c;
        bVar4 = 0 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar4);
    }
  }
  return 0;
}


