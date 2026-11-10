/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006a4348; name: FUN_006a4348
 */


undefined8 FUN_006a4348(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x18))
            (&local_50,*(long **)(param_1 + 8),param_1 + 0x130,param_2,param_3);
  uVar1 = (**(code **)(**(long **)PTR_DAT_04373140 + 0x128))
                    (*(long **)PTR_DAT_04373140,local_40,0x740);
  uStack_58 = uStack_28;
  local_60 = local_30;
  uStack_78 = uStack_48;
  local_80 = local_50;
  uStack_68 = uStack_38;
  uStack_70 = local_40;
                    /* try { // try from 006a43b0 to 006a43c3 has its CatchHandler @ 006a43d8 */
  FUN_006d4924(uVar1,&local_80,param_2,0,0);
  return uVar1;
}


