/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff73bc; name: FUN_02ff73bc
 */


void FUN_02ff73bc(ulong *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x28,0);
  *plVar2 = (long)(PTR_DAT_04388248 + 0x10);
  plVar2[1] = *param_1 & 0xfffffffffffffffc;
  plVar2[2] = param_2;
  *param_1 = *param_1 & 3 | (ulong)plVar2;
  *plVar2 = (long)&PTR_LAB_042b0e28;
  plVar2[3] = param_3;
  plVar2[4] = param_4;
  return;
}


