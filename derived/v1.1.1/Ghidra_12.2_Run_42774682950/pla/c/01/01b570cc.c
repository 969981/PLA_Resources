/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b570cc; name: FUN_01b570cc
 */


long * FUN_01b570cc(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *local_38;
  
  lVar13 = *param_2;
  if (*(undefined1 **)(lVar13 + 0x148) != &DAT_cbf29ce484222645) {
    FUN_01b62b0c(param_1 + 0x4f8,lVar13 + 0x148);
    lVar13 = *param_2;
  }
  if ((*(long *)(lVar13 + 0xf0) != 0) && (FUN_00b911c4(&local_38), local_38 != (long *)0x0)) {
    FUN_01ba08ec(local_38);
    lVar12 = local_38[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))(local_38);
      puVar10 = *(undefined8 **)(lVar13 + 0x140);
      puVar7 = (undefined8 *)PTR_DAT_04379570;
      goto joined_r0x01b57240;
    }
  }
  puVar10 = *(undefined8 **)(lVar13 + 0x140);
  puVar7 = (undefined8 *)PTR_DAT_04379570;
joined_r0x01b57240:
  PTR_DAT_04379570 = (undefined *)puVar7;
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[7] = 0;
    *(undefined4 *)((long)puVar10 + 0x3f) = 0;
    *(undefined1 *)((long)puVar10 + 0x43) = 1;
    puVar10[5] = 0;
    puVar10[6] = 0;
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    puVar10[4] = 0;
    puVar10[0xd] = 0;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
    *(undefined8 *)((long)puVar10 + 0x44) = 0x1ffff00000000;
    *(undefined4 *)((long)puVar10 + 0x4c) = 0xffff00;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
  }
  FUN_01b55228(param_1 + 0x430,param_2);
  plVar11 = *(long **)(param_1 + 0x3c8);
  plVar15 = param_2 + 1;
  plVar9 = param_2;
  plVar8 = param_2;
  if (plVar15 == plVar11) goto LAB_01b5726c;
  do {
    plVar8 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar8 != (long *)0x0) {
      lVar13 = plVar8[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    lVar13 = *plVar15;
    plVar14 = plVar15 + 1;
    *plVar15 = 0;
    plVar8 = plVar9 + 1;
    *plVar9 = lVar13;
    plVar9 = plVar8;
    plVar15 = plVar14;
  } while (plVar14 != plVar11);
  plVar15 = *(long **)(param_1 + 0x3c8);
  while (plVar15 != plVar8) {
LAB_01b5726c:
    plVar15 = plVar15 + -1;
    plVar9 = (long *)*plVar15;
    if (plVar9 != (long *)0x0) {
      lVar13 = plVar9[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
  }
  *(long **)(param_1 + 0x3c8) = plVar8;
  return param_2;
}


