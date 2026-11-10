/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284d2dc; name: FUN_0284d2dc
 */


undefined8 FUN_0284d2dc(undefined8 param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_02c8dc00(param_2);
  if ((uVar1 & 1) == 0) {
LAB_0284d334:
    uVar2 = 1;
  }
  else {
    lVar3 = 0;
    do {
      if ((*(int *)((long)&DAT_03a7e5d8 + lVar3) == param_2) ||
         (*(int *)((long)&DAT_03a7e5dc + lVar3) == param_2)) goto LAB_0284d334;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x148);
    uVar2 = 0;
  }
  return uVar2;
}


