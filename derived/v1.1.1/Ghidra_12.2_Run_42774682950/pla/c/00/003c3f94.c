/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c3f94; name: FUN_003c3f94
 */


void FUN_003c3f94(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = (long)(PTR_DAT_04373f80 + 0x10);
  lVar1 = param_1[0xb];
  if (lVar1 != param_1[10]) {
    uVar2 = 0;
    lVar1 = param_1[10];
    do {
      FUN_002ee710(*(undefined8 *)(lVar1 + uVar2 * 8));
      lVar1 = param_1[10];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(param_1[0xb] - lVar1 >> 3));
  }
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  FUN_003c4d38(param_1 + 7,param_1[8]);
  FUN_003c4d94(param_1 + 4,param_1[5]);
  FUN_003c4d94(param_1 + 1,param_1[2]);
  return;
}


