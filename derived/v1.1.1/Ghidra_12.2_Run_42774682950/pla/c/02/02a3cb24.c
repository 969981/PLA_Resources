/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3cb24; name: FUN_02a3cb24
 */


void FUN_02a3cb24(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = *(uint **)(param_1 + 0x18);
  uVar1 = *puVar4;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_02a3e7b8(puVar4,0x99,0x12,&local_80);
  uVar2 = *puVar4;
  iVar3 = (int)((ulong)uVar1 & 0xffff);
  *(undefined1 *)((long)puVar4 + ((ulong)uVar1 & 0xffff) + 8) = 0;
  *(undefined1 *)((long)puVar4 + (ulong)(iVar3 + 1) + 8) = 0xab;
  *(char *)((long)puVar4 + (ulong)(iVar3 + 2) + 8) = (char)(uVar2 - uVar1) + -3;
  *puVar4 = iVar3 + (uVar2 - uVar1 & 0xff);
  *(short *)(param_2 + 6) = (short)uVar1;
  puVar4 = *(uint **)(param_1 + 0x18);
  uVar1 = *puVar4;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_02a3e7b8(puVar4,0x7e,0x42,&local_80);
  uVar2 = *puVar4;
  iVar3 = (int)((ulong)uVar1 & 0xffff);
  *(undefined1 *)((long)puVar4 + ((ulong)uVar1 & 0xffff) + 8) = 0;
  *(undefined1 *)((long)puVar4 + (ulong)(iVar3 + 1) + 8) = 0xab;
  *(char *)((long)puVar4 + (ulong)(iVar3 + 2) + 8) = (char)(uVar2 - uVar1) + -3;
  *puVar4 = iVar3 + (uVar2 - uVar1 & 0xff);
  *(short *)(param_2 + 8) = (short)uVar1;
  puVar4 = *(uint **)(param_1 + 0x18);
  uVar1 = *puVar4;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_02a3e7b8(puVar4,0x9a,1,&local_80);
  uVar2 = *puVar4;
  iVar3 = (int)((ulong)uVar1 & 0xffff);
  *(undefined1 *)((long)puVar4 + ((ulong)uVar1 & 0xffff) + 8) = 0;
  *(undefined1 *)((long)puVar4 + (ulong)(iVar3 + 1) + 8) = 0xab;
  *(char *)((long)puVar4 + (ulong)(iVar3 + 2) + 8) = (char)(uVar2 - uVar1) + -3;
  *puVar4 = iVar3 + (uVar2 - uVar1 & 0xff);
  *(short *)(param_2 + 10) = (short)uVar1;
  return;
}


