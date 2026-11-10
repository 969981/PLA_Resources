/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed9ebc; name: FUN_02ed9ebc
 */


undefined8 FUN_02ed9ebc(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *local_38;
  
  local_38 = (undefined8 *)0x0;
  uVar6 = FUN_02eda05c(&local_38,param_1,param_2,param_4,*(uint *)(param_1 + 0xaa) >> 10 & 1,
                       *(uint *)(param_1 + 0xaa) >> 0xb & 1);
  if ((uVar6 & 1) == 0) {
    return 2;
  }
  plVar11 = *(long **)(param_1 + 0x78);
  plVar7 = (long *)*plVar11;
  uVar3 = *(uint *)(plVar11 + 1);
  if ((uVar3 == 0) || (*plVar7 == param_2)) {
    plVar9 = plVar7;
  }
  else {
    lVar8 = (ulong)uVar3 * 0x10;
    plVar10 = plVar7;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) goto LAB_02ed9f58;
      plVar9 = plVar10 + 2;
      plVar1 = plVar10 + 2;
      plVar10 = plVar9;
    } while (*plVar1 != param_2);
  }
  if (plVar9 != plVar7 + (ulong)uVar3 * 2) {
    plVar9 = plVar9 + 1;
LAB_02ed9f8c:
    *plVar9 = (long)local_38;
    *param_3 = plVar9;
    return 1;
  }
LAB_02ed9f58:
  uVar4 = *(uint *)((long)plVar11 + 0xc);
  if (uVar4 <= uVar3) {
    iVar2 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar2 = 1;
    }
    uVar4 = iVar2 + uVar4;
    plVar7 = (long *)(*DAT_0442d148)(0,plVar7,(ulong)uVar4 << 4);
    if (plVar7 == (long *)0x0) goto LAB_02ed9fec;
    *plVar11 = (long)plVar7;
    *(uint *)((long)plVar11 + 0xc) = uVar4;
  }
  if (uVar3 < uVar4) {
    uVar3 = *(uint *)(plVar11 + 1);
    *(uint *)(plVar11 + 1) = uVar3 + 1;
    if (plVar7 + (ulong)uVar3 * 2 != (long *)0x0) {
      plVar9 = plVar7 + (ulong)uVar3 * 2 + 1;
      *plVar9 = 0;
      plVar7[(ulong)uVar3 * 2] = param_2;
      goto LAB_02ed9f8c;
    }
  }
LAB_02ed9fec:
  puVar5 = local_38;
  *param_3 = 0;
  if (local_38 != (undefined8 *)0x0) {
    if (local_38[9] != 0) {
      *(undefined4 *)(local_38 + 10) = 0;
      (*DAT_0442d150)(0);
      puVar5[9] = 0;
      *(undefined4 *)((long)puVar5 + 0x54) = 0;
      if (local_38 == (undefined8 *)0x0) {
        return 2;
      }
    }
    puVar5 = local_38;
    (**(code **)*local_38)(local_38);
    (*DAT_0442d150)(0,puVar5);
  }
  return 2;
}


