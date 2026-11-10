/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00686d10; name: FUN_00686d10
 */


void FUN_00686d10(long *param_1)

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
      if (lVar3 != 0) goto LAB_00686d84;
      while (uVar4 = uVar4 - 1, uVar4 != 0) {
        while( true ) {
          puVar2 = puVar2 + 2;
          lVar3 = *(long *)puVar2;
          if (lVar3 == 0) break;
LAB_00686d84:
          FUN_00697b40(lVar3);
          FUN_002e2ea0(puVar1,lVar3);
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) goto LAB_00686da4;
        }
      }
LAB_00686da4:
      puVar2 = (uint *)param_1[2];
    }
    FUN_002ee710(puVar2);
    lVar3 = *param_1;
    param_1[2] = 0;
  }
  if (lVar3 != 0) {
                    /* try { // try from 00686d3c to 00686d3f has its CatchHandler @ 00686dbc */
    FUN_0032ce8c();
  }
  return;
}


