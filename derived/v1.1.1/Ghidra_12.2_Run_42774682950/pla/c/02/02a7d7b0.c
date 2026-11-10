/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7d7b0; name: FUN_02a7d7b0
 */


char * FUN_02a7d7b0(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  
  plVar14 = DAT_043f1798;
  lVar8 = tpidr_el0;
  plVar10 = *(long **)(lVar8 + 0x20);
  if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
    *(long **)(lVar8 + 0x20) = DAT_043f1798;
    plVar10 = plVar14;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,8,8);
  *puVar5 = &PTR_LAB_0427f170;
  plVar14 = DAT_043f1798;
  plVar10 = *(long **)(lVar8 + 0x20);
  if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
    *(long **)(lVar8 + 0x20) = DAT_043f1798;
    plVar10 = plVar14;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
  *puVar6 = &PTR_LAB_0427f1d8;
  puVar6[1] = puVar5;
  plVar14 = DAT_043f1798;
  plVar10 = *(long **)(lVar8 + 0x20);
  if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
    *(long **)(lVar8 + 0x20) = DAT_043f1798;
    plVar10 = plVar14;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
  *puVar5 = &DAT_0427f1a0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = puVar6;
  *(undefined8 **)(param_1 + 0x28) = puVar6;
  plVar14 = *(long **)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 1;
    do {
      lVar12 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  lVar12 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x38) = lVar12;
  plVar14 = DAT_043f1798;
  if (uVar1 < 0x40) {
    if (uVar1 == 0) {
      pcVar7 = (char *)FUN_02a7df84(param_1,param_2);
      return pcVar7;
    }
    if (uVar1 == 0x10) {
      pcVar7 = (char *)FUN_02a7e308(param_1,param_2,"");
      return pcVar7;
    }
    if (uVar1 != 0x20) {
LAB_02a7df80:
      auVar19 = FUN_02a7e6f0();
      lVar8 = auVar19._0_8_;
      lVar12 = *(long *)(lVar8 + 0x38);
      pcVar7 = auVar19._8_8_;
      do {
        pcVar15 = pcVar7;
        pcVar7 = (char *)FUN_02a7edec(lVar8,pcVar15);
        if (pcVar7 == pcVar15) {
          uVar16 = *(undefined8 *)(lVar8 + 0x38);
          iVar2 = *(int *)(lVar8 + 0x1c);
          pcVar7 = (char *)FUN_02a7f3d4(lVar8,pcVar15);
          if (pcVar7 == pcVar15) break;
          pcVar7 = (char *)FUN_02a7fd40(lVar8,pcVar7,"",uVar16,iVar2 + 1,*(int *)(lVar8 + 0x1c) + 1)
          ;
        }
      } while (pcVar7 != pcVar15);
      plVar14 = DAT_043f1798;
      lVar18 = tpidr_el0;
      if (pcVar15 == auVar19._8_8_) {
        plVar10 = *(long **)(lVar18 + 0x20);
        if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
          *(long **)(lVar18 + 0x20) = DAT_043f1798;
          plVar10 = plVar14;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
        lVar17 = *(long *)(lVar8 + 0x38);
        uVar16 = *(undefined8 *)(lVar17 + 8);
        *puVar5 = &PTR_LAB_0427f1d8;
        puVar5[1] = uVar16;
        *(undefined8 **)(lVar17 + 8) = puVar5;
        *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 8);
      }
      if (pcVar15 != "") {
        do {
          if (*pcVar15 != '|') {
            return pcVar15;
          }
          lVar17 = *(long *)(lVar8 + 0x38);
          pcVar7 = pcVar15 + 1;
          pcVar9 = pcVar7;
          do {
            pcVar15 = pcVar9;
            pcVar9 = (char *)FUN_02a7edec(lVar8,pcVar15);
            if (pcVar9 == pcVar15) {
              uVar16 = *(undefined8 *)(lVar8 + 0x38);
              iVar2 = *(int *)(lVar8 + 0x1c);
              pcVar9 = (char *)FUN_02a7f3d4(lVar8,pcVar15);
              if (pcVar9 == pcVar15) break;
              pcVar9 = (char *)FUN_02a7fd40(lVar8,pcVar9,"",uVar16,iVar2 + 1,
                                            *(int *)(lVar8 + 0x1c) + 1);
            }
          } while (pcVar9 != pcVar15);
          plVar14 = DAT_043f1798;
          if (pcVar15 == pcVar7) {
            plVar10 = *(long **)(lVar18 + 0x20);
            if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
              *(long **)(lVar18 + 0x20) = DAT_043f1798;
              plVar10 = plVar14;
            }
            puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
            lVar11 = *(long *)(lVar8 + 0x38);
            uVar16 = *(undefined8 *)(lVar11 + 8);
            *puVar5 = &PTR_LAB_0427f1d8;
            puVar5[1] = uVar16;
            *(undefined8 **)(lVar11 + 8) = puVar5;
            *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 8);
          }
          plVar14 = DAT_043f1798;
          plVar10 = *(long **)(lVar18 + 0x20);
          if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
            *(long **)(lVar18 + 0x20) = DAT_043f1798;
            plVar10 = plVar14;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x18,8);
          uVar16 = *(undefined8 *)(lVar12 + 8);
          uVar13 = *(undefined8 *)(lVar17 + 8);
          *puVar5 = &PTR_LAB_0427f568;
          puVar5[1] = uVar16;
          puVar5[2] = uVar13;
          *(undefined8 **)(lVar12 + 8) = puVar5;
          *(undefined8 *)(lVar17 + 8) = 0;
          plVar14 = DAT_043f1798;
          plVar10 = *(long **)(lVar18 + 0x20);
          if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
            *(long **)(lVar18 + 0x20) = DAT_043f1798;
            plVar10 = plVar14;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
          uVar16 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 8);
          *puVar5 = &PTR_LAB_0427f1d8;
          puVar5[1] = uVar16;
          *(undefined8 **)(lVar17 + 8) = puVar5;
          *(undefined8 *)(*(long *)(lVar8 + 0x38) + 8) = 0;
          plVar14 = DAT_043f1798;
          plVar10 = *(long **)(lVar18 + 0x20);
          if (*(long **)(lVar18 + 0x20) == (long *)0x0) {
            *(long **)(lVar18 + 0x20) = DAT_043f1798;
            plVar10 = plVar14;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
          uVar16 = *(undefined8 *)(lVar17 + 8);
          *puVar5 = &PTR_LAB_0427f598;
          puVar5[1] = uVar16;
          *(undefined8 **)(*(long *)(lVar8 + 0x38) + 8) = puVar5;
          *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar17 + 8);
        } while (pcVar15 != "");
      }
      return "";
    }
