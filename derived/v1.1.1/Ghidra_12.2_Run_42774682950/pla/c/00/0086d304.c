/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086d304; name: FUN_0086d304
 */


void FUN_0086d304(undefined8 param_1,long param_2)

{
  undefined4 local_68 [4];
  undefined8 local_58;
  undefined4 local_38 [4];
  undefined8 local_28;
  
  local_28 = 0;
  FUN_007ecf14(&local_28);
  local_38[0] = 0;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)&local_58);
  FUN_007ec5c4(&local_58,"nncs1-%.n.n.srv.nintendo.net:10025");
  FUN_007ec6ec(local_68,param_2 + 0xa80,&local_58);
  FUN_007ec5c4(&local_58,"nncs2-%.n.n.srv.nintendo.net:10025");
  FUN_007ec6ec(local_68,param_2 + 0xcb0,&local_58);
  local_58 = 0;
  FUN_007ecf14(&local_58);
  FUN_007ecfa4();
  local_58 = local_58 & 0xffffffff00000000;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_68);
  FUN_007ee578(param_1,&local_58);
  return;
}


