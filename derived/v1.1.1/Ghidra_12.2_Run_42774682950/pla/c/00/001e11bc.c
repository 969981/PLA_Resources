/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e11bc; name: FUN_001e11bc
 */


void FUN_001e11bc(long param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  if ((*(long *)(param_1 + 0xc08) != -1) && (*(long *)(param_1 + 200) != 0)) {
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001f43b0(param_1,3,2);
    }
    FUN_002053bc(&local_18);
    local_30 = *(undefined8 *)(param_1 + 0xc08);
    uStack_28 = local_18;
    FUN_001e0d9c(*(undefined8 *)(param_1 + 200),&local_30,&LAB_001e1d64);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN_001f43f8(param_1,3);
    }
  }
  return;
}


