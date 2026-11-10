/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eedca0; name: FUN_02eedca0
 */


long FUN_02eedca0(long *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar2 = 0;
    do {
      uVar1 = iVar2 + (uVar3 >> 1);
      lVar4 = (long)(int)uVar1;
      uVar5 = *(ulong *)(*param_1 +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar5 == param_2) {
        *param_3 = 1;
        goto LAB_02eedcec;
      }
      if (uVar5 < param_2) {
        iVar2 = uVar1 + 1;
      }
      uVar3 = uVar3 - (uVar5 < param_2) >> 1;
    } while (uVar3 != 0);
    lVar4 = (long)iVar2;
  }
  *param_3 = 0;
LAB_02eedcec:
  return *param_1 + lVar4 * 0x10;
}


