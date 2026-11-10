/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da9df0; name: FUN_00da9df0
 */


void FUN_00da9df0(long param_1)

{
  ulong uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  nn::account::Initialize();
  uVar1 = nn::account::TryOpenPreselectedUser((UserHandle *)&local_48);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x58) = local_48;
    *(undefined8 *)(param_1 + 0x60) = local_40;
    *(undefined8 *)(param_1 + 0x68) = uStack_38;
    if (*(char *)(param_1 + 0x50) == '\0') {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    local_30 = 0;
    uStack_28 = 0;
    nn::friends::GetFriendList
              ((int *)(param_1 + 0x70),(Friend *)(param_1 + 0x78),0,300,(FriendFilter *)&local_30);
  }
  return;
}


