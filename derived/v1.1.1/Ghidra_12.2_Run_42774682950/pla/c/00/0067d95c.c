/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067d95c; name: FUN_0067d95c
 */


void FUN_0067d95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_30;
  long *plStack_28;
  
  FUN_00680eb4(&local_40,param_2,param_3);
                    /* try { // try from 0067d97c to 0067d987 has its CatchHandler @ 0067d9e8 */
  FUN_0067d7a0(param_1 + 0x10,&local_40);
  lVar1 = local_40;
  if (local_40 != 0) {
    lVar2 = local_38;
    if (local_38 != local_40) {
      do {
        lVar2 = lVar2 + -8;
        FUN_00680b34(lVar2);
      } while (lVar1 != lVar2);
    }
    local_38 = lVar1;
    (**(code **)(*plStack_28 + 0x18))(plStack_28,local_40,local_30 - local_40,8);
  }
  return;
}


