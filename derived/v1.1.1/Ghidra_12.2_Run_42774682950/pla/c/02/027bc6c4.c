/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bc6c4; name: FUN_027bc6c4
 */


void FUN_027bc6c4(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  code *local_b0;
  code *local_a8;
  undefined1 auStack_90 [108];
  undefined4 local_24;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (iVar1 == 3) {
    uVar2 = FUN_00d6868c();
    if ((uVar2 & 1) == 0) {
      return;
    }
    plVar4 = (long *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    if (*plVar4 != 0) {
      local_b0 = (code *)0x0;
      local_a8 = (code *)0x0;
      if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
        (**(code **)(param_1 + 0xb0))(param_1 + 0xc0,auStack_90);
        local_b0 = (code *)*plVar4;
        local_a8 = *(code **)(param_1 + 0xa8);
      }
      pcVar3 = *(code **)(param_1 + 0xa8);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *plVar4 = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        (*pcVar3)(param_1 + 0xc0);
      }
      (*local_b0)(auStack_90);
      if (local_a8 != (code *)0x0) {
        (*local_a8)(auStack_90);
      }
    }
    if (*(long *)(param_1 + 0x120) == 0) {
      return;
    }
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    if (*(code **)(param_1 + 0x130) != (code *)0x0) {
      (**(code **)(param_1 + 0x130))(param_1 + 0x140,auStack_90);
      local_b0 = *(code **)(param_1 + 0x120);
      local_a8 = *(code **)(param_1 + 0x128);
    }
    pcVar3 = *(code **)(param_1 + 0x128);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      (*pcVar3)(param_1 + 0x140);
    }
    local_24 = FUN_00d686a0(*(undefined8 *)(param_1 + 0x38));
    (*local_b0)(auStack_90,&local_24);
    if (local_a8 == (code *)0x0) {
      return;
    }
    (*local_a8)(auStack_90);
    return;
  }
  if (iVar1 == 2) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      uVar2 = FUN_00d681d0();
      if ((uVar2 & 1) == 0) {
        return;
      }
      FUN_00d6802c(*(undefined8 *)(param_1 + 0x38),1);
      goto LAB_027bc838;
    }
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    if (*(char *)(param_1 + 0x50) == '\0') {
      return;
    }
  }
  uVar2 = FUN_00d6868c();
  if ((uVar2 & 1) == 0) {
    return;
  }
LAB_027bc838:
  *(undefined4 *)(param_1 + 0x1a0) = 3;
  return;
}


