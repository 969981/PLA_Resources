/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dba70; name: FUN_032dba70
 */


ulong FUN_032dba70(long *param_1,ulong *param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  ulong *local_68;
  
  uVar5 = 0;
  puVar8 = param_2;
  do {
    uVar7 = (uint)uVar5;
    uVar10 = (uint)*puVar8;
    if ((uVar10 >> 0x15 & 1) != 0) {
      uVar7 = (uVar10 & 0x1fffff) - (uVar10 >> 1 & 0x55555);
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      uVar5 = puVar8[(ulong)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] | uVar5;
      uVar7 = (uint)uVar5;
    }
    if ((*puVar8 & 1) != 0) break;
    uVar7 = (uint)uVar5;
    puVar8 = (ulong *)puVar8[1];
  } while (puVar8 != (ulong *)0x0);
  if ((uVar7 >> 1 & 1) != 0) {
    uVar9 = 0;
    uVar5 = 0xffffffff;
    goto LAB_032dbbc0;
  }
  local_68 = param_2;
  lVar4 = FUN_032de664(param_1,&local_68);
  if (lVar4 == 0) {
LAB_032dbbf4:
    local_78 = 0;
    local_70 = 0x8000000000000000;
    FUN_032dde44(param_2,&local_78,0);
    if (((int)local_70 != 0) && (iVar3 = FUN_032de1bc(param_2,&local_78), iVar3 < 0)) {
      local_70 = local_70 & 0xffffffff00000000;
    }
    local_88 = 0;
    uStack_80 = 0x8000000000000000;
    uVar11 = FUN_032de50c(param_1,&local_68,&local_88);
    puVar2 = PTR_PTR_0434a080;
    lVar4 = *param_1;
    lVar13 = (long)(int)uVar11;
    plVar1 = (long *)(lVar4 + (long)(int)uVar11 * 0x18 + 8);
    if (&local_78 == plVar1) {
      uVar7 = local_70._4_4_;
      if (-1 < (long)local_70) goto LAB_032dbcec;
    }
    else {
      puVar12 = (uint *)(lVar4 + lVar13 * 0x18 + 0x14);
      if ((int)*puVar12 < 0) {
        FUN_032deb54(PTR_PTR_0434a080,plVar1);
      }
      if ((long)local_70 < 0) {
        FUN_032deb54(puVar2,&local_78);
      }
      lVar6 = *plVar1;
      *plVar1 = local_78;
      *(int *)(lVar4 + lVar13 * 0x18 + 0x10) = (int)local_70;
      uVar7 = *puVar12;
      *puVar12 = (uint)(local_70 >> 0x20);
      local_78 = lVar6;
      if (-1 < (int)uVar7) {
LAB_032dbcec:
        local_70 = (ulong)uVar7 << 0x20;
        if (local_78 != 0) {
          (**(code **)(*(long *)puVar2 + 0x18))(puVar2,local_78,(ulong)(uVar7 & 0x3fffffff) << 4);
        }
      }
    }
  }
  else {
    uVar11 = (ulong)*(uint *)(lVar4 + 4) | (lVar4 - param_1[2]) * 0x20000000;
    if ((int)uVar11 < 0) goto LAB_032dbbf4;
    lVar13 = (long)(int)uVar11;
  }
  while( true ) {
    uVar7 = (uint)*param_2;
    if ((uVar7 >> 0x14 & 1) != 0) break;
    if (((*param_2 & 1) != 0) || (param_2 = (ulong *)param_2[1], param_2 == (ulong *)0x0))
    goto LAB_032dbb64;
  }
  if (param_2 != (ulong *)0x0) {
    uVar7 = (uVar7 & 0xfffff) - (uVar7 >> 1 & 0x55555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar9 = (param_2[(ulong)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] & 0xffff)
            << 0x20;
    goto LAB_032dbbb0;
  }
LAB_032dbb64:
  uVar9 = 0;
LAB_032dbbb0:
  uVar5 = 0xffffffff;
  if (*(int *)(*param_1 + lVar13 * 0x18 + 0x10) != 0) {
    uVar5 = uVar11 & 0xffffffff;
  }
LAB_032dbbc0:
  return uVar9 | uVar5;
}


