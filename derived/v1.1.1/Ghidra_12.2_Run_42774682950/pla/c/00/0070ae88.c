/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070ae88; name: FUN_0070ae88
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0070ae88(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  long *plStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  long *plStack_d8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  
  FUN_007836ec(param_1,*param_2,0);
  *param_1 = (long)(PTR_DAT_04376508 + 0x10);
  lVar1 = *param_2;
  param_1[0x15] = param_2[1];
  param_1[0x14] = lVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_1 + 0xb1) = 1;
                    /* try { // try from 0070aed8 to 0070aee3 has its CatchHandler @ 0070afc0 */
  FUN_0070a7d0(&local_110,param_4);
                    /* try { // try from 0070aee4 to 0070aeef has its CatchHandler @ 0070afbc */
  FUN_0070a7d0(&local_a0,&local_110);
  FUN_0070b1ec(param_1 + 6,&local_a0);
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  if ((local_f0 & 1) != 0) {
    (**(code **)(*plStack_d8 + 0x18))
              (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
  }
  if ((local_110 & 1) != 0) {
    (**(code **)(*plStack_f8 + 0x18))
              (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
  }
  return;
}


