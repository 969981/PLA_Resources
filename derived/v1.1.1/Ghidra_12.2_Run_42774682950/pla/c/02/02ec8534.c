/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec8534; name: FUN_02ec8534
 */


int FUN_02ec8534(float param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  void *__dest;
  float afStack_250 [128];
  float local_44;
  
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (-90.0 <= param_1) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 < 90.0;
      bVar4 = param_1 == 90.0;
      bVar5 = false;
    }
  }
  if (bVar4 || bVar3 != bVar5) {
    uVar1 = *(uint *)(param_2 + 0x48);
    if (*(uint *)(param_2 + 0x48) <= param_4) {
      uVar1 = param_4;
    }
    lVar7 = FUN_02f59e30(0,(ulong)uVar1 * 4);
    if (lVar7 == 0) {
      iVar6 = 2;
    }
    else {
      __dest = (void *)((long)afStack_250 + (0x200 - ((ulong)uVar1 * 4 + 0xf & 0x7fffffff0)));
      if (param_4 != 0) {
        memcpy(__dest,param_3,(ulong)param_4 << 2);
      }
      if (param_4 < *(uint *)(param_2 + 0x48)) {
        lVar12 = (ulong)param_4 * 4;
        lVar10 = (ulong)*(uint *)(param_2 + 0x48) - (ulong)param_4;
        pfVar9 = (float *)((long)__dest + lVar12);
        pfVar11 = (float *)(*(long *)(param_2 + 0x40) + lVar12);
        do {
          lVar10 = lVar10 + -1;
          *pfVar9 = *pfVar11 * 57.295776;
          pfVar9 = pfVar9 + 1;
          pfVar11 = pfVar11 + 1;
        } while (lVar10 != 0);
      }
      iVar6 = FUN_02f00824(__dest,param_4,lVar7,&local_44);
      if (iVar6 == 1) {
        if (*(long *)(param_2 + 0x40) != 0) {
          FUN_02f59e60(0);
        }
        *(long *)(param_2 + 0x40) = lVar7;
        *(uint *)(param_2 + 0x48) = uVar1;
        *(float *)(param_2 + 0x4c) = 1.0 / local_44;
        *(float *)(param_2 + 0x50) = param_1 * 0.017453294;
        iVar2 = *(int *)(param_2 + 0x80);
      }
      else {
        FUN_02f59e60(0,lVar7);
        iVar2 = *(int *)(param_2 + 0x80);
      }
      if (iVar2 != 0) {
        puVar13 = *(undefined4 **)(param_2 + 0x78);
        do {
          puVar14 = puVar13 + 4;
          FUN_02ef828c(*(undefined4 *)(param_2 + 0x50),*puVar13,*(undefined8 *)(param_2 + 0x40),
                       puVar13 + 2);
          puVar13 = puVar14;
        } while (puVar14 !=
                 (undefined4 *)(*(long *)(param_2 + 0x78) + (ulong)*(uint *)(param_2 + 0x80) * 0x10)
                );
      }
      if (*(int *)(param_2 + 0x70) != 0) {
        lVar7 = *(long *)(param_2 + 0x68);
        do {
          FUN_02f59e60(0,*(undefined8 *)(lVar7 + 8));
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != *(long *)(param_2 + 0x68) + (ulong)*(uint *)(param_2 + 0x70) * 0x10);
      }
      uVar8 = (ulong)*(uint *)(param_2 + 0xb0);
      *(undefined4 *)(param_2 + 0x70) = 0;
      if (*(uint *)(param_2 + 0xb0) != 0) {
        lVar10 = *(long *)(param_2 + 0xa8);
        lVar7 = lVar10;
        do {
          if (*(long *)(lVar7 + 8) != 0) {
            *(undefined4 *)(lVar7 + 0x10) = 0;
            FUN_02f59e70(0);
            *(undefined8 *)(lVar7 + 8) = 0;
            *(undefined4 *)(lVar7 + 0x14) = 0;
            lVar10 = *(long *)(param_2 + 0xa8);
            uVar8 = (ulong)*(uint *)(param_2 + 0xb0);
          }
          lVar7 = lVar7 + 0x18;
        } while (lVar7 != lVar10 + uVar8 * 0x18);
      }
      *(undefined4 *)(param_2 + 0xb0) = 0;
    }
  }
  else {
    iVar6 = 0x1f;
  }
  return iVar6;
}


