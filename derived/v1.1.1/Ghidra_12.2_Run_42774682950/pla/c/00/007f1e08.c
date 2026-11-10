/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1e08; name: FUN_007f1e08
 */


void FUN_007f1e08(long *param_1)

{
  int iVar1;
  int iVar2;
  void *__s;
  
  param_1[1] = -1;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined4 *)(param_1 + 4) = 0;
  __s = (void *)param_1[3];
  iVar1 = (**(code **)(*param_1 + 0x30))();
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  memset(__s,0,(ulong)(uint)(iVar2 + iVar1));
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  memset((void *)((long)param_1 + 0x25),0,0x10);
  return;
}


