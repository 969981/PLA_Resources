/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc0c0; name: FUN_027dc0c0
 */


void FUN_027dc0c0(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x26];
  *param_1 = &PTR_FUN_0426c8f8;
  if ((plVar3 == (long *)0x0) || (uVar1 = FUN_02a43a5c(plVar3[0xb]), (uVar1 & 1) == 0)) {
    pcVar2 = (code *)param_1[0x17];
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    pcVar2 = (code *)param_1[0x17];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar2)(param_1 + 0x1a);
  }
  pcVar2 = (code *)param_1[7];
  if (pcVar2 != (code *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    (*pcVar2)(param_1 + 10);
  }
  plVar3 = (long *)param_1[5];
  if ((plVar3 == (long *)0x0) || (uVar1 = FUN_02a43a5c(plVar3[0xb]), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027dc170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return;
}


