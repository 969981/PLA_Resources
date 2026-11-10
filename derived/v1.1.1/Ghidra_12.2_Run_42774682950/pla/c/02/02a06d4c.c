/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a06d4c; name: FUN_02a06d4c
 */


void FUN_02a06d4c(long param_1,long param_2,uint *param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  if (param_5 != 0x207) {
    uVar2 = FUN_0299d884(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 8),0x207,param_4,
                         param_6);
    *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
    if ((*(long *)(param_2 + (ulong)*param_3 * 8) != 0) &&
       (uVar1 = *param_3 + 1, *param_3 = uVar1, 3 < uVar1)) {
      return;
    }
    if (param_5 == 0x206) goto LAB_02a06e18;
  }
  uVar2 = FUN_0299d884(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 8),0x206,param_4,
                       param_6);
  *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
  if (*(long *)(param_2 + (ulong)*param_3 * 8) == 0) {
    if (param_5 == 0x208) {
      return;
    }
  }
  else {
    uVar1 = *param_3 + 1;
    *param_3 = uVar1;
    if (param_5 == 0x208) {
      return;
    }
    if (3 < uVar1) {
      return;
    }
  }
LAB_02a06e18:
  uVar2 = FUN_0299d884(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 8),0x208,param_4,
                       param_6);
  *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
  if (*(long *)(param_2 + (ulong)*param_3 * 8) != 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}


