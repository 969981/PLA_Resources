/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d4d40; name: FUN_003d4d40
 */


void FUN_003d4d40(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_50 [4];
  long *local_30;
  
  local_30 = alStack_50;
  uVar3 = *param_1;
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_30 = (long *)0x0;
  }
  else if (param_2 == plVar1) {
                    /* try { // try from 003d4d88 to 003d4d8f has its CatchHandler @ 003d4ddc */
    (**(code **)(*plVar1 + 0x18))(plVar1,alStack_50);
  }
  else {
    param_2[4] = 0;
    local_30 = plVar1;
  }
                    /* try { // try from 003d4d90 to 003d4da3 has its CatchHandler @ 003d4de0 */
  FUN_003d4808(uVar3,alStack_50,param_3);
  if (alStack_50 == local_30) {
    pcVar2 = *(code **)(*local_30 + 0x20);
  }
  else {
    if (local_30 == (long *)0x0) {
      return;
    }
    pcVar2 = *(code **)(*local_30 + 0x28);
  }
  (*pcVar2)();
  return;
}


