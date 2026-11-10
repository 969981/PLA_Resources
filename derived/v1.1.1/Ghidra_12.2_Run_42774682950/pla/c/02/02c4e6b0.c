/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4e6b0; name: FUN_02c4e6b0
 */


ulong FUN_02c4e6b0(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  iVar3 = (**(code **)(*DAT_043f2310 + 0x10))(DAT_043f2310,param_1,param_2);
  if (iVar3 != 0) {
    return 0;
  }
  puVar4 = (undefined8 *)(*DAT_043f2318)(0x38);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[4] = param_1;
  puVar4[5] = param_2 + param_1;
  if (DAT_043f22b8 == (undefined8 *)0x0) {
LAB_02c4e7bc:
    puVar5 = &DAT_043f22b8;
    DAT_043f22b8 = puVar4;
    DAT_043f22c0 = puVar4;
    DAT_043f22c8 = puVar4;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    puVar6 = DAT_043f22b8;
    do {
      puVar5 = puVar6;
      uVar7 = puVar5[4];
      if (uVar7 <= param_1) {
        puVar9 = puVar5;
      }
      lVar10 = 8;
      if (uVar7 <= param_1) {
        lVar10 = 0x10;
      }
      puVar6 = *(undefined8 **)((long)puVar5 + lVar10);
    } while (*(undefined8 **)((long)puVar5 + lVar10) != (undefined8 *)0x0);
    if ((puVar9 != (undefined8 *)0x0) && (param_1 <= (ulong)puVar9[4])) goto LAB_02c4e7ec;
    if (uVar7 <= param_1) {
      lVar10 = puVar5[2];
      if (lVar10 == 0) {
        puVar9 = puVar5;
        do {
          bVar2 = puVar9 == (undefined8 *)((undefined8 *)*puVar9)[2];
          puVar9 = (undefined8 *)*puVar9;
        } while (bVar2);
      }
      else {
        do {
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != 0);
      }
    }
    if ((undefined8 **)puVar5 == &DAT_043f22b8) goto LAB_02c4e7bc;
    if (param_1 < uVar7) {
      puVar5[1] = puVar4;
      if (puVar5 == DAT_043f22c0) {
        DAT_043f22c0 = puVar4;
      }
    }
    else {
      puVar5[2] = puVar4;
      if (puVar5 == DAT_043f22c8) {
        DAT_043f22c8 = puVar4;
      }
    }
  }
  *puVar4 = puVar5;
  puVar4[1] = 0;
  puVar4[2] = 0;
  FUN_02c4f5bc(puVar4);
  DAT_043f22b0 = DAT_043f22b0 + 1;
  puVar9 = puVar4;
LAB_02c4e7ec:
  puVar4 = (undefined8 *)puVar9[2];
  if ((undefined8 *)puVar9[2] == (undefined8 *)0x0) {
    do {
      puVar6 = puVar9;
      puVar9 = (undefined8 *)*puVar6;
    } while (puVar6 == (undefined8 *)puVar9[2]);
    if ((undefined8 *)puVar6[2] != puVar9) {
      puVar6 = puVar9;
    }
    if ((undefined8 **)puVar6 != &DAT_043f22b8) goto LAB_02c4e840;
  }
  else {
    do {
      puVar6 = puVar4;
      puVar4 = (undefined8 *)puVar6[1];
    } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    for (; (undefined8 **)puVar6 != &DAT_043f22b8; puVar6 = (undefined8 *)*puVar6) {
LAB_02c4e840:
      puVar4 = (undefined8 *)*puVar6;
      puVar9 = (undefined8 *)puVar6[1];
      puVar8 = (undefined8 *)puVar6[2];
      puVar5 = puVar4;
      if (puVar4 == (undefined8 *)0x0) {
LAB_02c4e878:
        do {
          puVar4 = puVar5;
          puVar5 = (undefined8 *)puVar4[2];
        } while ((undefined8 *)puVar4[2] != (undefined8 *)0x0);
      }
      else {
        if ((puVar9 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) {
          if ((puVar9 != puVar8) && ((undefined8 *)*puVar9 == puVar6)) {
            puVar1 = puVar9;
            if ((undefined8 *)*puVar8 == puVar6) goto LAB_02c4e890;
          }
          goto LAB_02c4e878;
        }
        puVar1 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          if ((undefined8 *)puVar4[1] == puVar6) {
            do {
              puVar4 = (undefined8 *)*puVar5;
              bVar2 = (undefined8 *)puVar4[1] == puVar5;
              puVar5 = puVar4;
            } while (bVar2);
          }
        }
        else {
LAB_02c4e890:
          do {
            puVar4 = puVar1;
            puVar1 = (undefined8 *)puVar4[2];
          } while ((undefined8 *)puVar4[2] != (undefined8 *)0x0);
        }
      }
      if (puVar4 == puVar6) {
        uVar7 = 0;
      }
      else {
        uVar7 = puVar6[4] - puVar4[5];
      }
      uVar11 = uVar7;
      if ((puVar9 != (undefined8 *)0x0) && (uVar11 = puVar9[6], (ulong)puVar9[6] <= uVar7)) {
        uVar11 = uVar7;
      }
      uVar7 = uVar11;
      if ((puVar8 != (undefined8 *)0x0) && (uVar7 = puVar8[6], (ulong)puVar8[6] <= uVar11)) {
        uVar7 = uVar11;
      }
      puVar6[6] = uVar7;
    }
  }
  return param_1;
}


