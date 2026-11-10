/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00161400; name: FUN_00161400
 */


void FUN_00161400(long param_1,long param_2,int *param_3,long param_4,int param_5,undefined8 param_6
                 )

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar2 = *param_3;
  iVar1 = param_5;
  if (param_5 < 0) {
    iVar1 = param_5 + 1;
  }
  if (iVar2 < iVar1 >> 1) {
    param_5 = iVar2 * 2;
    if (param_5 < 5) {
      param_5 = 4;
    }
  }
  else if (param_5 <= iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_001599d0(param_1,"too many %s (limit is %d)",param_6,param_5);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  lVar4 = iVar2 * param_4;
  param_4 = param_5 * param_4;
  lVar3 = (*(code *)*puVar5)(puVar5[1],param_2,lVar4,param_4);
  if ((param_4 == 0) || (lVar3 != 0)) {
LAB_001614b0:
    lVar3 = 0;
    if (param_2 != 0) {
      lVar3 = -lVar4;
    }
    puVar5[3] = param_4 + lVar3 + puVar5[3];
    *param_3 = param_5;
    return;
  }
  if (puVar5[0x1a] != 0) {
    FUN_0015dde0(param_1,1);
    lVar3 = (*(code *)*puVar5)(puVar5[1],param_2,lVar4,param_4);
    if (lVar3 != 0) goto LAB_001614b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0015a320(param_1,4);
}


