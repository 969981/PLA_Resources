/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300b3c0; name: FUN_0300b3c0
 */


void FUN_0300b3c0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x300) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x32c) < 0) {
    *(undefined1 *)(param_1 + 0x300) = 1;
    return;
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0x3f0) != 0) {
    lVar2 = *(long *)(param_1 + 0x3f0) + param_1 + 0x3f0;
  }
  puVar1 = (undefined8 *)(lVar2 + *(int *)(param_1 + 0x32c));
  uVar4 = *param_2;
  uVar3 = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)puVar1 + 0xc) = uVar3;
  *puVar1 = uVar4;
  return;
}


