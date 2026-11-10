/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fa5e0; name: FUN_032fa5e0
 */


undefined4
FUN_032fa5e0(undefined8 *param_1,long param_2,undefined4 param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58 [2];
  
  if (param_1[2] == param_4) {
    local_b0 = param_1;
    local_a8 = param_3;
    uStack_a4 = param_5;
    local_60 = FUN_032fa7fc(param_1,param_2,&local_b0);
    local_58[0] = 0x80040200;
    if (1 < local_60) {
      if (DAT_0444acb0 == '\0') {
        return 0x80040200;
      }
      local_b0 = (undefined8 *)0x0;
      local_a0 = &DAT_0444ac60;
      uStack_98 = 1;
      local_90 = FUN_032ba19c();
      uStack_88 = 0;
      local_80 = 0;
      pcStack_78 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/TypeVm/hkTypeVmCompiler.cpp";
      local_70 = 0x9a;
      uStack_68 = 0;
      FUN_03326338(&local_b0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_043890e0,"failedField",
                   local_58);
      FUN_03326338(&local_b0,s_Failed_to_clone_opaque_field_____03903995,PTR_DAT_04389290,&local_60)
      ;
      FUN_033266e0(&local_b0);
      FUN_032c7b9c(&uStack_88);
      return local_58[0];
    }
  }
  else {
    if (param_2 == param_4) {
      lVar2 = FUN_032f7d50(*param_1,param_4);
    }
    else {
      lVar2 = FUN_032f800c(*param_1,param_4,param_2);
    }
    if (lVar2 == 0) {
      return 0x80040200;
    }
    plVar6 = (long *)param_1[1];
    iVar4 = (int)plVar6[1];
    lVar3 = *plVar6;
    lVar7 = (long)iVar4;
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)((long)plVar6 + 0xc) & 0x3fffffff) <= iVar4) {
      lVar3 = FUN_032c8bec(PTR_PTR_0434a080,iVar1);
      iVar4 = (int)plVar6[1];
      *plVar6 = lVar3;
    }
    puVar5 = (undefined8 *)(lVar3 + (long)iVar4 * 0x38);
    *(undefined1 *)(puVar5 + 1) = 0;
    *(undefined4 *)((long)puVar5 + 10) = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_LAB_0434d568;
    *(int *)(plVar6 + 1) = iVar1;
    plVar6 = (long *)(*plVar6 + lVar7 * 0x38);
    (**(code **)(*plVar6 + 8))(plVar6);
    *(undefined1 *)(plVar6 + 1) = 0xc;
    *(short *)((long)plVar6 + 10) = (short)param_5;
    *(short *)((long)plVar6 + 0xc) = (short)param_3;
    *plVar6 = (long)&PTR_LAB_0434d610;
    plVar6[2] = 0;
    plVar6[3] = param_4;
    plVar6[4] = param_2;
    plVar6[5] = lVar2;
  }
  return 0;
}


