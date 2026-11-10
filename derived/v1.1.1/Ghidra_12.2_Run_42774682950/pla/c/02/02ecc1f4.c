/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecc1f4; name: FUN_02ecc1f4
 */


void FUN_02ecc1f4(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((*(long *)(param_2 + 2) == 0 || *(long *)(param_2 + 2) == param_1[5]) &&
     ((param_2[4] == 0 || (param_2[4] == (int)param_1[0x42])))) {
    if (*param_2 == 0) {
      FUN_02ecc3d4(param_1,param_2 + 5,1);
      return;
    }
    switch(*param_2) {
    case 1:
      *(int *)((long)param_1 + 700) = *(int *)((long)param_1 + 700) + 1;
      if (param_2[5] == 0) {
        if ((*(byte *)((long)param_1 + 0x2a2) & 0x78) == 0) {
          lVar2 = *param_1;
          uVar3 = 0;
        }
        else {
          lVar2 = param_1[0x44];
          if (lVar2 != 0) {
            uVar5 = 0;
            uVar3 = 0x4000000;
            goto LAB_02ecc3bc;
          }
          lVar2 = *param_1;
          uVar3 = 1;
        }
                    /* WARNING: Could not recover jumptable at 0x02ecc2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x98))(param_1,uVar3);
        return;
      }
      uVar4 = *(undefined8 *)(param_2 + 5);
      iVar1 = param_2[7];
      uVar3 = 0x4000000;
LAB_02ecc38c:
      FUN_02ecc8a4(param_1,0,uVar3,uVar4,iVar1);
      return;
    case 2:
      if ((*(char *)((long)param_2 + 0x22) != '\0') ||
         (iVar1 = *(int *)((long)param_1 + 700) + -1,
         *(int *)((long)param_1 + 700) == 0 || iVar1 == 0)) {
        *(undefined4 *)((long)param_1 + 700) = 0;
        (**(code **)(*param_1 + 0xa0))(param_1);
        if (param_2[5] == 0) {
          lVar2 = param_1[0x44];
          if (lVar2 == 0) {
            *(undefined4 *)((long)param_1 + 0x254) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x02ecc310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x68))(param_1);
            return;
          }
          uVar5 = 0x3f800000;
          uVar3 = 0x8000000;
LAB_02ecc3bc:
          FUN_02f0f0a8(uVar5,DAT_0440a150,lVar2,uVar3,0,4,0);
          return;
        }
        uVar4 = *(undefined8 *)(param_2 + 5);
        iVar1 = param_2[7];
        uVar3 = 0x8000000;
        goto LAB_02ecc38c;
      }
      *(int *)((long)param_1 + 700) = iVar1;
      break;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x02ecc344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1,*(undefined8 *)(param_2 + 10));
      return;
    case 5:
      FUN_02e9c89c(param_1 + 3);
      return;
    }
  }
  return;
}


