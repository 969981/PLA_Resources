/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004298; name: FUN_03004298
 */


undefined8 FUN_03004298(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long local_68;
  long lStack_60;
  undefined1 local_58;
  
  lStack_60 = param_1 + 0x140;
  local_58 = 0xff;
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar4 = 0;
    iVar5 = *(int *)(param_2 + 0x18);
    local_68 = param_1;
    do {
      lVar6 = *(long *)(*(long *)(param_1 + 0x488) + 8);
      lVar3 = lVar6 + (long)iVar5 * 0x68;
      iVar1 = *(int *)(lVar3 + 0x38);
      uVar2 = FUN_03004354(&local_68,*(undefined4 *)(lVar3 + 8));
      if (((uVar2 & 1) == 0) ||
         (uVar2 = FUN_03004354(&local_68,*(undefined4 *)(lVar6 + (long)iVar5 * 0x68 + 0x18)),
         (uVar2 & 1) == 0)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar1;
    } while (uVar4 < *(uint *)(param_2 + 0x1c));
  }
  return 1;
}


