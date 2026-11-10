/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00305d10; name: FUN_00305d10
 */


void FUN_00305d10(long param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(ulong *)(param_1 + 0x20) < param_2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x158,2,
                 "assertion failed: %s","n <= sb->length");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) - param_2;
  lVar14 = *(long *)(param_1 + 0x10) + -1;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar14 * 0x20);
  uStack_78 = puVar1[1];
  local_80 = (long *)*puVar1;
  uStack_68 = puVar1[3];
  local_70 = puVar1[2];
  bVar7 = local_80 == (long *)0x0;
  uVar12 = uStack_78 & 0xff;
  if (!bVar7) {
    uVar12 = uStack_78;
  }
  if (param_2 < uVar12) {
LAB_00305f48:
    FUN_002f3860(&local_a0,&local_80,uVar12 - param_2);
    uVar6 = uStack_68;
    uVar5 = local_70;
    uVar12 = uStack_78;
    plVar4 = local_80;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar14 * 0x20);
    puVar1[1] = uStack_98;
    *puVar1 = local_a0;
    puVar1[3] = uStack_88;
    puVar1[2] = uStack_90;
    if (param_3 == (long *)0x0) {
      if ((local_80 != (long *)0x0) && (plVar8 = (long *)*local_80, plVar8 != (long *)0x0)) {
        plVar11 = plVar8 + 1;
        lVar14 = *plVar8;
        do {
          lVar13 = *plVar11;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((lVar14 != 0) && (*(char *)(lVar14 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar14 + 8),plVar8,lVar13);
        }
        if (lVar13 < 1) goto LAB_00306150;
        if (lVar13 == 1) {
          (*(code *)plVar4[3])(plVar4[4]);
        }
      }
    }
    else {
      lVar14 = param_3[2];
      if (lVar14 == 0) {
        lVar13 = *param_3;
        param_3[1] = lVar13;
      }
      else {
        lVar13 = param_3[1];
        if ((lVar13 - *param_3 >> 5) + lVar14 == param_3[3]) {
          FUN_00306350(param_3);
          lVar13 = param_3[1];
        }
      }
      puVar1 = (undefined8 *)(lVar13 + lVar14 * 0x20);
      *puVar1 = plVar4;
      puVar1[1] = uVar12;
      puVar1[3] = uVar6;
      puVar1[2] = uVar5;
      uVar2 = uVar12 & 0xff;
      if (plVar4 != (long *)0x0) {
        uVar2 = uVar12;
      }
      param_3[4] = param_3[4] + uVar2;
      param_3[2] = lVar14 + 1;
    }
  }
  else {
    if (param_3 == (long *)0x0) {
      if (uVar12 != param_2) {
        do {
          plVar4 = local_80;
          if ((!bVar7) && (plVar8 = (long *)*local_80, plVar8 != (long *)0x0)) {
            plVar11 = plVar8 + 1;
            lVar13 = *plVar8;
            do {
              lVar10 = *plVar11;
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar7) {
                *plVar11 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                           "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar8,lVar10);
            }
            if (lVar10 < 1) goto LAB_00306150;
            if (lVar10 == 1) {
              (*(code *)plVar4[3])(plVar4[4]);
            }
          }
          *(long *)(param_1 + 0x10) = lVar14;
          lVar14 = lVar14 + -1;
          puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar14 * 0x20);
          param_2 = param_2 - uVar12;
          uStack_78 = puVar1[1];
          local_80 = (long *)*puVar1;
          uStack_68 = puVar1[3];
          local_70 = puVar1[2];
          bVar7 = local_80 == (long *)0x0;
          uVar12 = uStack_78 & 0xff;
          if (!bVar7) {
            uVar12 = uStack_78;
          }
          if (param_2 < uVar12) goto LAB_00305f48;
        } while (param_2 != uVar12);
      }
    }
    else {
      lVar13 = *(long *)(param_1 + 0x10) * 0x20 + -0x40;
      param_2 = param_2 - uVar12;
      plVar4 = local_80;
      uVar12 = uStack_78;
      uVar5 = local_70;
      uVar6 = uStack_68;
      while (local_80 = plVar4, uStack_78 = uVar12, local_70 = uVar5, uStack_68 = uVar6,
            param_2 != 0) {
        lVar10 = param_3[2];
        if (lVar10 == 0) {
          lVar9 = *param_3;
          param_3[1] = lVar9;
        }
        else {
          lVar9 = param_3[1];
          if ((lVar9 - *param_3 >> 5) + lVar10 == param_3[3]) {
            FUN_00306350(param_3);
            lVar9 = param_3[1];
          }
        }
        puVar1 = (undefined8 *)(lVar9 + lVar10 * 0x20);
        *puVar1 = plVar4;
        puVar1[1] = uVar12;
        puVar1[3] = uVar6;
        puVar1[2] = uVar5;
        uVar2 = uVar12 & 0xff;
        if (!bVar7) {
          uVar2 = uVar12;
        }
        param_3[4] = param_3[4] + uVar2;
        param_3[2] = lVar10 + 1;
        *(long *)(param_1 + 0x10) = lVar14;
        lVar14 = lVar14 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar13);
        lVar13 = lVar13 + -0x20;
        uStack_78 = puVar1[1];
        local_80 = (long *)*puVar1;
        uStack_68 = puVar1[3];
        local_70 = puVar1[2];
        bVar7 = local_80 == (long *)0x0;
        uVar12 = uStack_78 & 0xff;
        if (!bVar7) {
          uVar12 = uStack_78;
        }
        if (param_2 < uVar12) goto LAB_00305f48;
        param_2 = param_2 - uVar12;
        plVar4 = local_80;
        uVar12 = uStack_78;
        uVar5 = local_70;
        uVar6 = uStack_68;
      }
    }
    uVar6 = uStack_68;
    uVar5 = local_70;
    uVar12 = uStack_78;
    plVar4 = local_80;
    if (param_3 == (long *)0x0) {
      if ((!bVar7) && (plVar8 = (long *)*local_80, plVar8 != (long *)0x0)) {
        plVar11 = plVar8 + 1;
        lVar13 = *plVar8;
        do {
          lVar10 = *plVar11;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar8,lVar10);
        }
        if (lVar10 < 1) {
LAB_00306150:
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar10 == 1) {
          (*(code *)plVar4[3])(plVar4[4]);
        }
      }
    }
    else {
      lVar13 = param_3[2];
      if (lVar13 == 0) {
        lVar10 = *param_3;
        param_3[1] = lVar10;
      }
      else {
        lVar10 = param_3[1];
        if ((lVar10 - *param_3 >> 5) + lVar13 == param_3[3]) {
          FUN_00306350(param_3);
          lVar10 = param_3[1];
        }
      }
      puVar1 = (undefined8 *)(lVar10 + lVar13 * 0x20);
      *puVar1 = plVar4;
      puVar1[1] = uVar12;
      puVar1[3] = uVar6;
      puVar1[2] = uVar5;
      uVar2 = uVar12 & 0xff;
      if (!bVar7) {
        uVar2 = uVar12;
      }
      param_3[4] = param_3[4] + uVar2;
      param_3[2] = lVar13 + 1;
    }
    *(long *)(param_1 + 0x10) = lVar14;
  }
  return;
}


