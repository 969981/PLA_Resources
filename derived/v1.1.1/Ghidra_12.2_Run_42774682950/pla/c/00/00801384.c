/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00801384; name: FUN_00801384
 */


void FUN_00801384(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_28;
  
  local_28 = 0;
  FUN_007ecf14(&local_28);
  lVar2 = local_28;
  lVar4 = *(long *)(param_1 + 0xc0);
  plVar3 = (long *)FUN_007ecfa4();
  if (5 < *(uint *)(param_1 + 200)) {
    local_28 = 0;
    FUN_007ecf14(&local_28);
    *(long *)(param_1 + 0xc0) = local_28;
    return;
  }
  lVar1 = 0;
  if (*plVar3 != 0) {
    lVar1 = (lVar2 - lVar4) / *plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x008013d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_008013dc + (ulong)(byte)(&DAT_03a729d3)[*(uint *)(param_1 + 200)] * 4))(lVar1);
  return;
}


