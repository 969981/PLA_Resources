/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecbed8; name: FUN_02ecbed8
 */


void FUN_02ecbed8(long param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  void *__dest;
  void *__src;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined4 local_70 [2];
  undefined8 local_68;
  void *pvStack_60;
  undefined4 local_58;
  undefined2 local_54;
  
  if (*(int *)(param_1 + 0x2f0) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x198) >> 6 & 1) != 0) {
    return;
  }
  local_58 = 1;
  local_70[0] = 0;
  pvVar1 = (void *)(param_1 + 0x2e0);
  local_54 = 0x100;
  local_68 = *(undefined8 *)(param_1 + 0x28);
  pvStack_60 = pvVar1;
  (**(code **)(**(long **)(param_1 + 0x180) + 0x120))(*(long **)(param_1 + 0x180),local_70,0,0);
  uVar4 = *(uint *)(param_1 + 0x2f0);
  uVar8 = *(uint *)(param_1 + 0x2f4);
  if (uVar4 < uVar8) {
LAB_02ecbfac:
    if (uVar4 < uVar8) {
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8);
      iVar2 = *(uint *)(param_1 + 0x2f0) + 1;
      *(int *)(param_1 + 0x2f0) = iVar2;
      if (puVar3 == (undefined8 *)0x0) goto LAB_02ecbfdc;
      *puVar3 = &DAT_0440adc8;
    }
  }
  else {
    iVar2 = uVar8 + (uVar8 >> 1);
    __src = *(void **)(param_1 + 0x2e8);
    if (uVar8 == 0) {
      iVar2 = 1;
    }
    uVar8 = iVar2 + uVar8;
    if (uVar8 < 2) {
      __dest = pvVar1;
      if (__src == (void *)0x0) goto LAB_02ecbfa0;
LAB_02ecbf94:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02ecbfa0;
      memcpy(__dest,__src,((ulong)uVar4 & 0x1fffffff) << 3);
      if (pvVar1 != __src) {
        (*DAT_0442d158)(0,__src);
      }
LAB_02ecbfa4:
      *(void **)(param_1 + 0x2e8) = __dest;
      *(uint *)(param_1 + 0x2f4) = uVar8;
      goto LAB_02ecbfac;
    }
    __dest = (void *)(*DAT_0442d140)(0,(ulong)uVar8 << 3,4);
    if (__src != (void *)0x0) goto LAB_02ecbf94;
LAB_02ecbfa0:
    if (__dest != (void *)0x0) goto LAB_02ecbfa4;
  }
  iVar2 = *(int *)(param_1 + 0x2f0);
LAB_02ecbfdc:
  if (iVar2 != 0) {
    plVar9 = *(long **)(param_1 + 0x2e8);
    do {
      lVar7 = *plVar9;
      iVar2 = *(int *)(lVar7 + 8);
      plVar5 = (long *)FUN_02ed3680(lVar7,*(undefined8 *)(param_1 + 0x2a8),
                                    *(undefined4 *)(param_1 + 0x2b0));
      if (plVar5 != (long *)0x0) {
        if ((iVar2 == 0) &&
           (plVar6 = (long *)FUN_02f117e8(&DAT_0440adb8,*(undefined8 *)(lVar7 + 0x20)),
           plVar6 != (long *)0x0)) {
          *plVar6 = lVar7;
        }
        *plVar5 = param_1;
        *(short *)(lVar7 + 0x28) = *(short *)(lVar7 + 0x28) + 1;
      }
      if ((*(byte *)(param_1 + 0x2a6) >> 2 & 1) != 0) {
        *(short *)(*plVar9 + 0x2a) = *(short *)(*plVar9 + 0x2a) + 1;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != (long *)(*(long *)(param_1 + 0x2e8) + (ulong)*(uint *)(param_1 + 0x2f0) * 8))
    ;
  }
  return;
}


