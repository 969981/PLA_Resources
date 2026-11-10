/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079c848; name: FUN_0079c848
 */


void FUN_0079c848(long *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 auStack_88 [8];
  byte local_80;
  undefined7 uStack_7f;
  char local_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined8 local_70;
  long *local_68;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  byte *local_40;
  byte *local_38;
  long local_30;
  long *plStack_28;
  
  local_80 = 0;
  uStack_7f = 0;
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  local_70 = 0;
  local_68 = (long *)FUN_00612290();
  local_80 = 0x14;
  uStack_7f = s_attributes_039a9336._0_7_;
  local_78 = s_attributes_039a9336[7];
  uStack_77 = 0x7365;
  uStack_75 = 0;
  FUN_0061c7b0(&local_60,param_2);
                    /* try { // try from 0079c8a4 to 0079c8b3 has its CatchHandler @ 0079c9f0 */
  FUN_0079c688(&local_40,&local_80,2);
  FUN_006e49fc(auStack_88,param_3);
  *param_1 = (long)(PTR_DAT_04376f20 + 0x10);
                    /* try { // try from 0079c8d4 to 0079c8db has its CatchHandler @ 0079c9ec */
  FUN_0276429c(param_1 + 1,&local_40);
  FUN_006e4bd8(param_1 + 5,auStack_88);
  *(undefined4 *)(param_1 + 6) = 2;
  FUN_006e4b9c(auStack_88);
  pbVar3 = local_40;
  if (local_40 != (byte *)0x0) {
    if (local_38 != local_40) {
      bVar1 = local_38[-0x20];
      pbVar4 = local_38 + -0x20;
      while( true ) {
        pbVar2 = pbVar4;
        if ((bVar1 & 1) != 0) {
          (**(code **)(**(long **)(local_38 + -8) + 0x18))
                    (*(long **)(local_38 + -8),*(undefined8 *)(local_38 + -0x10),
                     *(ulong *)(local_38 + -0x20) & 0xfffffffffffffffe,1);
        }
        if (pbVar3 == pbVar2) break;
        bVar1 = pbVar2[-0x20];
        pbVar4 = pbVar2 + -0x20;
        local_38 = pbVar2;
      }
    }
    local_38 = pbVar3;
    (**(code **)(*plStack_28 + 0x18))(plStack_28,local_40,local_30 - (long)local_40,8);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if ((local_80 & 1) == 0) {
    s_attributes_039a9336[0] = s_attributes_039a9336[0];
    s_attributes_039a9336[1] = s_attributes_039a9336[1];
    s_attributes_039a9336[2] = s_attributes_039a9336[2];
    s_attributes_039a9336[3] = s_attributes_039a9336[3];
    s_attributes_039a9336[4] = s_attributes_039a9336[4];
    s_attributes_039a9336[5] = s_attributes_039a9336[5];
    s_attributes_039a9336[6] = s_attributes_039a9336[6];
    s_attributes_039a9336[7] = s_attributes_039a9336[7];
    return;
  }
  (**(code **)(*local_68 + 0x18))
            (local_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  return;
}


