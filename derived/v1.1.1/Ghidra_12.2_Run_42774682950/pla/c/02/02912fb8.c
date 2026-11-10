/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02912fb8; name: FUN_02912fb8
 */


bool FUN_02912fb8(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = FUN_029180dc(*(undefined8 *)(param_1 + 0x198),param_2,param_3 & 1);
  if ((uVar3 & 1) == 0) {
    bVar1 = true;
  }
  else {
    if ((param_3 & 1) == 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
      iVar2 = (**(code **)(*plVar4 + 0x100))(plVar4,*(undefined8 *)(param_2 + 8),0);
    }
    else {
      plVar4 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
      iVar2 = (**(code **)(*plVar4 + 0x108))
                        (plVar4,*(undefined8 *)(param_2 + 8),0,&LAB_0290f2b0,param_1);
    }
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


