/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b919bc; name: FUN_02b919bc
 */


long * FUN_02b919bc(long param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  ulong local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  ulong local_48;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x10);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 4));
        while (*plVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b91a2c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b91a2c:
  puVar11 = (undefined8 *)(param_1 + 200);
  puVar8 = (undefined8 *)*puVar11;
  if (puVar8 == (undefined8 *)0x0) {
LAB_02b91af4:
    uVar9 = 0;
    puVar16 = puVar11;
  }
  else {
    puVar16 = puVar11;
    do {
      lVar7 = 0x10;
      if (param_2 <= (ulong)puVar8[5]) {
        lVar7 = 8;
        puVar16 = puVar8;
      }
      puVar8 = *(undefined8 **)((long)puVar8 + lVar7);
    } while (puVar8 != (undefined8 *)0x0);
    if (puVar16 != puVar11) {
      do {
        uVar9 = puVar16[4];
        uVar3 = puVar16[5];
        uVar15 = (uVar3 + uVar9) - param_2 & -param_3;
        if ((long)uVar9 <= (long)uVar15) {
          if (((puVar16 == puVar11) ||
              (param_2 = (uVar3 + uVar9) - uVar15, (uVar9 & param_3 - 1U) != 0)) ||
             (((uVar13 = uVar3 - param_2, 0x100 < uVar3 || (param_2 <= uVar13)) &&
              (0x80 < uVar13 || param_2 <= uVar13 * 2)))) {
            uVar9 = uVar15;
          }
          else {
            param_2 = uVar3;
          }
          goto LAB_02b91af8;
        }
        puVar8 = (undefined8 *)puVar16[2];
        if ((undefined8 *)puVar16[2] == (undefined8 *)0x0) {
          do {
            puVar8 = puVar16;
            puVar10 = (undefined8 *)*puVar8;
            puVar16 = puVar10;
          } while (puVar8 == (undefined8 *)puVar10[2]);
          puVar16 = puVar8;
          if ((undefined8 *)puVar8[2] != puVar10) {
            puVar16 = puVar10;
          }
        }
        else {
          do {
            puVar16 = puVar8;
            puVar8 = (undefined8 *)puVar16[1];
          } while ((undefined8 *)puVar16[1] != (undefined8 *)0x0);
        }
      } while (puVar16 != puVar11);
      goto LAB_02b91af4;
    }
    uVar9 = 0;
  }
LAB_02b91af8:
  puVar8 = (undefined8 *)(param_1 + 200);
  if (puVar8 == puVar16) {
    plVar14 = (long *)0x0;
    goto LAB_02b91eb4;
  }
  plVar14 = puVar16 + -2;
  if (puVar16[5] == param_2) {
    lVar7 = puVar16[2];
    if (lVar7 == 0) {
      puVar11 = puVar16;
      do {
        bVar6 = puVar11 == (undefined8 *)((undefined8 *)*puVar11)[2];
        puVar11 = (undefined8 *)*puVar11;
      } while (bVar6);
    }
    else {
      do {
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != 0);
    }
    FUN_02b93c98(puVar8,puVar16,&local_68);
    if (local_58 == puVar16) {
      iVar4 = *(int *)(puVar16 + 3);
    }
    else {
      iVar4 = *(int *)(local_58 + 3);
      *(undefined4 *)(local_58 + 3) = *(undefined4 *)(puVar16 + 3);
    }
    if (iVar4 != 0) {
      FUN_02b93df4(puVar8,local_68,uStack_60);
    }
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    cVar5 = *(char *)(param_1 + 0xe8);
  }
  else {
    lVar7 = *plVar14;
    plVar14 = *(long **)(param_1 + 0xb0);
    local_68 = uVar9;
    local_48 = param_2;
    if ((plVar14 == (long *)0x0) || (plVar14 == (long *)(param_1 + 0xb0))) {
      FUN_02b92d44(param_1 + 0x18,&local_68,&local_48);
      uVar9 = (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) - 1;
      plVar14 = (long *)(*(long *)(*(long *)(param_1 + 0x20) + (uVar9 / 0x38) * 8) +
                        (uVar9 % 0x38) * 0x48);
    }
    else {
      plVar14 = *(long **)(param_1 + 0xb8);
      plVar14[6] = uVar9;
      plVar14[7] = param_2;
      plVar17 = *(long **)(param_1 + 0xb8);
      lVar2 = *plVar17;
      plVar18 = (long *)plVar17[1];
      *plVar18 = lVar2;
      *(long **)(lVar2 + 8) = plVar18;
      *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
      *plVar17 = 0;
      plVar17[1] = 0;
    }
    puVar11 = *(undefined8 **)(lVar7 + 8);
    *plVar14 = lVar7;
    plVar14[1] = (long)puVar11;
    *(long **)(lVar7 + 8) = plVar14;
    *puVar11 = plVar14;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
    lVar7 = puVar16[2];
    if (lVar7 == 0) {
      puVar11 = puVar16;
      do {
        bVar6 = puVar11 == (undefined8 *)((undefined8 *)*puVar11)[2];
        puVar11 = (undefined8 *)*puVar11;
      } while (bVar6);
    }
    else {
      do {
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != 0);
    }
    FUN_02b93c98(puVar8,puVar16,&local_68);
    if (local_58 == puVar16) {
      iVar4 = *(int *)(puVar16 + 3);
    }
    else {
      iVar4 = *(int *)(local_58 + 3);
      *(undefined4 *)(local_58 + 3) = *(undefined4 *)(puVar16 + 3);
    }
    if (iVar4 != 0) {
      FUN_02b93df4(puVar8,local_68,uStack_60);
    }
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[5] = puVar16[5] - param_2;
    if (*(undefined8 **)(param_1 + 200) == (undefined8 *)0x0) {
LAB_02b91d2c:
      *(undefined8 **)(param_1 + 0xd0) = puVar16;
      *(undefined8 **)(param_1 + 0xd8) = puVar16;
      *(undefined8 **)(param_1 + 200) = puVar16;
      puVar10 = puVar8;
    }
    else {
      puVar11 = *(undefined8 **)(param_1 + 200);
      do {
        puVar10 = puVar11;
        lVar7 = 8;
        if ((ulong)puVar10[5] <= (ulong)puVar16[5]) {
          lVar7 = 0x10;
        }
        puVar11 = *(undefined8 **)((long)puVar10 + lVar7);
      } while (*(undefined8 **)((long)puVar10 + lVar7) != (undefined8 *)0x0);
      if (puVar10 == puVar8) goto LAB_02b91d2c;
      if ((ulong)puVar16[5] < (ulong)puVar10[5]) {
        puVar10[1] = puVar16;
        if (puVar10 == *(undefined8 **)(param_1 + 0xd0)) {
          *(undefined8 **)(param_1 + 0xd0) = puVar16;
        }
      }
      else {
        puVar10[2] = puVar16;
        if (puVar10 == *(undefined8 **)(param_1 + 0xd8)) {
          *(undefined8 **)(param_1 + 0xd8) = puVar16;
        }
      }
    }
    puVar16[2] = 0;
    *puVar16 = puVar10;
    puVar16[1] = 0;
    FUN_02b92bec(puVar8,puVar16);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
    cVar5 = *(char *)(param_1 + 0xe8);
  }
  if (cVar5 != '\0') {
    plVar17 = (long *)(param_1 + 0x98);
    plVar18 = (long *)*plVar17;
    if (plVar17 == plVar18) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      plVar12 = plVar18;
      do {
        if (plVar12[6] != lVar7) goto LAB_02b91e14;
        lVar7 = plVar12[7] + lVar7;
        plVar12 = (long *)*plVar12;
      } while (plVar17 != plVar12);
    }
    if (lVar7 == *(long *)(param_1 + 0xf0)) {
      puVar11 = *(undefined8 **)(param_1 + 0xd0);
      if (puVar11 != puVar8) {
        uVar9 = 0;
        do {
          puVar1 = puVar11 + 5;
          if (*puVar1 < uVar9) goto LAB_02b91e14;
          puVar16 = (undefined8 *)puVar11[2];
          if ((undefined8 *)puVar11[2] == (undefined8 *)0x0) {
            do {
              puVar16 = puVar11;
              puVar10 = (undefined8 *)*puVar16;
              puVar11 = puVar10;
            } while (puVar16 == (undefined8 *)puVar10[2]);
            puVar11 = puVar16;
            if ((undefined8 *)puVar16[2] != puVar10) {
              puVar11 = puVar10;
            }
          }
          else {
            do {
              puVar11 = puVar16;
              puVar16 = (undefined8 *)puVar11[1];
            } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
          }
          uVar9 = *puVar1;
        } while (puVar11 != puVar8);
      }
    }
    else {
LAB_02b91e14:
      if (plVar17 != plVar18) {
        iVar4 = (int)plVar18[8];
        while( true ) {
          if (-1 < iVar4) {
            if (DAT_043f1790 == (undefined **)0x0) {
              DAT_043f1790 = &PTR_PTR_042868c8;
            }
            (**(code **)(*DAT_043f1790 + 0x10))();
          }
          plVar18 = (long *)*plVar18;
          if (plVar17 == plVar18) break;
          iVar4 = (int)plVar18[8];
        }
      }
      puVar11 = *(undefined8 **)(param_1 + 0xd0);
      while (puVar11 != puVar8) {
        while( true ) {
          puVar16 = (undefined8 *)puVar11[2];
          if ((undefined8 *)puVar11[2] != (undefined8 *)0x0) break;
          do {
            puVar16 = puVar11;
            puVar10 = (undefined8 *)*puVar16;
            puVar11 = puVar10;
          } while (puVar16 == (undefined8 *)puVar10[2]);
          puVar11 = puVar16;
          if ((undefined8 *)puVar16[2] != puVar10) {
            puVar11 = puVar10;
          }
          if (puVar11 == puVar8) goto LAB_02b91eb4;
        }
        do {
          puVar11 = puVar16;
          puVar16 = (undefined8 *)puVar11[1];
        } while ((undefined8 *)puVar11[1] != (undefined8 *)0x0);
      }
    }
  }
LAB_02b91eb4:
  *(undefined8 *)(param_1 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 4));
  return plVar14;
}


