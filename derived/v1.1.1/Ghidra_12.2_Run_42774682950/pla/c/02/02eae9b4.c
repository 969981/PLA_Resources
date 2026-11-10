/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eae9b4; name: FUN_02eae9b4
 */


undefined8 * FUN_02eae9b4(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*DAT_0442d138)(2,0x78);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = param_1;
    *(undefined4 *)((long)puVar1 + 0x14) = 1;
    *(undefined1 *)(puVar1 + 4) = 1;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *puVar1 = &PTR_FUN_042a9380;
    puVar1[5] = 0;
    puVar1[3] = &PTR_LAB_042a93c0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    FUN_02eaea40(DAT_0440a120 + 0x2a0,puVar1);
  }
  return puVar1;
}


