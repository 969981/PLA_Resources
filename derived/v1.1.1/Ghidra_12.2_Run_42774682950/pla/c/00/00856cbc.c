/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00856cbc; name: FUN_00856cbc
 */


void FUN_00856cbc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x30;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined1 *)((long)puVar1 + 0x2c) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  } while (lVar2 != 0x480);
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}


