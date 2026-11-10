/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004b8e70; name: FUN_004b8e70
 */


undefined8 FUN_004b8e70(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0 || param_2[7] == 2) {
    if (param_2[7] == 2) {
      *(undefined1 *)((long)param_2 + uVar2 + 4) = 0x80;
      uVar2 = (ulong)(uVar1 + 1);
    }
    memset((void *)((long)(param_2 + 1) + uVar2),0,(ulong)(8 - (int)uVar2));
    FUN_004b8d10(param_2,param_2 + 1,8);
  }
  *param_1 = *(undefined8 *)(param_2 + 3);
  param_1[1] = *(undefined8 *)(param_2 + 5);
  return 1;
}


