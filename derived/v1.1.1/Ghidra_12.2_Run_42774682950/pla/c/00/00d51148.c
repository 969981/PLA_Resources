/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d51148; name: FUN_00d51148
 */


void FUN_00d51148(long param_1,int param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  int param3;
  long lVar14;
  float fVar15;
  long local_108;
  long lStack_100;
  long local_f8;
  long *local_f0;
  char local_e8 [104];
  long *local_78;
  
  puVar4 = PTR_DAT_04379cd8;
  if ((param_3 & 1) == 0) {
    return;
  }
  param3 = 0;
  if (param_2 == 0) {
    do {
      iVar6 = snprintf(local_e8,0x60,"anime_L_inventory_parts_00_L_btn_main_%02d_switch_context_pos"
                       ,param3);
      if (local_e8[0] == '\0') {
        plVar9 = (long *)FUN_00938550(iVar6);
        if (plVar9 == (long *)0x0) goto LAB_00d514c0;
        (**(code **)(*plVar9 + 0x18))(plVar9);
        if (plVar9 != (long *)0x0) goto LAB_00d514c4;
LAB_00d516a0:
        lVar14 = *(long *)PTR_DAT_04379c88;
        if (plVar9 != (long *)0x0) goto LAB_00d514d0;
LAB_00d516b0:
        lStack_100 = *(long *)PTR_PTR_04379d00;
        if (plVar9 != (long *)0x0) goto LAB_00d514dc;
LAB_00d516c0:
        local_f8 = 0;
        local_f0 = (long *)0x0;
        lVar8 = *(long *)(param_1 + 0x2c8);
        local_108 = lVar14;
      }
      else {
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar7 = *(undefined8 *)puVar4;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar7;
        FUN_02a47cd8(&local_78,uVar7,local_e8);
        plVar9 = local_78;
LAB_00d514c0:
        if (plVar9 == (long *)0x0) goto LAB_00d516a0;
LAB_00d514c4:
        lVar14 = plVar9[0xb];
        if (plVar9 == (long *)0x0) goto LAB_00d516b0;
LAB_00d514d0:
        lStack_100 = plVar9[0xc];
        if (plVar9 == (long *)0x0) goto LAB_00d516c0;
LAB_00d514dc:
        local_f8 = plVar9[0xd];
        local_f0 = (long *)0x0;
        local_108 = lVar14;
        (**(code **)(*plVar9 + 0x18))(plVar9);
        local_f0 = plVar9;
        (**(code **)(*plVar9 + 0x20))(plVar9);
        lVar8 = *(long *)(param_1 + 0x2c8);
      }
      if (lVar8 != 0) {
        FUN_0283b1e8(lVar8,&local_108);
        lVar8 = *(long *)(param_1 + 0x2c8);
        if (lVar8 != 0) {
          plVar10 = *(long **)(lVar8 + 0x1a0);
          lVar2 = *(long *)(lVar8 + 0x1a8);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
          plVar3 = plVar10;
          if ((lVar2 != 0) && (*plVar10 != lVar14)) {
            lVar12 = lVar2 * 0x30;
            plVar13 = plVar10 + lVar2 * 6;
            do {
              lVar12 = lVar12 + -0x30;
              plVar3 = plVar13;
              if (lVar12 == 0) break;
              plVar1 = plVar10 + 6;
              plVar10 = plVar10 + 6;
              plVar3 = plVar10;
            } while (*plVar1 != lVar14);
          }
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))(plVar9);
          }
          plVar10 = (long *)(*(long *)(lVar8 + 0x1a0) + *(long *)(lVar8 + 0x1a8) * 0x30);
          if (plVar3 == plVar10) {
            plVar13 = (long *)0x0;
            if (plVar3 != plVar10) goto LAB_00d51594;
LAB_00d51600:
            if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d51620;
            FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_108);
          }
          else {
            plVar13 = plVar3 + 4;
            if (plVar3 == plVar10) goto LAB_00d51600;
LAB_00d51594:
            uVar11 = (ulong)*(uint *)(plVar13 + 1);
            if (((*(uint *)(*plVar13 + 0x278) <= *(uint *)(plVar13 + 1)) ||
                (lVar14 = *(long *)(*plVar13 + 600), *(char *)(lVar14 + uVar11 * 0x48 + 8) == '\0'))
               || (*(char *)(lVar14 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_00d51600;
            plVar10 = (long *)(lVar14 + uVar11 * 0x48 + 0x10);
            lVar8 = *plVar10;
            if ((lVar8 != 0) && (*(char *)(lVar14 + uVar11 * 0x48 + 9) == '\0')) {
              fVar15 = *(float *)(lVar8 + 0x20);
              uVar5 = FUN_00227728();
              uVar11 = FUN_00227744(*plVar10);
              if (((float)uVar5 <= fVar15) && ((uVar11 & 1) == 0)) goto LAB_00d51600;
            }
          }
          FUN_0283b748(0x3f800000,*(undefined8 *)(param_1 + 0x2c8),&local_108);
        }
      }
LAB_00d51620:
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      param3 = param3 + 1;
    } while (param3 != 0x30);
  }
  else {
    do {
      iVar6 = snprintf(local_e8,0x60,"anime_L_inventory_parts_00_L_btn_sub_%02d_switch_context_pos",
                       param3);
      if (local_e8[0] == '\0') {
        plVar9 = (long *)FUN_00938550(iVar6);
        if (plVar9 == (long *)0x0) goto LAB_00d51220;
        (**(code **)(*plVar9 + 0x18))(plVar9);
        if (plVar9 != (long *)0x0) goto LAB_00d51224;
LAB_00d513d8:
        lVar14 = *(long *)PTR_DAT_04379c88;
        if (plVar9 != (long *)0x0) goto LAB_00d51230;
LAB_00d513e8:
        lStack_100 = *(long *)PTR_PTR_04379d00;
        if (plVar9 != (long *)0x0) goto LAB_00d5123c;
LAB_00d513f8:
        local_f8 = 0;
        local_f0 = (long *)0x0;
        lVar8 = *(long *)(param_1 + 0x2c8);
        local_108 = lVar14;
      }
      else {
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar7 = *(undefined8 *)puVar4;
        *(undefined8 *)PTR_DAT_04379ce0 = uVar7;
        FUN_02a47cd8(&local_78,uVar7,local_e8);
        plVar9 = local_78;
LAB_00d51220:
        if (plVar9 == (long *)0x0) goto LAB_00d513d8;
LAB_00d51224:
        lVar14 = plVar9[0xb];
        if (plVar9 == (long *)0x0) goto LAB_00d513e8;
LAB_00d51230:
        lStack_100 = plVar9[0xc];
        if (plVar9 == (long *)0x0) goto LAB_00d513f8;
LAB_00d5123c:
        local_f8 = plVar9[0xd];
        local_f0 = (long *)0x0;
        local_108 = lVar14;
        (**(code **)(*plVar9 + 0x18))(plVar9);
        local_f0 = plVar9;
        (**(code **)(*plVar9 + 0x20))(plVar9);
        lVar8 = *(long *)(param_1 + 0x2c8);
      }
      if (lVar8 != 0) {
        FUN_0283b1e8(lVar8,&local_108);
        lVar8 = *(long *)(param_1 + 0x2c8);
        if (lVar8 != 0) {
          plVar10 = *(long **)(lVar8 + 0x1a0);
          lVar2 = *(long *)(lVar8 + 0x1a8);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
          plVar3 = plVar10;
          if ((lVar2 != 0) && (*plVar10 != lVar14)) {
            lVar12 = lVar2 * 0x30;
            plVar13 = plVar10 + lVar2 * 6;
            do {
              lVar12 = lVar12 + -0x30;
              plVar3 = plVar13;
              if (lVar12 == 0) break;
              plVar1 = plVar10 + 6;
              plVar10 = plVar10 + 6;
              plVar3 = plVar10;
            } while (*plVar1 != lVar14);
          }
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x20))(plVar9);
          }
          plVar10 = (long *)(*(long *)(lVar8 + 0x1a0) + *(long *)(lVar8 + 0x1a8) * 0x30);
          if (plVar3 == plVar10) {
            plVar13 = (long *)0x0;
            if (plVar3 != plVar10) goto LAB_00d512f4;
LAB_00d51360:
            if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d51380;
            FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_108);
          }
          else {
            plVar13 = plVar3 + 4;
            if (plVar3 == plVar10) goto LAB_00d51360;
LAB_00d512f4:
            uVar11 = (ulong)*(uint *)(plVar13 + 1);
            if (((*(uint *)(*plVar13 + 0x278) <= *(uint *)(plVar13 + 1)) ||
                (lVar14 = *(long *)(*plVar13 + 600), *(char *)(lVar14 + uVar11 * 0x48 + 8) == '\0'))
               || (*(char *)(lVar14 + uVar11 * 0x48 + 0xb) == '\0')) goto LAB_00d51360;
            plVar10 = (long *)(lVar14 + uVar11 * 0x48 + 0x10);
            lVar8 = *plVar10;
            if ((lVar8 != 0) && (*(char *)(lVar14 + uVar11 * 0x48 + 9) == '\0')) {
              fVar15 = *(float *)(lVar8 + 0x20);
              uVar5 = FUN_00227728();
              uVar11 = FUN_00227744(*plVar10);
              if (((float)uVar5 <= fVar15) && ((uVar11 & 1) == 0)) goto LAB_00d51360;
            }
          }
          FUN_0283b748(0x3f800000,*(undefined8 *)(param_1 + 0x2c8),&local_108);
        }
      }
LAB_00d51380:
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      param3 = param3 + 1;
    } while (param3 != 0x30);
  }
  return;
}


