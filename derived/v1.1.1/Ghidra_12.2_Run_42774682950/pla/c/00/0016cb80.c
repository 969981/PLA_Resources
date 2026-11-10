/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016cb80; name: FUN_0016cb80
 */


undefined8 * FUN_0016cb80(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (0 < *(long *)(lVar6 + 0x18)) {
    FUN_0015dc70(param_1);
  }
  puVar3 = (undefined8 *)FUN_00161510(param_1,0,8,0xd8);
  bVar2 = *(byte *)(lVar6 + 0x54);
  *(undefined1 *)(puVar3 + 2) = 8;
  *(byte *)((long)puVar3 + 0x11) = bVar2 & 3;
  puVar5 = puVar3 + 1;
  *puVar5 = *(undefined8 *)(lVar6 + 0x58);
  *(undefined8 **)(lVar6 + 0x58) = puVar5;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *puVar4 = puVar5;
  *(undefined4 *)(puVar4 + 1) = 0x48;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined2 *)((long)puVar3 + 0x12) = 0;
  puVar3[4] = lVar6;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 0x18) = 0;
  puVar3[0xb] = puVar5;
  puVar3[0xc] = 0;
  puVar3[0x16] = 0;
  *(undefined8 *)((long)puVar3 + 0xc4) = 0;
  *(undefined1 *)((long)puVar3 + 0xd4) = 1;
  *(undefined8 *)((long)puVar3 + 0xcc) = 1;
  *(undefined1 *)((long)puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  *(undefined4 *)(puVar3 + 0x1a) = *(undefined4 *)(param_1 + 200);
  uVar1 = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((long)puVar3 + 0xc4) = uVar1;
  puVar3[0x16] = *(undefined8 *)(param_1 + 0xa8);
  *(undefined4 *)(puVar3 + 0x19) = uVar1;
  *puVar3 = *(undefined8 *)(*(long *)(lVar6 + 200) + -8);
  FUN_0016cc80(puVar5,param_1);
  return puVar5;
}


