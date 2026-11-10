/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0097c; name: FUN_02c0097c
 */


void FUN_02c0097c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  char *pcVar5;
  size_t sVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char *__dest;
  long lVar10;
  char acStack_41 [9];
  long *local_38;
  char *local_28;
  
  if (DAT_0427f7a8 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(DAT_0427f7a8 + 0x68);
  }
  __dest = acStack_41 + (1 - (lVar10 + 0x26U & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (DAT_0427f7a8 != 0) {
    puVar1 = (undefined8 *)(DAT_0427f7a8 + 0x60);
  }
  local_28 = __dest;
  strcpy(__dest,(char *)*puVar1);
  if (__dest[lVar10 + -1] == '/') {
    __dest[lVar10 + -1] = '\0';
  }
  else {
    pcVar5 = strrchr(__dest,0x2f);
    if (pcVar5 == (char *)0x0) {
      *__dest = '\0';
    }
    else {
      *pcVar5 = '\0';
      __dest = local_28;
    }
  }
  sVar6 = strlen(__dest);
  (__dest + sVar6)[0] = '/';
  pcVar5 = local_28;
  (__dest + sVar6)[1] = '\0';
  sVar6 = strlen(local_28);
  pcVar5 = pcVar5 + sVar6;
  uVar2 = CONCAT17(s_havok_keycode_2020_bin_0393548a[0xf],s_havok_keycode_2020_bin_0393548a._8_7_);
  *(undefined8 *)pcVar5 = s_havok_keycode_2020_bin_0393548a._0_8_;
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(ulong *)(pcVar5 + 0xf) =
       CONCAT71(s_havok_keycode_2020_bin_0393548a._16_7_,s_havok_keycode_2020_bin_0393548a[0xf]);
  FUN_009313e8(&local_38,&local_28);
  plVar4 = local_38;
  uVar3 = DAT_0427f7d0;
  local_38 = (long *)0x0;
  *param_1 = plVar4;
  if (plVar4 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar10 = plVar4[0xb];
    if (plVar4 != (long *)0x0) {
      lVar7 = plVar4[0xc];
      goto joined_r0x02c00a84;
    }
  }
  lVar7 = *(long *)PTR_PTR_04379d00;
joined_r0x02c00a84:
  if (plVar4 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = plVar4[0xd];
  }
  param_1[1] = lVar10;
  param_1[2] = lVar7;
  param_1[3] = lVar9;
  param_1[4] = 0;
  plVar8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar8 = plVar4;
  }
  param_1[4] = plVar8;
  *(undefined4 *)(param_1 + 5) = uVar3;
  FUN_02a8eb50(param_1);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


