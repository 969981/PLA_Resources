/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e29500; name: FUN_02e29500
 */


void FUN_02e29500(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_042a56b8;
    *(undefined4 *)((long)puVar1 + 0x7c) = 0x3f800000;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    *(undefined1 *)(puVar1 + 0x10) = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return;
}


