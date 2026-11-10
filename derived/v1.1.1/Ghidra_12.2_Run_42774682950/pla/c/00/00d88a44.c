/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d88a44; name: FUN_00d88a44
 */


void FUN_00d88a44(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong local_70;
  undefined8 *puStack_68;
  
  uVar4 = param_1[2];
  if (uVar4 == param_1[3]) {
    uVar5 = *param_1;
    uVar8 = param_1[1];
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      puVar7 = (undefined8 *)param_1[4];
      local_70 = 0;
      lVar6 = param_1[3] - uVar5;
      uVar4 = lVar6 >> 4;
      if (lVar6 == 0) {
        uVar4 = 1;
      }
      puStack_68 = puVar7;
      uVar5 = (**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,uVar4 << 5,8);
      if (uVar5 == 0) {
        (**(code **)(*(long *)*puVar7 + 0xb8))();
      }
      uVar1 = uVar5 + (uVar4 >> 2) * 0x20;
      uVar2 = uVar5 + uVar4 * 0x20;
      uVar4 = param_1[1];
      uVar3 = param_1[2];
      uVar8 = uVar1;
      local_88 = uVar5;
      uStack_80 = uVar1;
      local_78 = uVar1;
      local_70 = uVar2;
      if (uVar4 == uVar3) {
        local_78 = uVar4;
      }
      else {
        do {
          FUN_00d87ee0(puVar7,uVar8,uVar4);
          uVar4 = uVar4 + 0x20;
          uVar8 = uVar8 + 0x20;
        } while (uVar3 != uVar4);
        uVar4 = param_1[1];
        local_78 = param_1[2];
      }
      local_88 = *param_1;
      *param_1 = uVar5;
      param_1[1] = uVar1;
      local_70 = param_1[3];
      param_1[2] = uVar8;
      param_1[3] = uVar2;
      uStack_80 = uVar4;
      FUN_00d87da4(&local_88);
      uVar4 = param_1[2];
    }
    else {
      lVar6 = (long)(uVar8 - uVar5) >> 5;
      uVar5 = lVar6 + 2;
      if (-1 < lVar6 + 1) {
        uVar5 = lVar6 + 1;
      }
      uVar4 = FUN_00d88770(uVar8,uVar4,uVar8 + (uVar5 >> 1) * -0x20);
      param_1[1] = param_1[1] + (uVar5 >> 1) * -0x20;
      param_1[2] = uVar4;
    }
  }
  FUN_00d87ee0(param_1[4],uVar4,param_2);
  param_1[2] = param_1[2] + 0x20;
  return;
}


