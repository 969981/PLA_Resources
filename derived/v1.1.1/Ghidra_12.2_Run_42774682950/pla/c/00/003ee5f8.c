/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ee5f8; name: FUN_003ee5f8
 */


void FUN_003ee5f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = PTR_LAB_04373088;
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    plVar6 = *(long **)(param_1 + 0x40);
    if (plVar6 == plVar5) {
      plVar6 = plVar5;
    }
    else {
      plVar3 = plVar6 + -3;
      lVar2 = *plVar3;
      while( true ) {
        if (lVar2 != 0) {
          FUN_003eea08(plVar3);
          FUN_002e2ea0(puVar1,plVar6[-3]);
        }
        plVar4 = plVar3 + -7;
        FUN_003e9f80(plVar6 + -6,plVar6[-5]);
        if ((*(byte *)(plVar6 + -9) & 1) != 0) {
          FUN_002e2ea0(puVar1,plVar6[-7]);
        }
        if (plVar5 == plVar4) break;
        plVar3 = plVar3 + -10;
        lVar2 = *plVar3;
        plVar6 = plVar4;
      }
      plVar6 = *(long **)(param_1 + 0x38);
    }
    *(long **)(param_1 + 0x40) = plVar5;
    FUN_002e2ea0(PTR_LAB_04373088,plVar6);
  }
  FUN_003e9f80(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x18));
  return;
}


