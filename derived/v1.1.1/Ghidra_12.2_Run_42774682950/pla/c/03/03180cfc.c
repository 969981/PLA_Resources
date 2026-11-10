/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03180cfc; name: FUN_03180cfc
 */


void FUN_03180cfc(undefined4 param_1,long param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *local_128;
  undefined8 *local_120;
  undefined8 *puStack_118;
  undefined8 local_110;
  long *plStack_108;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long lStack_80;
  undefined8 local_68;
  
  lVar9 = tpidr_el0;
  local_88 = param_2;
  lStack_80 = param_3;
  local_68 = param_5;
  if (*(long *)(lVar9 + 0x38d490) == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar5;
    lVar9 = *(long *)(lVar5 + 0x10);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38d490) + 0x10);
  }
  if (lVar9 != 0) {
    puVar1 = *(undefined8 **)(lVar9 + 8);
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtQueryMediator::buildAabbTreeWithMerging";
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
  }
  puVar2 = PTR_PTR_0434a090;
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  uVar6 = (ulong)(param_3 - param_2) >> 5;
  iVar7 = (int)uVar6;
  local_90 = lVar9;
  if (0 < iVar7) {
    if (0x3fffffff < iVar7) {
      FUN_032bd0a8(uVar6 & 0xffffffff);
    }
    local_a0 = FUN_032bd1d4(puVar2,uVar6 & 0xffffffff,4,0,0,(long)&local_98 + 4);
    iVar7 = (int)((ulong)(lStack_80 - local_88) >> 5);
  }
  iVar10 = -(uint)((float)*param_4 == 0.0);
  iVar11 = -(uint)((float)((ulong)*param_4 >> 0x20) == 0.0);
  iVar12 = -(uint)((float)param_4[1] == 0.0);
  iVar13 = -(uint)((float)((ulong)param_4[1] >> 0x20) == 0.0);
  local_c0 = CONCAT17(~(byte)((uint)iVar11 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar11 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar11 >> 8),
                                        CONCAT14(~(byte)iVar11,
                                                 CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar10 >>
                                                                                   8),~(byte)iVar10)
                                                                  ))))));
  uStack_b8 = CONCAT17(~(byte)((uint)iVar13 >> 0x18),
                       CONCAT16(~(byte)((uint)iVar13 >> 0x10),
                                CONCAT15(~(byte)((uint)iVar13 >> 8),
                                         CONCAT14(~(byte)iVar13,
                                                  CONCAT13(~(byte)((uint)iVar12 >> 0x18),
                                                           CONCAT12(~(byte)((uint)iVar12 >> 0x10),
                                                                    CONCAT11(~(byte)((uint)iVar12 >>
                                                                                    8),~(byte)iVar12
                                                                            )))))));
  local_110 = param_6;
  plStack_108 = &local_a0;
  local_b0 = param_1;
  FUN_033299e0(0x25659f10);
  local_128 = &local_88;
  local_120 = &local_68;
  puStack_118 = &local_110;
  if (iVar7 != 0) {
    iVar10 = 0;
    uVar8 = 0x496fa3f;
    do {
      while( true ) {
        iVar12 = iVar7 - iVar10;
        iVar11 = iVar12;
        if (0x10 < iVar12) {
          iVar11 = 0x11;
        }
        if (0 < iVar12) {
          iVar12 = iVar11 + iVar10;
          do {
            FUN_03182a6c(&local_128,iVar10);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar12);
        }
        bVar3 = CARRY4(iVar11 * 0x3bef784,uVar8);
        uVar8 = iVar11 * 0x3bef784 + uVar8;
        if (bVar3) break;
        if (iVar10 == iVar7) goto LAB_03180e74;
      }
      FUN_033299e0(0x25659f09);
    } while (iVar10 != iVar7);
  }
LAB_03180e74:
  lVar5 = local_98;
  uVar8 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_a0 != 0)) {
    FUN_032cf244(puVar2,local_a0,4,uVar8 & 0x3fffffff);
  }
  if (lVar9 != 0) {
    puVar1 = *(undefined8 **)(lVar9 + 8);
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
  }
  return;
}


