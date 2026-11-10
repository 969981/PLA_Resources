/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01117c70; name: FUN_01117c70
 */


ulong FUN_01117c70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint local_24;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_24,4,0);
    uVar3 = uVar3 & 1;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
  return uVar3 | (ulong)local_24 << 0x20;
}


