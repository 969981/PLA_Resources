/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc354; name: FUN_02edc354
 */


undefined8 FUN_02edc354(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = 0xff;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 2) = uVar1;
  lVar2 = FUN_02f59e30(0,(ulong)uVar1 << 3);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x34;
  }
  else {
    uVar3 = 1;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar3;
}


