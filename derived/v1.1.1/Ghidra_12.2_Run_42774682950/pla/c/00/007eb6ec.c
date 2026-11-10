/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007eb6ec; name: FUN_007eb6ec
 */


void FUN_007eb6ec(undefined8 param_1,int *param_2,char param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == '\x02') {
    *(undefined1 *)(param_2 + 2) = 2;
    iVar1 = nn::socket::Socket(2,param_4,param_5);
    if (iVar1 < 0) {
      uVar2 = nn::socket::GetLastError();
      uVar3 = 1;
      if ((char)param_2[2] == '\x1c') {
        uVar3 = 2;
      }
      FUN_007eb7b0(param_1,uVar2,uVar3);
      return;
    }
    param_2[3] = param_5;
    *param_2 = iVar1;
    param_2[1] = param_2[1] + 1;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10407;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


