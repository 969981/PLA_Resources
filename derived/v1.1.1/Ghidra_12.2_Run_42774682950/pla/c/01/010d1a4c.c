/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d1a4c; name: FUN_010d1a4c
 */


ulong FUN_010d1a4c(long *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte local_30 [4];
  byte local_2c [4];
  uint local_28;
  uint local_24;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1]);
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,local_2c,1,0);
    uVar6 = (uint)local_2c[0] << 8;
    if ((uVar2 & 1) == 0) {
      uVar6 = 0;
    }
    uVar2 = uVar2 & 1;
  }
  if (uVar2 == 0) {
LAB_010d1ccc:
    uVar5 = 0;
  }
  else {
    uVar6 = uVar6 >> 8;
    uVar5 = (ulong)uVar6;
    if (9 < (uVar6 - 8 & 0xff)) {
      if (uVar6 - 1 < 2) {
        uVar8 = 0;
        uVar7 = 0;
        uVar5 = 3;
        goto LAB_010d1afc;
      }
      if (uVar6 == 4) {
        plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,4,plVar3[1] + 1);
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_28,4,1);
          if ((uVar2 & 1) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulong)local_28 << 0x20;
          }
          uVar2 = uVar2 & 1;
        }
        if (uVar2 == 0) {
          uVar5 = 0;
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar5 = 4;
          uVar8 = 0;
        }
        goto LAB_010d1afc;
      }
      if (uVar6 == 5) {
        plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
        plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,4,plVar3[1] + 1);
        if ((uVar5 & 1) == 0) {
          uVar7 = 0;
          uVar2 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,&local_24,4,1);
          if ((uVar2 & 1) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulong)local_24 << 0x20;
          }
          uVar2 = uVar2 & 1;
        }
        if (uVar2 != 0) {
          plVar3 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
          plVar4 = (long *)(**(code **)(*plVar3 + 0x28))();
          uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,1,plVar3[1] + 5);
          if ((uVar5 & 1) == 0) {
            uVar8 = 0;
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,local_30,1,5);
            uVar8 = (ulong)local_30[0] << 8;
            if ((uVar2 & 1) == 0) {
              uVar8 = 0;
            }
            uVar2 = uVar2 & 1;
          }
          if (uVar2 != 0) {
            iVar1 = (int)(uVar8 >> 8);
            if (iVar1 == 3 || (iVar1 - 8U & 0xff) < 10) {
              uVar5 = 5;
            }
            else {
              uVar5 = 0;
              uVar7 = 0;
              uVar8 = 0;
            }
            goto LAB_010d1afc;
          }
        }
      }
      goto LAB_010d1ccc;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
LAB_010d1afc:
  return uVar8 | uVar5 | uVar7;
}


