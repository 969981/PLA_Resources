/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae8db0; name: FUN_02ae8db0
 */


void FUN_02ae8db0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *plVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  char *__dest;
  long lVar11;
  char acStack_41 [9];
  long *local_38;
  char *local_28;
  
  if (DAT_0427f7a8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(DAT_0427f7a8 + 0x68);
  }
  __dest = acStack_41 + (1 - (lVar11 + 0x44U & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (DAT_0427f7a8 != 0) {
    puVar1 = (undefined8 *)(DAT_0427f7a8 + 0x60);
  }
  local_28 = __dest;
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar11 + -1] == '/') {
    __dest[lVar11 + -1] = '\0';
  }
  else {
    pcVar6 = strrchr(__dest,0x2f);
    if (pcVar6 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      *pcVar6 = '\0';
      __dest = local_28;
    }
  }
  sVar7 = strlen(__dest);
  (__dest + sVar7)[0] = '/';
  pcVar6 = local_28;
  (__dest + sVar7)[1] = '\0';
  sVar7 = strlen(local_28);
  uVar2 = s_gfx2_shader_env_system_ha_blend__038b16f0._8_8_;
  pcVar6 = pcVar6 + sVar7;
  *(undefined8 *)pcVar6 = s_gfx2_shader_env_system_ha_blend__038b16f0._0_8_;
  *(undefined8 *)(pcVar6 + 8) = uVar2;
  uVar3 = s_gfx2_shader_env_system_ha_blend__038b16f0._24_8_;
  uVar2 = s_gfx2_shader_env_system_ha_blend__038b16f0._16_8_;
  *(ulong *)(pcVar6 + 0x2d) =
       CONCAT53(s_gfx2_shader_env_system_ha_blend__038b16f0._48_5_,
                s_gfx2_shader_env_system_ha_blend__038b16f0._45_3_);
  *(undefined8 *)(pcVar6 + 0x10) = uVar2;
  *(undefined8 *)(pcVar6 + 0x18) = uVar3;
  uVar2 = CONCAT35(s_gfx2_shader_env_system_ha_blend__038b16f0._45_3_,
                   s_gfx2_shader_env_system_ha_blend__038b16f0._40_5_);
  *(undefined8 *)(pcVar6 + 0x20) = s_gfx2_shader_env_system_ha_blend__038b16f0._32_8_;
  *(undefined8 *)(pcVar6 + 0x28) = uVar2;
  FUN_009313e8(&local_38,&local_28);
  plVar5 = local_38;
  uVar4 = DAT_0427f7d0;
  local_38 = (long *)0x0;
  *param_1 = plVar5;
  if (plVar5 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar11 = plVar5[0xb];
    if (plVar5 != (long *)0x0) {
      lVar8 = plVar5[0xc];
      goto joined_r0x02ae8ec8;
    }
  }
  lVar8 = *(long *)PTR_PTR_04379d00;
joined_r0x02ae8ec8:
  if (plVar5 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar5[0xd];
  }
  param_1[1] = lVar11;
  param_1[2] = lVar8;
  param_1[3] = lVar10;
  param_1[4] = 0;
  plVar9 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar9 = plVar5;
  }
  param_1[4] = plVar9;
  *(undefined4 *)(param_1 + 5) = uVar4;
  FUN_02a8eb50(param_1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


