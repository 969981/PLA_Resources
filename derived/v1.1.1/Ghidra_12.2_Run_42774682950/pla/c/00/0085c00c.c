/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085c00c; name: FUN_0085c00c
 */


void FUN_0085c00c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x1308);
  if (lVar2 != 0) {
    FUN_0085e5b0(lVar2);
    FUN_0081a800(lVar2);
    *(undefined8 *)(param_1 + 0x1308) = 0;
  }
  plVar1 = (long *)FUN_00855064(*(undefined8 *)PTR_DAT_043773c0);
  (**(code **)(*plVar1 + 0x120))(plVar1,*(undefined8 *)(param_1 + 0x1318));
  lVar2 = *(long *)(param_1 + 0x1320);
  *(undefined8 *)(param_1 + 0x1318) = 0;
  if (lVar2 != 0) {
    FUN_0081a840(lVar2);
    FUN_0081a800(lVar2);
    *(undefined8 *)(param_1 + 0x1320) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x1338);
  *(undefined4 *)(param_1 + 0x1328) = 0;
  if (lVar2 != 0) {
    FUN_0081a840(lVar2);
    FUN_0081a800(lVar2);
    *(undefined8 *)(param_1 + 0x1338) = 0;
  }
  *(undefined4 *)(param_1 + 0x1340) = 0;
  FUN_007f5270(param_1);
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  return;
}


