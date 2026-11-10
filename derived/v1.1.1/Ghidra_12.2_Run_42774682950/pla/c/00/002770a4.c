/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002770a4; name: FUN_002770a4
 */


void FUN_002770a4(undefined2 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04372ef0;
  uVar1 = *(uint *)PTR_DAT_04372ef0 ^ *(uint *)PTR_DAT_04372ef0 << 0xb;
  *(undefined4 *)PTR_DAT_04372ef0 = *(undefined4 *)(PTR_DAT_04372ef0 + 4);
  uVar2 = *(uint *)(puVar3 + 0xc);
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 8);
  *(uint *)(puVar3 + 8) = uVar2;
  *(uint *)(puVar3 + 0xc) = uVar1;
  *param_1 = (short)uVar1;
  uVar1 = *(uint *)puVar3 ^ *(uint *)puVar3 << 0xb;
  *(undefined4 *)puVar3 = *(undefined4 *)(puVar3 + 4);
  uVar2 = *(uint *)(puVar3 + 0xc);
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 8);
  *(uint *)(puVar3 + 8) = uVar2;
  *(uint *)(puVar3 + 0xc) = uVar1;
  param_1[1] = (short)uVar1;
  uVar1 = *(uint *)puVar3;
  *(undefined4 *)puVar3 = *(undefined4 *)(puVar3 + 4);
  uVar2 = *(uint *)(puVar3 + 0xc);
  uVar1 = uVar1 ^ uVar1 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 8);
  *(uint *)(puVar3 + 8) = uVar2;
  *(uint *)(puVar3 + 0xc) = uVar1;
  *(uint *)(param_1 + 2) = uVar1;
  return;
}


