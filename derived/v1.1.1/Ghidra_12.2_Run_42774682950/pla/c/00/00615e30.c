/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00615e30; name: FUN_00615e30
 */


uint FUN_00615e30(uint param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  char *pcVar9;
  void *pvVar10;
  uint uVar11;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long *local_48;
  
  local_60 = 0;
  pcVar9 = *(char **)PTR_PTR_043732d0;
  local_58 = 0;
  local_50 = (void *)0x0;
  plVar3 = (long *)FUN_00612290();
  local_48 = plVar3;
  sVar4 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 006160ac to 006160b3 has its CatchHandler @ 006160c0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar4 << 1));
    pvVar10 = (void *)((ulong)&local_60 | 1);
    if (sVar4 != 0) goto LAB_00615ed0;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    local_60 = uVar7 | 1;
    local_58 = sVar4;
    local_50 = pvVar10;
LAB_00615ed0:
    memcpy(pvVar10,pcVar9,sVar4);
  }
  *(undefined1 *)((long)pvVar10 + sVar4) = 0;
                    /* try { // try from 00615ee4 to 00615eef has its CatchHandler @ 006160dc */
  lVar5 = FUN_00616660(param_2,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (param_2 + 8 != lVar5) {
    bVar1 = *(byte *)(lVar5 + 0x40);
    uVar7 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar7 = *(ulong *)(lVar5 + 0x48);
    }
    if (uVar7 == 0) {
      return 0;
    }
    puVar8 = *(uint **)(lVar5 + 0x50);
    if ((bVar1 & 1) == 0) {
      puVar8 = (uint *)(lVar5 + 0x41);
    }
    return *puVar8;
  }
  if (param_1 < 0x11) {
    uVar11 = *(uint *)(&DAT_03a3ef48 + (long)(int)param_1 * 4);
  }
  else {
    uVar11 = 0x30141;
  }
  pcVar9 = *(char **)PTR_PTR_04375450;
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  plVar3 = (long *)FUN_00612290();
  local_48 = plVar3;
  sVar4 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar4) {
                    /* try { // try from 006160b4 to 006160bb has its CatchHandler @ 006160bc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar4 << 1));
    pvVar10 = (void *)((ulong)&local_60 | 1);
    if (sVar4 == 0) goto LAB_00616010;
  }
  else {
    uVar7 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    local_60 = uVar7 | 1;
    local_58 = sVar4;
    local_50 = pvVar10;
  }
  memcpy(pvVar10,pcVar9,sVar4);
LAB_00616010:
  *(undefined1 *)((long)pvVar10 + sVar4) = 0;
                    /* try { // try from 00616014 to 0061601f has its CatchHandler @ 006160cc */
  lVar6 = FUN_00616660(param_2,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (lVar5 != lVar6) {
    if ((*(byte *)(lVar6 + 0x40) & 1) == 0) {
      pcVar9 = (char *)(lVar6 + 0x41);
    }
    else {
      pcVar9 = *(char **)(lVar6 + 0x50);
    }
    uVar7 = strtoul(pcVar9,(char **)0x0,10);
    iVar2 = 0;
    if (uVar7 < 0x100) {
      iVar2 = (int)uVar7;
    }
    uVar11 = uVar11 + iVar2 * 0x200 & 0xfffffe00 | uVar11 & 0x141;
  }
  return uVar11;
}


