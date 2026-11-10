/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00807914; name: FUN_00807914
 */


void FUN_00807914(undefined8 param_1,long *param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar1 = FUN_007e5f0c();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    *(undefined1 *)(param_2 + 0xc) = param_3;
    param_2[8] = (long)"NetUpdatePlayerNumBackgroundJob::UpdatePlayerNum";
    param_2[6] = (long)PTR_FUN_04377888;
    param_2[7] = 0;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


