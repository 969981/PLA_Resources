/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300df00; name: FUN_0300df00
 */


void FUN_0300df00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_032cf5b0(0x50);
  puVar4[1] = 0xffffffff;
  puVar4[2] = 1;
  *puVar4 = &DAT_042d97b8;
  uVar3 = *(undefined1 *)(param_2 + 0x18);
  *puVar4 = &DAT_042d9800;
  *(undefined1 *)(puVar4 + 3) = uVar3;
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *puVar4 = &DAT_042c3e28;
  *(undefined8 *)((long)puVar4 + 0x1c) = uVar5;
  puVar4[5] = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  puVar4[8] = *(undefined8 *)(param_2 + 0x40);
  puVar4[9] = uVar2;
  puVar4[6] = uVar5;
  puVar4[7] = uVar1;
  *param_1 = puVar4;
  return;
}


