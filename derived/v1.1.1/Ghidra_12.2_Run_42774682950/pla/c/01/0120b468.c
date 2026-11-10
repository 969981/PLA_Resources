/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120b468; name: FUN_0120b468
 */


void FUN_0120b468(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 2) {
    uVar2 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = FUN_027bc6a4(param_1 + 0xc0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    local_28 = 0xcb074b1a63eb72ba;
    FUN_027bcc14(param_1 + 0xc0,&local_28);
    *(undefined8 *)(param_1 + 0xb0) = 9;
    return;
  }
  if (iVar1 == 1) {
    FUN_027bcfc0(param_1 + 0xc0);
    FUN_0121bd90(*(undefined8 *)(param_1 + 0x90));
    FUN_01228184(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_01227aa0(*(undefined8 *)(param_1 + 0xa0));
    uVar3 = 2;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x288) = 1;
    uVar2 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  return;
}


