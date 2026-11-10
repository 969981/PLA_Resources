/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2669c; name: FUN_00d2669c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d2669c(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  if (((DAT_043ab610 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043ab610), iVar1 != 0)) {
    uRam00000000043ab608 = DAT_0388a298;
    _DAT_043ab600 = DAT_0388a290;
    __cxa_guard_release(&DAT_043ab610);
  }
  plVar4 = (long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  plVar2 = (long *)*plVar4;
  if ((plVar2 == (long *)0x0) || (uVar3 = (**(code **)(*plVar2 + 0x30))(), (uVar3 & 1) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0x60) = param_2;
  plVar4 = (long *)*plVar4;
                    /* WARNING: Could not recover jumptable at 0x00d26704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x70))(plVar4,&DAT_043ab600);
  return;
}


