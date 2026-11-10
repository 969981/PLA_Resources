/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b3bc4; name: FUN_031b3bc4
 */


void FUN_031b3bc4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x44) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x30) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffff;
  iVar3 = *(int *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x7c) = iVar3 >> 3;
  FUN_031b7340(param_1 + 0x200,param_3);
  *(long *)(param_1 + 0x360) = param_1 + 0x370;
  *(undefined8 *)(param_1 + 0x368) = 0x8000003200000000;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x338) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (0x200 < *(int *)((long)param_2 + 0x14)) {
    pvVar9 = (void *)param_2[1];
    uVar4 = (*(int *)((long)param_2 + 0x14) - 0x200U) / 0x12;
    if (0x7fff < uVar4) {
      uVar4 = 0x8000;
    }
    pvVar8 = (void *)((long)pvVar9 + 0x200);
    *(void **)(param_1 + 0x10) = pvVar8;
    *(uint *)(param_1 + 0x28) = uVar4;
    *(ulong *)(param_1 + 0x18) = (long)pvVar8 + (ulong)(uVar4 << 4);
    *(void **)(param_1 + 0x20) = pvVar9;
    if (pvVar9 != (void *)0x0) {
      pvVar10 = pvVar9;
      if (((ulong)pvVar9 & 0xf) == 0) {
        pvVar11 = (void *)((long)pvVar9 + 0x200);
      }
      else {
        pvVar11 = (void *)((long)pvVar9 + (4 - (((ulong)pvVar9 & 0xf) >> 2)) * 4);
        if (pvVar9 < pvVar11) {
          memset(pvVar9,0xff,((ulong)~(uint)pvVar9 & 0xc) + 4);
          do {
            pvVar10 = (void *)((long)pvVar10 + 4);
          } while (pvVar10 < pvVar11);
        }
        pvVar11 = (void *)((long)pvVar10 + 0x1f0);
      }
      pvVar2 = pvVar11;
      if (pvVar11 <= (void *)((long)pvVar10 + 0x10U)) {
        pvVar2 = (void *)((long)pvVar10 + 0x10U);
      }
      memset(pvVar10,0xff,(long)pvVar2 + ~(ulong)pvVar10 + 0x10 & 0xfffffffffffffff0);
      uVar5 = ~(ulong)pvVar10;
      uVar1 = ((uint)((long)pvVar2 + uVar5 >> 4) & 0xfffffff) + 1;
      uVar6 = (ulong)uVar1 & 7;
      if ((uVar1 & 7) != 0) {
        do {
          pvVar10 = (void *)((long)pvVar10 + 0x10);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (0x6f < (long)pvVar2 + uVar5) {
        do {
          pvVar10 = (void *)((long)pvVar10 + 0x80);
        } while (pvVar10 < pvVar11);
      }
      if (pvVar10 < pvVar8) {
        memset(pvVar10,0xff,(long)pvVar9 + (0x203 - (long)pvVar10) & 0xfffffffffffffffc);
      }
      pvVar8 = *(void **)(param_1 + 0x18);
      uVar5 = (ulong)(uVar4 >> 1);
      pvVar9 = pvVar8;
      uVar6 = uVar5;
      if (((ulong)pvVar8 & 0xf) != 0) {
        uVar6 = 4 - (((ulong)pvVar8 & 0xf) >> 2);
        uVar7 = uVar5;
        if (uVar6 <= uVar5) {
          uVar7 = uVar6;
        }
        pvVar10 = (void *)((long)pvVar8 + uVar7 * 4);
        uVar6 = uVar5 - uVar7;
        if (pvVar8 < pvVar10) {
          memset(pvVar8,0xff,uVar7 << 2);
          do {
            pvVar9 = (void *)((long)pvVar9 + 4);
          } while (pvVar9 < pvVar10);
        }
      }
      if ((3 < uVar6) && (0 < (long)(uVar6 & 0xfffffffffffffffc))) {
        pvVar10 = (void *)((long)pvVar9 + (uVar6 & 0xfffffffffffffffc) * 4);
        pvVar11 = pvVar10;
        if (pvVar10 <= (void *)((long)pvVar9 + 0x10U)) {
          pvVar11 = (void *)((long)pvVar9 + 0x10U);
        }
        uVar6 = (long)pvVar11 + ~(ulong)pvVar9;
        memset(pvVar9,0xff,uVar6 + 0x10 & 0xfffffffffffffff0);
        uVar1 = ((uint)(uVar6 >> 4) & 0xfffffff) + 1;
        uVar7 = (ulong)uVar1 & 7;
        if ((uVar1 & 7) != 0) {
          do {
            pvVar9 = (void *)((long)pvVar9 + 0x10);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (0x6f < uVar6) {
          do {
            pvVar9 = (void *)((long)pvVar9 + 0x80);
          } while (pvVar9 < pvVar10);
        }
      }
      if (pvVar9 < (void *)((long)pvVar8 + uVar5 * 4)) {
        memset(pvVar9,0xff,
               (long)pvVar8 + ~(ulong)pvVar9 + (ulong)((uVar4 >> 1) << 2) + 4 & 0xfffffffffffffffc);
      }
    }
  }
  return;
}


