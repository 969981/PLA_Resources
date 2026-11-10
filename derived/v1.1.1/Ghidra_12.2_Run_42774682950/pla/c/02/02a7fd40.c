/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a7fd40; name: FUN_02a7fd40
 */


byte * FUN_02a7fd40(long param_1,byte *param_2,byte *param_3,long param_4,undefined4 param_5,
                   undefined4 param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  long lVar15;
  
  plVar6 = DAT_043f1798;
  if (param_2 == param_3) {
    return param_2;
  }
  bVar2 = *param_2;
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  if (bVar2 < 0x3f) {
    if (bVar2 == 0x2a) {
      pbVar14 = param_2 + 1;
      if (((pbVar14 == param_3) || (uVar1 != 0)) || (*pbVar14 != 0x3f)) {
        lVar15 = tpidr_el0;
        plVar11 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar11 = plVar6;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
        lVar10 = *(long *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(lVar10 + 8);
        *puVar7 = &PTR_LAB_0427f1d8;
        puVar7[1] = uVar12;
        *(undefined8 *)(lVar10 + 8) = 0;
        plVar6 = DAT_043f1798;
        plVar11 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar11 = plVar6;
        }
        puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
        uVar9 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined8 *)(param_4 + 8);
        puVar8[3] = 0;
        puVar8[4] = 0xffffffffffffffff;
        puVar8[2] = puVar7;
LAB_02a80a30:
        *(undefined4 *)(puVar8 + 5) = uVar9;
        *(undefined4 *)((long)puVar8 + 0x2c) = param_5;
        *(undefined4 *)(puVar8 + 6) = param_6;
        *(undefined1 *)((long)puVar8 + 0x34) = 1;
        *puVar8 = &PTR_LAB_0427f4d8;
        puVar8[1] = uVar12;
        goto LAB_02a80a44;
      }
      lVar15 = tpidr_el0;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
      lVar10 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar10 + 8);
      *puVar7 = &PTR_LAB_0427f1d8;
      puVar7[1] = uVar12;
      *(undefined8 *)(lVar10 + 8) = 0;
      plVar6 = DAT_043f1798;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      pbVar14 = param_2 + 2;
      puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar8[2] = puVar7;
      puVar8[3] = 0;
    }
    else {
      if (bVar2 != 0x2b) {
        return param_2;
      }
      if (((param_2 + 1 == param_3) || (uVar1 != 0)) || (param_2[1] != 0x3f)) {
        lVar15 = tpidr_el0;
        plVar11 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar11 = plVar6;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
        lVar10 = *(long *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(lVar10 + 8);
        *puVar7 = &PTR_LAB_0427f1d8;
        puVar7[1] = uVar12;
        *(undefined8 *)(lVar10 + 8) = 0;
        plVar6 = DAT_043f1798;
        plVar11 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar11 = plVar6;
        }
        puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
        uVar9 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined8 *)(param_4 + 8);
        puVar8[4] = 0xffffffffffffffff;
        puVar8[2] = puVar7;
        puVar8[3] = 1;
LAB_02a804d4:
        pbVar14 = param_2 + 1;
        *(undefined4 *)(puVar8 + 5) = uVar9;
        *(undefined4 *)((long)puVar8 + 0x2c) = param_5;
        *puVar8 = &PTR_LAB_0427f4d8;
        puVar8[1] = uVar12;
        *(undefined4 *)(puVar8 + 6) = param_6;
        *(undefined1 *)((long)puVar8 + 0x34) = 1;
        goto LAB_02a80a44;
      }
      lVar15 = tpidr_el0;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
      lVar10 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar10 + 8);
      *puVar7 = &PTR_LAB_0427f1d8;
      puVar7[1] = uVar12;
      *(undefined8 *)(lVar10 + 8) = 0;
      plVar6 = DAT_043f1798;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      pbVar14 = param_2 + 2;
      puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar8[2] = puVar7;
      puVar8[3] = 1;
    }
