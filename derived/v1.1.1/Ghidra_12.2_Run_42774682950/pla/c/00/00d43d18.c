/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d43d18; name: FUN_00d43d18
 */


bool FUN_00d43d18(long *param_1,undefined **param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined *local_170;
  undefined **local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if (param_2 == (undefined **)0x0) {
    bVar5 = false;
  }
  else {
    local_70 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_170 = PTR_DAT_0437b338 + 0x10;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_168 = &PTR_LAB_041ed738;
    uStack_160 = 0x30000000a;
    local_158 = 10;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    plVar7 = (long *)(**(code **)(*(long *)param_1[0xb0] + 0x10))();
    puVar4 = PTR_DAT_0437b330;
    puVar3 = PTR_DAT_0437b328;
    puVar2 = PTR_DAT_043794d8;
    puVar1 = PTR_DAT_043794d0;
    plVar14 = (long *)*plVar7;
    plVar7 = (long *)plVar7[1];
    if (plVar14 != plVar7) {
      ppuVar12 = param_2;
      do {
        if ((*plVar14 == 0) ||
           (puVar13 = *(undefined8 **)(*plVar14 + 0x18), puVar13 == (undefined8 *)0x0)) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)(**(code **)*puVar13)(puVar13);
          if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
            if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar1), iVar6 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)puVar2 = uVar11;
              __cxa_guard_release(puVar1);
            }
            *(undefined **)puVar4 = puVar2;
            __cxa_guard_release(puVar3);
          }
          puVar10 = (undefined8 *)0x0;
          if (puVar8 != (undefined8 *)0x0) {
            do {
              if (puVar8 == (undefined8 *)puVar4) {
                puVar10 = puVar13 + -10;
                goto LAB_00d43e94;
              }
              puVar8 = (undefined8 *)*puVar8;
            } while (puVar8 != (undefined8 *)0x0);
            puVar10 = (undefined8 *)0x0;
          }
        }
LAB_00d43e94:
        uVar9 = FUN_00d43d18(puVar10,ppuVar12);
        plVar14 = plVar14 + 2;
        param_2 = &local_170;
        if ((uVar9 & 1) == 0) {
          param_2 = ppuVar12;
        }
        ppuVar12 = param_2;
      } while (plVar14 != plVar7);
    }
    *(undefined1 *)((long)param_1 + 0x5aa) = 0;
    FUN_00d2db34(param_1 + 0x30,param_2);
    if (*(char *)((long)param_1 + 0x5aa) != '\0') {
      param_2 = &local_170;
    }
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
    bVar5 = *(char *)((long)param_1 + 0x5aa) != '\0';
    FUN_00d3bc90(&local_170);
  }
  return bVar5;
}


