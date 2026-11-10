/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027619cc; name: FUN_027619cc
 */


void FUN_027619cc(ulong *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar2 = 0xffffff82;
  if (uVar3 >> 0x20 != 0) {
    uVar2 = 0xffffff83;
  }
  uVar1 = 0x81;
  if (0xffff < uVar3) {
    uVar1 = uVar2;
  }
  uVar2 = 0x80;
  if (0xff < uVar3) {
    uVar2 = uVar1;
  }
  if (uVar3 < 0x80) {
    uVar2 = (undefined4)uVar3;
  }
  *(char *)(*param_2 + param_2[2]) = (char)uVar2;
  param_2[2] = param_2[2] + 1;
  FUN_02761a9c(uVar2,*param_1,param_2);
  return;
}


