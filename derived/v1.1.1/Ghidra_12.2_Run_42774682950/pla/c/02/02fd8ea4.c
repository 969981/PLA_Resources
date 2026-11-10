/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd8ea4; name: FUN_02fd8ea4
 */


undefined8 * FUN_02fd8ea4(float param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = &PTR_LAB_042ba250;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  *(undefined4 *)(puVar1 + 3) = 0x110201;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined2 *)(puVar1 + 0xe) = 0x7f7f;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(float *)(puVar1 + 4) = param_1;
  puVar1[0xd] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0x100000040;
  uVar2 = param_3[1];
  puVar1[0x10] = *param_3;
  *(int *)(puVar1 + 0x11) = (int)uVar2;
  *(short *)(puVar1 + 0xe) = (short)((uint)(param_1 * DAT_042b0ab0 * 1.0039062) >> 0x10);
  puVar1[1] = 0;
  *(undefined8 **)(param_2 + 8) = puVar1;
  return puVar1;
}


