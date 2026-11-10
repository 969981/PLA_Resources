/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9fe14; name: FUN_02e9fe14
 */


undefined8
FUN_02e9fe14(long param_1,float *param_2,long *param_3,long *param_4,undefined8 param_5,long param_6
            ,undefined8 param_7,long *param_8)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (((uint)param_2[0x20] & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x120);
    if (plVar6 == (long *)0x0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = 0.0;
      do {
        fVar10 = *(float *)(plVar6 + 5) + fVar10;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    fVar4 = *(float *)(param_1 + 0xf0);
    if (*(float *)(param_1 + 0xf0) <= fVar10) {
      fVar4 = fVar10;
    }
    *param_2 = fVar4 + *param_2;
  }
  FUN_02ed6688(param_1,param_2,param_4);
  if (*(long *)(param_1 + 0x58) == 0) {
    plVar6 = *(long **)(param_1 + 0x60);
  }
  else {
    FUN_02ed69d4(param_1,*(long *)(param_1 + 0x58),param_3,param_2);
    plVar6 = *(long **)(param_1 + 0x60);
  }
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)*plVar6;
    uVar3 = *(uint *)(plVar6 + 1);
    if ((uVar3 == 0) || (*plVar5 == *param_4)) {
      plVar6 = plVar5;
    }
    else {
      lVar7 = (ulong)uVar3 * 0x10;
      plVar8 = plVar5;
      do {
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto joined_r0x02e9fea0;
        plVar6 = plVar8 + 2;
        plVar1 = plVar8 + 2;
        plVar8 = plVar6;
      } while (*plVar1 != *param_4);
    }
    if (plVar6 != plVar5 + (ulong)uVar3 * 2) {
      FUN_02ed69d4(param_1,plVar6[1],param_3,param_2);
    }
  }
joined_r0x02e9fea0:
  if (((param_6 != 0) && (*(long *)(param_1 + 0x38) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x38) + 0x20) != '\0')) {
    local_70 = 0;
    uStack_68 = 2;
    local_78 = param_1 + 0x30;
    FUN_02ec4fac(DAT_0440a180,&local_78,param_6);
  }
  if ((DAT_0440a390 != '\x01') || ((*(byte *)(param_1 + 0x184) >> 6 & 1) == 0)) goto LAB_02e9fec4;
  plVar5 = (long *)*param_3;
  uVar3 = *(uint *)(param_3 + 1);
  plVar6 = plVar5;
  if (uVar3 == 0) {
LAB_02ea0004:
    if (plVar6 == plVar5 + (ulong)uVar3 * 3) goto LAB_02ea0060;
  }
  else {
    lVar7 = (ulong)uVar3 * 0x18;
    do {
      if ((*plVar6 == param_1) && ((*(byte *)(plVar6 + 1) & 1) != 0)) goto LAB_02ea0004;
      lVar7 = lVar7 + -0x18;
      plVar6 = plVar6 + 3;
    } while (lVar7 != 0);
LAB_02ea0060:
    uVar9 = *(uint *)((long)param_3 + 0xc);
    if (uVar9 <= uVar3) {
      iVar2 = uVar9 + (uVar9 >> 1);
      if (uVar9 == 0) {
        iVar2 = 1;
      }
      uVar9 = iVar2 + uVar9;
      plVar5 = (long *)FUN_02f59e50(0,plVar5,(ulong)uVar9 * 0x18);
      if (plVar5 == (long *)0x0) goto LAB_02e9fec4;
      *param_3 = (long)plVar5;
      *(uint *)((long)param_3 + 0xc) = uVar9;
    }
    if (uVar9 <= uVar3) goto LAB_02e9fec4;
    uVar3 = *(uint *)(param_3 + 1);
    *(uint *)(param_3 + 1) = uVar3 + 1;
    if (plVar5 + (ulong)uVar3 * 3 == (long *)0x0) goto LAB_02e9fec4;
    plVar5[(ulong)uVar3 * 3] = param_1;
    plVar6 = plVar5 + (ulong)uVar3 * 3;
    plVar6[1] = 0x59;
  }
  *(undefined4 *)(plVar6 + 2) = 0;
LAB_02e9fec4:
  param_2[0x20] = (float)((uint)param_2[0x20] & 0xffffffdf);
  plVar6 = *(long **)(param_1 + 0x88);
  if ((plVar6 != (long *)0x0) && (plVar6 != param_8)) {
    (**(code **)(*plVar6 + 0x158))(plVar6,param_2,param_3,param_4,param_5,param_6,0,param_8);
  }
  return 1;
}


