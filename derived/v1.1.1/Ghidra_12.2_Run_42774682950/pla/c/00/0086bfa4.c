/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086bfa4; name: FUN_0086bfa4
 */


void FUN_0086bfa4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  *(undefined8 *)(param_2 + 0xae8) = param_3;
  local_38[0] = 0;
  FUN_007ecf14(local_38);
  *(ulong *)(param_2 + 0xad8) = local_38[0];
  local_38[0] = local_38[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


