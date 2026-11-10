/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2330; name: FUN_02fa2330
 */


uint FUN_02fa2330(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 *local_80;
  ushort local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 *local_50;
  ushort local_48;
  
  local_78 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x1c);
  if ((ulong)local_78 == 0) {
    uVar4 = *(uint *)(param_3 + ((ulong)(*(ushort *)(param_2 + 0x28) >> 3) & 0x1ffc)) >>
            (ulong)(*(ushort *)(param_2 + 0x28) & 0x1f) & 1;
  }
  else {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = *param_1 + (long)param_1;
    }
    local_80 = (undefined8 *)(lVar1 + (ulong)local_78 * 0x20);
    local_90 = local_80[2];
    uStack_88 = local_80[3] & 0xffffffff;
    uStack_98 = local_80[1];
    local_a0 = *local_80;
    local_48 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x1e);
    local_50 = (undefined8 *)(lVar1 + (ulong)local_48 * 0x20);
    local_60 = local_50[2];
    uStack_58 = local_50[3] & 0xffffffff;
    uStack_68 = local_50[1];
    local_70 = *local_50;
    uVar3 = FUN_02fa2330(param_1,&local_a0,param_3);
    uVar4 = FUN_02fa2330(param_1,&local_70,param_3);
    uVar2 = *(ushort *)(param_2 + 0x28);
    uVar5 = (ulong)(uVar2 >> 3) & 0x1ffc;
    uVar4 = uVar4 | uVar3;
    *(uint *)(param_3 + uVar5) =
         *(uint *)(param_3 + uVar5) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU) |
         (uint)(uVar4 != 0) << (ulong)(uVar2 & 0x1f);
  }
  return uVar4;
}