LAB_02a8013c:
    uVar13 = 0xffffffffffffffff;
LAB_02a80230:
    puVar8[4] = uVar13;
  }
  else {
    if (bVar2 == 0x3f) {
      if (((param_2 + 1 == param_3) || (uVar1 != 0)) || (param_2[1] != 0x3f)) {
        lVar15 = tpidr_el0;
        plVar11 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar11 = plVar6;
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
        lVar10 = *(long *)(param_1 + 0x38);
        uVar12 = *(undefined8 *)(lVar10 + 8);
        *puVar7 = &PTR_LAB_0427f1d8;
        puVar7[1] = uVar12;
        *(undefined8 *)(lVar10 + 8) = 0;
        plVar6 = DAT_043f1798;
        plVar11 = *(long **)(lVar15 + 0x20);
        if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
          *(long **)(lVar15 + 0x20) = DAT_043f1798;
          plVar11 = plVar6;
        }
        puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
        uVar9 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined8 *)(param_4 + 8);
        puVar8[2] = puVar7;
        puVar8[3] = 0;
        puVar8[4] = 1;
        goto LAB_02a804d4;
      }
      lVar15 = tpidr_el0;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
      lVar10 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar10 + 8);
      *puVar7 = &PTR_LAB_0427f1d8;
      puVar7[1] = uVar12;
      *(undefined8 *)(lVar10 + 8) = 0;
      plVar6 = DAT_043f1798;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      pbVar14 = param_2 + 2;
      puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar13 = 1;
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar8[2] = puVar7;
      puVar8[3] = 0;
      goto LAB_02a80230;
    }
    if (bVar2 != 0x7b) {
      return param_2;
    }
    pbVar14 = param_2 + 1;
    if (((pbVar14 == param_3) ||
        ((bVar2 = *pbVar14, (bVar2 & 0xf8) != 0x30 && ((bVar2 & 0xfe) != 0x38)))) ||
       (iVar3 = bVar2 - 0x30, iVar3 == -1)) {
LAB_02a80ae0:
      FUN_02a8b870();
LAB_02a80ae4:
      FUN_02a8b880();
                    /* WARNING: Does not return */
      pcVar5 = (code *)UndefinedInstructionException(0,0x2a80ae8);
      (*pcVar5)();
    }
    for (param_2 = param_2 + 2; param_2 != param_3; param_2 = param_2 + 1) {
      bVar2 = *param_2;
      if ((((bVar2 & 0xf8) != 0x30) && ((bVar2 & 0xfe) != 0x38)) || (bVar2 - 0x30 == -1))
      goto LAB_02a7ff2c;
      if (0xccccccb < iVar3) goto LAB_02a80ae0;
      iVar3 = (bVar2 - 0x30) + iVar3 * 10;
    }
    param_2 = param_3;
