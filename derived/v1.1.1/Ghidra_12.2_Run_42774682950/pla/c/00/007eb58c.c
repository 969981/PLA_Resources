/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007eb58c; name: FUN_007eb58c
 */


void FUN_007eb58c(undefined8 param_1,undefined1 *param_2,long param_3,undefined4 *param_4,
                 uint param_5)

{
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (((param_3 == 0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x10)) {
    local_40[0] = 0x10407;
  }
  else {
    FUN_007ed3c0(param_3,*param_2);
    FUN_007ed3c0(param_3 + 1,param_2[1]);
    FUN_007ed3c0(param_3 + 2,param_2[2]);
    FUN_007ed3c0(param_3 + 3,param_2[3]);
    FUN_007ed3a0(param_3 + 4,*(undefined2 *)(param_2 + 4));
    FUN_007ed3c0(param_3 + 6,param_2[6]);
    FUN_007ed3c0(param_3 + 7,param_2[7]);
    FUN_007ed3c0(param_3 + 8,param_2[8]);
    FUN_007ed3c0(param_3 + 9,param_2[9]);
    FUN_007ed3c0(param_3 + 10,param_2[10]);
    FUN_007ed3c0(param_3 + 0xb,param_2[0xb]);
    FUN_007ed3c0(param_3 + 0xc,param_2[0xc]);
    FUN_007ed3c0(param_3 + 0xd,param_2[0xd]);
    FUN_007ed3c0(param_3 + 0xe,param_2[0xe]);
    FUN_007ed3c0(param_3 + 0xf,param_2[0xf]);
    *param_4 = 0x10;
    local_40[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  return;
}


