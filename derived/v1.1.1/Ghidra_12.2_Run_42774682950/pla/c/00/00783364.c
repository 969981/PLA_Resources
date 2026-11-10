/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783364; name: FUN_00783364
 */


undefined1  [16] FUN_00783364(MultiWaitType *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 local_30 [16];
  
  do {
    uVar1 = nn::os::WaitAny(param_1);
    uVar2 = FUN_007833a8(param_1,local_30,uVar1);
  } while ((uVar2 & 1) != 0);
  return local_30;
}


