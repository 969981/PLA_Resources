/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00168d90; name: FUN_00168d90
 */


void FUN_00168d90(undefined4 param_1,int *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  
  *(char *)((long)param_2 + 10) = (char)param_2[2];
  uVar1 = FUN_001684a0(param_1,param_3);
  uVar2 = 8;
  if (*param_2 == 9) {
    uVar2 = 9;
  }
  *(undefined1 *)((long)param_2 + 0xb) = uVar2;
  *(undefined2 *)(param_2 + 2) = uVar1;
  *param_2 = 10;
  return;
}


