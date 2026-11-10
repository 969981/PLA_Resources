/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b472c0; name: FUN_02b472c0
 */


void FUN_02b472c0(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  char local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  puVar6 = PTR_PTR_04379d00;
  puVar5 = PTR_DAT_04379c88;
  pcVar2 = *(char **)(*param_2 + 0x98);
  pcVar3 = *(char **)(*param_2 + 0xa0);
  do {
    if (pcVar2 == pcVar3) {
      return;
    }
    FUN_014417ec(&local_68,pcVar2 + 8,param_3);
    plVar7 = local_68;
    plVar1 = (long *)puVar6;
    plVar8 = (long *)puVar5;
    if (local_68 != (long *)0x0) {
      plVar1 = local_68 + 0xc;
      plVar8 = local_68 + 0xb;
    }
    uVar9 = *param_4;
    local_b0 = *plVar8;
    lStack_a8 = *plVar1;
    if (local_68 == (long *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_68[0xd];
      local_98 = (long *)0x0;
      (**(code **)(*local_68 + 0x18))(local_68);
    }
    local_98 = plVar7;
    FUN_02b31144(local_90,uVar9,pcVar2,&local_b0,0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    puVar4 = *(undefined8 **)(*param_1 + 0x98);
    for (puVar10 = *(undefined8 **)(*param_1 + 0x90); puVar10 != puVar4; puVar10 = puVar10 + 1) {
      FUN_02b37660(*puVar10,param_4,pcVar2,local_90);
    }
    FUN_02b330b0(*param_4,pcVar2);
    plVar1 = local_70;
    if (*pcVar2 == '\0') {
      if (local_90[0] != '\0') {
        *(undefined8 *)(pcVar2 + 8) = local_88;
        *(undefined8 *)(pcVar2 + 0x10) = local_80;
        *(undefined8 *)(pcVar2 + 0x18) = local_78;
        *(long **)(pcVar2 + 0x20) = local_70;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))();
        }
        *pcVar2 = '\x01';
        goto joined_r0x02b474b4;
      }
    }
    else {
      if (local_90[0] == '\0') {
        if (*(long **)(pcVar2 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar2 + 0x20) + 0x20))();
        }
        *pcVar2 = '\0';
      }
      else {
        *(undefined8 *)(pcVar2 + 8) = local_88;
        *(undefined8 *)(pcVar2 + 0x10) = local_80;
        *(undefined8 *)(pcVar2 + 0x18) = local_78;
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))(local_70);
        }
        plVar8 = *(long **)(pcVar2 + 0x20);
        *(long **)(pcVar2 + 0x20) = plVar1;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
      }
joined_r0x02b474b4:
      if (local_90[0] != '\0') {
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        local_90[0] = '\0';
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    pcVar2 = pcVar2 + 0x28;
  } while( true );
}


