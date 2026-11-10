/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c3820; name: FUN_003c3820
 */


void FUN_003c3820(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  ulong uVar5;
  
  puVar2 = PTR_LAB_04373088;
  puVar3 = (uint *)param_1[2];
  if ((puVar3 != (uint *)0x0) && (*param_1 == 0)) {
    uVar5 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      puVar3 = puVar3 + 2;
      puVar1 = PTR_DAT_04373e40 + 0x10;
      plVar4 = *(long **)puVar3;
      if (plVar4 != (long *)0x0) goto LAB_003c3884;
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
        while( true ) {
          puVar3 = puVar3 + 2;
          plVar4 = *(long **)puVar3;
          if (plVar4 == (long *)0x0) break;
LAB_003c3884:
          *plVar4 = (long)puVar1;
                    /* try { // try from 003c3888 to 003c3897 has its CatchHandler @ 003c38d0 */
          FUN_003b25b0(plVar4);
          FUN_003a2ec4(plVar4 + 1);
          FUN_002e2ea0(puVar2,plVar4);
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_003c38b0;
        }
      }
LAB_003c38b0:
      puVar3 = (uint *)param_1[2];
    }
    FUN_002ee710(puVar3);
  }
  param_1[2] = 0;
  return;
}


