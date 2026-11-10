/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07c68; name: FUN_02f07c68
 */


void FUN_02f07c68(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2 >> 0x20);
  *(int *)(param_1 + 1) = (int)param_2;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  FUN_02f08558();
  *param_1 = &PTR_LAB_042ab9b8;
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_02f0869c(param_1,uVar1,param_2 & 0xffffffff);
  return;
}


