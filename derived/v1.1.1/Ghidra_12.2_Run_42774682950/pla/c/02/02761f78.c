/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02761f78; name: FUN_02761f78
 */


void FUN_02761f78(undefined4 *param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  
  uVar1 = *param_2;
  uVar3 = 0xff80;
  if (0xff < uVar1) {
    uVar3 = 0xff81;
  }
  if (0x7f < uVar1) {
    uVar1 = uVar3;
  }
  *(char *)(*param_3 + param_3[2]) = (char)uVar1;
  param_3[2] = param_3[2] + 1;
  if ((uVar1 & 0xff) == 0x81) {
    *(ushort *)(*param_3 + param_3[2]) = *param_2;
    lVar2 = 2;
  }
  else {
    if ((uVar1 & 0xff) != 0x80) goto LAB_02761ffc;
    *(char *)(*param_3 + param_3[2]) = (char)*param_2;
    lVar2 = 1;
  }
  param_3[2] = param_3[2] + lVar2;
LAB_02761ffc:
  *param_1 = 0;
  return;
}


