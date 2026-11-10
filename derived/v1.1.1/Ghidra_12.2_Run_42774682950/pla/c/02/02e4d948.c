/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4d948; name: FUN_02e4d948
 */


void FUN_02e4d948(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_02e4f29c();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 6) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((long)puVar1 + 0x3c) = 0;
    *(undefined8 *)((long)puVar1 + 0x34) = 0x7f7fffff7f7fffff;
    *(undefined8 *)((long)puVar1 + 0x44) = 0x1ffffff00000000;
    *(undefined1 *)((long)puVar1 + 0x4c) = 1;
    puVar1[2] = 0;
    puVar1[3] = param_2;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return;
}


