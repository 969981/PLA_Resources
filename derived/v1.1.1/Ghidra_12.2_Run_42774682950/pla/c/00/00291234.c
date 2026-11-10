/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00291234; name: FUN_00291234
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00291234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  byte local_108;
  undefined7 uStack_107;
  undefined8 local_f8;
  long *plStack_f0;
  byte local_e8;
  undefined7 uStack_e7;
  undefined8 local_d8;
  long *plStack_d0;
  byte local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  long *plStack_b0;
  byte local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  long *plStack_90;
  byte local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  long *plStack_70;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  
  FUN_00290fe0(&local_60);
  uVar1 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar1 = local_50;
  }
  FUN_006d7d0c(&local_108,uVar1);
  FUN_002910cc(param_1,uVar1,&local_108,param_3,param_4,param_5);
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))
              (plStack_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
  }
  if ((local_a8 & 1) != 0) {
    (**(code **)(*plStack_90 + 0x18))
              (plStack_90,local_98,CONCAT71(uStack_a7,local_a8) & 0xfffffffffffffffe,1);
  }
  if ((local_c8 & 1) != 0) {
    (**(code **)(*plStack_b0 + 0x18))
              (plStack_b0,local_b8,CONCAT71(uStack_c7,local_c8) & 0xfffffffffffffffe,1);
  }
  if ((local_e8 & 1) != 0) {
    (**(code **)(*plStack_d0 + 0x18))
              (plStack_d0,local_d8,CONCAT71(uStack_e7,local_e8) & 0xfffffffffffffffe,1);
  }
  if ((local_108 & 1) != 0) {
    (**(code **)(*plStack_f0 + 0x18))
              (plStack_f0,local_f8,CONCAT71(uStack_107,local_108) & 0xfffffffffffffffe,1);
  }
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  return;
}


