/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5d18; name: FUN_007e5d18
 */


void FUN_007e5d18(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  local_30[0] = 0x6c05;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(auStack_40,local_30);
  FUN_007ee660(param_1 + 1,auStack_40);
  *param_1 = 4;
  FUN_007ee578(auStack_50,param_1 + 1);
  pcVar1 = *(code **)(param_1 + 6);
  if (pcVar1 != (code *)0x0) {
    FUN_007ee578(local_30,auStack_50);
    (*pcVar1)(local_30,*(undefined8 *)(param_1 + 8));
  }
  return;
}


