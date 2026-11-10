/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fd8830; name: FUN_02fd8830
 */


undefined8 * FUN_02fd8830(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = &PTR_LAB_042ba0e8;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 1;
  *(undefined4 *)(puVar2 + 3) = 0x410202;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined2 *)(puVar2 + 0xe) = 0x7f7f;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(float *)(puVar2 + 4) = param_1;
  puVar2[0xd] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0x200000040;
  uVar3 = param_3[1];
  puVar2[0x10] = *param_3;
  *(int *)(puVar2 + 0x11) = (int)uVar3;
  uVar3 = param_4[1];
  *(undefined8 *)((long)puVar2 + 0x8c) = *param_4;
  *(int *)((long)puVar2 + 0x94) = (int)uVar3;
  fVar1 = DAT_042b0ab0;
  puVar2[1] = 0;
  *(short *)(puVar2 + 0xe) = (short)((uint)(fVar1 * param_1 * 1.0039062) >> 0x10);
  *(undefined8 **)(param_2 + 8) = puVar2;
  return puVar2;
}


