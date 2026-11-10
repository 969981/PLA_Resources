/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765d94; name: FUN_02765d94
 */


void FUN_02765d94(undefined4 *param_1,byte param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  
  switch(param_2) {
  case 0x80:
    uVar1 = (ulong)*(byte *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 1;
    break;
  case 0x81:
    uVar1 = (ulong)*(ushort *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 2;
    break;
  case 0x82:
    uVar1 = (ulong)*(uint *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 4;
    break;
  case 0x83:
    uVar1 = *(ulong *)(*param_4 + param_4[2]);
    lVar2 = param_4[2] + 8;
    break;
  default:
    uVar1 = (ulong)param_2;
    goto LAB_02765e14;
  }
  param_4[2] = lVar2;
LAB_02765e14:
  *param_3 = uVar1;
  *param_1 = 0;
  return;
}


