/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008549ec; name: FUN_008549ec
 */


void FUN_008549ec(long param_1)

{
  long *plVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  FUN_00847ffc(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_008570e0();
  }
  FUN_00847c3c(param_1 + 0x10);
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_0085552c();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_00844cec();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00844cec();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_00844cec();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_00844cec();
  }
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee660(param_1 + 0xc4,local_28);
  *(undefined2 *)(param_1 + 0x52) = 0;
  return;
}


