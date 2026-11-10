/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fc014; name: FUN_014fc014
 */


void FUN_014fc014(long param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x600);
  uVar2 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8));
  FUN_014f1640(uVar4,param_2,&DAT_043c53e8 + (ulong)param_3 * 0x28,0,uVar2 & 1,param_4 & 1);
  plVar3 = (long *)FUN_014fc0f8(param_1,param_3);
  if (plVar3 != (long *)0x0) {
    if (((*(int *)(param_1 + 0x640) == param_2) || (*(int *)(param_1 + 0x644) == param_2)) ||
       (*(int *)(param_1 + 0x648) == param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(param_1 + 0x64c) != param_2;
    }
    if ((bool)*(char *)((long)plVar3 + 0xa2) != bVar1) {
      *(bool *)((long)plVar3 + 0xa2) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x014fc0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x98))();
      return;
    }
  }
  return;
}


