/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087054c; name: FUN_0087054c
 */


void FUN_0087054c(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_04378430 + 0x10);
  FUN_00870630();
  puVar3 = PTR_LAB_04373088;
  lVar4 = 0xfd0;
  plVar1 = param_1 + 0x1fa;
  bVar2 = *(byte *)(param_1 + 0x2fe);
  while( true ) {
    if ((bVar2 & 1) != 0) {
      FUN_002e2ea0(puVar3,plVar1[0x106]);
    }
    if ((*(byte *)(plVar1 + 0x101) & 1) != 0) {
      FUN_002e2ea0(puVar3,plVar1[0x103]);
    }
    FUN_007e34a4(plVar1 + 0xfc);
    FUN_007e34a4(plVar1 + 0xf8);
    lVar4 = lVar4 + -0xb0;
    if (lVar4 == 0) break;
    plVar1 = (long *)((long)param_1 + lVar4);
    bVar2 = *(byte *)(plVar1 + 0x104);
  }
  if ((*(byte *)(param_1 + 0x105) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0x107]);
  }
  if ((*(byte *)(param_1 + 0x102) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0x104]);
  }
  FUN_007e34a4(param_1 + 0xfe);
  FUN_007e34a4(param_1 + 0xfa);
  FUN_007e5c20(param_1 + 0xdf);
  FUN_00847210(param_1);
  return;
}


