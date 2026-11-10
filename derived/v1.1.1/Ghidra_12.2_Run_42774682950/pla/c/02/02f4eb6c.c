/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4eb6c; name: FUN_02f4eb6c
 */


undefined8 FUN_02f4eb6c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long local_60;
  ushort local_58 [2];
  undefined1 auStack_54 [4];
  
  uVar7 = 2;
  uVar4 = (**(code **)*param_2)(param_2,local_58,2,auStack_54);
  uVar2 = local_58[0];
  if ((uVar4 & 1) != 0) {
    uVar8 = (uint)local_58[0];
    if (uVar8 != 0) {
      lVar5 = (*DAT_0442d138)(0,uVar8 * 0x18);
      param_1[2] = lVar5;
      if (lVar5 == 0) {
        return 2;
      }
      *(uint *)((long)param_1 + 0x1c) = (uint)uVar2;
      local_60 = *param_1 + 0x110;
      if (local_58[0] != 0) {
        lVar5 = 0;
        uVar4 = 1;
        while( true ) {
          uVar1 = *(uint *)(param_1 + 3);
          if (uVar8 <= uVar1) {
            iVar3 = uVar8 + (uVar8 >> 1);
            if (uVar8 == 0) {
              iVar3 = 1;
            }
            uVar8 = iVar3 + uVar8;
            lVar6 = (*DAT_0442d148)(0,param_1[2],(ulong)uVar8 * 0x18);
            if (lVar6 == 0) {
              return 2;
            }
            param_1[2] = lVar6;
            *(uint *)((long)param_1 + 0x1c) = uVar8;
          }
          if (uVar8 <= uVar1) {
            return 2;
          }
          uVar8 = *(uint *)(param_1 + 3);
          *(uint *)(param_1 + 3) = uVar8 + 1;
          if (param_1[2] + (ulong)uVar8 * 0x18 == 0) {
            return 2;
          }
          lVar6 = param_1[2] + (ulong)uVar8 * 0x18;
          *(undefined2 *)(lVar6 + 8) = 0;
          *(byte *)(lVar6 + 10) = *(byte *)(lVar6 + 10) & 0xfc;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          iVar3 = FUN_02f4bdc0(param_1[2] + lVar5,param_2,&local_60,param_1);
          if (iVar3 != 1) {
            return 2;
          }
          if (local_58[0] <= uVar4) break;
          uVar8 = *(uint *)((long)param_1 + 0x1c);
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x18;
        }
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


