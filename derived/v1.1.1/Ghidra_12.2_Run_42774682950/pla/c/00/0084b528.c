/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084b528; name: FUN_0084b528
 */


void FUN_0084b528(undefined8 param_1,long *param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_50;
  undefined4 local_48;
  undefined4 local_38 [2];
  
  if ((short)param_2[5] == 0) {
    uVar5 = 0x1040c;
  }
  else {
    if ((((param_3 != 0) && (param_2[1] != param_3)) &&
        (uVar2 = param_4 & 0xff, *(byte *)(param_2 + 2) != uVar2)) && (uVar2 < 0x18)) {
      if (param_2[(ulong)(byte)param_4 + 0x7f] != 0) {
        plVar4 = (long *)(**(code **)(*param_2 + 0x40))(param_2,param_4);
        if ((param_5 & 1) == 0) {
          uVar3 = *(ushort *)((long)plVar4 + 0x1a);
          if (uVar3 != 0) {
            uVar6 = 0;
            do {
              uVar10 = *(int *)((long)plVar4 + 0x14) + (uint)uVar6;
              uVar7 = 0;
              if (*(ushort *)(plVar4 + 2) <= uVar10) {
                uVar7 = (uint)*(ushort *)(plVar4 + 2);
              }
              uVar9 = (ulong)(uVar10 - uVar7);
              if (*(char *)(plVar4[1] + uVar9 * 0x5b8) == '\0') break;
              if (*(char *)(plVar4[1] + uVar9 * 0x5b8 + 1) != '\0') goto LAB_0084b668;
              if (uVar6 < uVar3) {
                uVar6 = uVar6 + 1;
              }
            } while (uVar6 < uVar3);
          }
          plVar4 = (long *)(**(code **)(*param_2 + 0x40))(param_2,param_4);
        }
        (**(code **)(*plVar4 + 0x10))();
LAB_0084b668:
        uVar3 = *(ushort *)((long)param_2 + 0x32);
        if (uVar3 == 0) {
          uVar10 = ~(1 << (ulong)(param_4 & 0x1f));
          uVar9 = (ulong)(uVar2 >> 5);
        }
        else {
          uVar6 = *(ushort *)(param_2 + 5);
          lVar8 = param_2[4];
          uVar7 = 0;
          uVar10 = ~(1 << (ulong)(param_4 & 0x1f));
          uVar9 = (ulong)(uVar2 >> 5);
          do {
            uVar2 = 0;
            if ((uint)uVar6 <= uVar7 + *(int *)((long)param_2 + 0x2c)) {
              uVar2 = (uint)uVar6;
            }
            lVar1 = lVar8 + (ulong)(uVar7 + (*(int *)((long)param_2 + 0x2c) - uVar2)) * 0x5d0 +
                    uVar9 * 4;
            uVar7 = uVar7 + 1;
            *(uint *)(lVar1 + 0x2c) = *(uint *)(lVar1 + 0x2c) & uVar10;
          } while (uVar7 < uVar3);
        }
        *(uint *)((long)param_2 + uVar9 * 4 + 0x4f0) =
             *(uint *)((long)param_2 + uVar9 * 4 + 0x4f0) & uVar10;
        *(uint *)((long)param_2 + uVar9 * 4 + 0x4f4) =
             *(uint *)((long)param_2 + uVar9 * 4 + 0x4f4) & uVar10;
        FUN_0084b940(param_2);
        *(uint *)((long)param_2 + uVar9 * 4 + 0x4f0) =
             *(uint *)((long)param_2 + uVar9 * 4 + 0x4f0) & uVar10;
        *(uint *)((long)param_2 + uVar9 * 4 + 0x4f4) =
             *(uint *)((long)param_2 + uVar9 * 4 + 0x4f4) & uVar10;
        uVar9 = FUN_0084bae0(param_2);
        if ((uVar9 & 1) != 0) {
          (**(code **)(*param_2 + 0x40))(param_2,0);
          (**(code **)(*param_2 + 0x40))(param_2,1);
          (**(code **)(*param_2 + 0x40))(param_2,2);
          (**(code **)(*param_2 + 0x40))(param_2,3);
          (**(code **)(*param_2 + 0x40))(param_2,4);
          (**(code **)(*param_2 + 0x40))(param_2,5);
          (**(code **)(*param_2 + 0x40))(param_2,6);
          (**(code **)(*param_2 + 0x40))(param_2,7);
          (**(code **)(*param_2 + 0x40))(param_2,8);
          (**(code **)(*param_2 + 0x40))(param_2,9);
          (**(code **)(*param_2 + 0x40))(param_2,10);
          (**(code **)(*param_2 + 0x40))(param_2,0xb);
          (**(code **)(*param_2 + 0x40))(param_2,0xc);
          (**(code **)(*param_2 + 0x40))(param_2,0xd);
          (**(code **)(*param_2 + 0x40))(param_2,0xe);
          (**(code **)(*param_2 + 0x40))(param_2,0xf);
          (**(code **)(*param_2 + 0x40))(param_2,0x10);
          (**(code **)(*param_2 + 0x40))(param_2,0x11);
          (**(code **)(*param_2 + 0x40))(param_2,0x12);
          (**(code **)(*param_2 + 0x40))(param_2,0x13);
          (**(code **)(*param_2 + 0x40))(param_2,0x14);
          (**(code **)(*param_2 + 0x40))(param_2,0x15);
          (**(code **)(*param_2 + 0x40))(param_2,0x16);
          (**(code **)(*param_2 + 0x40))(param_2,0x17);
        }
        param_2[(ulong)(byte)param_4 + 0x7f] = 0;
        local_48 = 0;
        local_50 = 0x20000000;
        (**(code **)(*param_2 + 0x30))(param_2,&local_50);
      }
      local_50 = local_50 & 0xffffffff00000000;
      goto LAB_0084b598;
    }
    uVar5 = 0x10407;
  }
  local_50 = CONCAT44(local_50._4_4_,uVar5);
LAB_0084b598:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_38);
  FUN_007ee578(param_1,&local_50);
  return;
}


