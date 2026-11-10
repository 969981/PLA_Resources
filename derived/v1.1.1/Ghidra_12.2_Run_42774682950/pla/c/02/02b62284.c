/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b62284; name: FUN_02b62284
 */


bool FUN_02b62284(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_30;
  ulong uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x58);
  uVar4 = (ulong)*(byte *)(lVar2 + 0x160);
  lVar1 = *(byte *)(lVar2 + 0x161) + uVar4;
  if ((int)lVar1 != 0) {
    local_30 = *(undefined8 *)(param_1 + 0x60);
    uStack_28 = uVar4;
    FUN_02b5f430(&local_58,*(long *)(lVar2 + 0xf0),lVar1,
                 *(long *)(lVar2 + 0xf0) +
                 (*(long *)(lVar2 + 0x130) - *(long *)(lVar2 + 0x128) >> 5) * lVar1 *
                 -0x5555555555555554,lVar1,&local_30,&uStack_28);
    *(ulong *)(param_1 + 0x98) = CONCAT71(uStack_57,local_58) + uVar4 * 4;
    *(ulong *)(param_1 + 0xa0) = local_48 + uVar4 * 4;
    if (CONCAT71(uStack_57,local_58) == local_48) {
      return false;
    }
    lVar2 = *(long *)(param_1 + 0x58);
  }
  FUN_02b5e718(&local_58,lVar2,param_1 + 0x98,param_1 + 0xa8);
  plVar3 = local_38;
  if (*(char *)(param_1 + 0x118) == '\0') {
    if (local_58 == '\0') goto LAB_02b623f4;
    *(undefined8 *)(param_1 + 0x120) = local_50;
    *(long *)(param_1 + 0x128) = local_48;
    *(undefined8 *)(param_1 + 0x130) = local_40;
    local_38 = (long *)0x0;
    *(long **)(param_1 + 0x138) = plVar3;
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  else if (local_58 == '\0') {
    if (*(long **)(param_1 + 0x138) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
    }
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x120) = local_50;
    *(long *)(param_1 + 0x128) = local_48;
    plVar3 = *(long **)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x130) = local_40;
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    plVar3 = local_38;
    local_38 = (long *)0x0;
    *(long **)(param_1 + 0x138) = plVar3;
  }
  if ((local_58 != '\0') && (local_38 != (long *)0x0)) {
    (**(code **)(*local_38 + 0x20))();
  }
LAB_02b623f4:
  return *(char *)(param_1 + 0x118) != '\0';
}


