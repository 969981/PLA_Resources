/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fdfcd4; name: FUN_02fdfcd4
 */


undefined8 FUN_02fdfcd4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = -0x8000000000000000;
  local_40 = 0;
  local_38 = -0x8000000000000000;
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (long)iVar4 + param_1 + 0x40;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x50);
  lVar7 = 0;
  if (iVar1 != 0) {
    lVar7 = (long)iVar1 + param_1 + 0x50;
  }
  if (iVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)iVar4 + param_1 + 0x58;
  }
  iVar4 = FUN_02fe1f44(lVar5,lVar5 + (long)*(int *)(param_1 + 0x44) * 0xc,lVar7,
                       lVar7 + (long)*(int *)(param_1 + 0x54) * 4,lVar8,
                       lVar8 + *(int *)(param_1 + 0x5c),&local_30,&local_40);
  lVar5 = local_38;
  if (iVar4 < 0) {
    uVar6 = *(ushort *)(param_1 + 0x1a) & 0xf7ff;
    uVar9 = 0x80040200;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    if (0 < (int)local_38) {
      lVar7 = 0;
      do {
        lVar8 = lVar7 * 4;
        lVar7 = lVar7 + 1;
        *(undefined4 *)(param_1 + 0x68 + lVar8 + *(int *)(param_1 + 0x68)) =
             *(undefined4 *)(local_40 + lVar8);
      } while (lVar7 < (int)local_38);
    }
    if (0 < (int)local_28) {
      lVar7 = 0;
      do {
        lVar8 = lVar7 * 4;
        lVar7 = lVar7 + 1;
        *(undefined4 *)(param_1 + 0x60 + lVar8 + *(int *)(param_1 + 0x60)) =
             *(undefined4 *)(local_30 + lVar8);
      } while (lVar7 < (int)local_28);
    }
    uVar6 = *(ushort *)(param_1 + 0x1a) | 0x800;
    uVar9 = 0;
  }
  *(ushort *)(param_1 + 0x1a) = uVar6;
  puVar2 = PTR_PTR_0434a090;
  uVar3 = local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_40 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))(PTR_PTR_0434a090,local_40,uVar3 << 2);
  }
  lVar5 = local_28;
  uVar3 = local_28._4_4_;
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_30 != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_30,uVar3 << 2);
  }
  return uVar9;
}


