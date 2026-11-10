/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ebb70; name: FUN_007ebb70
 */


void FUN_007ebb70(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 < 0) {
    local_28[0] = 0x10407;
  }
  else {
    if (*(char *)(param_2 + 8) == '\x02') {
      local_28[0] = 1;
      iVar1 = nn::socket::SetSockOpt(param_3,0xffff,0x20,local_28,4);
      if (iVar1 < 0) {
        uVar2 = nn::socket::GetLastError();
        FUN_007eb7b0(param_1,uVar2,9);
        return;
      }
    }
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


