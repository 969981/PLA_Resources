/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8c618; name: FUN_02a8c618
 */


byte * FUN_02a8c618(long param_1,byte *param_2,byte *param_3,long param_4,undefined4 param_5,
                   undefined4 param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  long lVar14;
  
  plVar2 = DAT_043f1798;
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 == 0x2a) {
    lVar14 = tpidr_el0;
    plVar9 = *(long **)(lVar14 + 0x20);
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      *(long **)(lVar14 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
    lVar7 = *(long *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(lVar7 + 8);
    *puVar3 = &PTR_LAB_0427f1d8;
    puVar3[1] = uVar10;
    *(undefined8 *)(lVar7 + 8) = 0;
    plVar2 = DAT_043f1798;
    plVar9 = *(long **)(lVar14 + 0x20);
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      *(long **)(lVar14 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x38,8);
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_4 + 8);
    puVar4[3] = 0;
    puVar4[4] = 0xffffffffffffffff;
    *puVar4 = &PTR_LAB_0427f4d8;
    *(undefined4 *)(puVar4 + 5) = uVar6;
    *(undefined4 *)((long)puVar4 + 0x2c) = param_5;
    *(undefined4 *)(puVar4 + 6) = param_6;
    *(undefined1 *)((long)puVar4 + 0x34) = 1;
    puVar4[1] = uVar10;
    puVar4[2] = puVar3;
    *(undefined8 *)(param_4 + 8) = 0;
    plVar2 = DAT_043f1798;
    plVar9 = *(long **)(lVar14 + 0x20);
    if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
      *(long **)(lVar14 + 0x20) = DAT_043f1798;
      plVar9 = plVar2;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
    param_2 = param_2 + 1;
    goto LAB_02a8cc88;
  }
  if (param_2 + 1 == param_3) {
    return param_2;
  }
  if (*param_2 != 0x5c) {
    return param_2;
  }
  pbVar8 = param_2 + 2;
  if (param_2[1] != 0x7b) {
    pbVar8 = param_2;
  }
  if (pbVar8 == param_2) {
    return param_2;
  }
  if ((pbVar8 != param_3) &&
     (((bVar13 = param_2[(ulong)(param_2[1] == 0x7b) * 2], (bVar13 & 0xf8) == 0x30 ||
       ((bVar13 & 0xfe) == 0x38)) && (iVar1 = bVar13 - 0x30, pbVar12 = pbVar8, iVar1 != -1)))) {
    while (pbVar12 = pbVar12 + 1, pbVar12 != param_3) {
      bVar13 = *pbVar12;
      if ((((bVar13 & 0xf8) != 0x30) && ((bVar13 & 0xfe) != 0x38)) || (bVar13 - 0x30 == -1))
      goto LAB_02a8c868;
      if (0xccccccb < iVar1) goto LAB_02a8cccc;
      iVar1 = (bVar13 - 0x30) + iVar1 * 10;
    }
    pbVar12 = param_3;
LAB_02a8c868:
    if (pbVar12 != pbVar8) {
      if (pbVar12 == param_3) goto LAB_02a8ccd0;
      pbVar8 = pbVar12 + 1;
      if (*pbVar12 == 0x2c) {
        if (pbVar8 == param_3) goto LAB_02a8ccd0;
        bVar13 = *pbVar8;
        if ((((bVar13 & 0xf8) == 0x30) || ((bVar13 & 0xfe) == 0x38)) &&
           (iVar11 = bVar13 - 0x30, iVar11 != -1)) {
          for (pbVar8 = pbVar12 + 2; pbVar8 != param_3; pbVar8 = pbVar8 + 1) {
            bVar13 = *pbVar8;
            if ((((bVar13 & 0xf8) != 0x30) && ((bVar13 & 0xfe) != 0x38)) || (bVar13 - 0x30 == -1))
            goto LAB_02a8ca1c;
            if (0xccccccb < iVar11) goto LAB_02a8cccc;
            iVar11 = (bVar13 - 0x30) + iVar11 * 10;
          }
          goto LAB_02a8ccd0;
        }
        iVar11 = -1;
LAB_02a8ca1c:
        if (((pbVar8 == param_3) || (pbVar8 + 1 == param_3)) || (bVar13 != 0x5c)) goto LAB_02a8ccd0;
        param_2 = pbVar8 + 2;
        if (pbVar8[1] != 0x7d) {
          param_2 = pbVar8;
        }
        if (param_2 == pbVar8) goto LAB_02a8ccd0;
        if (iVar11 == -1) {
          lVar14 = tpidr_el0;
          plVar9 = *(long **)(lVar14 + 0x20);
          if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
            *(long **)(lVar14 + 0x20) = DAT_043f1798;
            plVar9 = plVar2;
          }
          puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
          lVar7 = *(long *)(param_1 + 0x38);
          uVar10 = *(undefined8 *)(lVar7 + 8);
          *puVar3 = &PTR_LAB_0427f1d8;
          puVar3[1] = uVar10;
          *(undefined8 *)(lVar7 + 8) = 0;
          plVar2 = DAT_043f1798;
          plVar9 = *(long **)(lVar14 + 0x20);
          if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
            *(long **)(lVar14 + 0x20) = DAT_043f1798;
            plVar9 = plVar2;
          }
          puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x38,8);
          uVar6 = *(undefined4 *)(param_1 + 0x20);
          uVar10 = *(undefined8 *)(param_4 + 8);
          puVar4[2] = puVar3;
          puVar4[3] = (long)iVar1;
          puVar4[4] = 0xffffffffffffffff;
        }
        else {
          if (iVar11 < iVar1) goto LAB_02a8cccc;
          lVar14 = tpidr_el0;
          plVar9 = *(long **)(lVar14 + 0x20);
          if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
            *(long **)(lVar14 + 0x20) = DAT_043f1798;
            plVar9 = plVar2;
          }
          puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
          lVar7 = *(long *)(param_1 + 0x38);
          uVar10 = *(undefined8 *)(lVar7 + 8);
          *puVar3 = &PTR_LAB_0427f1d8;
          puVar3[1] = uVar10;
          *(undefined8 *)(lVar7 + 8) = 0;
          plVar2 = DAT_043f1798;
          plVar9 = *(long **)(lVar14 + 0x20);
          if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
            *(long **)(lVar14 + 0x20) = DAT_043f1798;
            plVar9 = plVar2;
          }
          puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x38,8);
          uVar6 = *(undefined4 *)(param_1 + 0x20);
          uVar10 = *(undefined8 *)(param_4 + 8);
          puVar4[4] = (long)iVar11;
          puVar4[2] = puVar3;
          puVar4[3] = (long)iVar1;
        }
      }
      else {
        if ((*pbVar12 != 0x5c) || (pbVar8 == param_3)) goto LAB_02a8ccd0;
        param_2 = pbVar12 + 2;
        if (pbVar12[1] != 0x7d) {
          param_2 = pbVar12;
        }
        if (param_2 == pbVar12) goto LAB_02a8ccd0;
        lVar14 = tpidr_el0;
        plVar9 = *(long **)(lVar14 + 0x20);
        if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
          *(long **)(lVar14 + 0x20) = DAT_043f1798;
          plVar9 = plVar2;
        }
        puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
        lVar7 = *(long *)(param_1 + 0x38);
        uVar10 = *(undefined8 *)(lVar7 + 8);
        *puVar3 = &PTR_LAB_0427f1d8;
        puVar3[1] = uVar10;
        *(undefined8 *)(lVar7 + 8) = 0;
        plVar2 = DAT_043f1798;
        plVar9 = *(long **)(lVar14 + 0x20);
        if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
          *(long **)(lVar14 + 0x20) = DAT_043f1798;
          plVar9 = plVar2;
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x38,8);
        uVar6 = *(undefined4 *)(param_1 + 0x20);
        uVar10 = *(undefined8 *)(param_4 + 8);
        puVar4[4] = (long)iVar1;
        puVar4[2] = puVar3;
        puVar4[3] = (long)iVar1;
      }
      *(undefined4 *)(puVar4 + 5) = uVar6;
      *(undefined4 *)((long)puVar4 + 0x2c) = param_5;
      *(undefined4 *)(puVar4 + 6) = param_6;
      *(undefined1 *)((long)puVar4 + 0x34) = 1;
      *puVar4 = &PTR_LAB_0427f4d8;
      puVar4[1] = uVar10;
      *(undefined8 *)(param_4 + 8) = 0;
      plVar2 = DAT_043f1798;
      plVar9 = *(long **)(lVar14 + 0x20);
      if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
        *(long **)(lVar14 + 0x20) = DAT_043f1798;
        plVar9 = plVar2;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
