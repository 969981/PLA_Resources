/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c0f6e4; name: FUN_01c0f6e4
 */


void FUN_01c0f6e4(int *param_1,long param_2,int *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  float fVar12;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  param_1[1] = 0;
  *(undefined1 **)(param_1 + 2) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 4) = &DAT_03996322;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 **)(param_1 + 10) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0xc) = &DAT_03996322;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 **)(param_1 + 0x12) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x14) = &DAT_03996322;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 **)(param_1 + 0x1a) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1c) = &DAT_03996322;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar9 = *(undefined8 *)PTR_DAT_0437a120;
  uVar1 = *(undefined8 *)(PTR_DAT_0437a120 + 8);
  piVar10 = param_1 + 0x28;
  *(undefined8 *)piVar10 = uVar9;
  *(undefined2 *)(param_1 + 0x2c) = 0x100;
  *(undefined8 *)(param_1 + 0x2a) = uVar1;
  param_1[0x32] = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  iVar7 = *param_3;
  *param_1 = iVar7;
  if (iVar7 != 1) {
    return;
  }
  uVar6 = FUN_010a0360(*(undefined4 *)(param_2 + 0x338),*(undefined2 *)(param_2 + 0x33c),
                       *(undefined4 *)(param_2 + 0x340),*(undefined1 *)(param_2 + 0x350),
                       *(undefined1 *)(param_2 + 0x351));
  *(undefined8 *)piVar10 = uVar9;
  *(undefined8 *)(param_1 + 0x2a) = uVar1;
  switch(uVar6) {
  case 0:
    plVar8 = *(long **)(param_1 + 0x18);
    param_1[0x12] = 0x38135a74;
    param_1[0x13] = 0x2d013c31;
    *(char **)(param_1 + 0x14) = "bin/chara/data/item/item_269/item_269.trmdl";
    param_1[0x16] = 0x2b;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    puVar4 = PTR_DAT_04379660;
    local_60 = 0xe95a01f458d2e64d;
    pcStack_58 = "pokemon_water_motion";
    local_50 = 0x14;
    local_48 = (long *)0x0;
    local_80 = 0x5b5a3c01fa273e68;
    pcStack_78 = "SwimRingScaleS";
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_70 = 0xe;
    local_68 = (long *)0x0;
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar9;
    FUN_00d7d9e4(&local_38,uVar9,&local_60);
    if (local_38 == (long *)0x0) {
LAB_01c0fd24:
      fVar12 = 0.0;
    }
    else {
      fVar12 = (float)FUN_00d7905c(local_38,&local_80);
      if (local_38 != (long *)0x0) {
        plVar8 = local_38 + 10;
        do {
          iVar7 = (int)*plVar8 + -1;
          bVar5 = iVar7 == 0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *(int *)plVar8 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_01c0fb60:
        if (bVar5) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
    break;
  case 1:
    plVar8 = *(long **)(param_1 + 0x18);
    param_1[0x12] = -0x47796a7c;
    param_1[0x13] = -0x74796176;
    *(char **)(param_1 + 0x14) = "bin/chara/data/item/item_270/item_270.trmdl";
    param_1[0x16] = 0x2b;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    puVar4 = PTR_DAT_04379660;
    local_60 = 0xe95a01f458d2e64d;
    pcStack_58 = "pokemon_water_motion";
    local_50 = 0x14;
    local_48 = (long *)0x0;
    local_80 = 0x5b5a2a01fa271fd2;
    pcStack_78 = "SwimRingScaleM";
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_70 = 0xe;
    local_68 = (long *)0x0;
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar9;
    FUN_00d7d9e4(&local_38,uVar9,&local_60);
    if (local_38 == (long *)0x0) goto LAB_01c0fd24;
    fVar12 = (float)FUN_00d7905c(local_38,&local_80);
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        bVar5 = iVar7 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01c0fb60;
    }
    break;
  case 2:
    plVar8 = *(long **)(param_1 + 0x18);
    param_1[0x12] = -0x69433e12;
    param_1[0x13] = 0x397c0a8a;
    *(char **)(param_1 + 0x14) = "bin/chara/data/item/item_271/item_271.trmdl";
    param_1[0x16] = 0x2b;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    puVar4 = PTR_DAT_04379660;
    local_60 = 0xe95a01f458d2e64d;
    pcStack_58 = "pokemon_water_motion";
    local_50 = 0x14;
    local_48 = (long *)0x0;
    local_80 = 0x5b5a2b01fa272185;
    pcStack_78 = "SwimRingScaleL";
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_70 = 0xe;
    local_68 = (long *)0x0;
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar9;
    FUN_00d7d9e4(&local_38,uVar9,&local_60);
    if (local_38 == (long *)0x0) goto LAB_01c0fd24;
    fVar12 = (float)FUN_00d7905c(local_38,&local_80);
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        bVar5 = iVar7 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01c0fb60;
    }
    break;
  case 3:
    plVar8 = *(long **)(param_1 + 0x18);
    param_1[0x12] = -0x4fb9a07c;
    param_1[0x13] = -0x6f4e9b44;
    *(char **)(param_1 + 0x14) = "bin/chara/data/item/item_272/item_272.trmdl";
    param_1[0x16] = 0x2b;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    puVar4 = PTR_DAT_04379660;
    local_60 = 0xe95a01f458d2e64d;
    pcStack_58 = "pokemon_water_motion";
    local_50 = 0x14;
    local_48 = (long *)0x0;
    local_80 = 0x6158dd5c107e688b;
    pcStack_78 = "SwimRingScaleLL";
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_70 = 0xf;
    local_68 = (long *)0x0;
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar9;
    FUN_00d7d9e4(&local_38,uVar9,&local_60);
    if (local_38 == (long *)0x0) goto LAB_01c0fd24;
    fVar12 = (float)FUN_00d7905c(local_38,&local_80);
    if (local_38 != (long *)0x0) {
      plVar8 = local_38 + 10;
      do {
        iVar7 = (int)*plVar8 + -1;
        bVar5 = iVar7 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *(int *)plVar8 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01c0fb60;
    }
    break;
  default:
    goto switchD_01c0f7c0_default;
  }
  *(ulong *)(param_1 + 0x2a) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) * fVar12,
                (float)*(undefined8 *)(param_1 + 0x2a) * fVar12);
  *(ulong *)piVar10 =
       CONCAT44((float)((ulong)*(undefined8 *)piVar10 >> 0x20) * fVar12,
                (float)*(undefined8 *)piVar10 * fVar12);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
