/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284fbb0; name: FUN_0284fbb0
 */


void FUN_0284fbb0(long param_1,byte param_2,int param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x68) == 0) || (*(char *)(*(long *)(param_1 + 0x68) + 0x1e1) == '\0')) {
    return;
  }
  uVar3 = *(undefined8 *)((ulong)param_2 * 0x10 + 0x4270760 + (long)param_3 * 8);
  plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x70))
                             (plVar1,*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x58) + 0x58) +
                                     0x3010,uVar3);
  lVar2 = (**(code **)(*plVar1 + 0x38))();
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x90);
    lVar2 = FUN_0022bff8(*(undefined8 *)(lVar4 + 0x60),uVar3);
    *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
    uVar3 = (**(code **)(*plVar1 + 0x38))(plVar1);
    FUN_02c3bc54((undefined8 *)(lVar2 + 8),uVar3,lVar4);
  }
  lVar2 = (**(code **)(*param_4 + 0x58))(param_4,0);
  *(long **)(*(long *)(lVar2 + 0x18) + 8) = plVar1;
  plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0284fc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,FUN_02c3bc54);
  return;
}


