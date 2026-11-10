/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01855970; name: FUN_01855970
 */


void FUN_01855970(long param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x74);
  if ((param_2 & 1) == 0) {
    piVar1 = (int *)(param_1 + 0x88);
  }
  if (*piVar1 < 1) {
    if (piVar1[1] < 1) {
      if (piVar1[2] < 1) {
        if (piVar1[3] < 1) {
          if (piVar1[4] < 1) {
            iVar2 = *param_4;
            goto joined_r0x01855a20;
          }
          *param_3 = 0;
          iVar2 = piVar1[4];
        }
        else {
          *param_3 = 3;
          iVar2 = piVar1[3];
        }
      }
      else {
        *param_3 = 2;
        iVar2 = piVar1[2];
      }
    }
    else {
      *param_3 = 1;
      iVar2 = piVar1[1];
    }
  }
  else {
    *param_3 = 5;
    iVar2 = *piVar1;
  }
  *param_4 = iVar2;
joined_r0x01855a20:
  if (0 < iVar2) {
    *param_4 = iVar2 + -1;
  }
  return;
}


