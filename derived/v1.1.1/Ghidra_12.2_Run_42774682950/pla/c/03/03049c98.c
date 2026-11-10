/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03049c98; name: FUN_03049c98
 */


void FUN_03049c98(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_4 + 0x18) < 0xec1) {
    puVar1 = (undefined4 *)(*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) + 0x20);
  }
  else {
    puVar1 = (undefined4 *)FUN_032bf82c(param_4);
  }
  puVar1[2] = 0x201;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined1 *)((long)puVar1 + 0xf) = 8;
  puVar1[1] = *(undefined4 *)(param_2 + 0x50);
  *puVar1 = *(undefined4 *)(param_3 + 0x50);
  *(undefined2 *)((long)puVar1 + 0xe) = 0x24;
  *(undefined2 *)((long)puVar1 + 10) = 0x8000;
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_3 + 0xb0);
  *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 0x20;
  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
  return;
}


