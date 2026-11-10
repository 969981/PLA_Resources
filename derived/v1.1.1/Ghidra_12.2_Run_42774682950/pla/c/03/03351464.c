/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03351464; name: FUN_03351464
 */


bool FUN_03351464(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  switch(*param_1) {
  case 0:
    iVar1 = *param_2;
    iVar2 = *param_3;
    break;
  case 1:
    iVar1 = param_2[1];
    iVar2 = param_3[1];
    break;
  case 2:
    iVar1 = param_2[2];
    iVar2 = param_3[2];
    break;
  case 3:
    iVar1 = param_2[3];
    iVar2 = param_3[3];
    break;
  default:
    iVar1 = 0;
    iVar2 = 0;
  }
  return iVar1 < iVar2;
}


