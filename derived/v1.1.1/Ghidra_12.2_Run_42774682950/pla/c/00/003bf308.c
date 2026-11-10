/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bf308; name: FUN_003bf308
 */


void FUN_003bf308(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  puVar2 = PTR_LAB_04373088;
  puVar3 = (uint *)param_1[2];
  if ((puVar3 == (uint *)0x0) || (*param_1 != 0)) {
    lVar4 = *param_1;
    param_1[2] = 0;
  }
  else {
    uVar6 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar3 = puVar3 + 2;
      puVar1 = PTR_DAT_04373e18 + 0x10;
      plVar5 = *(long **)puVar3;
      if (plVar5 != (long *)0x0) goto LAB_003bf390;
      while (uVar6 = uVar6 - 1, uVar6 != 0) {
        while( true ) {
          puVar3 = puVar3 + 2;
          plVar5 = *(long **)puVar3;
          if (plVar5 == (long *)0x0) break;
LAB_003bf390:
          *plVar5 = (long)puVar1;
                    /* try { // try from 003bf394 to 003bf3a3 has its CatchHandler @ 003bf3e0 */
          FUN_003be52c(plVar5);
          FUN_003a2ec4(plVar5 + 1);
          FUN_00326c10(plVar5 + 3);
          FUN_002e2ea0(puVar2,plVar5);
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_003bf3c4;
        }
      }
LAB_003bf3c4:
      puVar3 = (uint *)param_1[2];
    }
    FUN_002ee710(puVar3);
    lVar4 = *param_1;
    param_1[2] = 0;
  }
  if (lVar4 != 0) {
                    /* try { // try from 003bf338 to 003bf33b has its CatchHandler @ 003bf3dc */
    FUN_0032ce8c();
  }
  return;
}


