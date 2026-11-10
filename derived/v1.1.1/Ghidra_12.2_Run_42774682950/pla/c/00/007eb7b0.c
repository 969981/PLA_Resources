/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007eb7b0; name: FUN_007eb7b0
 */


void FUN_007eb7b0(undefined8 param_1,uint param_2,int param_3)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  switch(param_2) {
  default:
    local_38[0] = 0xc485;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_007ee578(param_1,local_38);
    param_2 = param_2 | param_3 << 0x10;
    goto LAB_007eb88c;
  case 9:
  case 0xe:
  case 0x16:
  case 0x58:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 99:
    local_38[0] = 0x10407;
    break;
  case 0x10:
    local_38[0] = 0x4c0d;
    break;
  case 0x62:
    local_38[0] = 0xc35;
    break;
  case 100:
  case 0x66:
  case 0x68:
  case 0x6b:
  case 0x6e:
    local_38[0] = 0xc47f;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_007ee578(param_1,local_38);
LAB_007eb88c:
    FUN_007f01d4(param_1,param_2);
    return;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


