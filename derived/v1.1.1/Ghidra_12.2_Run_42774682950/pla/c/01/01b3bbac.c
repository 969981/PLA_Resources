/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b3bbac; name: FUN_01b3bbac
 */


undefined1  [16] FUN_01b3bbac(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  float fVar16;
  float extraout_var;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  ulong unaff_d8;
  undefined8 in_register_00005108;
  undefined8 uVar20;
  long *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_38;
  
  uVar20 = 0;
  if (*(long *)(param_1 + 0x5e8) != 0) {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar14 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar14;
    uVar7 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x5e8) + 0x98));
    uVar8 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x5e8) + 0x98));
    uVar9 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(param_1 + 0x5e8) + 0x98));
    piVar11 = (int *)FUN_010aa4a0(uVar14,uVar7,uVar8,uVar9);
    uVar12 = FUN_02c6d8ec(*(undefined8 *)(*(long *)(param_1 + 0x5e8) + 0x98));
    if ((uVar12 & 1) != 0) {
      unaff_d8 = 0;
      in_register_00005108 = 0;
      if ((0x30 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
         (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x18], uVar12 != 0)) {
        unaff_d8 = (ulong)*(uint *)((long)piVar11 + uVar12);
        in_register_00005108 = 0;
      }
      goto LAB_01b3bce0;
    }
    local_70 = (undefined8 *)0x0;
    pcStack_68 = (char *)0x0;
    FUN_00ac3fa4(&local_70,param_1 + 0x248);
    if (local_70 == (undefined8 *)0x0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_00bd915c(&local_38);
      puVar6 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_90 = (long *)*puVar6;
          FUN_02a44274(lVar13 + 0xd8,&local_90);
        }
      }
    }
    if (local_38 == (long *)0x0) goto LAB_01b3bcdc;
    if (local_38[0x1d2] == 0) {
      local_90 = (long *)0x0;
LAB_01b3bcac:
      local_70 = (undefined8 *)0x0;
      pcStack_68 = (char *)0x0;
LAB_01b3bcb4:
      bVar5 = false;
    }
    else {
      FUN_018e3920(&local_90);
      if (local_90 == (long *)0x0) goto LAB_01b3bcac;
      local_70 = (undefined8 *)0x0;
      pcStack_68 = (char *)0x0;
      FUN_00b182e0(&local_70,local_90 + 0x9a);
      if (local_90 != (long *)0x0) {
        lVar13 = local_90[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 != 0) goto LAB_01b3bd98;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
        if (local_70 != (undefined8 *)0x0) goto LAB_01b3bda0;
        goto LAB_01b3bcb4;
      }
LAB_01b3bd98:
      if (local_70 == (undefined8 *)0x0) goto LAB_01b3bcb4;
LAB_01b3bda0:
      puVar6 = local_70;
      if (*(int *)((long)local_70 + 0xc) != 0) {
        piVar1 = (int *)((long)local_70 + 0xc);
        iVar10 = *(int *)((long)local_70 + 0xc);
        do {
          plVar15 = (long *)puVar6[2];
          lVar13 = FUN_00ab5048();
          while( true ) {
            if (plVar15 == (long *)0x0) goto LAB_01b3beac;
            if (plVar15 == (long *)lVar13) break;
            plVar15 = (long *)*plVar15;
          }
          iVar2 = *piVar1;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar13 = puVar6[3];
              plVar15 = (long *)0x0;
              puVar6 = local_70;
              if (lVar13 != 0) {
                plVar15 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x01b3bea4;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
LAB_01b3beac:
      plVar15 = (long *)0x0;
      puVar6 = local_70;
joined_r0x01b3bea4:
      local_70 = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar6 + 1);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          puVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_90 = (long *)*puVar6;
          FUN_02a44274(lVar13 + 0xd8,&local_90);
        }
      }
      if (plVar15 == (long *)0x0) goto LAB_01b3bcb4;
      fVar19 = 0.0;
      if (((*(ushort *)((long)piVar11 - (long)*piVar11) < 0x2d) ||
          (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[0x16], uVar12 == 0)) ||
         (fVar19 = *(float *)((long)piVar11 + uVar12), fVar19 <= 0.0)) {
        piVar11 = (int *)plVar15[0x44];
        if (((piVar11 == (int *)0x0) || (*(ushort *)((long)piVar11 - (long)*piVar11) < 5)) ||
           (uVar12 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar12 == 0)) {
switchD_01b3bf88_caseD_1:
          local_90 = (long *)0x3c7aa5c6f3247fd5;
          pcStack_88 = "dither_param_pokemon_m";
          goto LAB_01b3c008;
        }
        switch(*(undefined1 *)((long)piVar11 + uVar12)) {
        case 0:
          local_90 = (long *)0x3c7a97c6f324680b;
          pcStack_88 = "dither_param_pokemon_s";
          break;
        case 1:
          goto switchD_01b3bf88_caseD_1;
        case 2:
          local_90 = (long *)0x3c7aa4c6f3247e22;
          pcStack_88 = "dither_param_pokemon_l";
          break;
        case 3:
          local_90 = (long *)0xe8e44c0f27029e8a;
          pcStack_88 = "dither_param_pokemon_ll";
          local_80 = 0x17;
          goto LAB_01b3c010;
        default:
          goto switchD_01b3bf88_default;
        }
LAB_01b3c008:
        local_80 = 0x16;
LAB_01b3c010:
        local_58 = (long *)0x0;
        local_60 = 6;
        pcStack_68 = "camera";
        local_70 = (undefined8 *)&DAT_f976cfc5b993016e;
        local_78 = (long *)0x0;
        FUN_00aee408(&local_70,&local_90);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        fVar19 = extraout_var;
      }
switchD_01b3bf88_default:
      fVar16 = (float)FUN_00d83e48(plVar15);
      fVar18 = 1.0;
      if (*(float *)(plVar15 + 0x52) != 0.0) {
        fVar18 = *(float *)(plVar15 + 0x52);
      }
      unaff_d8 = (ulong)(uint)(fVar19 * (fVar16 / fVar18) * (fVar16 / fVar18));
      in_register_00005108 = 0;
      lVar13 = plVar15[0xb];
      piVar11 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar11;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 1) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      bVar5 = true;
    }
    if (local_38 != (long *)0x0) {
      lVar13 = local_38[0xb];
      piVar11 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (bVar5) goto LAB_01b3bce0;
  }
LAB_01b3bcdc:
  in_register_00005108 = uVar20;
  unaff_d8 = 0x3f800000;
LAB_01b3bce0:
  auVar17._8_8_ = in_register_00005108;
  auVar17._0_8_ = unaff_d8;
  return auVar17;
}


