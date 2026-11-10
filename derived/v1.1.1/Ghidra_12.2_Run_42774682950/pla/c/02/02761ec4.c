/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761ec4; name: FUN_02761ec4
 */


void FUN_02761ec4(undefined4 *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = *param_2;
  uVar4 = 0xffffff81;
  if (0xffff < uVar2) {
    uVar4 = 0xffffff82;
  }
  uVar1 = 0x80;
  if (0xff < uVar2) {
    uVar1 = uVar4;
  }
  if (uVar2 < 0x80) {
    uVar1 = uVar2;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  param_3[2] = param_3[2] + 1;
  uVar4 = *param_2;
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 0x82) {
    *(uint *)(*param_3 + param_3[2]) = uVar4;
    lVar3 = 4;
  }
  else if (uVar1 == 0x81) {
    *(short *)(*param_3 + param_3[2]) = (short)uVar4;
    lVar3 = 2;
  }
  else {
    if (uVar1 != 0x80) goto LAB_02761f70;
    *(char *)(*param_3 + param_3[2]) = (char)uVar4;
    lVar3 = 1;
  }
  param_3[2] = param_3[2] + lVar3;
LAB_02761f70:
  *param_1 = 0;
  return;
}


