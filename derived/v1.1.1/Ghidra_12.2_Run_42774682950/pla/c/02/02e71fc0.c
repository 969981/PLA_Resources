/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71fc0; name: FUN_02e71fc0
 */


undefined8 FUN_02e71fc0(long param_1,byte param_2,uint param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  
  uVar8 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = (uint)param_1 / uVar8;
    }
    for (plVar6 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                            (ulong)((uint)param_1 - uVar2 * uVar8) * 8); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      if (plVar6[1] == param_1) {
        if ((2 < *(uint *)(plVar6[2] + 0x40)) &&
           (lVar4 = *(long *)(*(long *)(plVar6[2] + 0x38) + 0x10), lVar4 != 0)) goto LAB_02e7203c;
        break;
      }
    }
  }
  puVar3 = (undefined8 *)FUN_02ef21f4();
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = 0x1f;
  }
  else {
    lVar4 = FUN_02e42e10();
    iVar1 = *(int *)(puVar3 + 10);
    *(int *)(puVar3 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar3)(puVar3);
      FUN_02f59e60(4,puVar3);
    }
    if (lVar4 == 0) {
      uVar5 = 0x34;
    }
    else {
LAB_02e7203c:
      plVar6 = (long *)(lVar4 + 0x20);
      *(byte *)(lVar4 + 0x88) = param_2 & 1;
      if (*plVar6 != 0) {
        FUN_02f59e70(4);
        *(undefined8 *)(lVar4 + 0x28) = 0;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *plVar6 = 0;
      }
      if (param_4 != (void *)0x0) {
        uVar8 = param_3 & 0xff;
        uVar9 = (ulong)uVar8;
        if ((param_3 & 0xff) == 0) {
          return 0x4e;
        }
        uVar2 = uVar8 + 3 >> 2;
        __dest = (void *)FUN_02f59e40(4,uVar2 << 5,0x10);
        *plVar6 = (long)__dest;
        if (__dest == (void *)0x0) {
          return 2;
        }
        *(uint *)(lVar4 + 0x38) = param_3;
        *(void **)(lVar4 + 0x28) = __dest;
        *(ulong *)(lVar4 + 0x30) = (long)__dest + (ulong)(uVar2 << 4);
        memcpy(__dest,param_4,(ulong)(uVar8 << 2));
        memcpy(*(void **)(lVar4 + 0x30),*(void **)(lVar4 + 0x28),(ulong)(uVar8 << 2));
        pfVar7 = *(float **)(lVar4 + 0x30);
        do {
          fVar10 = 0.0;
          if (-37.0 <= *pfVar7 * 0.05) {
            uVar8 = (uint)(*pfVar7 * 1393317.6 + 1.0653532e+09);
            fVar10 = (float)(uVar8 & 0x7fffff | 0x3f800000);
            fVar10 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar8 & 0xff800000);
          }
          uVar9 = uVar9 - 1;
          *pfVar7 = fVar10;
          pfVar7 = pfVar7 + 1;
        } while (uVar9 != 0);
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


