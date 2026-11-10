/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010806c0; name: FUN_010806c0
 */


void FUN_010806c0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long local_250;
  undefined1 *puStack_248;
  long local_240;
  undefined1 *puStack_238;
  long local_230;
  undefined1 *puStack_228;
  long local_220;
  undefined1 *puStack_218;
  long local_210;
  undefined1 *puStack_208;
  long local_200;
  code *pcStack_1f8;
  long local_1f0;
  code *pcStack_1e8;
  
  lVar13 = *(long *)(param_1 + 0x20);
  FUN_00151fe0(lVar13,0,4);
  FUN_00150260(lVar13,0xffffffff);
  iVar5 = FUN_00155070(lVar13,0xfff0b9d8);
  if (lVar13 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(lVar13,0xfff0b9d8,(long)iVar5);
  }
  uVar6 = FUN_0014fef0(lVar13);
  FUN_00151490(lVar13);
  FUN_00151810(lVar13,&LAB_02c52160);
  FUN_001516f0(lVar13,&LAB_010810a4,2);
  FUN_00152550(lVar13,uVar6,"CheckPokeExist");
  uVar6 = FUN_0014fef0(lVar13);
  FUN_01081150();
  puVar2 = DAT_043ba1e0;
  if ((DAT_043ba1d0 & 1) == 0) {
    puVar2 = &DAT_043ba1d1;
  }
  if (((DAT_043b9ff8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043b9ff8), iVar7 != 0)) {
    DAT_043b9ff0 = 9;
    __cxa_guard_release(&DAT_043b9ff8);
  }
  if (((DAT_043ba008 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ba008), iVar7 != 0)) {
    DAT_043ba000 = 0x10;
    __cxa_guard_release(&DAT_043ba008);
  }
  uVar1 = DAT_043b9ff0;
  lVar8 = FUN_00153520(lVar13,DAT_043b9ff0);
  if (uVar1 < ((ulong)(uint)-(int)lVar8 & 7 | 8)) {
LAB_01080d60:
    FUN_0014ff10(lVar13,0xfffffffe);
    uVar1 = DAT_043ba000;
    lVar8 = FUN_00153520(lVar13,DAT_043ba000);
    if (uVar1 < ((ulong)(uint)-(int)lVar8 & 7 | 8)) {
LAB_01080e08:
      bVar4 = true;
    }
    else {
      uVar12 = (ulong)(uint)-(int)lVar8 & 7;
      plVar11 = (long *)(lVar8 + uVar12);
      if (plVar11 == (long *)0x0) goto LAB_01080e08;
      if (uVar1 - uVar12 != 8) goto LAB_01080800;
      bVar4 = false;
    }
    FUN_0014ff10(lVar13,0xfffffffe);
    if (((DAT_043ba028 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ba028), iVar7 != 0)) {
      FUN_01081370();
      FUN_00100250(PTR__string_04379718,&DAT_043ba010,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ba028);
    }
    puVar3 = DAT_043ba020;
    if ((DAT_043ba010 & 1) == 0) {
      puVar3 = &DAT_043ba011;
    }
    if (bVar4) {
      pcVar10 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
    }
    else {
      pcVar10 = "aligned allocation of userdata block (data section) for \'%s\' failed";
    }
    FUN_00154110(lVar13,pcVar10,puVar3);
  }
  else {
    uVar12 = (ulong)(uint)-(int)lVar8 & 7;
    plVar11 = (long *)(lVar8 + uVar12);
    if ((plVar11 == (long *)0x0) || (uVar1 - uVar12 == 8)) goto LAB_01080d60;
LAB_01080800:
    *plVar11 = (long)(plVar11 + 1);
  }
  iVar7 = FUN_00154450(lVar13,puVar2);
  if (iVar7 == 1) {
    memset(&local_1f0,0,0x1a0);
    lVar8 = FUN_008cca50();
    local_250 = lVar8 + 0x199;
    if ((*(byte *)(lVar8 + 0x198) & 1) != 0) {
      local_250 = *(long *)(lVar8 + 0x1a8);
    }
    puStack_248 = &LAB_01081ad0;
    lVar8 = FUN_008cca50();
    local_240 = lVar8 + 0x1b1;
    if ((*(byte *)(lVar8 + 0x1b0) & 1) != 0) {
      local_240 = *(long *)(lVar8 + 0x1c0);
    }
    puStack_238 = &LAB_01083040;
    lVar8 = FUN_008cca50();
    local_230 = lVar8 + 0x181;
    if ((*(byte *)(lVar8 + 0x180) & 1) != 0) {
      local_230 = *(long *)(lVar8 + 400);
    }
    puStack_228 = &LAB_010830d0;
    lVar8 = FUN_008cca50();
    local_220 = lVar8 + 0x289;
    if ((*(byte *)(lVar8 + 0x288) & 1) != 0) {
      local_220 = *(long *)(lVar8 + 0x298);
    }
    puStack_218 = &LAB_01081ac0;
    lVar8 = FUN_008cca50();
    local_210 = lVar8 + 0x91;
    if ((*(byte *)(lVar8 + 0x90) & 1) != 0) {
      local_210 = *(long *)(lVar8 + 0xa0);
    }
    puStack_208 = &LAB_010831b0;
    lVar8 = FUN_008cca50();
    local_200 = lVar8 + 0x61;
    if ((*(byte *)(lVar8 + 0x60) & 1) != 0) {
      local_200 = *(long *)(lVar8 + 0x70);
    }
    pcStack_1f8 = FUN_01083590;
    lVar8 = FUN_008cca50();
    local_1f0 = lVar8 + 0x1c9;
    if ((*(byte *)(lVar8 + 0x1c8) & 1) != 0) {
      local_1f0 = *(long *)(lVar8 + 0x1d8);
    }
    pcStack_1e8 = FUN_01083640;
    FUN_00155a20(lVar13,&local_250,0);
    FUN_00151fe0(lVar13,0,2);
    if (((DAT_043ba028 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ba028), iVar7 != 0)) {
      FUN_01081370();
      FUN_00100250(PTR__string_04379718,&DAT_043ba010,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ba028);
    }
    if ((DAT_043ba010 & 1) == 0) {
      uVar1 = (ulong)(DAT_043ba010 >> 1);
      puVar3 = &DAT_043ba011;
    }
    else {
      uVar1 = DAT_043ba018;
      puVar3 = DAT_043ba020;
    }
    FUN_001514f0(lVar13,puVar3,uVar1);
    FUN_00152550(lVar13,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(lVar13,&LAB_01081a70,0);
    FUN_00152550(lVar13,0xfffffffe,&DAT_0397bfcb);
    lVar9 = FUN_008cca50();
    lVar8 = lVar9 + 0x2d1;
    if ((*(byte *)(lVar9 + 0x2d0) & 1) != 0) {
      lVar8 = *(long *)(lVar9 + 0x2e0);
    }
    FUN_00152550(lVar13,0xfffffffe,lVar8);
  }
  FUN_00152ae0(lVar13,0xfffffffe);
  FUN_00152550(lVar13,uVar6,"GetFormNum");
  uVar6 = FUN_0014fef0(lVar13);
  FUN_010837ac();
  puVar2 = DAT_043ba3e0;
  if ((DAT_043ba3d0 & 1) == 0) {
    puVar2 = &DAT_043ba3d1;
  }
  if (((DAT_043ba1f8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ba1f8), iVar7 != 0)) {
    DAT_043ba1f0 = 9;
    __cxa_guard_release(&DAT_043ba1f8);
  }
  if (((DAT_043ba208 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ba208), iVar7 != 0)) {
    DAT_043ba200 = 0x10;
    __cxa_guard_release(&DAT_043ba208);
  }
  uVar1 = DAT_043ba1f0;
  lVar8 = FUN_00153520(lVar13,DAT_043ba1f0);
  if (((ulong)(uint)-(int)lVar8 & 7 | 8) <= uVar1) {
    uVar12 = (ulong)(uint)-(int)lVar8 & 7;
    plVar11 = (long *)(lVar8 + uVar12);
    if ((plVar11 == (long *)0x0) || (uVar1 - uVar12 == 8)) goto LAB_01080db4;
LAB_01080a8c:
    *plVar11 = (long)(plVar11 + 1);
    goto LAB_01080a94;
  }
LAB_01080db4:
  FUN_0014ff10(lVar13,0xfffffffe);
  uVar1 = DAT_043ba200;
  lVar8 = FUN_00153520(lVar13,DAT_043ba200);
  if (uVar1 < ((ulong)(uint)-(int)lVar8 & 7 | 8)) {
LAB_01080e50:
    bVar4 = true;
  }
  else {
    uVar12 = (ulong)(uint)-(int)lVar8 & 7;
    plVar11 = (long *)(lVar8 + uVar12);
    if (plVar11 == (long *)0x0) goto LAB_01080e50;
    if (uVar1 - uVar12 != 8) goto LAB_01080a8c;
    bVar4 = false;
  }
  FUN_0014ff10(lVar13,0xfffffffe);
  if (((DAT_043ba228 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ba228), iVar7 != 0)) {
    FUN_010839d0();
    FUN_00100250(PTR__string_04379718,&DAT_043ba210,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ba228);
  }
  puVar3 = DAT_043ba220;
  if ((DAT_043ba210 & 1) == 0) {
    puVar3 = &DAT_043ba211;
  }
  if (bVar4) {
    pcVar10 = "aligned allocation of userdata block (pointer section) for \'%s\' failed";
  }
  else {
    pcVar10 = "aligned allocation of userdata block (data section) for \'%s\' failed";
  }
  FUN_00154110(lVar13,pcVar10,puVar3);
LAB_01080a94:
  iVar7 = FUN_00154450(lVar13,puVar2);
  if (iVar7 == 1) {
    memset(&local_1f0,0,0x1a0);
    lVar8 = FUN_008cca50();
    local_250 = lVar8 + 0x199;
    if ((*(byte *)(lVar8 + 0x198) & 1) != 0) {
      local_250 = *(long *)(lVar8 + 0x1a8);
    }
    puStack_248 = &LAB_01083d70;
    lVar8 = FUN_008cca50();
    local_240 = lVar8 + 0x1b1;
    if ((*(byte *)(lVar8 + 0x1b0) & 1) != 0) {
      local_240 = *(long *)(lVar8 + 0x1c0);
    }
    puStack_238 = &LAB_01085360;
    lVar8 = FUN_008cca50();
    local_230 = lVar8 + 0x181;
    if ((*(byte *)(lVar8 + 0x180) & 1) != 0) {
      local_230 = *(long *)(lVar8 + 400);
    }
    puStack_228 = &LAB_010853f0;
    lVar8 = FUN_008cca50();
    local_220 = lVar8 + 0x289;
    if ((*(byte *)(lVar8 + 0x288) & 1) != 0) {
      local_220 = *(long *)(lVar8 + 0x298);
    }
    puStack_218 = &LAB_01083d60;
    lVar8 = FUN_008cca50();
    local_210 = lVar8 + 0x91;
    if ((*(byte *)(lVar8 + 0x90) & 1) != 0) {
      local_210 = *(long *)(lVar8 + 0xa0);
    }
    puStack_208 = &LAB_010854d0;
    lVar8 = FUN_008cca50();
    local_200 = lVar8 + 0x61;
    if ((*(byte *)(lVar8 + 0x60) & 1) != 0) {
      local_200 = *(long *)(lVar8 + 0x70);
    }
    pcStack_1f8 = (code *)&LAB_01085820;
    lVar8 = FUN_008cca50();
    local_1f0 = lVar8 + 0x1c9;
    if ((*(byte *)(lVar8 + 0x1c8) & 1) != 0) {
      local_1f0 = *(long *)(lVar8 + 0x1d8);
    }
    pcStack_1e8 = (code *)&LAB_010859f0;
    FUN_00155a20(lVar13,&local_250,0);
    FUN_00151fe0(lVar13,0,2);
    if (((DAT_043ba228 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_043ba228), iVar7 != 0)) {
      FUN_010839d0();
      FUN_00100250(PTR__string_04379718,&DAT_043ba210,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ba228);
    }
    if ((DAT_043ba210 & 1) == 0) {
      uVar1 = (ulong)(DAT_043ba210 >> 1);
      puVar3 = &DAT_043ba211;
    }
    else {
      uVar1 = DAT_043ba218;
      puVar3 = DAT_043ba220;
    }
    FUN_001514f0(lVar13,puVar3,uVar1);
    FUN_00152550(lVar13,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(lVar13,&LAB_01083d10,0);
    FUN_00152550(lVar13,0xfffffffe,&DAT_0397bfcb);
    lVar9 = FUN_008cca50();
    lVar8 = lVar9 + 0x2d1;
    if ((*(byte *)(lVar9 + 0x2d0) & 1) != 0) {
      lVar8 = *(long *)(lVar9 + 0x2e0);
    }
    FUN_00152550(lVar13,0xfffffffe,lVar8);
  }
  FUN_00152ae0(lVar13,0xfffffffe);
  FUN_00152550(lVar13,uVar6,"GetFormNo");
  uVar6 = FUN_0014fef0(lVar13);
  FUN_00151490(lVar13);
  FUN_00151810(lVar13,&LAB_02c52240);
  FUN_001516f0(lVar13,FUN_01085b5c,2);
  FUN_00152550(lVar13,uVar6,"GetSexVector");
  FUN_0014ff10(lVar13,0xfffffffe);
  FUN_0014ff10(lVar13,0xfffffffe);
  lVar8 = *(long *)(param_1 + 0x20);
  FUN_0014fef0(lVar8);
  if (lVar13 == 0) {
    FUN_00151490(lVar8);
    FUN_001522a0(lVar8,"PersonalSystem");
  }
  else {
    FUN_00151e00(lVar13,0xfff0b9d8,(long)iVar5);
    if (lVar13 != lVar8) {
      FUN_0014fe00(lVar13,lVar8,1);
    }
    FUN_001522a0(lVar8,"PersonalSystem");
    if (iVar5 != -2) {
      FUN_00155150(lVar13,0xfff0b9d8,iVar5);
    }
  }
  return;
}


