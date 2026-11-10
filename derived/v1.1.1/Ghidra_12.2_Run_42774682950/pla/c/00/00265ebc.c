/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265ebc; name: FUN_00265ebc
 */


void FUN_00265ebc(float param_1,undefined8 *param_2,undefined4 param_3,uint param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  if (param_2[0x2c] != 0) {
    iVar1 = *(int *)(param_2 + 0x2d) + -1;
    if ((0 < *(int *)(param_2 + 0x2d)) && (*(int *)(param_2 + 0x2d) = iVar1, iVar1 == 0)) {
      FUN_00265cec(param_2);
      param_2[0x2c] = 0;
      *(undefined4 *)(param_2 + 0x2d) = 0;
    }
  }
  if (*(char *)((long)param_2 + 10) != '\0') {
    *(undefined4 *)(param_2 + 0x35) = 0;
    *(undefined4 *)(param_2 + 0x46) = 0;
    *(undefined8 *)((long)param_2 + 0x3c) = 0;
    *(float *)((long)param_2 + 0x4c) = param_1;
    param_2[0x33] = 0;
    param_2[0x34] = 0;
    param_2[0x31] = 0;
    param_2[0x32] = 0;
    param_2[0x2f] = 0;
    param_2[0x30] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    if (param_2[0x2a] != 0) {
      bVar8 = false;
      lVar4 = param_2[0x2a];
      do {
        lVar5 = *(long *)(lVar4 + 0x80);
        if (((*(char *)((long)param_2 + 0xe) == '\0') || (*(int *)(lVar4 + 0x28) != 0)) ||
           (*(int *)((long)param_2 + 0x25c) != 0)) {
          iVar1 = FUN_0026614c(param_2,lVar4,param_3,param_4 & 1,param_5);
          lVar3 = *(long *)(lVar4 + 0x238);
          *(char *)(lVar4 + 5) = (char)iVar1;
          *(undefined1 *)(lVar4 + 4) = 0;
          if (0 < *(int *)(lVar3 + 0x88)) {
            lVar7 = 0;
            lVar6 = *(long *)(lVar4 + 0x440);
            while( true ) {
              if (lVar6 != 0) {
                do {
                  lVar3 = *(long *)(lVar6 + 0x80);
                  iVar2 = FUN_0026614c(param_2,lVar6,param_3,param_4 & 1,param_5);
                  *(char *)(lVar6 + 5) = (char)iVar1;
                  if (iVar2 == 1) {
                    FUN_002666b4(param_2,lVar6);
                    FUN_0026e3b0(lVar6,*param_2,1);
                    FUN_00282cd4(param_2[4],lVar6);
                  }
                  else {
                    *(undefined1 *)(lVar4 + 4) = 1;
                  }
                  bVar8 = (bool)(bVar8 | *(char *)(lVar6 + 0x5fc) != '\0');
                  lVar6 = lVar3;
                } while (lVar3 != 0);
                lVar3 = *(long *)(lVar4 + 0x238);
              }
              lVar7 = lVar7 + 1;
              if (*(int *)(lVar3 + 0x88) <= lVar7) break;
              lVar6 = *(long *)(lVar4 + lVar7 * 8 + 0x440);
            }
          }
          if ((iVar1 == 1) && (*(char *)(lVar4 + 4) == '\0')) {
            FUN_002666b4(param_2,lVar4);
            FUN_0026e3b0(lVar4,*param_2,1);
            FUN_00282cd4(param_2[4],lVar4);
          }
        }
        else {
          *(float *)(lVar4 + 0x44) = *(float *)(lVar4 + 0x44) + param_1;
          *(int *)((long)param_2 + 0x17c) = *(int *)((long)param_2 + 0x17c) + 1;
        }
        bVar8 = (bool)(bVar8 | *(char *)(lVar4 + 0x5fc) != '\0');
        lVar4 = lVar5;
      } while (lVar5 != 0);
      if (bVar8) {
        *(undefined1 *)((long)param_2 + 0x264) = 1;
      }
    }
    if (((*(char *)((long)param_2 + 0xe) != '\0') && (0.0 < param_1)) &&
       (0 < *(int *)((long)param_2 + 0x25c))) {
      if (0 < *(int *)(param_2 + 0x4b)) {
        lVar4 = 0;
        lVar5 = 0x50;
        do {
          *(undefined8 *)(param_2[0x4a] + lVar5) = 0;
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 0x60;
        } while (lVar4 < *(int *)(param_2 + 0x4b));
      }
      *(undefined4 *)((long)param_2 + 0x25c) = 0;
    }
    if (0.0 < param_1) {
      *(undefined4 *)(param_2 + 3) = 0;
    }
  }
  return;
}


