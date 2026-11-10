/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03385e44; name: FUN_03385e44
 */


void FUN_03385e44(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[3];
  *param_1 = (long)&PTR_LAB_0436e920;
  if (lVar4 != 0) {
    FUN_03385ef8(lVar4);
    lVar1 = tpidr_el0;
    lVar3 = *(long *)(lVar1 + 0x38d490);
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar3;
    }
    plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,0x288);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


