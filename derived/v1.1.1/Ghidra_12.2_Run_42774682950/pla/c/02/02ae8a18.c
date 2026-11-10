/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae8a18; name: FUN_02ae8a18
 */


void FUN_02ae8a18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long *plVar6;
  char *pcVar7;
  size_t sVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  char *__dest;
  long lVar12;
  char acStack_41 [9];
  long *local_38;
  char *local_28;
  
  if (DAT_0427f7a8 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(DAT_0427f7a8 + 0x68);
  }
  __dest = acStack_41 + (1 - (lVar12 + 0x40U & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (DAT_0427f7a8 != 0) {
    puVar1 = (undefined8 *)(DAT_0427f7a8 + 0x60);
  }
  local_28 = __dest;
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar12 + -1] == '/') {
    __dest[lVar12 + -1] = '\0';
  }
  else {
    pcVar7 = strrchr(__dest,0x2f);
    if (pcVar7 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      *pcVar7 = '\0';
      __dest = local_28;
    }
  }
  sVar8 = strlen(__dest);
  (__dest + sVar8)[0] = '/';
  pcVar7 = local_28;
  (__dest + sVar8)[1] = '\0';
  sVar8 = strlen(local_28);
  uVar2 = s_gfx2_shader_env_special_ha_feedb_03916353._8_8_;
  pcVar7 = pcVar7 + sVar8;
  *(undefined8 *)pcVar7 = s_gfx2_shader_env_special_ha_feedb_03916353._0_8_;
  *(undefined8 *)(pcVar7 + 8) = uVar2;
  uVar2 = s_gfx2_shader_env_special_ha_feedb_03916353._24_8_;
  *(undefined8 *)(pcVar7 + 0x10) = s_gfx2_shader_env_special_ha_feedb_03916353._16_8_;
  uVar4 = s_gfx2_shader_env_special_ha_feedb_03916353._40_8_;
  uVar3 = s_gfx2_shader_env_special_ha_feedb_03916353._32_8_;
  *(undefined8 *)(pcVar7 + 0x18) = uVar2;
  *(undefined8 *)(pcVar7 + 0x20) = uVar3;
  *(undefined8 *)(pcVar7 + 0x28) = uVar4;
  pcVar7[0x30] = '\0';
  FUN_009313e8(&local_38,&local_28);
  plVar6 = local_38;
  uVar5 = DAT_0427f7d0;
  local_38 = (long *)0x0;
  *param_1 = plVar6;
  if (plVar6 == (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar12 = plVar6[0xb];
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xc];
      goto joined_r0x02ae8b30;
    }
  }
  lVar9 = *(long *)PTR_PTR_04379d00;
joined_r0x02ae8b30:
  if (plVar6 == (long *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = plVar6[0xd];
  }
  param_1[1] = lVar12;
  param_1[2] = lVar9;
  param_1[3] = lVar11;
  param_1[4] = 0;
  plVar10 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    plVar10 = plVar6;
  }
  param_1[4] = plVar10;
  *(undefined4 *)(param_1 + 5) = uVar5;
  FUN_02a8eb50(param_1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


