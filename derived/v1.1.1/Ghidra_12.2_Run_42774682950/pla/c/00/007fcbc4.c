/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fcbc4; name: FUN_007fcbc4
 */


void FUN_007fcbc4(undefined8 param_1,long param_2)

{
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_40);
  switch(*(undefined1 *)(param_2 + 0x11c8)) {
  case 0:
    local_40[0] = 0;
    break;
  case 1:
  case 3:
    local_40[0] = 0x6468;
    break;
  case 2:
  case 4:
    local_40[0] = 0x6467;
    break;
  case 5:
    local_40[0] = 0x6c1d;
    break;
  case 6:
    local_40[0] = 0x6c4f;
    break;
  case 7:
    local_40[0] = 0x6c4d;
    break;
  case 8:
    local_40[0] = 0x6c3d;
    break;
  default:
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_007ee660(param_1,local_40);
  return;
}


