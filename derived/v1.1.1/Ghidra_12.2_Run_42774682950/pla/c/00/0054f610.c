/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054f610; name: FUN_0054f610
 */


/* WARNING: Removing unreachable block (ram,0x0054f788) */

undefined8 FUN_0054f610(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  ostream *poVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    if (param_4 <= *(int *)(param_2 + 0x90)) {
      uVar1 = 0;
      if (param_4 != 0) {
        uVar1 = param_4 + 1;
      }
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      if ((int)uVar1 < 0x12) {
        puVar9 = (undefined8 *)0x0;
        puVar4 = &local_170;
        puVar10 = (undefined8 *)0x0;
      }
      else {
        uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4;
        puVar4 = (undefined8 *)FUN_002e2ec0(PTR_FUN_04373078,uVar5,2);
        if (puVar4 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          memset(puVar4,0,uVar5);
          puVar9 = puVar4;
        }
        puVar10 = puVar4;
      }
      uVar5 = FUN_0054f850(param_2,param_1,0,*(undefined8 *)(param_1 + 8),2,puVar4,(ulong)uVar1);
      if ((uVar5 & 1) != 0) {
        if ((param_3 == 0) || (param_4 == 0)) {
LAB_0054f818:
          if (puVar10 != (undefined8 *)0x0) {
            FUN_002e2f10(puVar9);
            FUN_002e2ef0(PTR_LAB_04373088,puVar9);
          }
          return 1;
        }
        lVar7 = 0;
        puVar4 = puVar4 + 3;
        do {
          if (param_4 <= lVar7) goto LAB_0054f818;
          puVar8 = *(undefined8 **)(param_3 + lVar7 * 8);
          lVar7 = lVar7 + 1;
          uVar5 = (*(code *)puVar8[1])(puVar4[-1],*puVar4,*puVar8);
          puVar4 = puVar4 + 2;
        } while ((uVar5 & 1) != 0);
      }
      if (puVar10 != (undefined8 *)0x0) {
        FUN_002e2f10(puVar9);
        FUN_002e2ef0(PTR_LAB_04373088,puVar9);
      }
    }
  }
  else if (*(char *)(param_2 + 0x1e) != '\0') {
    FUN_0054f038(&local_170,"external/com_github_google_re2/re2/re2.cc",0x378);
                    /* try { // try from 0054f67c to 0054f6ab has its CatchHandler @ 0054f83c */
    poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)&uStack_168,"Invalid RE2: ",0xd);
    pbVar6 = *(byte **)(param_2 + 0x38);
    uVar5 = *(ulong *)(pbVar6 + 8);
    pbVar2 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar2 = pbVar6 + 1;
      uVar5 = (ulong)(*pbVar6 >> 1);
    }
    std::__put_character_sequence<char,std::char_traits<char>>(poVar3,(char *)pbVar2,uVar5);
    FUN_0054f1b0(&local_170);
  }
  return 0;
}


