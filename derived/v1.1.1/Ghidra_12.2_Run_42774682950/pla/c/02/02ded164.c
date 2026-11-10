/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded164; name: FUN_02ded164
 */


void FUN_02ded164(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x110);
  if (*(short *)(param_1 + 0x54) == 1) {
    piVar3 = (int *)(param_1 + 0x2c);
  }
  else {
    iVar2 = iVar2 + *(int *)(param_1 + 0xcc);
    piVar3 = (int *)(param_1 + 0xd4);
  }
  iVar1 = *piVar3;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(int *)(param_1 + 0xc0) = (iVar2 + iVar1) - (int)*(undefined8 *)(param_1 + 0x108);
  FUN_02dedd40(param_1 + 0x58,*(undefined2 *)(param_1 + 0xdc),*(undefined8 *)(param_1 + 0x108),
               param_1 + 0x118,param_1 + 0x120);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)(param_2 + 0x2c) = iVar2;
  if (iVar2 == 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 100);
  FUN_02f1fffc(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xb8),param_2);
  return;
}


