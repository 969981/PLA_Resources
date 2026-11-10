/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00773324; name: FUN_00773324
 */


undefined8 FUN_00773324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (&local_60,*(long **)(param_1 + 8),param_1 + 0x28,param_2);
  uVar1 = (**(code **)(**(long **)PTR_DAT_04373140 + 0x128))
                    (*(long **)PTR_DAT_04373140,local_50,0x4a0);
  uStack_68 = uStack_38;
  local_70 = local_40;
  uStack_88 = uStack_58;
  local_90 = local_60;
  uStack_78 = uStack_48;
  uStack_80 = local_50;
                    /* try { // try from 00773390 to 007733a3 has its CatchHandler @ 007733bc */
  FUN_00777758(uVar1,&local_90,param_2,param_3,0);
  return uVar1;
}


