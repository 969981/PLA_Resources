/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c6478; name: FUN_010c6478
 */


void FUN_010c6478(long param_1,undefined4 param_2,undefined8 param_3,char param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined4 uVar10;
  
  if (param_4 == '\0') {
    iVar9 = 0;
  }
  else if (param_4 == '\x01') {
    iVar9 = 1;
  }
  else {
    plVar5 = (long *)FUN_00d1603c();
    lVar7 = *plVar5;
    *(long *)PTR_DAT_0437b198 = lVar7;
    iVar9 = (uint)(*(int *)(lVar7 + 0x238) == 5) << 1;
  }
  if (((*PTR_DAT_0437b180 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
  }
  plVar8 = (long *)PTR_DAT_0437b190;
  plVar5 = (long *)PTR_DAT_0437b188;
  puVar3 = PTR_DAT_0437b180;
  *(undefined8 *)PTR_DAT_0437b190 = *(undefined8 *)PTR_DAT_0437b188;
  if ((byte)(param_5 - 1U) < 10) {
    uVar10 = *(undefined4 *)(&DAT_03a78cc8 + (long)(char)(param_5 - 1U) * 4);
    bVar1 = *puVar3;
  }
  else {
    uVar10 = 2;
    bVar1 = *puVar3;
  }
  if (((bVar1 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b180), plVar5 = (long *)PTR_DAT_0437b188,
     plVar8 = (long *)PTR_DAT_0437b190, iVar4 != 0)) {
    FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b180);
    plVar5 = (long *)PTR_DAT_0437b188;
    plVar8 = (long *)PTR_DAT_0437b190;
  }
  lVar7 = *plVar5;
  *plVar8 = lVar7;
  uVar2 = *(byte *)(lVar7 + 0x50) - 1;
  if (uVar2 < 10) {
    uVar6 = *(undefined4 *)(&DAT_03a78cc8 + (long)(char)uVar2 * 4);
  }
  else {
    uVar6 = 2;
  }
  FUN_010b40e8(*(undefined8 *)(param_1 + 0x178),param_3,uVar10,uVar6);
  FUN_02c36128(param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x58),iVar9,0);
  return;
}


