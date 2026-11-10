/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8ee4; name: FUN_001f8ee4
 */


undefined8 FUN_001f8ee4(char *param_1,undefined8 *param_2,int param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_38;
  
  piVar3 = __errno_location();
  *piVar3 = 0;
  *param_4 = 0;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
LAB_001f8f4c:
      lVar4 = strtol(param_1,&local_38,param_3);
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_38;
      }
      piVar3 = __errno_location();
      if (*piVar3 == 0x22) {
        uVar5 = 1;
      }
      else if (param_1 == local_38) {
LAB_001f8f9c:
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
        *param_4 = lVar4;
      }
      return uVar5;
    }
    iVar2 = FUN_001e33f4(cVar1);
    if (iVar2 == 0) {
      if (*param_1 == '-') {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = param_1;
        }
        goto LAB_001f8f9c;
      }
      goto LAB_001f8f4c;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}


