/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00865e48; name: FUN_00865e48
 */


void FUN_00865e48(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  undefined1 auStack_40 [16];
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      FUN_00867cdc(auStack_40,*(undefined8 *)(param_1 + 0x13e0),*param_2,param_4,param_5,1);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}