LAB_02a8cc88:
      *puVar3 = &PTR_LAB_0427f538;
      puVar3[1] = puVar4;
      *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar3;
      *(undefined8 *)(param_1 + 0x38) = puVar4[2];
      *(undefined8 **)(param_4 + 8) = puVar4;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      return param_2;
    }
  }
LAB_02a8cccc:
  FUN_02a8b870();
LAB_02a8ccd0:
  puVar3 = (undefined8 *)FUN_02a8b880();
  *puVar3 = &PTR_LAB_0427f208;
  if ((long *)puVar3[1] != (long *)0x0) {
    (**(code **)(*(long *)puVar3[1] + 8))();
  }
  plVar2 = DAT_043f1798;
  lVar14 = tpidr_el0;
  plVar9 = *(long **)(lVar14 + 0x20);
  if (*(long **)(lVar14 + 0x20) == (long *)0x0) {
    *(long **)(lVar14 + 0x20) = DAT_043f1798;
    plVar9 = plVar2;
  }
  uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar14 + 0x38d480)) {
      pbVar8 = (byte *)FUN_02bcc824(plVar9,puVar3,0,8);
      return pbVar8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02a8cdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar8 = (byte *)(**(code **)(*plVar9 + 0x18))(plVar9,puVar3,0,8);
  return pbVar8;
}


