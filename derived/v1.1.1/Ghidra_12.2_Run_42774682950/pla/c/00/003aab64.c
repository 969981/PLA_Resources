/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003aab64; name: FUN_003aab64
 */


void FUN_003aab64(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_LAB_04373088;
  puVar2 = (uint *)param_1[2];
  if ((puVar2 == (uint *)0x0) || (*param_1 != 0)) {
    lVar3 = *param_1;
    param_1[2] = 0;
  }
  else {
    uVar4 = (ulong)*puVar2;
    if (0 < (int)*puVar2) {
      puVar2 = puVar2 + 2;
      lVar3 = *(long *)puVar2;
      if (lVar3 != 0) goto LAB_003aabd8;
      while (uVar4 = uVar4 - 1, uVar4 != 0) {
        while( true ) {
          puVar2 = puVar2 + 2;
          lVar3 = *(long *)puVar2;
          if (lVar3 == 0) break;
LAB_003aabd8:
          FUN_003bb42c(lVar3);
          FUN_002e2ea0(puVar1,lVar3);
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_003aabf8;
        }
      }
LAB_003aabf8:
      puVar2 = (uint *)param_1[2];
    }
    FUN_002ee710(puVar2);
    lVar3 = *param_1;
    param_1[2] = 0;
  }
  if (lVar3 != 0) {
                    /* try { // try from 003aab90 to 003aab93 has its CatchHandler @ 003aac10 */
    FUN_0032ce8c();
  }
  return;
}


