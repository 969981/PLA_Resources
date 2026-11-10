/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf89b0; name: FUN_02bf89b0
 */


void FUN_02bf89b0(ulong *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_b0;
  code *local_a8;
  code *local_a0;
  long local_98;
  undefined1 auStack_90 [96];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0xa0,0);
  local_a0 = (code *)0x0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,auStack_90);
    local_b0 = *param_2;
    local_a8 = (code *)param_2[1];
    local_a0 = (code *)param_2[2];
    local_98 = param_2[3];
  }
  *plVar2 = (long)(PTR_DAT_04388248 + 0x10);
  plVar2[1] = *param_1 & 0xfffffffffffffffc;
  plVar2[2] = 0;
  *param_1 = *param_1 & 3 | (ulong)plVar2;
  *plVar2 = (long)&PTR_LAB_04287d90;
  plVar2[7] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  if (local_a0 != (code *)0x0) {
    (*local_a0)(auStack_90,plVar2 + 8);
    plVar2[5] = (long)local_a8;
    plVar2[7] = local_98;
    plVar2[6] = (long)local_a0;
    plVar2[4] = local_b0;
  }
  if (local_a8 != (code *)0x0) {
    (*local_a8)(auStack_90);
  }
  return;
}


