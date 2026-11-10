/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e682c; name: FUN_001e682c
 */


undefined8 * FUN_001e682c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00204504(1,0x1e8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xbab1e;
    iVar1 = FUN_001e188c(puVar2 + 0x10);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_001e0a0c(puVar2 + 0x17,param_1,&LAB_001e9610,&LAB_001e9620,&LAB_001e9634),
        iVar1 == 0)) && (iVar1 = FUN_001def24(puVar2 + 0x1f,param_2), iVar1 == 0)) {
      FUN_001e370c(puVar2 + 4,&DAT_001e6938);
      FUN_001e370c(puVar2 + 8,&DAT_001e6938);
      puVar2[0x2d] = 5;
      puVar2[0x1d] = 2;
      puVar2[0x2a] = 0xffffffffffffffff;
    }
    else {
      FUN_001e0d20(puVar2 + 0x17);
      FUN_001e0d20(puVar2 + 0x10);
      FUN_001defa0(puVar2 + 0x1f);
      FUN_001e381c(puVar2 + 4,0);
      FUN_001e381c(puVar2 + 8,0);
      FUN_002044d4(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


