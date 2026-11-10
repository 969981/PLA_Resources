/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008597b0; name: FUN_008597b0
 */


void FUN_008597b0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_70 [4];
  SystemEventType aSStack_60 [40];
  char local_38;
  int local_30 [4];
  undefined4 local_18 [2];
  
  (**(code **)(*param_2 + 0x38))(local_30,param_2,param_3,0);
  if (local_30[0] == 0) {
    local_38 = '\0';
    iVar1 = nn::account::AsyncContext::GetSystemEvent((SystemEvent *)(param_2 + 0x18d));
    if (iVar1 != 0) {
      local_70[0] = 0xec63;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_18);
      FUN_007ee578(param_1,local_70);
      if (local_38 == '\0') {
        return;
      }
      nn::os::DestroySystemEvent(aSStack_60);
      return;
    }
    nn::os::WaitSystemEvent(aSStack_60);
    (**(code **)(*param_2 + 0x48))(local_70,param_2);
    FUN_007ee660(local_30,local_70);
    if (local_38 != '\0') {
      nn::os::DestroySystemEvent(aSStack_60);
    }
  }
  FUN_007ee578(param_1,local_30);
  return;
}


