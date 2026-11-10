/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f075c; name: FUN_028f075c
 */


void FUN_028f075c(long param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa8);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x1e1) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x270);
  }
  plVar2 = (long *)FUN_02900ee0(uVar1,param_3);
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x20))(), (uVar3 & 1) == 0)) {
    *param_2 = *param_2 + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x028f07c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  return;
}


