/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00150a90; name: FUN_00150a90
 */


undefined1  [16] FUN_00150a90(long param_1,int param_2,int *param_3)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  ulong local_18;
  
  if (0 < param_2) {
    puVar2 = (ulong *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(ulong **)(param_1 + 0x10) <= puVar2) {
      puVar2 = &DAT_039c5c28;
    }
    iVar1 = (int)puVar2[1];
    goto joined_r0x00150b1c;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      puVar2 = (ulong *)(*(long *)(param_1 + 0x18) + 0x40);
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x00150b1c;
    }
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    puVar2 = &DAT_039c5c28;
    if ((int)plVar3[1] != 0x16) {
      lVar4 = *plVar3;
      puVar2 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar4 + 10)) {
        puVar2 = (ulong *)(lVar4 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar1 = (int)puVar2[1];
      goto joined_r0x00150b1c;
    }
  }
  else {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  iVar1 = (int)puVar2[1];
joined_r0x00150b1c:
  if (iVar1 == 3) {
    local_18 = *puVar2;
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_001752d0(puVar2,&local_18);
    if (iVar1 == 0) {
      local_18 = 0;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_18;
  return auVar5;
}