switchD_01c0f7c0_default:
  if (*(char *)(param_2 + 0x350) == '\0') {
    fVar12 = (float)FUN_010a0650(0,*(undefined4 *)(param_2 + 0x338),*(undefined2 *)(param_2 + 0x33c)
                                 ,*(undefined4 *)(param_2 + 0x340),0,0);
  }
  else {
    if (((*PTR_DAT_0437a708 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
    uVar9 = *(undefined8 *)PTR_DAT_0437a710;
    *(undefined8 *)PTR_DAT_0437a718 = uVar9;
    piVar10 = (int *)FUN_010aa4a0(uVar9,*(undefined4 *)(param_2 + 0x338),
                                  *(undefined2 *)(param_2 + 0x33c),*(undefined4 *)(param_2 + 0x340))
    ;
    fVar12 = 0.0;
    if ((0xc < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
       (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[6], uVar11 != 0)) {
      fVar12 = *(float *)((long)piVar10 + uVar11);
    }
  }
  fVar12 = 1.0 / fVar12;
  plVar8 = *(long **)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x2c) = 0x101;
  param_1[2] = 0x7fa42ae9;
  param_1[3] = 0x2a60e5c3;
  *(char **)(param_1 + 4) = "water_floating_attach";
  param_1[6] = 0x15;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(ulong *)(param_1 + 0x2a) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2a) >> 0x20) * fVar12,
                (float)*(undefined8 *)(param_1 + 0x2a) * fVar12);
  *(ulong *)(param_1 + 0x28) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * fVar12,
                (float)*(undefined8 *)(param_1 + 0x28) * fVar12);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  plVar8 = *(long **)(param_1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x737159ef;
  param_1[0xb] = -0x6b51554c;
  *(char **)(param_1 + 0xc) = "origin";
  param_1[0xe] = 6;
  param_1[0xf] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  plVar8 = *(long **)(param_1 + 0x20);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x1a] = -0x299a2f74;
  param_1[0x1b] = 0x112ea7c6;
  *(char **)(param_1 + 0x1c) = "swim_ring";
  param_1[0x1e] = 9;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[1] = 2;
  return;
}


