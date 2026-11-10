/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef7dac; name: FUN_02ef7dac
 */


long FUN_02ef7dac(long *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = 0;
    do {
      uVar1 = iVar3 + (uVar4 >> 1);
      lVar5 = (long)(int)uVar1;
      uVar2 = *(uint *)(*param_1 +
                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3));
      if (uVar2 == param_2) {
        *param_3 = 1;
        goto LAB_02ef7df8;
      }
      if (uVar2 < param_2) {
        iVar3 = uVar1 + 1;
      }
      uVar4 = uVar4 - (uVar2 < param_2) >> 1;
    } while (uVar4 != 0);
    lVar5 = (long)iVar3;
  }
  *param_3 = 0;
LAB_02ef7df8:
  return *param_1 + lVar5 * 8;
}


