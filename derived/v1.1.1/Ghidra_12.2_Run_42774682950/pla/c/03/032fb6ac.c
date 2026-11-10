/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fb6ac; name: FUN_032fb6ac
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_032fb6ac(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_a8 [2];
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong *local_58;
  uint local_48 [2];
  
  plVar14 = (long *)*param_1;
  uVar9 = 0;
  if (param_2 != (ulong *)0x0) {
    puVar12 = param_2;
    do {
      uVar10 = (uint)*puVar12;
      if ((uVar10 >> 0x10 & 1) != 0) {
        uVar10 = (uVar10 & 0xffff) - (uVar10 >> 1 & 0x5555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar9 = puVar12[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
        goto LAB_032fb748;
      }
    } while (((*puVar12 & 1) == 0) && (puVar12 = (ulong *)puVar12[1], puVar12 != (ulong *)0x0));
    uVar9 = 0;
  }
LAB_032fb748:
  local_58 = param_2;
  if (*(char *)(*plVar14 + 3) == '\0') {
    puVar7 = (undefined8 *)FUN_032e3258(param_1[2],uVar9,*(char *)(*plVar14 + 4) != '\0');
  }
  else {
    puVar7 = (undefined8 *)FUN_032e2f28();
  }
  if ((undefined8 *)0x1 < puVar7) {
    uVar10 = (uint)*puVar7;
    if ((uVar10 >> 0x11 & 1) == 0) {
      lVar13 = *plVar14;
      uVar11 = 0;
    }
    else {
      uVar11 = (uVar10 & 0x1ffff) - (uVar10 >> 1 & 0x5555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar3 = *(ushort *)
               ((long)puVar7 +
               (ulong)((uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12);
      lVar13 = *plVar14;
      uVar11 = (uint)uVar3;
      if (((uVar3 & 1) != 0) && (uVar11 = (uint)uVar3, *(char *)(lVar13 + 1) != '\0')) {
        return 0;
      }
    }
    if (((uVar11 >> 4 & 1) != 0) && (*(char *)(lVar13 + 2) != '\0')) {
      return 0;
    }
    uVar11 = (uint)*param_2;
    if ((uVar11 >> 0x11 & 1) == 0) {
      uVar11 = 0;
      iVar6 = *(int *)(param_1 + 1);
    }
    else {
      uVar11 = (uVar11 & 0x1ffff) - (uVar11 >> 1 & 0x5555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = (uint)(ushort)param_2[(ulong)((uVar11 + (uVar11 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                            0x18) + 2];
      iVar6 = *(int *)(param_1 + 1);
    }
    if ((uVar10 >> 0x11 & 1) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uVar10 & 0x1ffff) - (uVar10 >> 1 & 0x5555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar10 = (uint)*(ushort *)
                      (puVar7 + (ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                2);
    }
    iVar2 = *(int *)(param_1 + 3);
    FUN_032e2c7c(local_a8,param_2,&DAT_04358dc0);
    if (((ulong)local_98 & 1) != 0) {
      plVar8 = (long *)((ulong)local_98 & 0xfffffffffffffffe);
      plVar1 = plVar8 + 1;
      do {
        lVar13 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar13 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    if (local_a8[0] == (undefined8 *)0x0) {
      iVar6 = FUN_032f9800(plVar14,param_2,iVar6 + uVar11,puVar7,iVar2 + uVar10);
      return iVar6;
    }
    iVar6 = (*(code *)*local_a8[0])(plVar14[1],param_2,iVar6 + uVar11,puVar7,iVar2 + uVar10);
    return iVar6;
  }
  iVar6 = *(int *)(param_1 + 1);
  uVar10 = (uint)*param_2;
  if ((uVar10 >> 0x11 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uVar10 & 0x1ffff) - (uVar10 >> 1 & 0x5555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = (uint)(ushort)param_2[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                   + 2];
  }
  if (*(char *)*plVar14 == '\0') {
    return 0;
  }
  FUN_032e2c7c(local_a8,param_2,&DAT_04358dc0);
  if (((ulong)local_98 & 1) != 0) {
    plVar8 = (long *)((ulong)local_98 & 0xfffffffffffffffe);
    plVar1 = plVar8 + 1;
    do {
      lVar13 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar13 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  if (local_a8[0] == (undefined8 *)0x0) {
    local_48[0] = FUN_032f9800(plVar14,param_2,uVar10 + iVar6,0,0);
  }
  else {
    local_48[0] = (*(code *)*local_a8[0])(plVar14[1],param_2,uVar10 + iVar6,0,0);
  }
  if (-1 < (int)local_48[0]) {
    return 0;
  }
  if (DAT_0444acb0 == '\0') {
    return local_48[0];
  }
  local_a8[0] = (undefined8 *)0x0;
  local_98 = &DAT_0444ac60;
  uStack_90 = 1;
  local_88 = FUN_032ba19c();
  uStack_80 = 0;
  local_78 = 0;
  pcStack_70 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp";
  local_68 = 0xe4;
  uStack_60 = 0;
  FUN_03326338(local_a8,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_0434d7c0,
               "dispatch(fieldDecl.getType(), dstOff + fieldDecl.getOffset(), nullptr, 0)",local_48)
  ;
  FUN_03326338(local_a8,"Failed to compile \'{}\'",PTR_DAT_04389290,&local_58);
  FUN_033266e0(local_a8);
  FUN_032c7b9c(&uStack_80);
  return local_48[0];
}


