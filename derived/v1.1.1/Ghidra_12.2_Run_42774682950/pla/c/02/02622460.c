/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02622460; name: FUN_02622460
 */


/* WARNING: Removing unreachable block (ram,0x0262253c) */

void FUN_02622460(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int local_34;
  long local_30;
  undefined8 local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  local_34 = FUN_026225c8(param_2 + 0xc);
  while( true ) {
    if (local_34 == 0) {
      FUN_02622564(param_1,0);
      return;
    }
    uVar1 = FUN_026225d0(*(undefined8 *)(param_2 + 0x10));
    if ((uVar1 & 1) == 0) break;
    uVar1 = FUN_0262265c(param_2 + 0xc,&local_34,local_34 + 1);
    if ((uVar1 & 1) != 0) {
      FUN_02622694(param_1);
      if (*(long *)(param_2 + 0x18) == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(long *)(param_2 + 0x18) + -0x50;
      }
      FUN_026226ac(param_1,lVar2);
      return;
    }
  }
  FUN_02622564(param_1,0);
  return;
}


