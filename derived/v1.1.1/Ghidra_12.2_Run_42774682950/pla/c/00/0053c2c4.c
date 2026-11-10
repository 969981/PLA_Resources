/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053c2c4; name: FUN_0053c2c4
 */


undefined8 FUN_0053c2c4(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)FUN_002e4780(param_1,"grpc.subchannel_pool");
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 2) {
      return 0;
    }
    uVar2 = *(undefined8 *)(piVar1 + 4);
  }
  return uVar2;
}


