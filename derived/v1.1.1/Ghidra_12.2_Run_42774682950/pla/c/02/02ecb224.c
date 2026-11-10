/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecb224; name: FUN_02ecb224
 */


undefined8 FUN_02ecb224(long param_1)

{
  void *pvVar1;
  MutexType *pMVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  void *__dest;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  void *__src;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [12];
  undefined8 local_48;
  
  lVar13 = *(long *)(param_1 + 0x180);
  plVar14 = (long *)(param_1 + 0x18);
  lVar11 = *(long *)(lVar13 + 0x78);
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x10) == 0) {
      *(long **)(lVar11 + 0x10) = plVar14;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
      *(long *)(param_1 + 0x60) = *(long *)(lVar11 + 0x10);
      *(long **)(lVar11 + 0x10) = plVar14;
    }
    lVar13 = *(long *)(param_1 + 0x180);
  }
  local_48 = (**(code **)(*plVar14 + 0x28))(plVar14);
  uVar7 = (**(code **)(*plVar14 + 0x30))(plVar14);
  if (lVar13 != 0) {
    FUN_02ed8974(lVar13,plVar14,&local_48,uVar7 & 1);
    FUN_02ee8c8c(plVar14,lVar13);
  }
  uVar8 = FUN_02ef7fa0(plVar14);
  *(undefined8 *)(param_1 + 0x188) = uVar8;
  if ((*(byte *)(param_1 + 0x198) >> 6 & 1) != 0) goto LAB_02ecb3e8;
  uVar5 = *(uint *)(param_1 + 0x2f0);
  uVar7 = *(uint *)(param_1 + 0x2f4);
  if (uVar5 < uVar7) {
LAB_02ecb310:
    if (uVar7 <= uVar5) goto LAB_02ecb33c;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8);
    iVar3 = *(uint *)(param_1 + 0x2f0) + 1;
    *(int *)(param_1 + 0x2f0) = iVar3;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &DAT_0440adc8;
      goto LAB_02ecb33c;
    }
  }
  else {
    iVar3 = uVar7 + (uVar7 >> 1);
    __src = *(void **)(param_1 + 0x2e8);
    if (uVar7 == 0) {
      iVar3 = 1;
    }
    uVar7 = iVar3 + uVar7;
    pvVar1 = (void *)(param_1 + 0x2e0);
    if (uVar7 < 2) {
      __dest = pvVar1;
      if (__src == (void *)0x0) goto LAB_02ecb304;
LAB_02ecb2f8:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02ecb304;
      memcpy(__dest,__src,((ulong)uVar5 & 0x1fffffff) << 3);
      if (pvVar1 != __src) {
        (*DAT_0442d158)(0,__src);
      }
LAB_02ecb308:
      *(void **)(param_1 + 0x2e8) = __dest;
      *(uint *)(param_1 + 0x2f4) = uVar7;
      goto LAB_02ecb310;
    }
    __dest = (void *)(*DAT_0442d140)(0,(ulong)uVar7 << 3,4);
    if (__src != (void *)0x0) goto LAB_02ecb2f8;
LAB_02ecb304:
    if (__dest != (void *)0x0) goto LAB_02ecb308;
LAB_02ecb33c:
    iVar3 = *(int *)(param_1 + 0x2f0);
  }
  if (iVar3 != 0) {
    plVar14 = *(long **)(param_1 + 0x2e8);
    lVar11 = *plVar14;
    iVar3 = *(int *)(lVar11 + 8);
    plVar9 = (long *)FUN_02ed3680(lVar11,*(undefined8 *)(param_1 + 0x2a8),
                                  *(undefined4 *)(param_1 + 0x2b0));
    if (plVar9 != (long *)0x0) {
      if ((iVar3 == 0) &&
         (plVar10 = (long *)FUN_02f117e8(&DAT_0440adb8,*(undefined8 *)(lVar11 + 0x20)),
         plVar10 != (long *)0x0)) {
        *plVar10 = lVar11;
      }
      *plVar9 = param_1;
      *(short *)(lVar11 + 0x28) = *(short *)(lVar11 + 0x28) + 1;
    }
    plVar14 = plVar14 + 1;
    if (plVar14 != (long *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8)) {
      do {
        lVar11 = *plVar14;
        iVar3 = *(int *)(lVar11 + 8);
        plVar9 = (long *)FUN_02ed3680(lVar11,*(undefined8 *)(param_1 + 0x2a8),
                                      *(undefined4 *)(param_1 + 0x2b0));
        if (plVar9 != (long *)0x0) {
          if ((iVar3 == 0) &&
             (plVar10 = (long *)FUN_02f117e8(&DAT_0440adb8,*(undefined8 *)(lVar11 + 0x20)),
             plVar10 != (long *)0x0)) {
            *plVar10 = lVar11;
          }
          *plVar9 = param_1;
          *(short *)(lVar11 + 0x28) = *(short *)(lVar11 + 0x28) + 1;
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 !=
               (long *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8));
    }
  }
LAB_02ecb3e8:
  plVar14 = DAT_0440a170;
  uVar7 = *(uint *)(param_1 + 0x210);
  if (uVar7 == 0) {
    uVar8 = 2;
  }
  else {
    pMVar2 = (MutexType *)(DAT_0440a170 + 3);
    nn::os::LockMutex(pMVar2);
    uVar5 = *(uint *)(plVar14 + 1);
    if (uVar5 != 0) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar7 / uVar5;
      }
      for (lVar11 = *(long *)(*plVar14 + (ulong)(uVar7 - uVar6 * uVar5) * 8); lVar11 != 0;
          lVar11 = *(long *)(lVar11 + 0x68)) {
        if (*(uint *)(lVar11 + 0x4c) == uVar7) {
          *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + 1;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar11 + 0x60);
          break;
        }
      }
    }
    nn::os::UnlockMutex(pMVar2);
    puVar12 = *(undefined4 **)(param_1 + 0x230);
    if (*(long *)(puVar12 + 4) == 0) {
      auVar15 = FUN_02e966f8(DAT_0440a148,*puVar12,param_1 + 0x1d0);
      *(undefined1 (*) [12])(param_1 + 0x2c8) = auVar15;
    }
    else {
      *(undefined4 *)(param_1 + 0x2d0) = puVar12[2];
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(puVar12 + 4);
    }
    uVar8 = 1;
  }
  return uVar8;
}


