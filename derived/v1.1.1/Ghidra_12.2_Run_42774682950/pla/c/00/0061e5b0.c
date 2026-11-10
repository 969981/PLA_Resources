/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061e5b0; name: FUN_0061e5b0
 */


void FUN_0061e5b0(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  byte *local_b8;
  byte *local_b0;
  long local_a8;
  long *local_a0;
  ulonglong local_90;
  byte *local_88;
  byte *local_80;
  long local_78;
  long *local_70;
  byte *local_68;
  byte *local_60;
  long local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  
  plVar15 = (long *)0x0;
  if (*(long *)(param_2 + 0x10) != 0) {
    plVar15 = (long *)(*(long *)(param_2 + 0x10) + 8);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar1 = plVar15 + *(int *)(param_2 + 8);
    do {
      lVar16 = *plVar15;
      local_60 = (byte *)0x0;
      local_58 = 0;
      local_68 = (byte *)0x0;
      local_50 = (long *)FUN_00612290();
      local_88 = (byte *)0x0;
      local_80 = (byte *)0x0;
      local_78 = 0;
      local_70 = (long *)FUN_00612290();
      local_90 = 0;
      pbVar11 = *(byte **)(lVar16 + 0x28);
      if ((*pbVar11 & 1) == 0) {
        pbVar11 = pbVar11 + 1;
      }
      else {
        pbVar11 = *(byte **)(pbVar11 + 0x10);
      }
      uVar8 = strtoull((char *)pbVar11,(char **)0x0,0x10);
      lVar3 = *param_3;
      lVar4 = param_3[1];
      local_90 = uVar8;
      if (lVar3 != lVar4) {
        uVar12 = *(ulonglong *)(lVar3 + 0x20);
        while( true ) {
          if (uVar12 == uVar8) {
                    /* try { // try from 0061e698 to 0061e6a3 has its CatchHandler @ 0061e98c */
            FUN_0061da28(&local_88,lVar3);
          }
          if (lVar4 == lVar3 + 0x28) break;
          uVar12 = *(ulonglong *)(lVar3 + 0x48);
          lVar3 = lVar3 + 0x28;
        }
      }
      puVar14 = (undefined8 *)0x0;
      if (*(long *)(lVar16 + 0x20) != 0) {
        puVar14 = (undefined8 *)(*(long *)(lVar16 + 0x20) + 8);
      }
      if (*(int *)(lVar16 + 0x18) != 0) {
        puVar2 = puVar14 + *(int *)(lVar16 + 0x18);
        do {
          FUN_0061f120(&local_b8,*puVar14,&local_90);
          pbVar7 = local_80;
          pbVar11 = local_88;
          if ((local_88 != local_80) && (uVar9 = FUN_00627ec0(local_88,&local_b8), (uVar9 & 1) == 0)
             ) {
            do {
              pbVar13 = pbVar11 + 0x28;
              pbVar11 = pbVar7;
              if (pbVar7 == pbVar13) break;
              uVar9 = FUN_00627ec0(pbVar13,&local_b8);
              pbVar11 = pbVar13;
            } while ((uVar9 & 1) == 0);
          }
          if (local_80 == pbVar11) {
                    /* try { // try from 0061e734 to 0061e74b has its CatchHandler @ 0061ea2c */
            FUN_0062785c(param_3,&local_b8);
          }
          FUN_0062785c(&local_68,&local_b8);
          if (((ulong)local_b8 & 1) != 0) {
            (**(code **)(*local_a0 + 0x18))
                      (local_a0,local_a8,(ulong)local_b8 & 0xfffffffffffffffe,1);
          }
          puVar14 = puVar14 + 1;
        } while (puVar14 != puVar2);
      }
                    /* try { // try from 0061e778 to 0061e78b has its CatchHandler @ 0061e97c */
      FUN_00627fd0(local_68,local_60,&local_b8);
      FUN_00627fd0(local_88,local_80,&local_b8);
      local_b0 = (byte *)0x0;
      local_a8 = 0;
      local_b8 = (byte *)0x0;
      local_a0 = (long *)FUN_00612290();
                    /* try { // try from 0061e7a8 to 0061e7b3 has its CatchHandler @ 0061e96c */
      FUN_0062b910(local_88,local_80,local_68,local_60,&local_b8,local_b0,auStack_48);
      pbVar13 = local_b0;
      pbVar7 = local_b8;
      for (pbVar11 = local_b8; local_b8 = pbVar7, pbVar11 != pbVar13; pbVar11 = pbVar11 + 0x28) {
                    /* try { // try from 0061e7c4 to 0061e7cf has its CatchHandler @ 0061e9ac */
        uVar10 = FUN_00627d70(*param_3,param_3[1],pbVar11);
                    /* try { // try from 0061e7d4 to 0061e7db has its CatchHandler @ 0061e99c */
        FUN_00627bc4(param_3,uVar10,param_3[1]);
        pbVar7 = local_b8;
      }
      if (pbVar7 != (byte *)0x0) {
        if (local_b0 != pbVar7) {
          bVar5 = local_b0[-0x28];
          pbVar13 = local_b0 + -0x28;
          pbVar11 = local_b0;
          while( true ) {
            pbVar6 = pbVar13;
            if ((bVar5 & 1) != 0) {
              (**(code **)(**(long **)(pbVar11 + -0x10) + 0x18))
                        (*(long **)(pbVar11 + -0x10),*(undefined8 *)(pbVar11 + -0x18),
                         *(ulong *)(pbVar11 + -0x28) & 0xfffffffffffffffe,1);
            }
            if (pbVar7 == pbVar6) break;
            bVar5 = pbVar6[-0x28];
            pbVar13 = pbVar6 + -0x28;
            pbVar11 = pbVar6;
          }
        }
        local_b0 = pbVar7;
        (**(code **)(*local_a0 + 0x18))(local_a0,local_b8,local_a8 - (long)local_b8,8);
      }
      pbVar11 = local_88;
      if (local_88 != (byte *)0x0) {
        if (local_80 != local_88) {
          bVar5 = local_80[-0x28];
          pbVar13 = local_80 + -0x28;
          pbVar7 = local_80;
          while( true ) {
            pbVar6 = pbVar13;
            if ((bVar5 & 1) != 0) {
              (**(code **)(**(long **)(pbVar7 + -0x10) + 0x18))
                        (*(long **)(pbVar7 + -0x10),*(undefined8 *)(pbVar7 + -0x18),
                         *(ulong *)(pbVar7 + -0x28) & 0xfffffffffffffffe,1);
            }
            if (pbVar11 == pbVar6) break;
            bVar5 = pbVar6[-0x28];
            pbVar13 = pbVar6 + -0x28;
            pbVar7 = pbVar6;
          }
        }
        local_80 = pbVar11;
        (**(code **)(*local_70 + 0x18))(local_70,local_88,local_78 - (long)local_88,8);
      }
      pbVar11 = local_68;
      if (local_68 != (byte *)0x0) {
        if (local_60 != local_68) {
          bVar5 = local_60[-0x28];
          pbVar13 = local_60 + -0x28;
          pbVar7 = local_60;
          while( true ) {
            pbVar6 = pbVar13;
            if ((bVar5 & 1) != 0) {
              (**(code **)(**(long **)(pbVar7 + -0x10) + 0x18))
                        (*(long **)(pbVar7 + -0x10),*(undefined8 *)(pbVar7 + -0x18),
                         *(ulong *)(pbVar7 + -0x28) & 0xfffffffffffffffe,1);
            }
            if (pbVar11 == pbVar6) break;
            bVar5 = pbVar6[-0x28];
            pbVar13 = pbVar6 + -0x28;
            pbVar7 = pbVar6;
          }
        }
        local_60 = pbVar11;
        (**(code **)(*local_50 + 0x18))(local_50,local_68,local_58 - (long)local_68,8);
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar1);
  }
  return;
}


