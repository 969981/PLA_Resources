/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea1ef4; name: FUN_02ea1ef4
 */


undefined8
FUN_02ea1ef4(undefined4 param_1,long param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  puVar4 = (undefined4 *)FUN_02ea2088(param_2 + 0xf8);
  if (puVar4 == (undefined4 *)0x0) {
    uVar10 = 2;
  }
  else {
    *puVar4 = param_1;
    puVar4[1] = param_4;
    puVar4[2] = param_5;
    puVar4[3] = param_6;
    puVar4[4] = param_7;
    lVar6 = DAT_0440a120;
    pMVar1 = (MutexType *)(DAT_0440a120 + 0x38);
    nn::os::LockMutex(pMVar1);
    uVar2 = *(uint *)(lVar6 + 0x60);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = param_3 / uVar2;
      }
      for (plVar9 = *(long **)(*(long *)(lVar6 + 0x58) + (ulong)(param_3 - uVar3 * uVar2) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        if (*(uint *)(plVar9 + 2) == param_3) {
          *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          puVar5 = (ulong *)plVar9[0x2f];
          if (puVar5 == (ulong *)0x0) {
            puVar5 = (ulong *)(*DAT_0442d138)(2,0x28);
            if (puVar5 == (ulong *)0x0) {
              plVar9[0x2f] = 0;
              uVar10 = 2;
              goto LAB_02ea1ff0;
            }
            *(undefined1 *)(puVar5 + 4) = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            *puVar5 = 0;
            puVar5[1] = 0xffffffffffffffff;
            plVar9[0x2f] = (long)puVar5;
          }
          uVar10 = 1;
          uVar7 = 1L << ((ulong)*(uint *)(&DAT_03a9f0d0 + (ulong)param_7 * 4) & 0x3f);
          if ((*puVar5 & uVar7) == 0) {
            *puVar5 = *puVar5 | uVar7;
            FUN_02ee89dc();
            lVar6 = plVar9[0x2f];
            *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
            if (*(uint *)(lVar6 + 0x18) == 0) {
              uVar10 = 1;
            }
            else {
              lVar8 = (ulong)*(uint *)(lVar6 + 0x18) << 4;
              uVar7 = 0xffffffffffffffff;
              puVar5 = *(ulong **)(lVar6 + 0x10);
              do {
                uVar7 = *puVar5 & uVar7;
                lVar8 = lVar8 + -0x10;
                uVar10 = 1;
                *(ulong *)(lVar6 + 8) = uVar7;
                puVar5 = puVar5 + 2;
              } while (lVar8 != 0);
            }
          }
LAB_02ea1ff0:
          (**(code **)(*plVar9 + 0x18))(plVar9);
          return uVar10;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    uVar10 = 1;
  }
  return uVar10;
}


