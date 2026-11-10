/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001505a0; name: FUN_001505a0
 */


undefined8 FUN_001505a0(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 local_18 [8];
  
  if (0 < param_2) {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar2) {
      puVar2 = &DAT_039c5c28;
    }
    iVar1 = *(int *)(puVar2 + 1);
    goto joined_r0x001505dc;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x001505dc;
    }
    plVar4 = (long *)**(long **)(param_1 + 0x20);
    puVar2 = &DAT_039c5c28;
    if ((int)plVar4[1] != 0x16) {
      lVar5 = *plVar4;
      puVar2 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar5 + 10)) {
        puVar2 = (undefined8 *)(lVar5 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar1 = *(int *)(puVar2 + 1);
      goto joined_r0x001505dc;
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  iVar1 = *(int *)(puVar2 + 1);
joined_r0x001505dc:
  if (iVar1 == 3) {
    return 1;
  }
  uVar3 = FUN_001752d0(puVar2,local_18);
  return uVar3;
}


