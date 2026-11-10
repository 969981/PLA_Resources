/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003edd2c; name: FUN_003edd2c
 */


void FUN_003edd2c(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  puVar2 = PTR_LAB_04373088;
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x58);
    if (plVar7 == plVar6) {
      plVar7 = plVar6;
    }
    else {
      plVar4 = plVar7 + -3;
      lVar3 = *plVar4;
      while( true ) {
        if (lVar3 != 0) {
          FUN_003eea08(plVar4);
          FUN_002e2ea0(puVar2,plVar7[-3]);
        }
        plVar5 = plVar4 + -7;
        FUN_003e9f80(plVar7 + -6,plVar7[-5]);
        if ((*(byte *)(plVar7 + -9) & 1) != 0) {
          FUN_002e2ea0(puVar2,plVar7[-7]);
        }
        if (plVar6 == plVar5) break;
        plVar4 = plVar4 + -10;
        lVar3 = *plVar4;
        plVar7 = plVar5;
      }
      plVar7 = *(long **)(param_1 + 0x50);
    }
    *(long **)(param_1 + 0x58) = plVar6;
    FUN_002e2ea0(PTR_LAB_04373088,plVar7);
  }
  FUN_003e9f80(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  if ((param_1[0x20] & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x30));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x10));
  return;
}


