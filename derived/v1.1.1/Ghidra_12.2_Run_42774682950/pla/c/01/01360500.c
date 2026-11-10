/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01360500; name: FUN_01360500
 */


undefined8 FUN_01360500(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  plVar4 = DAT_043f1798;
  if (((*(ushort *)((long)param_1 - (long)*param_1) < 0x43) ||
      (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x21], uVar5 == 0)) ||
     (puVar1 = (uint *)((long)param_1 + uVar5), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
     puVar1 == (uint *)0x0)) {
LAB_01360594:
    uVar7 = 7;
  }
  else {
    uVar2 = *puVar1;
    uVar5 = (ulong)uVar2;
    local_58 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
    if (uVar2 < 0x17) {
      local_58 = (ulong)(byte)(uVar2 << 1);
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (uVar2 != 0) goto LAB_01360570;
    }
    else {
      uVar8 = uVar5 + 0x10 & 0x1fffffff0;
      lVar3 = tpidr_el0;
      plVar6 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar6 = plVar4;
      }
      pvVar9 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
      local_58 = uVar8 | 1;
      local_50 = uVar5;
      local_48 = pvVar9;
LAB_01360570:
      memcpy(pvVar9,puVar1 + 1,uVar5);
    }
    uVar8 = local_50;
    *(undefined1 *)((long)pvVar9 + uVar5) = 0;
    if ((local_58 & 1) == 0) {
      if ((byte)local_58 < 4) goto LAB_01360594;
    }
    else {
      operator_delete(local_48);
      if (uVar8 < 2) goto LAB_01360594;
    }
    uVar7 = 0;
  }
  plVar4 = DAT_043f1798;
  if (((0x44 < *(ushort *)((long)param_1 - (long)*param_1)) &&
      (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x22], uVar5 != 0)) &&
     (puVar1 = (uint *)((long)param_1 + uVar5), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
     puVar1 != (uint *)0x0)) {
    uVar2 = *puVar1;
    uVar5 = (ulong)uVar2;
    local_58 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
    if (uVar2 < 0x17) {
      local_58 = (ulong)(byte)(uVar2 << 1);
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (uVar2 != 0) goto LAB_013605ec;
    }
    else {
      uVar8 = uVar5 + 0x10 & 0x1fffffff0;
      lVar3 = tpidr_el0;
      plVar6 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar6 = plVar4;
      }
      pvVar9 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
      local_58 = uVar8 | 1;
      local_50 = uVar5;
      local_48 = pvVar9;
LAB_013605ec:
      memcpy(pvVar9,puVar1 + 1,uVar5);
    }
    uVar8 = local_50;
    *(undefined1 *)((long)pvVar9 + uVar5) = 0;
    if ((local_58 & 1) == 0) {
      if (3 < (byte)local_58) {
LAB_01360ba0:
        uVar7 = 1;
      }
    }
    else {
      operator_delete(local_48);
      if (1 < uVar8) goto LAB_01360ba0;
    }
  }
  plVar4 = DAT_043f1798;
  if (((0x46 < *(ushort *)((long)param_1 - (long)*param_1)) &&
      (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x23], uVar5 != 0)) &&
     (puVar1 = (uint *)((long)param_1 + uVar5), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
     puVar1 != (uint *)0x0)) {
    uVar2 = *puVar1;
    uVar5 = (ulong)uVar2;
    local_58 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
    if (uVar2 < 0x17) {
      local_58 = (ulong)(byte)(uVar2 << 1);
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (uVar2 != 0) goto LAB_01360664;
    }
    else {
      uVar8 = uVar5 + 0x10 & 0x1fffffff0;
      lVar3 = tpidr_el0;
      plVar6 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar6 = plVar4;
      }
      pvVar9 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
      local_58 = uVar8 | 1;
      local_50 = uVar5;
      local_48 = pvVar9;
LAB_01360664:
      memcpy(pvVar9,puVar1 + 1,uVar5);
    }
    uVar8 = local_50;
    *(undefined1 *)((long)pvVar9 + uVar5) = 0;
    if ((local_58 & 1) == 0) {
      if (3 < (byte)local_58) {
LAB_01360bb8:
        uVar7 = 2;
      }
    }
    else {
      operator_delete(local_48);
      if (1 < uVar8) goto LAB_01360bb8;
    }
  }
  plVar4 = DAT_043f1798;
  if (((0x48 < *(ushort *)((long)param_1 - (long)*param_1)) &&
      (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x24], uVar5 != 0)) &&
     (puVar1 = (uint *)((long)param_1 + uVar5), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
     puVar1 != (uint *)0x0)) {
    uVar2 = *puVar1;
    uVar5 = (ulong)uVar2;
    local_58 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
    if (uVar2 < 0x17) {
      local_58 = (ulong)(byte)(uVar2 << 1);
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (uVar2 != 0) goto LAB_013606dc;
    }
    else {
      uVar8 = uVar5 + 0x10 & 0x1fffffff0;
      lVar3 = tpidr_el0;
      plVar6 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar6 = plVar4;
      }
      pvVar9 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
      local_58 = uVar8 | 1;
      local_50 = uVar5;
      local_48 = pvVar9;
LAB_013606dc:
      memcpy(pvVar9,puVar1 + 1,uVar5);
    }
    uVar8 = local_50;
    *(undefined1 *)((long)pvVar9 + uVar5) = 0;
    if ((local_58 & 1) == 0) {
      if (3 < (byte)local_58) {
LAB_01360bd0:
        uVar7 = 3;
      }
    }
    else {
      operator_delete(local_48);
      if (1 < uVar8) goto LAB_01360bd0;
    }
  }
  plVar4 = DAT_043f1798;
  if (((0x4a < *(ushort *)((long)param_1 - (long)*param_1)) &&
      (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x25], uVar5 != 0)) &&
     (puVar1 = (uint *)((long)param_1 + uVar5), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
     puVar1 != (uint *)0x0)) {
    uVar2 = *puVar1;
    uVar5 = (ulong)uVar2;
    local_58 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
    if (uVar2 < 0x17) {
      local_58 = (ulong)(byte)(uVar2 << 1);
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (uVar2 != 0) goto LAB_01360754;
    }
    else {
      uVar8 = uVar5 + 0x10 & 0x1fffffff0;
      lVar3 = tpidr_el0;
      plVar6 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar6 = plVar4;
      }
      pvVar9 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
      local_58 = uVar8 | 1;
      local_50 = uVar5;
      local_48 = pvVar9;
LAB_01360754:
      memcpy(pvVar9,puVar1 + 1,uVar5);
    }
    uVar8 = local_50;
    *(undefined1 *)((long)pvVar9 + uVar5) = 0;
    if ((local_58 & 1) == 0) {
      if (3 < (byte)local_58) {
LAB_01360be8:
        uVar7 = 5;
      }
    }
    else {
      operator_delete(local_48);
      if (1 < uVar8) goto LAB_01360be8;
    }
  }
  plVar4 = DAT_043f1798;
  if (((0x40 < *(ushort *)((long)param_1 - (long)*param_1)) &&
      (uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x20], uVar5 != 0)) &&
     (puVar1 = (uint *)((long)param_1 + uVar5), puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1),
     puVar1 != (uint *)0x0)) {
    uVar2 = *puVar1;
    uVar5 = (ulong)uVar2;
    local_58 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
    if (uVar2 < 0x17) {
      local_58 = (ulong)(byte)(uVar2 << 1);
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (uVar2 != 0) goto LAB_013607cc;
    }
    else {
      uVar8 = uVar5 + 0x10 & 0x1fffffff0;
      lVar3 = tpidr_el0;
      plVar6 = *(long **)(lVar3 + 0x20);
      if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
        *(long **)(lVar3 + 0x20) = DAT_043f1798;
        plVar6 = plVar4;
      }
      pvVar9 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
      local_58 = uVar8 | 1;
      local_50 = uVar5;
      local_48 = pvVar9;
LAB_013607cc:
      memcpy(pvVar9,puVar1 + 1,uVar5);
    }
    uVar8 = local_50;
    *(undefined1 *)((long)pvVar9 + uVar5) = 0;
    if ((local_58 & 1) == 0) {
      if (3 < (byte)local_58) {
LAB_01360c00:
        uVar7 = 6;
      }
    }
    else {
      operator_delete(local_48);
      if (1 < uVar8) goto LAB_01360c00;
    }
  }
  plVar4 = DAT_043f1798;
  if (*(ushort *)((long)param_1 - (long)*param_1) < 0x3d) {
    return uVar7;
  }
  uVar5 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[0x1e];
  if (uVar5 == 0) {
    return uVar7;
  }
  puVar1 = (uint *)((long)param_1 + uVar5);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  if (puVar1 == (uint *)0x0) {
    return uVar7;
  }
  uVar2 = *puVar1;
  uVar5 = (ulong)uVar2;
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  if (uVar2 < 0x17) {
    local_58 = (ulong)(byte)(uVar2 << 1);
    pvVar9 = (void *)((ulong)&local_58 | 1);
    if (uVar2 == 0) goto LAB_01360854;
  }
  else {
    uVar8 = uVar5 + 0x10 & 0x1fffffff0;
    lVar3 = tpidr_el0;
    plVar6 = *(long **)(lVar3 + 0x20);
    if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
      *(long **)(lVar3 + 0x20) = DAT_043f1798;
      plVar6 = plVar4;
    }
    pvVar9 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar8,8);
    local_58 = uVar8 | 1;
    local_50 = uVar5;
    local_48 = pvVar9;
  }
  memcpy(pvVar9,puVar1 + 1,uVar5);
LAB_01360854:
  uVar8 = local_50;
  *(undefined1 *)((long)pvVar9 + uVar5) = 0;
  if ((local_58 & 1) == 0) {
    if ((byte)local_58 < 4) {
      return uVar7;
    }
  }
  else {
    operator_delete(local_48);
    if (uVar8 < 2) {
      return uVar7;
    }
  }
  return 8;
}


