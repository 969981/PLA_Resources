/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001543b0; name: FUN_001543b0
 */


undefined8 FUN_001543b0(undefined8 param_1,int param_2,long param_3)

{
  int __errnum;
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  piVar1 = __errno_location();
  if (param_2 == 0) {
    __errnum = *piVar1;
    FUN_00151490(param_1);
    pcVar2 = strerror(__errnum);
    if (param_3 == 0) {
      FUN_00151570(param_1,pcVar2);
    }
    else {
      FUN_00151650(param_1,"%s: %s",param_3);
    }
    FUN_001514d0(param_1,(long)__errnum);
    uVar3 = 3;
  }
  else {
    uVar3 = 1;
    FUN_001517e0(param_1,1);
  }
  return uVar3;
}


