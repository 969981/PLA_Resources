/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009179c4; name: FUN_009179c4
 */


undefined8 FUN_009179c4(long param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  string local_58;
  undefined1 auStack_57 [7];
  size_t local_50;
  undefined1 *local_48;
  undefined1 *local_38;
  
  FUN_00918370();
  std::string::string(&local_58,(string *)&DAT_043a83f8);
  iVar6 = snprintf((char *)0x0,0,"%d",(ulong)DAT_043a83f0);
  sVar1 = (ulong)((byte)local_58 >> 1);
  if (((byte)local_58 & 1) != 0) {
    sVar1 = local_50;
  }
  std::string::append((ulong)&local_58,(char)iVar6);
  if (((byte)local_58 & 1) == 0) {
    puVar4 = auStack_57;
    local_50 = (size_t)((byte)local_58 >> 1);
  }
  else {
    puVar4 = local_48;
  }
  iVar6 = snprintf(puVar4 + (sVar1 - 1),local_50,"%d",(ulong)DAT_043a83f0);
  DAT_043a83f0 = DAT_043a83f0 + 1;
  FUN_00918568(iVar6);
  puVar2 = DAT_043a8428;
  if ((DAT_043a8418 & 1) == 0) {
    puVar2 = &DAT_043a8419;
  }
  if (((byte)local_58 & 1) == 0) {
    local_38 = (undefined1 *)((ulong)&local_58 | 1);
  }
  else {
    local_38 = local_48;
  }
  FUN_00918760(param_1,&local_38,param_2);
  uVar7 = FUN_0014feb0(param_1,0xffffffff);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar7);
  }
  FUN_001522a0(param_1,puVar2);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_00151860(param_1,puVar2);
  uVar8 = FUN_00916b98(param_1);
  plVar5 = DAT_043f1798;
  if ((((byte)local_58 & 1) != 0) && (local_48 != (undefined1 *)0x0)) {
    lVar3 = tpidr_el0;
    plVar10 = *(long **)(lVar3 + 0x20);
    if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
      *(long **)(lVar3 + 0x20) = DAT_043f1798;
      plVar10 = plVar5;
    }
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar10,local_48,0,8);
        return uVar8;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,local_48,0,8);
  }
  return uVar8;
}