LAB_02a7da10:
    pcVar7 = (char *)FUN_02a7e4c4(param_1,param_2,"");
    return pcVar7;
  }
  if (uVar1 == 0x40) goto LAB_02a7da10;
  if (uVar1 != 0x80) {
    if (uVar1 != 0x100) goto LAB_02a7df80;
    if (param_2 == "") {
LAB_02a7dcfc:
      plVar10 = *(long **)(lVar8 + 0x20);
      if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
        *(long **)(lVar8 + 0x20) = DAT_043f1798;
        plVar10 = plVar14;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
      uVar16 = *(undefined8 *)(lVar12 + 8);
      *puVar5 = &PTR_LAB_0427f1d8;
      puVar5[1] = uVar16;
      *(undefined8 **)(lVar12 + 8) = puVar5;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      if (param_2 == "") goto LAB_02a7df5c;
    }
    else {
      pcVar7 = param_2;
      do {
        if (*pcVar7 == '\n') goto LAB_02a7da74;
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 != "");
      pcVar7 = "";
LAB_02a7da74:
      if (pcVar7 == param_2) goto LAB_02a7dcfc;
      FUN_02a7e4c4(param_1,param_2,pcVar7);
      param_2 = pcVar7;
      if (pcVar7 == "") goto LAB_02a7df5c;
    }
    param_2 = param_2 + 1;
    if (param_2 != "") {
      do {
        plVar14 = DAT_043f1798;
        pcVar7 = param_2;
        do {
          if (*pcVar7 == '\n') goto LAB_02a7ddec;
          pcVar7 = pcVar7 + 1;
        } while (pcVar7 != "");
        pcVar7 = "";
LAB_02a7ddec:
        lVar18 = *(long *)(param_1 + 0x38);
        if (pcVar7 == param_2) {
          plVar10 = *(long **)(lVar8 + 0x20);
          if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
            *(long **)(lVar8 + 0x20) = DAT_043f1798;
            plVar10 = plVar14;
          }
          puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
          uVar16 = *(undefined8 *)(lVar18 + 8);
          *puVar5 = &PTR_LAB_0427f1d8;
          puVar5[1] = uVar16;
          *(undefined8 **)(lVar18 + 8) = puVar5;
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        }
        else {
          FUN_02a7e4c4(param_1,param_2,pcVar7);
        }
        plVar14 = DAT_043f1798;
        plVar10 = *(long **)(lVar8 + 0x20);
        if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
          *(long **)(lVar8 + 0x20) = DAT_043f1798;
          plVar10 = plVar14;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x18,8);
        uVar16 = *(undefined8 *)(lVar12 + 8);
        puVar5[2] = *(undefined8 *)(lVar18 + 8);
        *puVar5 = &PTR_LAB_0427f568;
        puVar5[1] = uVar16;
        *(undefined8 **)(lVar12 + 8) = puVar5;
        *(undefined8 *)(lVar18 + 8) = 0;
        plVar14 = DAT_043f1798;
        plVar10 = *(long **)(lVar8 + 0x20);
        if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
          *(long **)(lVar8 + 0x20) = DAT_043f1798;
          plVar10 = plVar14;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
        uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
        *puVar5 = &PTR_LAB_0427f1d8;
        puVar5[1] = uVar16;
        *(undefined8 **)(lVar18 + 8) = puVar5;
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
        plVar14 = DAT_043f1798;
        plVar10 = *(long **)(lVar8 + 0x20);
        if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
          *(long **)(lVar8 + 0x20) = DAT_043f1798;
          plVar10 = plVar14;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
        uVar16 = *(undefined8 *)(lVar18 + 8);
        *puVar5 = &PTR_LAB_0427f598;
        puVar5[1] = uVar16;
        *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar5;
        param_2 = "";
        if (pcVar7 != "") {
          param_2 = pcVar7 + 1;
        }
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar18 + 8);
      } while (param_2 != "");
    }
    goto LAB_02a7df5c;
  }
  if (param_2 == "") {
LAB_02a7da9c:
    plVar10 = *(long **)(lVar8 + 0x20);
    if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
      *(long **)(lVar8 + 0x20) = DAT_043f1798;
      plVar10 = plVar14;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
    uVar16 = *(undefined8 *)(lVar12 + 8);
    *puVar5 = &PTR_LAB_0427f1d8;
    puVar5[1] = uVar16;
    *(undefined8 **)(lVar12 + 8) = puVar5;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    if (param_2 == "") goto LAB_02a7df5c;
  }
  else {
    pcVar7 = param_2;
    do {
      if (*pcVar7 == '\n') goto LAB_02a7d9bc;
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != "");
    pcVar7 = "";
LAB_02a7d9bc:
    if (pcVar7 == param_2) goto LAB_02a7da9c;
    FUN_02a7e308(param_1,param_2,pcVar7);
    param_2 = pcVar7;
    if (pcVar7 == "") goto LAB_02a7df5c;
  }
  param_2 = param_2 + 1;
  if (param_2 != "") {
    do {
      plVar14 = DAT_043f1798;
      pcVar7 = param_2;
      do {
        if (*pcVar7 == '\n') goto LAB_02a7db8c;
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 != "");
      pcVar7 = "";
LAB_02a7db8c:
      lVar18 = *(long *)(param_1 + 0x38);
      if (pcVar7 == param_2) {
        plVar10 = *(long **)(lVar8 + 0x20);
        if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
          *(long **)(lVar8 + 0x20) = DAT_043f1798;
          plVar10 = plVar14;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
        uVar16 = *(undefined8 *)(lVar18 + 8);
        *puVar5 = &PTR_LAB_0427f1d8;
        puVar5[1] = uVar16;
        *(undefined8 **)(lVar18 + 8) = puVar5;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      else {
        FUN_02a7e308(param_1,param_2,pcVar7);
      }
      plVar14 = DAT_043f1798;
      plVar10 = *(long **)(lVar8 + 0x20);
      if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
        *(long **)(lVar8 + 0x20) = DAT_043f1798;
        plVar10 = plVar14;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x18,8);
      uVar16 = *(undefined8 *)(lVar12 + 8);
      puVar5[2] = *(undefined8 *)(lVar18 + 8);
      *puVar5 = &PTR_LAB_0427f568;
      puVar5[1] = uVar16;
      *(undefined8 **)(lVar12 + 8) = puVar5;
      *(undefined8 *)(lVar18 + 8) = 0;
      plVar14 = DAT_043f1798;
      plVar10 = *(long **)(lVar8 + 0x20);
      if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
        *(long **)(lVar8 + 0x20) = DAT_043f1798;
        plVar10 = plVar14;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      *puVar5 = &PTR_LAB_0427f1d8;
      puVar5[1] = uVar16;
      *(undefined8 **)(lVar18 + 8) = puVar5;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
      plVar14 = DAT_043f1798;
      plVar10 = *(long **)(lVar8 + 0x20);
      if (*(long **)(lVar8 + 0x20) == (long *)0x0) {
        *(long **)(lVar8 + 0x20) = DAT_043f1798;
        plVar10 = plVar14;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x10,8);
      uVar16 = *(undefined8 *)(lVar18 + 8);
      *puVar5 = &PTR_LAB_0427f598;
      puVar5[1] = uVar16;
      *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar5;
      param_2 = "";
      if (pcVar7 != "") {
        param_2 = pcVar7 + 1;
      }
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar18 + 8);
    } while (param_2 != "");
  }
LAB_02a7df5c:
  return "";
}


