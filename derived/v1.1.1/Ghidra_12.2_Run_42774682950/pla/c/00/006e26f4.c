/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e26f4; name: FUN_006e26f4
 */


void FUN_006e26f4(int *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  byte local_70;
  undefined7 uStack_6f;
  long lStack_68;
  ulong local_60;
  long *plStack_58;
  long local_50;
  long lStack_48;
  ulong local_40;
  
                    /* try { // try from 006e2718 to 006e271b has its CatchHandler @ 006e2a00 */
  FUN_0032b96c(param_2 + 0x10);
  iVar4 = *param_1;
  if (iVar4 == 2) {
    iVar4 = param_1[1];
    FUN_006e2a64(param_1);
    puVar5 = PTR_PTR_043754a0;
    if ((char)iVar4 == '\0') {
      lVar8 = *(long *)(param_1 + 10);
      lVar3 = *(long *)(param_1 + 0xc);
      if (lVar8 != lVar3) {
        if ((param_4 & 1) == 0) {
          do {
            FUN_0061bb30(&local_70,lVar8,*(undefined8 *)puVar5);
            uVar1 = (ulong)&local_70 | 1;
            if ((local_70 & 1) != 0) {
              uVar1 = local_60;
            }
                    /* try { // try from 006e2998 to 006e299f has its CatchHandler @ 006e29e0 */
            FUN_006e32dc(param_2,uVar1);
            if ((local_70 & 1) != 0) {
              (**(code **)(*plStack_58 + 0x18))
                        (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
            }
            lVar8 = lVar8 + 0x20;
          } while (lVar3 != lVar8);
        }
        else {
          do {
            FUN_0061cb80(&local_70,lVar8);
            uVar1 = (ulong)&local_70 | 1;
            if ((local_70 & 1) != 0) {
              uVar1 = local_60;
            }
                    /* try { // try from 006e293c to 006e2943 has its CatchHandler @ 006e29f0 */
            FUN_006e32dc(param_2,uVar1);
            if ((local_70 & 1) != 0) {
              (**(code **)(*plStack_58 + 0x18))
                        (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
            }
            lVar8 = lVar8 + 0x20;
          } while (lVar3 != lVar8);
        }
      }
    }
    else {
      pbVar7 = *(byte **)(param_1 + 2);
      pbVar2 = *(byte **)(param_1 + 4);
      if (pbVar7 != pbVar2) {
        if ((param_4 & 1) != 0) {
          if ((*pbVar7 & 1) == 0) goto LAB_006e2850;
          do {
            pbVar6 = *(byte **)(pbVar7 + 0x10);
            while( true ) {
              FUN_0061c950(&local_70,pbVar6);
              uVar1 = (ulong)&local_70 | 1;
              if ((local_70 & 1) != 0) {
                uVar1 = local_60;
              }
                    /* try { // try from 006e2874 to 006e287b has its CatchHandler @ 006e2a04 */
              FUN_006e32dc(param_2,uVar1);
              if ((local_70 & 1) != 0) {
                (**(code **)(*plStack_58 + 0x18))
                          (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
              }
              pbVar7 = pbVar7 + 0x20;
              if (pbVar2 == pbVar7) {
                return;
              }
              if ((*pbVar7 & 1) != 0) break;
LAB_006e2850:
              pbVar6 = pbVar7 + 1;
            }
          } while( true );
        }
        do {
          if ((*pbVar7 & 1) == 0) {
            pbVar6 = pbVar7 + 1;
          }
          else {
            pbVar6 = *(byte **)(pbVar7 + 0x10);
          }
                    /* try { // try from 006e2824 to 006e282b has its CatchHandler @ 006e2a14 */
          FUN_006e32dc(param_2,pbVar6);
          pbVar7 = pbVar7 + 0x20;
        } while (pbVar2 != pbVar7);
      }
    }
  }
  else if (iVar4 == 1) {
                    /* try { // try from 006e28a4 to 006e28b3 has its CatchHandler @ 006e2a00 */
    FUN_006e32dc(param_2,&DAT_038e4910);
  }
  else if (iVar4 == 0) {
    lStack_68 = *(long *)(param_3 + 0x20);
                    /* try { // try from 006e2740 to 006e274b has its CatchHandler @ 006e29dc */
    FUN_00634138(&local_70,*(undefined8 *)(lStack_68 + 0x18));
    local_50 = CONCAT71(uStack_6f,local_70);
    local_40 = local_60;
    lStack_48 = lStack_68;
    if ((param_4 & 1) == 0) {
      while (local_50 != 0) {
        pbVar7 = *(byte **)(local_50 + 8);
        if ((*pbVar7 & 1) == 0) {
          pbVar7 = pbVar7 + 1;
        }
        else {
          pbVar7 = *(byte **)(pbVar7 + 0x10);
        }
                    /* try { // try from 006e28d4 to 006e28db has its CatchHandler @ 006e2a1c */
        FUN_006e32dc(param_2,pbVar7);
                    /* try { // try from 006e28dc to 006e28e3 has its CatchHandler @ 006e2a18 */
        FUN_00635b48(&local_50);
      }
    }
    else if (local_50 != 0) {
      do {
        pbVar7 = *(byte **)(local_50 + 8);
        if ((*pbVar7 & 1) == 0) {
          pbVar7 = pbVar7 + 1;
        }
        else {
          pbVar7 = *(byte **)(pbVar7 + 0x10);
        }
        FUN_0061c950(&local_70,pbVar7);
        uVar1 = (ulong)&local_70 | 1;
        if ((local_70 & 1) != 0) {
          uVar1 = local_60;
        }
                    /* try { // try from 006e279c to 006e27a3 has its CatchHandler @ 006e2a2c */
        FUN_006e32dc(param_2,uVar1);
        if ((local_70 & 1) != 0) {
          (**(code **)(*plStack_58 + 0x18))
                    (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
        }
                    /* try { // try from 006e27c8 to 006e27cf has its CatchHandler @ 006e2a20 */
        FUN_00635b48(&local_50);
      } while (local_50 != 0);
    }
  }
  return;
}


