/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00873a18; name: FUN_00873a18
 */


void FUN_00873a18(long *param_1,long param_2,undefined2 param_3,long param_4,uint param_5)

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_38;
  
  param_1[0xf8] = param_2;
  *(undefined2 *)(param_1 + 0xf9) = param_3;
  if (param_5 != 0) {
    uVar1 = 0;
    do {
      FUN_00873aa4(param_1,*(undefined8 *)(param_4 + uVar1 * 8),0);
      uVar1 = uVar1 + 1;
      if (0x16 < uVar1) break;
    } while (uVar1 < param_5);
  }
  *(undefined4 *)(param_1 + 0xf7) = 1;
  local_38 = 0;
  local_40 = 0x1000;
  (**(code **)(*param_1 + 0x10))(param_1,&local_40);
  return;
}


