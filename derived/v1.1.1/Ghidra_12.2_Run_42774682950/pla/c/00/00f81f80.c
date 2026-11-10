/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f81f80; name: FUN_00f81f80
 */


void FUN_00f81f80(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *plStack_38;
  
  lVar4 = FUN_001511d0(param_1,1);
  uVar9 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_0437d850 != '\0') && (iVar3 = FUN_00155630(param_1,1,"class_cast"), iVar3 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00f81a94();
    uVar9 = (*pcVar6)(uVar9,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pbStack_48 = (byte *)FUN_00150da0(param_1,2,&local_50);
  if (pbStack_48 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_50 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbStack_48 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_40 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar10 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    plStack_38 = plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  else {
    local_40 = strlen((char *)pbStack_48);
    bVar2 = *pbStack_48;
    local_50 = &DAT_cbf29ce484222645;
    pbVar8 = pbStack_48;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    plVar10 = (long *)0x0;
    plStack_38 = (long *)0x0;
  }
  uVar5 = FUN_028dcc5c(uVar9,&local_50);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  FUN_0014ff10(param_1,0);
  uVar1 = 0xffffffff;
  if ((uVar5 & 0xff) != 0) {
    uVar1 = uVar5 >> 0x20;
  }
  FUN_001514d0(param_1,uVar1);
  return;
}


