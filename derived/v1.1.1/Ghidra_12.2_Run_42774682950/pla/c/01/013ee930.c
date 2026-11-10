/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ee930; name: FUN_013ee930
 */


void FUN_013ee930(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0x5b4) == 2) {
    if (*(int *)((long)param_1 + 0x5ac) == 2) {
      lVar2 = *param_1;
      uVar1 = 0;
    }
    else {
      if (*(int *)((long)param_1 + 0x5ac) != 1) {
        return;
      }
      lVar2 = *param_1;
      uVar1 = 1;
    }
    (**(code **)(lVar2 + 0xa8))(param_1,uVar1);
    *(undefined4 *)((long)param_1 + 0x5ac) = 0;
  }
  return;
}


