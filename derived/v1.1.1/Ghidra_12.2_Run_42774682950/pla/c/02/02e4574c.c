/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4574c; name: FUN_02e4574c
 */


void FUN_02e4574c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_02e46f58();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 7) = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined8 *)((long)puVar1 + 100) = 0x3f8000003f800000;
    *(undefined1 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)((long)puVar1 + 0x74) = 0;
    *(undefined8 *)((long)puVar1 + 0x6c) = 0xffffffff3f800000;
    puVar1[0xf] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[8] = param_2;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  return;
}


