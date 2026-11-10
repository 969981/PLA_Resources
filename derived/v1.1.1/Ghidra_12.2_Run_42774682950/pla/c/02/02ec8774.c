/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec8774; name: FUN_02ec8774
 */


undefined8 FUN_02ec8774(long param_1,long param_2,uint *param_3,float *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar1 = 2;
  }
  else {
    if (param_2 == 0) {
      *param_3 = 3;
    }
    else {
      uVar2 = *param_3;
      if (2 < uVar2) {
        uVar2 = 3;
      }
      *param_3 = uVar2;
      FUN_02f00e70(*(undefined8 *)(param_1 + 0x40),uVar2,param_2);
    }
    uVar1 = 1;
    *param_4 = *(float *)(param_1 + 0x50) * 57.295776;
  }
  return uVar1;
}


