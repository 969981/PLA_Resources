/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fdc80; name: FUN_029fdc80
 */


void FUN_029fdc80(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  ushort local_70;
  short local_6e;
  char local_6c;
  undefined4 local_6a;
  undefined2 local_66;
  long local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 auStack_48 [4];
  char local_44 [4];
  
  *param_2 = 0;
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)*param_3 * 8 + 0x120);
  if ((param_3[2] == 0) && (*(short *)(lVar9 + 0x74) == 0)) {
    return;
  }
  if ((param_3[1] != 0) && (*(short *)(lVar9 + 0x74) == *(short *)(lVar9 + 0x72))) {
    return;
  }
  pcVar6 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar1 = *(byte *)(lVar9 + 0x7d);
  if ((((((*pcVar6 == '\0') || (pcVar6[2] != bVar1)) &&
        ((pcVar6[3] == '\0' || (pcVar6[5] != bVar1)))) &&
       ((pcVar6[6] == '\0' || (pcVar6[8] != bVar1)))) &&
      ((pcVar6[9] == '\0' || (pcVar6[0xb] != bVar1)))) &&
     ((pcVar6[0xc] == '\0' || (pcVar6[0xe] != bVar1)))) {
    if (pcVar6[0xf] == '\0') {
      return;
    }
    if (pcVar6[0x11] != bVar1) {
      return;
    }
  }
  sVar2 = *(short *)(lVar9 + 0x76);
  uVar5 = FUN_02983f68(*(undefined8 *)(param_1 + 0x38),lVar9,sVar2);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (bVar1 < 0x1e) {
    sVar11 = *(short *)(*(long *)(param_1 + 0x40) + (ulong)bVar1 * 2 + 0x88);
  }
  else {
    sVar11 = 0;
  }
  local_6a = 0xffffffff;
  local_6c = '\0';
  local_66 = 0xffff;
  local_70 = (ushort)bVar1;
  local_6e = sVar2;
  FUN_02a3cb24(*(undefined8 *)(param_1 + 0x20),&local_70);
  local_44[0] = '\0';
  uVar5 = FUN_02990fd8(*(undefined8 *)(param_1 + 0x38),lVar9,(ulong)&local_70 | 4,local_44);
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  if (local_6c != '\0') {
    FUN_02a3fae8(*(undefined8 *)(lVar10 + 0x18),(undefined2)local_6a,0x99,local_70,0);
  }
  uVar3 = FUN_02c50624(local_6e);
  FUN_02a3fae8(*(undefined8 *)(lVar10 + 0x18),local_6a._2_2_,0x7e,local_70,uVar3 & 1);
  if (local_6c != '\0') {
    FUN_02a3fae8(*(undefined8 *)(lVar10 + 0x18),local_66,0x9a,local_70);
  }
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
  if (sVar2 == 0) goto LAB_029fdf7c;
  FUN_02c4fb44(&local_60,sVar2);
  iVar4 = FUN_02c4fc60(&local_60,0x13);
  if (iVar4 == 0) goto LAB_029fdf7c;
  if ((local_44[0] != '\0') && (**(uint **)(*(long *)(param_1 + 8) + 0x58) < 2)) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,1000,sVar2,0xffff0000);
  }
  if (bVar1 < 0x1e) {
    if (*(short *)(*(long *)(param_1 + 0x40) + (ulong)bVar1 * 2 + 0x88) == sVar11) {
LAB_029fdef4:
      local_58 = 0;
      local_56 = 1;
      local_60 = lVar9;
      FUN_029d2bd8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1e0),auStack_48,&local_60);
    }
  }
  else if (sVar11 == 0) goto LAB_029fdef4;
  lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0x60);
  uVar5 = FUN_02c50624(sVar2);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(lVar10 + 0x20);
    lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 8) +
                      (ulong)*(byte *)(lVar9 + 0x7d) * 8 + 0x120);
    *(byte *)(lVar8 + 0x38b) = *(byte *)(lVar8 + 0x38b) | 1;
    FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x22,*(undefined1 *)(lVar9 + 0x7d),0);
  }
  FUN_02984330(*(undefined8 *)(lVar10 + 0x38),lVar9,sVar2,1);
LAB_029fdf7c:
  *param_2 = 1;
  return;
}


