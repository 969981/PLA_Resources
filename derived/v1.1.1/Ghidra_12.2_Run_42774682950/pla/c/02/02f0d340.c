/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d340; name: FUN_02f0d340
 */


long FUN_02f0d340(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
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
      iVar1 = iVar2 + (uVar3 >> 1);
      lVar4 = (long)iVar1;
      uVar5 = *(ulong *)(*param_1 + (long)iVar1 * 8);
      if (uVar5 == param_2) {
        *param_3 = 1;
        goto LAB_02f0d388;
      }
      if (uVar5 < param_2) {
        iVar2 = iVar1 + 1;
      }
      uVar3 = uVar3 - (uVar5 < param_2) >> 1;
    } while (uVar3 != 0);
    lVar4 = (long)iVar2;
  }
  *param_3 = 0;
LAB_02f0d388:
  return *param_1 + lVar4 * 8;
}


