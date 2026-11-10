/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173970; name: FUN_00173970
 */


undefined * FUN_00173970(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 == 0x47) {
    lVar4 = *(long *)(*param_2 + 0x10);
    if (lVar4 == 0) {
      uVar3 = 0x47;
      goto LAB_001739fc;
    }
  }
  else {
    if (uVar3 != 0x45) goto LAB_001739fc;
    lVar4 = *(long *)(*param_2 + 0x28);
    if (lVar4 == 0) {
      uVar3 = 0x45;
      goto LAB_001739fc;
    }
  }
  uVar1 = FUN_0016d990(param_1,"__name");
  plVar2 = (long *)FUN_001723b0(lVar4,uVar1);
  if ((*(uint *)(plVar2 + 1) & 0xf) == 4) {
    return (undefined *)(*plVar2 + 0x18);
  }
  uVar3 = *(uint *)(param_2 + 1);
LAB_001739fc:
  return (&PTR_s_no_value_0411ad80)[(uVar3 & 0xf) + 1];
}


