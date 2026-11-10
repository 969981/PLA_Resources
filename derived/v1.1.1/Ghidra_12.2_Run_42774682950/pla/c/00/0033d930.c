/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033d930; name: FUN_0033d930
 */


void FUN_0033d930(long *param_1)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar3 = PTR_LAB_04373088;
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(plVar5 + 2);
    plVar2 = (long *)*plVar5;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        FUN_002e2ea0(puVar3,plVar5[4]);
      }
      FUN_002e2ea0(puVar3,plVar5);
      if (plVar2 == (long *)0x0) break;
      bVar1 = *(byte *)(plVar2 + 2);
      plVar5 = plVar2;
      plVar2 = (long *)*plVar2;
    }
  }
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088);
  return;
}


