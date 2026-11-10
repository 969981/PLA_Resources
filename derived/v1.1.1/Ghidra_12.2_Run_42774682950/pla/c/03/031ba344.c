/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba344; name: FUN_031ba344
 */


void FUN_031ba344(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((puVar1 != (undefined8 *)0x0) && (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10))) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    uVar2 = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[2] = uVar2;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 5);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x30;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}


