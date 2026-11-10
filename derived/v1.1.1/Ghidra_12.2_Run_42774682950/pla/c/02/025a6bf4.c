/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a6bf4; name: FUN_025a6bf4
 */


uint FUN_025a6bf4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  long *local_18;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar6 = 0;
    goto LAB_025a6c2c;
  }
  puVar7 = *(undefined1 **)(param_1 + 0x80);
  if ((puVar7 != &DAT_cbf29ce484222645) &&
     (puVar9 = *(undefined1 **)(param_1 + 0x98), puVar9 != (undefined1 *)0x0)) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar7);
    }
    else if (puVar7 < puVar9) {
      puVar11 = puVar7;
    }
    else {
      uVar5 = 0;
      if (puVar9 != (undefined1 *)0x0) {
        uVar5 = (ulong)puVar7 / (ulong)puVar9;
      }
      puVar11 = puVar7 + -(uVar5 * (long)puVar9);
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x90) + (long)puVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar12[1] == puVar7) {
            if ((undefined1 *)plVar12[2] == puVar7) goto LAB_025a6d40;
          }
          else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar9 + -1)) != puVar11)
          goto LAB_025a6c28;
          plVar12 = (long *)*plVar12;
          uVar6 = 1;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar13 = (undefined1 *)plVar12[1];
          if (puVar13 == puVar7) {
            if ((undefined1 *)plVar12[2] == puVar7) goto LAB_025a6d40;
          }
          else {
            if (puVar9 <= puVar13) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)puVar9;
              }
              puVar13 = puVar13 + -(uVar10 * (long)puVar9);
            }
            if (puVar13 != puVar11) goto LAB_025a6c28;
          }
          plVar12 = (long *)*plVar12;
          uVar6 = 1;
        } while (plVar12 != (long *)0x0);
      }
      goto LAB_025a6c2c;
    }
  }
  goto LAB_025a6c28;
LAB_025a6d40:
  if ((plVar12[3] != 0) && (FUN_025a8344(&local_18), local_18 != (long *)0x0)) {
    uVar6 = FUN_01c61740(local_18);
    lVar8 = local_18[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))(local_18);
    }
    goto LAB_025a6c2c;
  }
LAB_025a6c28:
  uVar6 = 1;
LAB_025a6c2c:
  return uVar6 & 1;
}


