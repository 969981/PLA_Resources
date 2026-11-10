/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007834d0; name: FUN_007834d0
 */


undefined8 FUN_007834d0(MultiWaitType *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = nn::os::TryWaitAny(param_1);
  if (lVar1 != 0) {
    do {
      uVar2 = FUN_007833a8(param_1,&local_30,lVar1);
      if ((uVar2 & 1) == 0) {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = local_30;
          param_2[1] = uStack_28;
        }
        return 1;
      }
      lVar1 = nn::os::TryWaitAny(param_1);
    } while (lVar1 != 0);
  }
  return 0;
}


