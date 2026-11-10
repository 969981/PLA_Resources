/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0159c3ac; name: FUN_0159c3ac
 */


void FUN_0159c3ac(long param_1,int param_2,ulong param_3)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  int iVar19;
  ulong local_90;
  int local_88;
  int iStack_84;
  uint local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_64;
  
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0xa0) = 0;
    *(long *)(param_1 + 0x90) =
         *(long *)(param_1 + 0x88) + (long)*(int *)(param_1 + 0xd0) * 0xc + 0x18;
  }
  iVar9 = param_2 + -1;
  if (param_2 < 1) {
    if (param_2 == 0) {
      return;
    }
    iVar9 = *(int *)(param_1 + 0x9c) + 1;
  }
  piVar6 = *(int **)(param_1 + 0x90);
  *(int *)(param_1 + 0x98) = iVar9;
  iVar19 = *piVar6;
  if (iVar19 == -1 || iVar9 < iVar19) {
    return;
  }
  lVar5 = tpidr_el0;
LAB_0159c45c:
  *(int **)(param_1 + 0x90) = piVar6 + 1;
  iVar9 = piVar6[1];
  *(int **)(param_1 + 0x90) = piVar6 + 2;
  plVar15 = *(long **)(param_1 + 0xb0);
  uVar1 = *(ushort *)(piVar6 + 2);
  *(long *)(param_1 + 0x90) = (long)piVar6 + 10;
  sVar2 = *(short *)((long)piVar6 + 10);
  *(int **)(param_1 + 0x90) = piVar6 + 3;
  if (plVar15[0xb] != 0) {
    plVar16 = (long *)plVar15[6];
joined_r0x0159c498:
    plVar17 = plVar16;
    if (plVar16 != (long *)0x0) {
      do {
        plVar18 = (long *)plVar15[7];
        plVar16 = (long *)*plVar17;
        uVar4 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar4 & 1) != 0) {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) goto LAB_0159c7ac;
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,plVar17,0x20,8);
        plVar17 = plVar16;
        if (plVar16 == (long *)0x0) break;
      } while( true );
    }
    lVar7 = plVar15[1];
    plVar15[6] = 0;
    if ((((lVar7 != 0) && (*(undefined8 *)*plVar15 = 0, lVar7 != 1)) &&
        (*(undefined8 *)(*plVar15 + 8) = 0, lVar7 != 2)) &&
       ((*(undefined8 *)(*plVar15 + 0x10) = 0, lVar7 != 3 &&
        (*(undefined8 *)(*plVar15 + 0x18) = 0, lVar7 != 4)))) {
      lVar10 = 4;
      do {
        *(undefined8 *)(*plVar15 + lVar10 * 8) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar7 != lVar10);
    }
    plVar15[0xb] = 0;
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    puVar8 = *(ulong **)(param_1 + 0x90);
    local_90 = *puVar8;
    *(ulong **)(param_1 + 0x90) = puVar8 + 1;
    local_64 = (undefined4)puVar8[1];
    *(long *)(param_1 + 0x90) = (long)puVar8 + 0xc;
    FUN_0159bec0(*(undefined8 *)(param_1 + 0xb0),&local_90,&local_64);
    if (1 < *(int *)(param_1 + 0xa8)) {
      puVar8 = *(ulong **)(param_1 + 0x90);
      local_90 = *puVar8;
      *(ulong **)(param_1 + 0x90) = puVar8 + 1;
      local_64 = (undefined4)puVar8[1];
      *(long *)(param_1 + 0x90) = (long)puVar8 + 0xc;
      FUN_0159bec0(*(undefined8 *)(param_1 + 0xb0),&local_90,&local_64);
      if (2 < *(int *)(param_1 + 0xa8)) {
        puVar8 = *(ulong **)(param_1 + 0x90);
        local_90 = *puVar8;
        *(ulong **)(param_1 + 0x90) = puVar8 + 1;
        local_64 = (undefined4)puVar8[1];
        *(long *)(param_1 + 0x90) = (long)puVar8 + 0xc;
        FUN_0159bec0(*(undefined8 *)(param_1 + 0xb0),&local_90,&local_64);
        if (3 < *(int *)(param_1 + 0xa8)) {
          puVar8 = *(ulong **)(param_1 + 0x90);
          local_90 = *puVar8;
          *(ulong **)(param_1 + 0x90) = puVar8 + 1;
          local_64 = (undefined4)puVar8[1];
          *(long *)(param_1 + 0x90) = (long)puVar8 + 0xc;
          FUN_0159bec0(*(undefined8 *)(param_1 + 0xb0),&local_90,&local_64);
          if (4 < *(int *)(param_1 + 0xa8)) {
            iVar14 = 4;
            do {
              puVar8 = *(ulong **)(param_1 + 0x90);
              local_90 = *puVar8;
              *(ulong **)(param_1 + 0x90) = puVar8 + 1;
              local_64 = (undefined4)puVar8[1];
              *(long *)(param_1 + 0x90) = (long)puVar8 + 0xc;
              FUN_0159bec0(*(undefined8 *)(param_1 + 0xb0),&local_90,&local_64);
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(param_1 + 0xa8));
          }
        }
      }
    }
  }
  local_70 = sVar2 != 0;
  puVar8 = *(ulong **)(param_1 + 0x90) + 1;
  local_90 = **(ulong **)(param_1 + 0x90);
  *(ulong **)(param_1 + 0x90) = puVar8;
  local_80 = (uint)uVar1;
  local_78 = *(undefined8 *)(param_1 + 0xb0);
  local_88 = iVar19;
  iStack_84 = iVar9;
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))(*(long **)(param_1 + 0xf8),param_1,&local_90,1);
  uVar4 = (*(long **)(param_1 + 0xd8))[1];
  if (uVar4 != 0) {
    uVar11 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar4 - 1 & local_90;
    }
    else if (local_90 < uVar4) {
      uVar12 = local_90;
    }
    else {
      uVar12 = 0;
      if (uVar4 != 0) {
        uVar12 = local_90 / uVar4;
      }
      uVar12 = local_90 - uVar12 * uVar4;
    }
    puVar13 = *(undefined8 **)(**(long **)(param_1 + 0xd8) + uVar12 * 8);
    if ((puVar13 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar13, plVar15 != (long *)0x0)) {
      if (1 < uVar11) {
        do {
          uVar11 = plVar15[1];
          if (uVar11 == local_90) {
            if (plVar15[2] == local_90) goto LAB_0159c788;
          }
          else {
            if (uVar4 <= uVar11) {
              uVar3 = 0;
              if (uVar4 != 0) {
                uVar3 = uVar11 / uVar4;
              }
              uVar11 = uVar11 - uVar3 * uVar4;
            }
            if (uVar11 != uVar12) goto LAB_0159c8b0;
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_0159c8b0;
        } while( true );
      }
      do {
        if (plVar15[1] == local_90) {
          if (plVar15[2] == local_90) goto LAB_0159c788;
        }
        else if ((plVar15[1] & uVar4 - 1) != uVar12) break;
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) break;
      } while( true );
    }
  }
LAB_0159c8b0:
  puVar13 = (undefined8 *)FUN_0159d1b0();
  lVar5 = puVar13[0x1b];
  *puVar13 = &DAT_0421e468;
  puVar13[9] = &PTR_LAB_0421e4a0;
  puVar13[0x1b] = 0;
  if (lVar5 != 0) {
    FUN_0159c924(puVar13 + 0x1c);
  }
  lVar5 = puVar13[0x16];
  puVar13[0x16] = 0;
  if (lVar5 != 0) {
    FUN_0159c924(puVar13 + 0x17);
  }
  FUN_00936104(puVar13 + 0xb);
  return;
LAB_0159c7ac:
  FUN_02bcc824(plVar18,plVar17,0x20,8);
  goto joined_r0x0159c498;
LAB_0159c788:
  piVar6 = (int *)((long)puVar8 + (long)(int)plVar15[3]);
  *(int **)(param_1 + 0x90) = piVar6;
  iVar19 = *piVar6;
  if (iVar19 == -1 || *(int *)(param_1 + 0x98) < iVar19) {
    return;
  }
  goto LAB_0159c45c;
}


