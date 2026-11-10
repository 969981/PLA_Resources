/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ab960; name: FUN_005ab960
 */


void FUN_005ab960(long *param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  undefined4 *puVar1;
  
  FUN_002f27f0(0xd);
  if (param_4 != (long *)0x0) {
    *param_4 = *param_4 + 0xd;
  }
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x3040000;
  *(char *)((long)puVar1 + 5) = (char)((uint)param_2 >> 0x18);
  *(char *)((long)puVar1 + 6) = (char)((uint)param_2 >> 0x10);
  *(char *)((long)puVar1 + 7) = (char)((uint)param_2 >> 8);
  *(char *)((long)puVar1 + 9) = (char)((uint)param_3 >> 0x18);
  *(undefined1 *)(puVar1 + 1) = 0;
  *(char *)(puVar1 + 2) = (char)param_2;
  *(char *)((long)puVar1 + 10) = (char)((uint)param_3 >> 0x10);
  *(char *)((long)puVar1 + 0xb) = (char)((uint)param_3 >> 8);
  *(char *)(puVar1 + 3) = (char)param_3;
  return;
}


