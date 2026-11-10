/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db6ae4; name: FUN_00db6ae4
 */


void FUN_00db6ae4(long param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  nn::oe::SetFocusHandlingMode(0);
  nn::oe::SetOperationModeChangedNotificationEnabled(true);
  uVar1 = nn::oe::GetOperationMode();
  if (uVar1 < 2) {
    *(uint *)(param_1 + 0x350) = uVar1;
  }
  pcVar3 = *(code **)(param_1 + 0x68);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    (*pcVar3)(param_1 + 0x80);
  }
  *(undefined1 **)(param_1 + 0x60) = &LAB_00db70bc;
  *(undefined1 **)(param_1 + 0x68) = &LAB_00db70c0;
  *(undefined1 **)(param_1 + 0x70) = &LAB_00db70c4;
  *(undefined1 **)(param_1 + 0x78) = &LAB_00db70c8;
  pcVar3 = *(code **)(param_1 + 0x108);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    (*pcVar3)(param_1 + 0x120);
  }
  *(undefined1 **)(param_1 + 0x100) = &LAB_00db70cc;
  *(undefined1 **)(param_1 + 0x108) = &LAB_00db70d0;
  *(undefined1 **)(param_1 + 0x110) = &LAB_00db71a8;
  *(undefined1 **)(param_1 + 0x118) = &LAB_00db71ac;
  pcVar3 = *(code **)(param_1 + 0x1a8);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    (*pcVar3)(param_1 + 0x1c0);
  }
  *(undefined1 **)(param_1 + 0x1a0) = &LAB_00db71b0;
  *(undefined1 **)(param_1 + 0x1a8) = &LAB_00db71dc;
  *(undefined1 **)(param_1 + 0x1b8) = &LAB_00db71ec;
  *(long *)(param_1 + 0x1c0) = param_1;
  pcVar3 = *(code **)(param_1 + 0x248);
  *(undefined1 **)(param_1 + 0x1b0) = &LAB_00db71e0;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    (*pcVar3)(param_1 + 0x260);
  }
  *(undefined1 **)(param_1 + 0x240) = &LAB_00db71f8;
  *(undefined1 **)(param_1 + 0x248) = &LAB_00db7208;
  *(undefined8 *)(param_1 + 0x250) = 0xdb7218;
  *(long *)(param_1 + 0x260) = param_1;
  *(undefined1 **)(param_1 + 600) = &LAB_00db7224;
  if (((*PTR_DAT_0437b680 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b680), iVar2 != 0))
  {
    FUN_00100250(&LAB_00db7230,PTR_DAT_0437b688,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b680);
  }
  uVar4 = *(undefined8 *)PTR_DAT_0437b688;
  *(undefined8 *)PTR_DAT_0437b690 = uVar4;
  FUN_02a40574(uVar4,0,param_1 + 0x50);
  FUN_02a40574(uVar4,1,param_1 + 0xf0);
  FUN_02a40574(uVar4,2,param_1 + 400);
  FUN_02a40574(uVar4,4,param_1 + 0x230);
  return;
}


