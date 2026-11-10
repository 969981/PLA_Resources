/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001512d0; name: FUN_001512d0
 */


undefined8 FUN_001512d0(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  
  if (0 < param_2) {
    puVar2 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(undefined8 **)(param_1 + 0x10) <= puVar2) {
      puVar2 = &DAT_039c5c28;
    }
    iVar1 = *(int *)(puVar2 + 1);
    goto joined_r0x00151300;
  }
  if (param_2 < -0xf4627) {
    if (param_2 == -0xf4628) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      iVar1 = *(int *)(*(long *)(param_1 + 0x18) + 0x48);
      goto joined_r0x00151300;
    }
    plVar3 = (long *)**(long **)(param_1 + 0x20);
    puVar2 = &DAT_039c5c28;
    if ((int)plVar3[1] != 0x16) {
      lVar4 = *plVar3;
      puVar2 = &DAT_039c5c28;
      if (-param_2 + -0xf4628 <= (int)(uint)*(byte *)(lVar4 + 10)) {
        puVar2 = (undefined8 *)(lVar4 + (long)(-param_2 + -0xf4629) * 0x10 + 0x20);
      }
      iVar1 = *(int *)(puVar2 + 1);
      goto joined_r0x00151300;
    }
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
  }
  iVar1 = *(int *)(puVar2 + 1);
joined_r0x00151300:
  if (iVar1 == 0x48) {
    return *puVar2;
  }
  return 0;
}


