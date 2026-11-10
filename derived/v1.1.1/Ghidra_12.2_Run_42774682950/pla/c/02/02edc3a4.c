/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc3a4; name: FUN_02edc3a4
 */


void FUN_02edc3a4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = puVar1;
  if ((int)param_1[1] != 0) {
    do {
      puVar3 = puVar2 + 1;
      uVar4 = *puVar2;
      FUN_02edb3e8(uVar4);
      FUN_02edc420(uVar4);
      puVar1 = (undefined8 *)*param_1;
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + *(uint *)(param_1 + 1));
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_02f59e60(0,puVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


