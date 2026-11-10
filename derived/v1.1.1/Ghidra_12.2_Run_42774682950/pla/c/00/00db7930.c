/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db7930; name: FUN_00db7930
 */


undefined4 FUN_00db7930(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_30 [8];
  long local_28;
  
  *(undefined4 *)(param_1 + 0x6c) = 4;
  lVar2 = *(long *)(param_1 + 200);
  if ((lVar2 == 0) && (*(long *)(param_1 + 0x70) == 0)) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x68) == '\0') {
      return 4;
    }
    uVar3 = 0;
    if (lVar2 != 0) {
      (**(code **)(**(long **)(*(long *)(param_1 + 0xc0) + lVar2 * 8 + -8) + 0x68))();
      uVar3 = *(ulong *)(param_1 + 200);
    }
    if (uVar3 < *(ulong *)(param_1 + 0xd0)) {
      FUN_00db80cc(param_1 + 0xa0,*(long *)(param_1 + 0xc0) + uVar3 * 8,param_1 + 0x70);
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    }
    else {
      local_28 = *(long *)(param_1 + 0xc0) + uVar3 * 8;
      FUN_00db81ac(auStack_30,param_1 + 0xa0,&local_28,1);
    }
    uVar1 = 3;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return uVar1;
}


