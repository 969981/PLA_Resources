/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120b330; name: FUN_0120b330
 */


void FUN_0120b330(long param_1)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  undefined8 local_28;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 2) {
    uVar3 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar3 = FUN_027bc6a4(param_1 + 0xc0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    local_b0 = &LAB_0120c9bc;
    local_a8 = FUN_0120ca00;
    local_a0 = &LAB_0120ca04;
    local_98 = &LAB_0120ca10;
    local_28 = 0xcb07421a63eb636f;
    alStack_90[0] = param_1;
    FUN_027bc964(param_1 + 0xc0,&local_28,&local_b0);
    pcVar2 = local_a8;
    *(undefined8 *)(param_1 + 0xb0) = 1;
    if (local_a8 == (code *)0x0) {
      return;
    }
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar2)(alStack_90);
    return;
  }
  if (iVar1 == 1) {
    FUN_027bcfc0(param_1 + 0xc0);
    FUN_0121bd90(*(undefined8 *)(param_1 + 0x90));
    FUN_01228184(*(undefined8 *)(param_1 + 0xa0),0);
    FUN_01227aa0(*(undefined8 *)(param_1 + 0xa0));
    uVar4 = 2;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x288) = 1;
    uVar3 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar3 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar3 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  return;
}


