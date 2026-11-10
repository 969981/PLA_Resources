/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4ad24; name: FUN_02f4ad24
 */


void FUN_02f4ad24(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[0x20];
  *param_1 = &PTR_FUN_042aece0;
  param_1[3] = &PTR_LAB_042aef90;
  param_1[6] = &PTR_LAB_042af028;
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x21) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x21) * 0x60;
      do {
        FUN_02f4acb4(lVar1);
        lVar1 = lVar1 + 0x60;
        lVar2 = lVar2 + -0x60;
      } while (lVar2 != 0);
      lVar1 = param_1[0x20];
    }
    *(undefined4 *)(param_1 + 0x21) = 0;
    FUN_02f59e60(0,lVar1);
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  FUN_02f3a04c(param_1);
  return;
}


