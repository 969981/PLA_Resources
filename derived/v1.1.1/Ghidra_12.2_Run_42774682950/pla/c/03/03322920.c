/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03322920; name: FUN_03322920
 */


void FUN_03322920(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_50;
  long local_48;
  
  (**(code **)(*param_2 + 0x78))(&local_50);
  local_48 = local_50;
  local_50 = 0;
  if (local_48 == 0) {
    *param_1 = 0;
  }
  else {
    if (0 < (int)param_2[6]) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        iVar1 = (**(code **)(param_2[5] + lVar2))
                          (&local_48,param_3,param_4,((undefined8 *)(param_2[5] + lVar2))[2]);
        if (iVar1 < 0) {
          *param_1 = 0;
          if (local_48 == 0) {
            return;
          }
          goto LAB_033229c4;
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x18;
      } while (lVar3 < (int)param_2[6]);
    }
    FUN_032d645c(local_48);
    *param_1 = local_48;
    if (local_48 != 0) {
LAB_033229c4:
      FUN_032d647c();
    }
  }
  return;
}


