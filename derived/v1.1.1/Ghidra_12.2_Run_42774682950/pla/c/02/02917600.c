/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02917600; name: FUN_02917600
 */


void FUN_02917600(undefined8 *param_1,byte param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long local_130;
  long lStack_128;
  long local_120;
  long *local_118;
  code *local_110;
  code *local_108;
  long local_100;
  long lStack_f8;
  undefined1 auStack_f0 [96];
  long local_90;
  long local_78;
  byte local_70 [4];
  undefined4 local_6c [3];
  
  plVar7 = (long *)param_1[3];
  plVar1 = (long *)param_1[4];
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = PTR_PTR_04379d00;
  puVar3 = PTR_DAT_04379c88;
  if (plVar7 != plVar1) {
    do {
      local_100 = 0;
      lStack_f8 = 0;
      local_110 = (code *)0x0;
      local_108 = (code *)0x0;
      if ((code *)plVar7[2] == (code *)0x0) {
        local_90 = plVar7[0x10];
        pcVar5 = local_108;
      }
      else {
        (*(code *)plVar7[2])(plVar7 + 4,auStack_f0);
        local_110 = (code *)*plVar7;
        local_108 = (code *)plVar7[1];
        local_100 = plVar7[2];
        lStack_f8 = plVar7[3];
        local_90 = plVar7[0x10];
        pcVar5 = local_108;
        if (local_110 != (code *)0x0) {
          uVar2 = *(undefined4 *)(param_1 + 1);
          plVar6 = (long *)*param_1;
          if (plVar6 == (long *)0x0) {
            local_130 = *(long *)puVar3;
LAB_02917758:
            lStack_128 = *(long *)puVar4;
            if (plVar6 != (long *)0x0) goto LAB_029176ac;
LAB_02917764:
            local_120 = 0;
          }
          else {
            local_130 = plVar6[0xb];
            if (plVar6 == (long *)0x0) goto LAB_02917758;
            lStack_128 = plVar6[0xc];
            if (plVar6 == (long *)0x0) goto LAB_02917764;
LAB_029176ac:
            local_120 = plVar6[0xd];
            (**(code **)(*plVar6 + 0x18))(plVar6);
          }
          local_118 = plVar6;
          local_78 = local_90;
          local_70[0] = param_2 & 1;
          local_6c[0] = uVar2;
          (*local_110)(auStack_f0,local_6c,&local_130,local_70,&local_78);
          pcVar5 = local_108;
          if (local_118 != (long *)0x0) {
            (**(code **)(*local_118 + 0x20))();
            pcVar5 = local_108;
          }
        }
      }
      local_108 = pcVar5;
      if (pcVar5 != (code *)0x0) {
        local_100 = 0;
        lStack_f8 = 0;
        local_110 = (code *)0x0;
        local_108 = (code *)0x0;
        (*pcVar5)(auStack_f0);
      }
      plVar7 = plVar7 + 0x12;
    } while (plVar1 != plVar7);
    plVar7 = (long *)param_1[3];
    plVar1 = (long *)param_1[4];
    while (plVar6 = plVar1, plVar6 != plVar7) {
      pcVar5 = (code *)plVar6[-0x11];
      plVar1 = plVar6 + -0x12;
      if (pcVar5 != (code *)0x0) {
        plVar6[-0x10] = 0;
        plVar6[-0xf] = 0;
        plVar6[-0x12] = 0;
        plVar6[-0x11] = 0;
        (*pcVar5)(plVar6 + -0xe);
      }
    }
  }
  param_1[4] = plVar7;
  return;
}


