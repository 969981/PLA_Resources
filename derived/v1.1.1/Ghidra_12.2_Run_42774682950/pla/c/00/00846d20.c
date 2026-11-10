/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00846d20; name: FUN_00846d20
 */


void FUN_00846d20(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_007ee0dc(local_48,*(undefined8 *)(param_2 + 0x7d8),*(undefined8 *)(param_2 + 0x28),4000,5,0xc,
               5);
  FUN_007ee238(local_58,*(undefined8 *)(param_2 + 0x7d8),param_3,param_4);
  FUN_007ee660(local_48,local_58);
  if (local_48[0] == 0) {
    FUN_007ee360(local_58,*(undefined8 *)(param_2 + 0x7d8),(uint *)(param_2 + 0x30));
    FUN_007ee660(local_48,local_58);
    FUN_007ee214(*(undefined8 *)(param_2 + 0x7d8));
    if (local_48[0] == 0) {
      if (*(uint *)(param_2 + 0x30) < param_4) {
        local_58[0] = 0;
      }
      else {
        local_58[0] = 0x2c8a;
      }
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar1 = local_58;
    }
    else {
      piVar1 = local_48;
    }
  }
  else {
    FUN_007ee214(*(undefined8 *)(param_2 + 0x7d8));
    piVar1 = local_48;
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


