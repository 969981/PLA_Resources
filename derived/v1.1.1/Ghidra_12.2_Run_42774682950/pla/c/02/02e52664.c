/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e52664; name: FUN_02e52664
 */


long * FUN_02e52664(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_1 + 0x40) != 0) goto LAB_02e526c0;
  if (*(int *)(param_1 + 0x44) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    if ((puVar6 != *(undefined8 **)(param_1 + 0x38)) &&
       (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
      (*DAT_0442d158)(4);
    }
    *(undefined8 **)(param_1 + 0x38) = puVar6;
    *(undefined4 *)(param_1 + 0x44) = 1;
LAB_02e526b4:
    *puVar6 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    if (puVar6 != (undefined8 *)0x0) goto LAB_02e526b4;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
LAB_02e526c0:
  plVar5 = (long *)**(undefined8 **)(param_1 + 0x38);
  if ((plVar5 == (long *)0x0) && (plVar5 = (long *)(*DAT_0442d138)(4,0x58), plVar5 != (long *)0x0))
  {
    *plVar5 = (long)&PTR_LAB_042ab1d8;
    plVar5[1] = 0;
    puVar1 = PTR_DAT_04388730;
    lVar4 = *(long *)(PTR_DAT_04388730 + 8);
    plVar5[2] = 0;
    plVar5[3] = lVar4;
    plVar3 = (long *)(puVar1 + 0x10);
    if (*plVar3 != 0) {
      plVar3 = (long *)(lVar4 + 0x10);
    }
    *plVar3 = (long)plVar5;
    *(long **)(puVar1 + 8) = plVar5;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    *plVar5 = (long)&PTR_FUN_042ab188;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    *(byte *)((long)plVar5 + 0x3a) = *(byte *)((long)plVar5 + 0x3a) & 0xf8;
    *(undefined4 *)(plVar5 + 10) = 0x3f800000;
    plVar5[6] = 0;
    *(undefined2 *)(plVar5 + 7) = 0;
    *(byte *)((long)plVar5 + 0x54) = *(byte *)((long)plVar5 + 0x54) | 1;
    **(undefined8 **)(param_1 + 0x38) = plVar5;
    plVar5[1] = param_1;
    iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(param_1 + 0x48));
    if (iVar2 != 1) {
      (**(code **)*plVar5)(plVar5);
      FUN_02f59e60(4,plVar5);
      plVar5 = (long *)0x0;
      **(undefined8 **)(param_1 + 0x38) = 0;
    }
  }
  return plVar5;
}


