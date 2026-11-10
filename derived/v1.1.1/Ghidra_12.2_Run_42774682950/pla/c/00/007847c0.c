/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007847c0; name: FUN_007847c0
 */


void FUN_007847c0(long param_1)

{
  EventType *pEVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_40 [32];
  
  FUN_00783834(auStack_40);
  plVar2 = (long *)FUN_00783790();
  pEVar1 = (EventType *)(param_1 + 0x120);
  *plVar2 = param_1;
  uVar3 = nn::os::TryWaitEvent(pEVar1);
  if ((uVar3 & 1) == 0) {
    do {
      FUN_00785870(param_1 + 8,pEVar1);
      uVar3 = nn::os::TryWaitEvent(pEVar1);
    } while ((uVar3 & 1) == 0);
  }
  FUN_00783964(auStack_40);
  return;
}


