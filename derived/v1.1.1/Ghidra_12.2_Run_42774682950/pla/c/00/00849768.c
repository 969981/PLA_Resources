/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00849768; name: FUN_00849768
 */


void FUN_00849768(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int local_90 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar6 = local_90;
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  uStack_68 = param_3[3];
  FUN_00847298(local_60,param_2,&local_80);
  if (local_60[0] == 0) {
    lVar7 = *(long *)(param_2 + 0x68);
    if (lVar7 == 0) {
      local_90[0] = 0x1040c;
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x5a) - 1;
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 100) = 0;
      if (uVar1 != 0) {
        lVar8 = 0;
        while( true ) {
          (**(code **)(*(long *)(lVar7 + lVar8) + 0x18))(local_90);
          lVar7 = *(long *)(param_2 + 0x68);
          uVar3 = FUN_00847424(param_2);
          uVar4 = FUN_00847434(param_2);
          uVar5 = FUN_00847388(param_2);
          uVar2 = FUN_008473d0(param_2);
          FUN_0084b2e8(lVar7 + lVar8,uVar3,uVar4,uVar5,uVar2);
          if ((ulong)uVar1 * 0x520 + -0x520 == lVar8) break;
          lVar7 = *(long *)(param_2 + 0x68);
          lVar8 = lVar8 + 0x520;
        }
      }
      local_90[0] = 0;
    }
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_48);
  }
  else {
    piVar6 = local_60;
  }
  FUN_007ee578(param_1,piVar6);
  return;
}


