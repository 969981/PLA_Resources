/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001670f0; name: FUN_001670f0
 */


ulong FUN_001670f0(long *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 5);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar5 = FUN_001674a0(param_1,0x7fff801e);
  if (uVar3 != 0xffffffff) {
    if ((int)uVar5 == -1) {
      return (ulong)uVar3;
    }
    uVar7 = uVar5 & 0xffffffff;
    do {
      uVar6 = (uint)uVar7;
      uVar4 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar6 * 4);
      iVar1 = (uVar4 >> 0xe) - 0x1ffff;
      uVar8 = 0xffffffff;
      if (iVar1 != -1) {
        uVar8 = uVar6 + iVar1 + 1;
      }
      uVar7 = (ulong)uVar8;
    } while (uVar8 != 0xffffffff);
    iVar1 = uVar3 + ~uVar6;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (0x1ffff < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1[2],"control structure too long");
    }
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)(int)uVar6 * 4) =
         (uVar4 & 0x3fff | iVar1 * 0x4000) + 0x7fffc000;
  }
  return uVar5;
}


