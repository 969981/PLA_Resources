/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002910cc; name: FUN_002910cc
 */


void FUN_002910cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong local_90 [3];
  long *plStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  
  uVar2 = *param_5;
  if (uVar2 < 2) {
LAB_00291114:
    puVar4 = &DAT_03996322;
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 != 3) {
        plStack_78 = (long *)FUN_00612290();
        local_90[0] = 0;
        local_90[1] = 0;
        local_90[2] = 0;
        plStack_58 = (long *)FUN_00612290();
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        goto LAB_0029116c;
      }
      goto LAB_00291114;
    }
    if ((param_5[2] & 1) == 0) {
      puVar4 = (undefined1 *)((long)param_5 + 9);
    }
    else {
      puVar4 = *(undefined1 **)(param_5 + 6);
    }
  }
  FUN_00298b30(local_90,puVar4,&DAT_03996322);
LAB_0029116c:
  plVar5 = *(long **)(*(long *)*param_6 + 400);
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0xc0,8);
  puVar1 = PTR_DAT_043730b8 + 0x10;
  plVar3[2] = 0;
  plVar3[3] = (long)plVar5;
  *plVar3 = (long)puVar1;
  plVar3[1] = 0;
  FUN_0028f238(plVar3 + 4,param_2,param_3,local_90,param_4,param_5,param_6);
  *param_1 = plVar3 + 4;
  param_1[1] = plVar3;
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if ((local_90[0] & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78,local_90[2],local_90[0] & 0xfffffffffffffffe,1);
  }
  return;
}


