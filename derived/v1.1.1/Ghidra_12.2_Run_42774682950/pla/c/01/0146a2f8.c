/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146a2f8; name: FUN_0146a2f8
 */


int FUN_0146a2f8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x738));
  if ((param_3 == -1) || (lVar1 = FUN_0146a220(param_1,param_3), *(char *)(lVar1 + 0x5ab) == '\0'))
  {
    lVar1 = FUN_0146a220(param_1,0);
    if ((*(char *)(lVar1 + 0x5ab) == '\0') && (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)) {
      param_3 = 0;
    }
    else {
      lVar1 = FUN_0146a220(param_1,1);
      if ((*(char *)(lVar1 + 0x5ab) == '\0') && (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)) {
        param_3 = 1;
      }
      else {
        lVar1 = FUN_0146a220(param_1,2);
        if ((*(char *)(lVar1 + 0x5ab) == '\0') && (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)) {
          param_3 = 2;
        }
        else {
          lVar1 = FUN_0146a220(param_1,3);
          if ((*(char *)(lVar1 + 0x5ab) == '\0') && (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)) {
            param_3 = 3;
          }
          else {
            lVar1 = FUN_0146a220(param_1,4);
            if ((*(char *)(lVar1 + 0x5ab) == '\0') && (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)) {
              param_3 = 4;
            }
            else {
              lVar1 = FUN_0146a220(param_1,5);
              if ((*(char *)(lVar1 + 0x5ab) == '\0') && (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0))
              {
                param_3 = 5;
              }
              else {
                lVar1 = FUN_0146a220(param_1,6);
                if ((*(char *)(lVar1 + 0x5ab) == '\0') && (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)
                   ) {
                  param_3 = 6;
                }
                else {
                  lVar1 = FUN_0146a220(param_1,7);
                  if ((*(char *)(lVar1 + 0x5ab) == '\0') &&
                     (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)) {
                    param_3 = 7;
                  }
                  else {
                    lVar1 = FUN_0146a220(param_1,8);
                    if ((*(char *)(lVar1 + 0x5ab) == '\0') &&
                       (uVar2 = FUN_01444be8(), (uVar2 & 1) != 0)) {
                      param_3 = 8;
                    }
                    else {
                      lVar1 = FUN_0146a220(param_1,9);
                      if ((*(char *)(lVar1 + 0x5ab) != '\0') ||
                         (uVar2 = FUN_01444be8(), (uVar2 & 1) == 0)) {
                        param_3 = -1;
                        goto LAB_0146a374;
                      }
                      param_3 = 9;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(byte *)(lVar1 + 0x5ad) = *(byte *)(param_1 + 0x6a1) ^ 1;
  FUN_014441e8(lVar1,param_2);
  FUN_0146a520(param_1,lVar1);
LAB_0146a374:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x738));
  return param_3;
}


