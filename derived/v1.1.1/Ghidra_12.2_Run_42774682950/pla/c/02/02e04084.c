/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e04084; name: FUN_02e04084
 */


undefined8
FUN_02e04084(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            byte param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  *(undefined4 *)((long)param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 7) = param_3;
  FUN_02e04b70(param_5,0,0,param_1 + 5);
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1[5]);
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    FUN_02e04b70((int)param_1[8],1,0,param_1 + 6);
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1[6]);
    param_1[4] = lVar2;
    if (lVar2 != 0) {
      FUN_02e04b70((int)param_1[8],0,param_1[3],param_1 + 5);
      FUN_02e04b70((int)param_1[8],1,param_1[4],param_1 + 6);
      uVar3 = FUN_02e062b4(param_1 + 1,param_2,(int)param_1[8],2,1,0);
      if ((int)uVar3 != 1) {
        return uVar3;
      }
      *(byte *)((long)param_1 + 0x4e) = param_6 & 1;
      if (*(uint *)(param_1 + 7) != 0) {
        lVar2 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 7) * 0x78);
        *param_1 = lVar2;
        if (lVar2 == 0) {
          return 0x34;
        }
        uVar7 = *(uint *)(param_1 + 7);
        if (uVar7 != 0) {
          lVar5 = 0;
          uVar6 = 1;
          lVar4 = lVar2;
          while( true ) {
            if (lVar4 != 0) {
              puVar1 = (undefined8 *)(lVar2 + lVar5);
              *(undefined8 *)((long)puVar1 + 0x3e) = 0;
              puVar1[7] = 0;
              *(undefined4 *)(puVar1 + 6) = 0;
              puVar1[9] = 0;
              *(undefined8 *)((long)puVar1 + 0x4e) = 0;
              *(undefined8 *)((long)puVar1 + 0x5e) = 0;
              puVar1[0xb] = 0;
              puVar1[0xd] = 0;
              *(undefined1 *)(puVar1 + 0xe) = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[4] = 0;
              puVar1[5] = 0;
              uVar7 = *(uint *)(param_1 + 7);
            }
            if (uVar7 <= uVar6) break;
            lVar2 = *param_1;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x78;
            lVar4 = lVar2 + lVar5;
          }
          if (uVar7 != 0) {
            if ((param_6 & 1) == 0) {
              lVar2 = 0;
              uVar6 = 0;
              while( true ) {
                lVar5 = *param_1 + lVar2;
                *(undefined8 *)(lVar5 + 0x68) = 0;
                *(undefined1 *)(lVar5 + 0x70) = 0;
                uVar3 = FUN_02e06994(lVar5 + 0x38,param_2,(int)param_1[8]);
                if ((int)uVar3 != 1) {
                  return uVar3;
                }
                uVar3 = FUN_02e06994(lVar5 + 0x48,param_2,(int)param_1[8]);
                if ((int)uVar3 != 1) {
                  return uVar3;
                }
                uVar3 = FUN_02e06994(lVar5 + 0x58,param_2,(int)param_1[8]);
                if ((int)uVar3 != 1) {
                  return uVar3;
                }
                lVar4 = (**(code **)(*param_2 + 0x10))
                                  (param_2,((ulong)*(uint *)(param_1 + 8) & 0xfffffffe) * 2 + 4);
                *(long *)(lVar5 + 0x68) = lVar4;
                if (lVar4 == 0) break;
                uVar3 = FUN_02e07504(lVar5 + 0x18,param_2,(int)param_1[8],(int)param_1[8]);
                if ((int)uVar3 != 1) {
                  return uVar3;
                }
                uVar6 = uVar6 + 1;
                lVar2 = lVar2 + 0x78;
                if (*(uint *)(param_1 + 7) <= uVar6) {
                  return uVar3;
                }
              }
              return 0x34;
            }
            lVar2 = 0;
            uVar6 = 0;
            while( true ) {
              lVar5 = *param_1 + lVar2;
              *(undefined8 *)(lVar5 + 0x68) = 0;
              *(undefined1 *)(lVar5 + 0x70) = 0;
              uVar3 = FUN_02e06994(lVar5 + 0x38,param_2,(int)param_1[8]);
              if ((int)uVar3 != 1) {
                return uVar3;
              }
              uVar3 = FUN_02e06994(lVar5 + 0x48,param_2,(int)param_1[8]);
              if ((int)uVar3 != 1) {
                return uVar3;
              }
              uVar3 = FUN_02e06994(lVar5 + 0x58,param_2,(int)param_1[8]);
              if ((int)uVar3 != 1) {
                return uVar3;
              }
              lVar4 = (**(code **)(*param_2 + 0x10))
                                (param_2,((ulong)*(uint *)(param_1 + 8) & 0xfffffffe) * 2 + 4);
              *(long *)(lVar5 + 0x68) = lVar4;
              if (lVar4 == 0) break;
              uVar3 = FUN_02e07244(lVar5,param_2,
                                   *(uint *)(param_1 + 8) + (*(uint *)(param_1 + 8) >> 2));
              if ((int)uVar3 != 1) {
                return uVar3;
              }
              uVar3 = FUN_02e07504(lVar5 + 0x18,param_2,(int)param_1[8],(int)param_1[8]);
              if ((int)uVar3 != 1) {
                return uVar3;
              }
              uVar6 = uVar6 + 1;
              lVar2 = lVar2 + 0x78;
              if (*(uint *)(param_1 + 7) <= uVar6) {
                return uVar3;
              }
            }
            return 0x34;
          }
        }
      }
      return 1;
    }
  }
  return 0x34;
}


