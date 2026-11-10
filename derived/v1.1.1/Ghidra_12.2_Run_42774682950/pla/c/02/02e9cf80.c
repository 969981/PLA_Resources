/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9cf80; name: FUN_02e9cf80
 */


undefined1  [16] FUN_02e9cf80(undefined8 param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  undefined4 local_44;
  
  lVar7 = DAT_0440a120;
  uVar11 = 0;
  auVar10 = ZEXT816(0);
  if ((*(byte *)(param_2 + 0x134) >> 6 & 1) != 0) {
    lVar9 = *(long *)(param_2 + 0x138);
    if (lVar9 == 0) {
      uVar2 = *(uint *)(param_2 + 0x124);
      auVar10 = ZEXT816(0);
      if (uVar2 != 0) {
        pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar7 + 0x178);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar9 = *(long *)(*(long *)(lVar7 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
            if (*(uint *)(lVar9 + 0x10) == uVar2) {
              *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              *(long *)(param_2 + 0x138) = lVar9;
              goto LAB_02e9cfb4;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar11;
        auVar10 = auVar10 << 0x40;
        *(undefined8 *)(param_2 + 0x138) = 0;
      }
    }
    else {
LAB_02e9cfb4:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar11;
      uVar11 = (ulong)*(byte *)(lVar9 + 0xdd);
      auVar10 = auVar5 << 0x40;
      if ((uVar11 != 0xff) &&
         (plVar8 = (long *)(lVar9 + uVar11 * 0x18 + 0x30), auVar10 = auVar6 << 0x40, *plVar8 != 0))
      {
        lVar9 = lVar9 + uVar11 * 0x18;
        local_44 = *(undefined4 *)(lVar9 + 0x40);
        auVar10 = FUN_02e74568(param_1,plVar8,&local_44);
        *(undefined4 *)(lVar9 + 0x40) = local_44;
      }
    }
  }
  return auVar10;
}


