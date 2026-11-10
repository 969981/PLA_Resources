/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030040bc; name: FUN_030040bc
 */


void FUN_030040bc(long param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long local_58;
  long lStack_50;
  undefined1 local_48;
  
  lStack_50 = param_1 + 0x140;
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar2 = *(int *)(param_2 + 0x18);
    uVar1 = 0;
    local_58 = param_1;
    local_48 = param_3;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x488) + 8) + (long)iVar2 * 0x68;
      iVar2 = *(int *)(lVar3 + 0x38);
      FUN_03004154(&local_58,*(undefined4 *)(lVar3 + 8));
      FUN_03004154(&local_58,*(undefined4 *)(lVar3 + 0x18));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_2 + 0x1c));
    param_3 = local_48;
  }
  *(undefined1 *)(param_2 + 0x21) = param_3;
  return;
}


