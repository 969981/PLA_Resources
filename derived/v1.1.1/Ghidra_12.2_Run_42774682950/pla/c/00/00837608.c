/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00837608; name: FUN_00837608
 */


undefined8 FUN_00837608(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_78;
  long local_70 [4];
  undefined8 local_50;
  undefined2 local_48;
  
  puVar5 = PTR_DAT_04377550;
  puVar4 = PTR_DAT_043773c0;
  lVar1 = *(long *)PTR_DAT_043773c0 + 0x10;
  iVar6 = FUN_0082b270(*(undefined8 *)PTR_DAT_04377550);
  local_78 = param_2;
  if (iVar6 == 2) {
    FUN_007f0d08(local_70,param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x30);
    local_48 = *(undefined2 *)(param_2 + 0x38);
    uVar7 = FUN_008483b0(lVar1,0x98);
    uVar9 = 5;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x361);
    uVar8 = FUN_0082b0c0(*(undefined8 *)puVar5,*(undefined8 *)(param_2 + 0x30));
    if ((uint)bVar2 + (uVar8 & 0xffff) <= (uint)*(ushort *)(*(long *)puVar5 + 8)) {
      uVar10 = (ulong)*(ushort *)(*(long *)puVar4 + 0x50);
      if (uVar10 == 0) {
        uVar14 = 0xfd;
      }
      else {
        uVar11 = 0;
        uVar14 = 0xfd;
        do {
          if (*(char *)(*(long *)(param_1 + 0x788) + uVar11) == '\0') {
            uVar14 = uVar11 & 0xffffffff;
            break;
          }
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      uVar8 = FUN_0082f0d8(*(undefined8 *)PTR_DAT_04377ce8,param_2,uVar14);
      if ((uVar8 & 0xff) != 0xfd && (uVar8 & 0xff00) != 0xfd00) {
        *(undefined4 *)(param_2 + 0x3c) = 2;
        if (((uint)uVar14 & 0xff) < (uint)*(ushort *)(*(long *)puVar4 + 0x50)) {
          *(undefined1 *)(*(long *)(param_1 + 0x788) + (uVar14 & 0xff)) = 1;
        }
        FUN_00854f64();
        uVar10 = FUN_00839e9c(param_1 + 0x860,*(undefined8 *)(param_2 + 0x30),
                              *(undefined2 *)(param_2 + 0x38));
        if ((uVar10 & 1) == 0) {
          if (*(code **)(param_1 + 0x778) != (code *)0x0) {
            local_78 = (ulong)local_78._4_4_ << 0x20;
            local_70[0] = param_2;
            (**(code **)(param_1 + 0x778))(&local_78);
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0x850);
          if (iVar6 < 0x17) {
            if (0 < iVar6) {
              plVar12 = (long *)(param_1 + 0x798);
              lVar13 = (long)iVar6;
              do {
                if (*plVar12 == *(long *)(param_2 + 0x30)) goto LAB_008378b0;
                lVar13 = lVar13 + -1;
                plVar12 = plVar12 + 1;
              } while (lVar13 != 0);
            }
            *(long *)(param_1 + (long)iVar6 * 8 + 0x798) = *(long *)(param_2 + 0x30);
            *(int *)(param_1 + 0x850) = iVar6 + 1;
          }
LAB_008378b0:
          FUN_008359ac(param_1);
        }
        *(undefined1 *)(param_1 + 0x792) = 1;
        local_78 = param_2;
        FUN_007f0d08(local_70,param_2 + 8);
        local_50 = *(undefined8 *)(param_2 + 0x30);
        local_48 = *(undefined2 *)(param_2 + 0x38);
        uVar3 = *(ushort *)(param_1 + 0xdc);
        iVar6 = uVar3 + 2;
        if (((uVar3 + 1 ^ 0xffffffff) & 0xffff) != 0) {
          iVar6 = uVar3 + 1;
        }
        uVar9 = FUN_008483b0(lVar1,0x98);
        FUN_00836cec(param_1,&local_78,1,iVar6,0,0x98,uVar9);
        return 1;
      }
      FUN_007f0d08(local_70,param_2 + 8);
      local_50 = *(undefined8 *)(param_2 + 0x30);
      local_48 = *(undefined2 *)(param_2 + 0x38);
      iVar6 = FUN_0083fd80(param_2 + 0x98);
      uVar7 = 8;
      if (iVar6 != 1) {
        uVar7 = 6;
      }
      uVar9 = 7;
      if (iVar6 != 2) {
        uVar9 = uVar7;
      }
      uVar3 = *(ushort *)(param_1 + 0xdc);
      iVar6 = uVar3 + 2;
      if (((uVar3 + 1 ^ 0xffffffff) & 0xffff) != 0) {
        iVar6 = uVar3 + 1;
      }
      uVar7 = FUN_008483b0(lVar1,0x98);
      goto LAB_00837708;
    }
    FUN_007f0d08(local_70,param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x30);
    local_48 = *(undefined2 *)(param_2 + 0x38);
    uVar7 = FUN_008483b0(lVar1,0x98);
    uVar9 = 4;
  }
  iVar6 = 0;
LAB_00837708:
  FUN_00836cec(param_1,&local_78,uVar9,iVar6,0,0x98,uVar7);
  return 0;
}


