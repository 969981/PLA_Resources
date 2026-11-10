/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef8138; name: FUN_02ef8138
 */


undefined4 FUN_02ef8138(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  lVar5 = DAT_0440a120;
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x134) >> 6 & 1) != 0)) {
    lVar7 = *(long *)(lVar8 + 0x138);
    if (lVar7 == 0) {
      uVar2 = *(uint *)(lVar8 + 0x124);
      if (uVar2 != 0) {
        pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(lVar5 + 0x178);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar7 = *(long *)(*(long *)(lVar5 + 0x170) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
              lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
            if (*(uint *)(lVar7 + 0x10) == uVar2) {
              *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar1);
              *(long *)(lVar8 + 0x138) = lVar7;
              goto LAB_02ef8160;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
        *(undefined8 *)(lVar8 + 0x138) = 0;
      }
    }
    else {
LAB_02ef8160:
      uVar6 = (ulong)*(byte *)(lVar7 + 0xd8);
      if (((uVar6 != 0xff) && (lVar5 = *(long *)(lVar7 + uVar6 * 0x18 + 0x30), lVar5 != 0)) &&
         (uVar6 = (ulong)(*(int *)(lVar7 + uVar6 * 0x18 + 0x38) - 2),
         *(float *)(lVar5 + uVar6 * 0xc + 4) <= DAT_042ac988)) {
        uVar9 = *(undefined4 *)(lVar5 + uVar6 * 0xc);
        uVar6 = (ulong)*(byte *)(lVar7 + 0xd9);
        if (uVar6 == 0xff) {
          return uVar9;
        }
        lVar5 = *(long *)(lVar7 + uVar6 * 0x18 + 0x30);
        if (lVar5 == 0) {
          return uVar9;
        }
        if (*(float *)(lVar5 + (ulong)(*(int *)(lVar7 + uVar6 * 0x18 + 0x38) - 2) * 0xc + 4) <=
            DAT_042ac988) {
          return uVar9;
        }
      }
    }
  }
  return 0x501502f9;
}


