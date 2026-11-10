/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007eb8b0; name: FUN_007eb8b0
 */


void FUN_007eb8b0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*param_2 < 0) {
    local_30[0] = 0x10407;
  }
  else {
    iVar1 = nn::socket::Close(*param_2);
    *param_2 = -1;
    param_2[1] = param_2[1] + -1;
    *(undefined1 *)(param_2 + 2) = 0;
    param_2[3] = 0x11;
    param_2[4] = -1;
    if (iVar1 < 0) {
      uVar2 = nn::socket::GetLastError();
      uVar3 = 3;
      if ((char)param_2[2] == '\x1c') {
        uVar3 = 4;
      }
      FUN_007eb7b0(param_1,uVar2,uVar3);
      return;
    }
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


