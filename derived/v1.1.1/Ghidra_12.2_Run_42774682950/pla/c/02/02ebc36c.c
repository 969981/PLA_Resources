/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebc36c; name: FUN_02ebc36c
 */


bool FUN_02ebc36c(long param_1,int *param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 unaff_x19;
  char local_28 [4];
  char local_24 [4];
  
  if (*param_3 == 0) {
    bVar5 = false;
  }
  else {
    lVar2 = FUN_02ebbe08(param_1 + 0x18,*param_3,local_28);
    lVar4 = 0;
    if (local_28[0] != '\0') {
      lVar4 = lVar2;
    }
    if (lVar4 == 0) {
      lVar2 = FUN_02ebbe08(param_1 + 0x18,0,local_24);
      lVar4 = 0;
      if (local_24[0] != '\0') {
        lVar4 = lVar2;
      }
    }
    if ((((*param_2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
       ((char)param_2[6] == -1)) {
      bVar1 = *(long *)(param_2 + 8) == 0;
    }
    else {
      bVar1 = false;
    }
    bVar5 = (bool)(lVar4 != 0 & bVar1);
    if ((bVar1 == false) && (lVar4 != 0)) {
      if (param_3[2] == 0) {
        bVar5 = false;
      }
      else {
        lVar3 = FUN_02ebbef0(lVar4 + 0x18,param_3[2],local_28);
        lVar2 = 0;
        if (local_28[0] != '\0') {
          lVar2 = lVar3;
        }
        if (lVar2 == 0) {
          lVar4 = FUN_02ebbef0(lVar4 + 0x18,0,local_24);
          lVar2 = 0;
          if (local_24[0] != '\0') {
            lVar2 = lVar4;
          }
        }
        if (((param_2[2] == 0) && ((char)param_2[4] == -1)) && ((char)param_2[6] == -1)) {
          bVar1 = *(long *)(param_2 + 8) == 0;
        }
        else {
          bVar1 = false;
        }
        bVar5 = (bool)(lVar2 != 0 & bVar1);
        if ((bVar1 == false) && (lVar2 != 0)) {
          if ((char)param_3[4] == -1) {
            bVar5 = false;
          }
          else {
            lVar3 = FUN_02ebbfcc(lVar2 + 0x18,(char)param_3[4],local_28);
            lVar4 = 0;
            if (local_28[0] != '\0') {
              lVar4 = lVar3;
            }
            if (lVar4 == 0) {
              lVar2 = FUN_02ebbfcc(lVar2 + 0x18,0xff,local_24);
              lVar4 = 0;
              if (local_24[0] != '\0') {
                lVar4 = lVar2;
              }
            }
            if (((char)param_2[4] == -1) && ((char)param_2[6] == -1)) {
              bVar1 = *(long *)(param_2 + 8) == 0;
            }
            else {
              bVar1 = false;
            }
            bVar5 = (bool)(lVar4 != 0 & bVar1);
            if ((bVar1 == false) && (lVar4 != 0)) {
              if ((char)param_3[6] == -1) {
                bVar5 = false;
              }
              else {
                lVar3 = FUN_02ebc084(lVar4 + 0x18,(char)param_3[6],local_28);
                lVar2 = 0;
                if (local_28[0] != '\0') {
                  lVar2 = lVar3;
                }
                if (lVar2 == 0) {
                  lVar4 = FUN_02ebc084(lVar4 + 0x18,0xff,local_24);
                  lVar2 = 0;
                  if (local_24[0] != '\0') {
                    lVar2 = lVar4;
                  }
                }
                bVar1 = (char)param_2[6] == -1;
                bVar5 = lVar2 != 0 && (bVar1 && *(long *)(param_2 + 8) == 0);
                if ((!bVar1 || *(long *)(param_2 + 8) != 0) && (lVar2 != 0)) {
                  if ((*(long *)(param_2 + 8) == 0) && (*(long *)(param_3 + 8) != 0)) {
                    lVar4 = FUN_02ebc0f0(lVar2 + 0x18,*(long *)(param_3 + 8),local_24 + 0x10);
                    bVar5 = lVar4 != 0 && (char)((ulong)unaff_x19 >> 0x20) != '\0';
                  }
                  else {
                    bVar5 = false;
                  }
                  return bVar5;
                }
              }
              return bVar5;
            }
          }
          return bVar5;
        }
      }
      return bVar5;
    }
  }
  return bVar5;
}


