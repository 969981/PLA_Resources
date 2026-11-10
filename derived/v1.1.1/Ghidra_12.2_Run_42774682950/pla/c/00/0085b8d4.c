/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085b8d4; name: FUN_0085b8d4
 */


void FUN_0085b8d4(undefined8 param_1,long param_2,undefined8 param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined2 *)(param_2 + 0x58) = *param_4;
  FUN_007e346c(param_2 + 0x60,param_4 + 4);
  uVar1 = *(undefined8 *)(param_4 + 0x14);
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  uVar3 = *(undefined8 *)(param_4 + 0x1c);
  *(undefined2 *)(param_2 + 0x98) = param_4[0x20];
  *(undefined8 *)(param_2 + 0x88) = uVar2;
  *(undefined8 *)(param_2 + 0x90) = uVar3;
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_4 + 0x24);
  FUN_007ec6ec(local_40,param_2 + 0xa8,param_4 + 0x28);
  FUN_007ec6ec(local_40,param_2 + 600,param_4 + 0x100);
  *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(param_4 + 0x198);
  FUN_007ec6ec(local_40,param_2 + 0x1d8,param_4 + 0xc0);
  FUN_0085b9dc(local_40,param_2,param_3);
  if (local_40[0] == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0x38;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "WanBackgroundLoginJob::Login";
    local_50[0] = 0;
  }
  else {
    local_50[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_50);
  return;
}


