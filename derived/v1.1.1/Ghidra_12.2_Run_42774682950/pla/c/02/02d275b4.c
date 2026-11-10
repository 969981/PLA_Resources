/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d275b4; name: FUN_02d275b4
 */


void FUN_02d275b4(undefined8 *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  int local_188 [4];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 local_168;
  
  if (((*param_3 == 0) || (param_3[1] == 0)) || (*(int *)(param_3[1] + 0xc) == 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar6 = *(long **)(param_2 + 8);
    plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x5b8,8);
    if (plVar4 == (long *)0x0) {
      plVar6 = (long *)0x0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar3 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = (long)&PTR_LAB_042989c0;
      FUN_0080921c(plVar4 + 3);
      plVar4[2] = (long)(plVar4 + 3);
      uVar7 = 8;
      uVar8 = 0x5b8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,*param_3);
    lVar5 = DAT_03a85329;
    plVar4[0xb1] = DAT_03a85331;
    plVar4[0xb0] = lVar5;
    lVar5 = DAT_03a85319;
    plVar4[0xaf] = DAT_03a85321;
    plVar4[0xae] = lVar5;
    lVar5 = DAT_03a85349;
    plVar4[0xb5] = s_ZlLy8MYL_03a85351._0_8_;
    plVar4[0xb4] = lVar5;
    lVar5 = DAT_03a85339;
    plVar4[0xb3] = DAT_03a85341;
    *(undefined1 *)(plVar4 + 0xb6) = 0x40;
    plVar4[0xb2] = lVar5;
    local_178 = 0;
    local_1a0 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_178 | 4),(Result *)&local_1a0);
    FUN_007ee578(&local_1a0,&local_178);
    param_3 = (long *)*param_3;
    if ((param_3 != (long *)0x0) && (uVar2 = (**(code **)(*param_3 + 0x50))(param_3), 0x13 < uVar2))
    {
      memset(&local_178,0,0x124);
      (**(code **)(*param_3 + 0x48))(local_188,param_3,&local_178,uVar2);
      if (local_188[0] == 0) {
        local_19c = CONCAT44(uStack_174,local_178);
        local_18c = local_168;
        local_194 = uStack_170;
        local_1a0 = CONCAT31((int3)((uint)local_1a0 >> 8),1);
        (**(code **)(*plVar4 + 0x28))(&local_178,plVar4,(ulong)&local_1a0 | 4);
      }
    }
    *param_1 = plVar4;
    param_1[1] = plVar6;
    param_1[2] = uVar8;
    param_1[3] = uVar7;
  }
  return;
}


