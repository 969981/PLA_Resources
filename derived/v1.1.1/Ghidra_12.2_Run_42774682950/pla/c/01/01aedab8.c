/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aedab8; name: FUN_01aedab8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aedab8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 in_q3 [16];
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uVar14 = in_q3._8_8_;
  uVar12 = in_q3._0_8_;
  FUN_009c69bc(&local_130);
  (**(code **)(*local_130 + 0x40))();
  if (local_130 != (long *)0x0) {
    lVar7 = local_130[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
  local_130 = (undefined8 *)0x0;
  pcStack_128 = (char *)0x0;
  fVar8 = (float)uVar12 + (float)_DAT_03889980;
  fVar13 = (float)((ulong)uVar12 >> 0x20);
  fVar9 = fVar13 + (float)((ulong)_DAT_03889980 >> 0x20);
  local_50 = CONCAT44(fVar9,fVar8);
  fVar10 = (float)uVar14 + (float)_UNK_03889988;
  fVar11 = (float)((ulong)uVar14 >> 0x20) + (float)((ulong)_UNK_03889988 >> 0x20);
  uStack_48 = CONCAT44(fVar11,fVar10);
  local_60 = (long *)CONCAT44(fVar9 + (float)((ulong)_DAT_03889d00 >> 0x20),
                              fVar8 + (float)_DAT_03889d00);
  uStack_58 = CONCAT44(fVar11 + (float)((ulong)_UNK_03889d08 >> 0x20),fVar10 + (float)_UNK_03889d08)
  ;
  FUN_01b00924(&local_130,param_1 + 0x688);
  if (local_130 == (undefined8 *)0x0) {
    local_68 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_68);
    puVar4 = local_130;
    if (local_130 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_38 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_38);
      }
    }
  }
  if (local_68 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    local_ac = 0;
    local_d0 = 0x7f7fffee;
    local_100[0] = 0;
    local_c8 = 0xffffffffffffffff;
    local_b8 = 0xffffffff;
    local_f0 = 0;
    uStack_e8 = 0;
    local_c0 = 0xffffff;
    local_b4 = 0xf;
    local_b0 = 0xffff;
    local_90 = 0xffffffff;
    local_98 = 0xffffff;
    local_8c = 0xf;
    local_88 = 0xffff;
    local_84 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_a8 = 0;
    uStack_a0 = 0xffffffffffffffff;
    local_80 = 0;
    uStack_78 = 0;
    uVar6 = FUN_01a88f30(local_68,&local_50,&local_60,&local_130);
    if ((uVar6 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = local_130._4_4_;
    }
    FUN_032c7b9c(local_100);
    if (local_68 != (long *)0x0) {
      lVar7 = local_68[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x8e4) = uVar15;
  FUN_01a74a50(&local_130,param_1);
  if (local_130 == (undefined8 *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_00bd9360(&local_60);
    puVar4 = local_130;
    if (local_130 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130 + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_50 = *puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_50);
      }
    }
  }
  if (local_60 != (long *)0x0) {
    local_130 = (long *)0xe43d1dabd38af747;
    pcStack_128 = "FLIGHT_HEIGHT";
    local_120 = 0xd;
    local_118 = (long *)0x0;
    (**(code **)(*local_60 + 0xf8))(fVar13 - *(float *)(param_1 + 0x8e4),local_60,&local_130,0);
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
    local_130 = (long *)0x7f7afcce5e41f008;
    pcStack_128 = "PLAY_ENV_BASE_FLIGHT";
    local_120 = 0x14;
    local_118 = (long *)0x0;
    FUN_0290b66c(local_60,&local_130,0);
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      lVar7 = local_60[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x8e0) = 1;
  return;
}


