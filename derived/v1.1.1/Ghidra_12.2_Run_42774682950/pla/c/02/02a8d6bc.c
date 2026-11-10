/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8d6bc; name: FUN_02a8d6bc
 */


undefined1  [16] FUN_02a8d6bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined4 local_28 [2];
  
  local_28[0] = 0;
  uVar2 = nn::fs::WriteFile(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),param_2,
                            param_3,local_28);
  if (uVar2 == 0) {
    param_3 = *(long *)(param_1 + 0xa8) + param_3;
    if (*(char *)(param_1 + 0xb0) == '\0') {
      lVar1 = *(long *)(param_1 + 0xa0);
      if (param_3 <= *(long *)(param_1 + 0xa0)) {
        lVar1 = param_3;
      }
      *(long *)(param_1 + 0xa8) = lVar1;
    }
    else {
      *(long *)(param_1 + 0xa8) = param_3;
      if (*(long *)(param_1 + 0xa0) < param_3) {
        *(long *)(param_1 + 0xa0) = param_3;
      }
    }
  }
  auVar3._12_4_ = 0;
  auVar3._8_4_ = uVar2;
  auVar3._0_8_ = 0x100000008;
  return auVar3;
}