LAB_02a7ff2c:
    if (param_2 == pbVar14) goto LAB_02a80ae0;
    if (param_2 == param_3) goto LAB_02a80ae4;
    if (*param_2 == 0x2c) {
      pbVar14 = param_2 + 1;
      if (pbVar14 != param_3) {
        bVar2 = *pbVar14;
        if (bVar2 == 0x7d) {
          pbVar14 = param_2 + 2;
          if (((uVar1 != 0) || (pbVar14 == param_3)) || (*pbVar14 != 0x3f)) {
            lVar15 = tpidr_el0;
            plVar11 = *(long **)(lVar15 + 0x20);
            if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
              *(long **)(lVar15 + 0x20) = DAT_043f1798;
              plVar11 = plVar6;
            }
            puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
            lVar10 = *(long *)(param_1 + 0x38);
            uVar12 = *(undefined8 *)(lVar10 + 8);
            *puVar7 = &PTR_LAB_0427f1d8;
            puVar7[1] = uVar12;
            *(undefined8 *)(lVar10 + 8) = 0;
            plVar6 = DAT_043f1798;
            plVar11 = *(long **)(lVar15 + 0x20);
            if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
              *(long **)(lVar15 + 0x20) = DAT_043f1798;
              plVar11 = plVar6;
            }
            puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
            uVar9 = *(undefined4 *)(param_1 + 0x20);
            uVar12 = *(undefined8 *)(param_4 + 8);
            puVar8[2] = puVar7;
            puVar8[3] = (long)iVar3;
            puVar8[4] = 0xffffffffffffffff;
            goto LAB_02a80a30;
          }
          lVar15 = tpidr_el0;
          plVar11 = *(long **)(lVar15 + 0x20);
          if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
            *(long **)(lVar15 + 0x20) = DAT_043f1798;
            plVar11 = plVar6;
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
          lVar10 = *(long *)(param_1 + 0x38);
          uVar12 = *(undefined8 *)(lVar10 + 8);
          *puVar7 = &PTR_LAB_0427f1d8;
          puVar7[1] = uVar12;
          *(undefined8 *)(lVar10 + 8) = 0;
          plVar6 = DAT_043f1798;
          plVar11 = *(long **)(lVar15 + 0x20);
          if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
            *(long **)(lVar15 + 0x20) = DAT_043f1798;
            plVar11 = plVar6;
          }
          pbVar14 = param_2 + 3;
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar12 = *(undefined8 *)(param_4 + 8);
          puVar8[2] = puVar7;
          puVar8[3] = (long)iVar3;
          goto LAB_02a8013c;
        }
        if ((((bVar2 & 0xf8) != 0x30) && ((bVar2 & 0xfe) != 0x38)) ||
           (iVar4 = bVar2 - 0x30, iVar4 == -1)) goto LAB_02a80ae4;
        for (param_2 = param_2 + 2; param_2 != param_3; param_2 = param_2 + 1) {
          bVar2 = *param_2;
          if ((((bVar2 & 0xf8) != 0x30) && ((bVar2 & 0xfe) != 0x38)) || (bVar2 - 0x30 == -1))
          goto LAB_02a80750;
          if (0xccccccb < iVar4) goto LAB_02a80ae0;
          iVar4 = (bVar2 - 0x30) + iVar4 * 10;
        }
        param_2 = param_3;
