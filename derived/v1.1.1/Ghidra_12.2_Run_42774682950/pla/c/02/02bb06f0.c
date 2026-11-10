/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb06f0; name: FUN_02bb06f0
 */


void FUN_02bb06f0(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = *(undefined4 **)(param_1 + 0x90);
  for (puVar1 = *(undefined4 **)(param_1 + 0x88); puVar1 != puVar2; puVar1 = puVar1 + 5) {
    local_50 = *(undefined8 *)(puVar1 + 1);
    local_48 = puVar1[3];
    uStack_44 = puVar1[4];
    (*DAT_043f0cf8)(*(undefined8 *)(param_2 + 0x10),*puVar1,&local_50,0xf);
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (*(int *)(param_1 + 0xcc) == 0) {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 200);
    uVar6 = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0xc4);
    if (*(int *)(param_1 + 0xcc) == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = 1;
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 200);
      uVar4 = 1;
      uVar3 = *(undefined8 *)(param_2 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02bb07c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_043f0d10)(uVar6,uVar3,uVar4,uVar5);
  return;
}


