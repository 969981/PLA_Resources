/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d33f0; name: FUN_010d33f0
 */


byte FUN_010d33f0(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  char local_24 [4];
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_24,1,0);
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  return bVar1 & local_24[0] == '\x11';
}