LAB_02a80750:
        if (((param_2 == pbVar14) || (param_2 == param_3)) || (*param_2 != 0x7d)) goto LAB_02a80ae4;
        if (iVar3 <= iVar4) {
          pbVar14 = param_2 + 1;
          if (((uVar1 != 0) || (pbVar14 == param_3)) || (*pbVar14 != 0x3f)) {
            lVar15 = tpidr_el0;
            plVar11 = *(long **)(lVar15 + 0x20);
            if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
              *(long **)(lVar15 + 0x20) = DAT_043f1798;
              plVar11 = plVar6;
            }
            puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
            lVar10 = *(long *)(param_1 + 0x38);
            uVar12 = *(undefined8 *)(lVar10 + 8);
            *puVar7 = &PTR_LAB_0427f1d8;
            puVar7[1] = uVar12;
            *(undefined8 *)(lVar10 + 8) = 0;
            plVar6 = DAT_043f1798;
            plVar11 = *(long **)(lVar15 + 0x20);
            if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
              *(long **)(lVar15 + 0x20) = DAT_043f1798;
              plVar11 = plVar6;
            }
            puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
            uVar9 = *(undefined4 *)(param_1 + 0x20);
            uVar12 = *(undefined8 *)(param_4 + 8);
            puVar8[4] = (long)iVar4;
            goto LAB_02a80a2c;
          }
          lVar15 = tpidr_el0;
          plVar11 = *(long **)(lVar15 + 0x20);
          if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
            *(long **)(lVar15 + 0x20) = DAT_043f1798;
            plVar11 = plVar6;
          }
          puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
          lVar10 = *(long *)(param_1 + 0x38);
          uVar12 = *(undefined8 *)(lVar10 + 8);
          *puVar7 = &PTR_LAB_0427f1d8;
          puVar7[1] = uVar12;
          *(undefined8 *)(lVar10 + 8) = 0;
          plVar6 = DAT_043f1798;
          plVar11 = *(long **)(lVar15 + 0x20);
          if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
            *(long **)(lVar15 + 0x20) = DAT_043f1798;
            plVar11 = plVar6;
          }
          pbVar14 = param_2 + 2;
          puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar12 = *(undefined8 *)(param_4 + 8);
          puVar8[4] = (long)iVar4;
          puVar8[2] = puVar7;
          puVar8[3] = (long)iVar3;
          goto LAB_02a8023c;
        }
      }
      goto LAB_02a80ae0;
    }
    if (*param_2 != 0x7d) goto LAB_02a80ae0;
    pbVar14 = param_2 + 1;
    if (((uVar1 != 0) || (pbVar14 == param_3)) || (*pbVar14 != 0x3f)) {
      lVar15 = tpidr_el0;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
      lVar10 = *(long *)(param_1 + 0x38);
      uVar12 = *(undefined8 *)(lVar10 + 8);
      *puVar7 = &PTR_LAB_0427f1d8;
      puVar7[1] = uVar12;
      *(undefined8 *)(lVar10 + 8) = 0;
      plVar6 = DAT_043f1798;
      plVar11 = *(long **)(lVar15 + 0x20);
      if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
        *(long **)(lVar15 + 0x20) = DAT_043f1798;
        plVar11 = plVar6;
      }
      puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_4 + 8);
      puVar8[4] = (long)iVar3;
LAB_02a80a2c:
      puVar8[2] = puVar7;
      puVar8[3] = (long)iVar3;
      goto LAB_02a80a30;
    }
    lVar15 = tpidr_el0;
    plVar11 = *(long **)(lVar15 + 0x20);
    if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
      *(long **)(lVar15 + 0x20) = DAT_043f1798;
      plVar11 = plVar6;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
    lVar10 = *(long *)(param_1 + 0x38);
    uVar12 = *(undefined8 *)(lVar10 + 8);
    *puVar7 = &PTR_LAB_0427f1d8;
    puVar7[1] = uVar12;
    *(undefined8 *)(lVar10 + 8) = 0;
    plVar6 = DAT_043f1798;
    plVar11 = *(long **)(lVar15 + 0x20);
    if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
      *(long **)(lVar15 + 0x20) = DAT_043f1798;
      plVar11 = plVar6;
    }
    pbVar14 = param_2 + 2;
    puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x38,8);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_4 + 8);
    puVar8[4] = (long)iVar3;
    puVar8[2] = puVar7;
    puVar8[3] = (long)iVar3;
  }
LAB_02a8023c:
  *puVar8 = &PTR_LAB_0427f4d8;
  puVar8[1] = uVar12;
  *(undefined4 *)(puVar8 + 5) = uVar9;
  *(undefined4 *)((long)puVar8 + 0x2c) = param_5;
  *(undefined4 *)(puVar8 + 6) = param_6;
  *(undefined1 *)((long)puVar8 + 0x34) = 0;
LAB_02a80a44:
  *(undefined8 *)(param_4 + 8) = 0;
  plVar6 = DAT_043f1798;
  plVar11 = *(long **)(lVar15 + 0x20);
  if (*(long **)(lVar15 + 0x20) == (long *)0x0) {
    *(long **)(lVar15 + 0x20) = DAT_043f1798;
    plVar11 = plVar6;
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x10,8);
  *puVar7 = &PTR_LAB_0427f538;
  puVar7[1] = puVar8;
  *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar7;
  *(undefined8 *)(param_1 + 0x38) = puVar8[2];
  *(undefined8 **)(param_4 + 8) = puVar8;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return pbVar14;
}


