/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086dba8; name: FUN_0086dba8
 */


void FUN_0086dba8(int *param_1,undefined2 *param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [6];
  undefined2 local_58;
  
  local_70[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_70);
  uVar5 = 0;
  do {
    FUN_00821b80(local_70);
    uVar6 = 0;
    uVar7 = 1;
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = FUN_00821c5c(local_70);
      uVar1 = (int)((ulong)((uint)uVar3 - (uint)uVar2) * (uVar4 & 0xffffffff) >> 0x20) + (uint)uVar2
      ;
      if ((uVar1 & 0xffff) != 0) {
        uVar6 = uVar1;
      }
      if (99 < uVar7) break;
      uVar7 = uVar7 + 1;
    } while ((uVar1 & 0xffff) == 0);
    *param_2 = (short)uVar6;
    FUN_007e3400(local_70);
    local_90[0] = 0;
    local_80[0] = 0;
    local_58 = (short)uVar6;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_80);
    FUN_007eb968(local_80,param_3,local_70,0,0);
    FUN_007ee660(local_90,local_80);
    FUN_007e34a4(local_70);
    FUN_007ee660(param_1,local_90);
    if ((*param_1 == 0) || (uVar5 = uVar5 + 1, 4 < uVar5)) {
      return;
    }
  } while( true );
}


