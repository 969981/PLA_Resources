/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03005a84; name: FUN_03005a84
 */


void FUN_03005a84(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,long param_6,undefined4 param_7,ushort param_8)

{
  uint uVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  void *__s;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  uint local_70 [3];
  char local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  
  if ((param_6 != 0) && (*(long *)(param_6 + 8) != 0)) {
    plVar9 = (long *)(param_6 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar9 = (long *)param_1[4];
  param_1[4] = param_6;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x7fffffff;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  local_54 = 0;
  (**(code **)(DAT_0442d408 + (ulong)*(byte *)(param_6 + 0x20) * 0x80 + 0x18))(param_6,local_70);
  param_1[9] = local_60;
  *(undefined2 *)(param_1 + 10) = local_58;
  *(short *)((long)param_1 + 0x52) = (short)local_54 + (short)local_70[1] + 0x10;
  *(char *)((long)param_1 + 0x55) = local_64;
  if (*(char *)(param_6 + 0x21) != '\0') {
    *(char *)((long)param_1 + 0x55) = local_64 + *(char *)(param_6 + 0x21) * ' ';
  }
  *(undefined2 *)(param_1 + 8) = 0xffff;
  param_8 = param_8 & 0xfff9;
  *(undefined4 *)(param_1 + 7) = param_7;
  *(undefined4 *)((long)param_1 + 0x3c) = param_7;
  *(ushort *)((long)param_1 + 0x42) = param_8;
  bVar5 = *(byte *)(param_6 + 0x20);
  if (bVar5 == 0x13) {
    param_8 = param_8 | 0x81;
    *(ushort *)((long)param_1 + 0x42) = param_8;
    bVar5 = *(byte *)(param_6 + 0x20);
  }
  (**(code **)(DAT_0442d408 + (ulong)bVar5 * 0x80 + 0x70))(param_6,param_8 & 1,local_70);
  *(char *)((long)param_1 + 0x54) = (char)local_70[1];
  param_1[0xb] = 0;
  *(undefined2 *)((long)param_1 + 0x56) = 0;
  if ((local_70[0] & 0xffff) != 0) {
    uVar14 = (ulong)local_70[0] & 0xffff;
    param_1[0xb] = 0;
    *(undefined2 *)((long)param_1 + 0x56) = 0;
    lVar13 = tpidr_el0;
    lVar10 = *(long *)(lVar13 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar10;
    }
    plVar9 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    __s = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar14,0);
    uVar8 = uVar14 >> 2;
    param_1[0xb] = __s;
    pvVar15 = __s;
    if (((ulong)__s & 0xf) == 0) {
      uVar11 = uVar8;
    }
    else {
      uVar11 = 4 - (((ulong)__s & 0xf) >> 2);
      uVar12 = uVar8;
      if (uVar11 <= uVar8) {
        uVar12 = uVar11;
      }
      pvVar3 = (void *)((long)__s + uVar12 * 4);
      uVar11 = uVar8 - uVar12;
      if (__s < pvVar3) {
        memset(__s,0,uVar12 << 2);
        do {
          pvVar15 = (void *)((long)pvVar15 + 4);
        } while (pvVar15 < pvVar3);
      }
    }
    if ((3 < uVar11) && (0 < (long)(uVar11 & 0xfffffffffffffffc))) {
      pvVar3 = (void *)((long)pvVar15 + (uVar11 & 0xfffffffffffffffc) * 4);
      pvVar4 = pvVar3;
      if (pvVar3 <= (void *)((long)pvVar15 + 0x10U)) {
        pvVar4 = (void *)((long)pvVar15 + 0x10U);
      }
      uVar11 = (long)pvVar4 + ~(ulong)pvVar15;
      memset(pvVar15,0,uVar11 + 0x10 & 0xfffffffffffffff0);
      uVar1 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
      uVar12 = (ulong)uVar1 & 7;
      if ((uVar1 & 7) != 0) {
        do {
          pvVar15 = (void *)((long)pvVar15 + 0x10);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (0x6f < uVar11) {
        do {
          pvVar15 = (void *)((long)pvVar15 + 0x80);
        } while (pvVar15 < pvVar3);
      }
    }
    if (pvVar15 < (void *)((long)__s + uVar8 * 4)) {
      memset(pvVar15,0,
             (long)__s + ~(ulong)pvVar15 + (ulong)((uint)uVar14 & 0xfffc) + 4 & 0xfffffffffffffffc);
    }
    *(short *)((long)param_1 + 0x56) = (short)local_70[0];
  }
  return;
}


