/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851688; name: FUN_00851688
 */


void FUN_00851688(long *param_1)

{
  undefined *puVar1;
  
  FUN_00840e0c();
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_04378078;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  *(undefined8 *)((long)param_1 + 0xcb) = 0;
  *(undefined8 *)((long)param_1 + 0xd3) = 0;
  *(undefined8 *)((long)param_1 + 0xdb) = 0;
  *(undefined8 *)((long)param_1 + 0xf3) = 0;
  *(undefined8 *)((long)param_1 + 0xeb) = 0;
  *(undefined8 *)((long)param_1 + 0xe3) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  return;
}


