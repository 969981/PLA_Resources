/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cc079c; name: FUN_00cc079c
 */


void FUN_00cc079c(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  size_t sVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined1 *puVar6;
  void *pvVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long *local_38;
  
  FUN_00ceced0(&local_38);
  if (*local_38 != 0x1122cdfaa0fd4766) {
    *param_1 = 0;
    return;
  }
  pcVar5 = *(char **)(local_38[1] + 8);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  sVar3 = strlen(pcVar5);
  if (0xffffffffffffffef < sVar3) goto LAB_00cc0b84;
  if (sVar3 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = (void *)((ulong)&local_78 | 1);
    if (sVar3 != 0) goto LAB_00cc0828;
  }
  else {
    uVar8 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_78 = uVar8 | 1;
    local_70 = sVar3;
    local_68 = pvVar7;
LAB_00cc0828:
    memcpy(pvVar7,pcVar5,sVar3);
  }
  *(undefined1 *)((long)pvVar7 + sVar3) = 0;
  uVar9 = std::stof((string *)&local_78,(ulong *)0x0);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  pcVar5 = *(char **)(local_38[1] + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  sVar3 = strlen(pcVar5);
  if (0xffffffffffffffef < sVar3) goto LAB_00cc0b84;
  if (sVar3 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = (void *)((ulong)&local_78 | 1);
    if (sVar3 != 0) goto LAB_00cc08a0;
  }
  else {
    uVar8 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_78 = uVar8 | 1;
    local_70 = sVar3;
    local_68 = pvVar7;
LAB_00cc08a0:
    memcpy(pvVar7,pcVar5,sVar3);
  }
  *(undefined1 *)((long)pvVar7 + sVar3) = 0;
  uVar10 = std::stof((string *)&local_78,(ulong *)0x0);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  pcVar5 = *(char **)(local_38[1] + 0x48);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  sVar3 = strlen(pcVar5);
  if (0xffffffffffffffef < sVar3) goto LAB_00cc0b84;
  if (sVar3 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = (void *)((ulong)&local_78 | 1);
    if (sVar3 != 0) goto LAB_00cc0918;
  }
  else {
    uVar8 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_78 = uVar8 | 1;
    local_70 = sVar3;
    local_68 = pvVar7;
LAB_00cc0918:
    memcpy(pvVar7,pcVar5,sVar3);
  }
  *(undefined1 *)((long)pvVar7 + sVar3) = 0;
  uVar11 = std::stof((string *)&local_78,(ulong *)0x0);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  pcVar5 = *(char **)(local_38[1] + 0x68);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  sVar3 = strlen(pcVar5);
  if (0xffffffffffffffef < sVar3) goto LAB_00cc0b84;
  if (sVar3 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = (void *)((ulong)&local_78 | 1);
    if (sVar3 != 0) goto LAB_00cc0990;
  }
  else {
    uVar8 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_78 = uVar8 | 1;
    local_70 = sVar3;
    local_68 = pvVar7;
LAB_00cc0990:
    memcpy(pvVar7,pcVar5,sVar3);
  }
  *(undefined1 *)((long)pvVar7 + sVar3) = 0;
  uVar12 = std::stof((string *)&local_78,(ulong *)0x0);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  pcVar5 = *(char **)(local_38[1] + 0x88);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  sVar3 = strlen(pcVar5);
  if (0xffffffffffffffef < sVar3) {
LAB_00cc0b84:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar3 << 1));
    pvVar7 = (void *)((ulong)&local_78 | 1);
    if (sVar3 == 0) goto LAB_00cc0a18;
  }
  else {
    uVar8 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = operator_new(uVar8);
    local_78 = uVar8 | 1;
    local_70 = sVar3;
    local_68 = pvVar7;
  }
  memcpy(pvVar7,pcVar5,sVar3);
LAB_00cc0a18:
  *(undefined1 *)((long)pvVar7 + sVar3) = 0;
  uVar2 = std::stoi((string *)&local_78,(ulong *)0x0,10);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  puVar6 = &DAT_cbf29ce484222645;
  pbVar4 = *(byte **)(local_38[1] + 0xa8);
  bVar1 = *pbVar4;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar4;
  }
  uVar13 = FUN_00ced094(local_38[1] + 0xc0);
  *(undefined4 *)(param_1 + 8) = uVar9;
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  *(undefined4 *)(param_1 + 0x10) = uVar11;
  *(undefined4 *)(param_1 + 0x14) = uVar12;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined1 **)(param_1 + 0x20) = puVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar13;
  *param_1 = 1;
  return;
}


