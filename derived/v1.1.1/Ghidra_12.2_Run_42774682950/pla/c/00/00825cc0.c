/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00825cc0; name: FUN_00825cc0
 */


void FUN_00825cc0(undefined8 param_1,long param_2,byte param_3,long param_4)

{
  undefined8 uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_4 == 0) || (*(byte *)(param_2 + 0x360) <= param_3)) {
    local_38[0] = 0x10407;
  }
  else {
    param_2 = param_2 + (ulong)param_3 * 0x98;
    FUN_007e8410(param_4,param_2 + 0x100);
    uVar1 = *(undefined8 *)(param_2 + 400);
    *(undefined8 *)(param_4 + 0x88) = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(param_4 + 0x90) = uVar1;
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


