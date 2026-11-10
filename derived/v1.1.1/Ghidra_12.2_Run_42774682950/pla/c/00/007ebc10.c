/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ebc10; name: FUN_007ebc10
 */


void FUN_007ebc10(undefined8 param_1,int *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_30 [4];
  undefined4 local_18;
  uint local_14;
  
  if (*param_2 < 0) {
    local_30[0] = 0x10407;
  }
  else {
    bVar1 = 0x40;
    if (param_3 != 0) {
      bVar1 = param_3;
    }
    local_14 = (uint)bVar1;
    iVar2 = nn::socket::SetSockOpt(*param_2,0,4,&local_14,4);
    if (iVar2 < 0) {
      uVar3 = nn::socket::GetLastError();
      uVar4 = 7;
      if ((char)param_2[2] == '\x1c') {
        uVar4 = 8;
      }
      FUN_007eb7b0(param_1,uVar3,uVar4);
      return;
    }
    local_30[0] = 0;
  }
  local_18 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)&local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


