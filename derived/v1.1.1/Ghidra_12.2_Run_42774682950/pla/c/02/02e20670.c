/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e20670; name: FUN_02e20670
 */


void FUN_02e20670(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
    *puVar1 = &PTR_FUN_042a5418;
    puVar1[1] = 0;
    *(undefined4 *)((long)puVar1 + 0x44) = 0x3f800000;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 9) = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  return;
}


