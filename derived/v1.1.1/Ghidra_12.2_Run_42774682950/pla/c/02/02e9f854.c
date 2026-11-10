/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9f854; name: FUN_02e9f854
 */


void FUN_02e9f854(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(char *)((long)param_1 + 0x21) != '\0') {
    if (*param_1 == 2) {
      FUN_02f0ef5c(DAT_0440a150);
    }
    else if (*param_1 == 1) {
      FUN_02f0ef00(DAT_0440a150);
    }
  }
  uVar6 = (ulong)DAT_0440a388;
  if (DAT_0440a388 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(*DAT_0442d138)(0,uVar6 << 3);
  puVar4 = DAT_0440a380;
  if (DAT_0440a388 == 0) goto LAB_02e9f9ac;
  if (puVar2 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  uVar8 = *DAT_0440a380;
  if ((int)uVar6 == 0) {
    uVar10 = 1;
    puVar3 = (undefined8 *)FUN_02f59e50(0,puVar2,8);
    if (puVar3 == (undefined8 *)0x0) goto LAB_02e9fa08;
LAB_02e9f8bc:
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar8;
    }
    uVar9 = 1;
    puVar2 = puVar3;
    uVar6 = uVar10;
  }
  else {
    puVar3 = puVar2;
    uVar10 = uVar6;
    if ((int)uVar6 != 0) goto LAB_02e9f8bc;
LAB_02e9fa08:
    uVar9 = 0;
  }
  puVar3 = puVar4 + 1;
  (**(code **)(*(long *)*puVar4 + 0x10))();
  if (puVar3 == DAT_0440a380 + DAT_0440a388) {
    uVar10 = (ulong)uVar9;
  }
  else {
    do {
      uVar8 = *puVar3;
      uVar5 = (uint)uVar6;
      if (uVar9 < uVar5) {
        puVar4 = puVar2;
        uVar11 = uVar6;
        if (uVar5 <= uVar9) goto LAB_02e9fa44;
LAB_02e9f908:
        uVar10 = (ulong)(uVar9 + 1);
        puVar2 = puVar4;
        uVar6 = uVar11;
        if (puVar4 + uVar9 != (undefined8 *)0x0) {
          puVar4[uVar9] = uVar8;
        }
      }
      else {
        iVar1 = uVar5 + (uVar5 >> 1);
        if (uVar5 == 0) {
          iVar1 = 1;
        }
        uVar11 = (ulong)(iVar1 + uVar5);
        puVar4 = (undefined8 *)FUN_02f59e50(0,puVar2,uVar11 << 3);
        if (puVar4 != (undefined8 *)0x0) {
          puVar2 = puVar4;
          uVar6 = uVar11;
          if (uVar9 < iVar1 + uVar5) goto LAB_02e9f908;
        }
LAB_02e9fa44:
        uVar10 = (ulong)uVar9;
      }
      puVar4 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x10))();
      uVar9 = (uint)uVar10;
      puVar3 = puVar4;
    } while (puVar4 != DAT_0440a380 + DAT_0440a388);
  }
  if (uVar9 != 0) {
    (**(code **)(*(long *)*puVar2 + 0x98))((long *)*puVar2,param_1);
    (**(code **)(*(long *)*puVar2 + 0x18))();
    if ((int)uVar10 != 1) {
      lVar7 = uVar10 * 8 + -8;
      puVar4 = puVar2;
      do {
        puVar4 = puVar4 + 1;
        (**(code **)(*(long *)*puVar4 + 0x98))((long *)*puVar4,param_1);
        (**(code **)(*(long *)*puVar4 + 0x18))();
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
  }
LAB_02e9f9ac:
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e9f9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,puVar2);
  return;
}


