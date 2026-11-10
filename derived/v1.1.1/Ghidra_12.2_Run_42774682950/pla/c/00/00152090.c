/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00152090; name: FUN_00152090
 */


undefined8 FUN_00152090(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  if (0 < param_2) {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar4) {
      plVar4 = &DAT_039c5c28;
    }
    uVar3 = (ulong)*(uint *)(plVar4 + 1) & 0xf;
    iVar2 = (int)uVar3;
    goto joined_r0x001520c4;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 0x18) + 0x48) & 0xf;
      iVar2 = (int)uVar3;
      goto joined_r0x001520c4;
    }
    plVar5 = (long *)**(long **)(param_1 + 0x20);
    plVar4 = &DAT_039c5c28;
    if ((int)plVar5[1] != 0x16) {
      lVar1 = *plVar5;
      plVar4 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar1 + 10)) {
        plVar4 = (long *)(lVar1 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      uVar3 = (ulong)*(uint *)(plVar4 + 1) & 0xf;
      iVar2 = (int)uVar3;
      goto joined_r0x001520c4;
    }
  }
  else {
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  uVar3 = (ulong)*(uint *)(plVar4 + 1) & 0xf;
  iVar2 = (int)uVar3;
joined_r0x001520c4:
  if (iVar2 == 7) {
    lVar1 = *(long *)(*plVar4 + 0x10);
  }
  else if ((int)uVar3 == 5) {
    lVar1 = *(long *)(*plVar4 + 0x28);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + uVar3 * 8 + 0x1a0);
  }
  if (lVar1 == 0) {
    return 0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  *plVar4 = lVar1;
  *(undefined4 *)(plVar4 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return 1;
}


