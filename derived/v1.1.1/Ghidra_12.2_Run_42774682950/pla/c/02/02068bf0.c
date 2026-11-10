/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02068bf0; name: FUN_02068bf0
 */


undefined * FUN_02068bf0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  string *psVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong auStack_288 [3];
  byte *pbStack_270;
  long lStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [512];
  undefined4 local_34;
  
  lVar2 = FUN_001511d0(param_1,1);
  uVar14 = *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437cb00 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar7 = FUN_00ee631c();
    uVar14 = (*pcVar6)(uVar14,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  lVar2 = (*(code *)*param_2)(uVar14);
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_02068ef0();
  pbVar12 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar12 = pbVar3 + 1;
  }
  if (lVar2 == 0) {
    puVar5 = (undefined *)FUN_00151490(param_1);
    return puVar5;
  }
  if (((DAT_043d8480 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d8480), iVar1 != 0)) {
    DAT_043d8478 = 8;
    __cxa_guard_release(&DAT_043d8480);
  }
  if (((DAT_043d8490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_043d8490), iVar1 != 0)) {
    DAT_043d8488 = 0xf;
    __cxa_guard_release(&DAT_043d8490);
  }
  uVar10 = DAT_043d8478;
  lVar4 = FUN_00153520(param_1,DAT_043d8478);
  if ((uVar10 < ((ulong)(uint)-(int)lVar4 & 7 | 8)) ||
     (plVar11 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar11 == (long *)0x0)) {
    FUN_0014ff10(param_1,0xfffffffe);
    uVar10 = DAT_043d8488;
    lVar4 = FUN_00153520(param_1,DAT_043d8488);
    if ((uVar10 < ((ulong)(uint)-(int)lVar4 & 7 | 8)) ||
       (plVar11 = (long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7)), plVar11 == (long *)0x0)) {
      FUN_0014ff10(param_1,0xfffffffe);
      pbVar3 = (byte *)FUN_020690f0();
      if ((*pbVar3 & 1) == 0) {
        pbVar3 = pbVar3 + 1;
      }
      else {
        pbVar3 = *(byte **)(pbVar3 + 0x10);
      }
      FUN_00154110(param_1,"cannot properly align memory for \'%s\'",pbVar3);
      pcStack_248 = FUN_02068ef0;
      if ((*PTR_DAT_04384240 & 1) != 0) {
        return PTR_DAT_04384248;
      }
      pbStack_270 = pbVar12;
      lStack_260 = lVar2;
      uStack_258 = param_1;
      puStack_250 = auStack_240 + 0x230;
      iVar1 = __cxa_guard_acquire(PTR_DAT_04384240);
      if (iVar1 == 0) {
        return PTR_DAT_04384248;
      }
      auStack_288[1] = 0;
      auStack_288[2] = 0;
      auStack_288[0] = 0x2e6c6f7308;
      pbVar3 = (byte *)FUN_020690f0();
      pbVar12 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar12 = pbVar3 + 1;
      }
      psVar8 = (string *)std::string::append((char *)auStack_288,(ulong)pbVar12);
      std::string::string((string *)PTR_DAT_04384248,psVar8);
      uVar10 = auStack_288[2];
      plVar11 = DAT_043f1798;
      if (((auStack_288[0] & 1) != 0) && (auStack_288[2] != 0)) {
        lVar2 = tpidr_el0;
        plVar13 = *(long **)(lVar2 + 0x20);
        if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
          *(long **)(lVar2 + 0x20) = DAT_043f1798;
          plVar13 = plVar11;
        }
        uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
        if ((uVar9 & 1) != 0) {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar2 + 0x38d480)) {
            FUN_02bcc824(plVar13,uVar10,0,8);
            goto LAB_0206904c;
          }
        }
        (**(code **)(*plVar13 + 0x18))(plVar13,uVar10,0,8);
      }
LAB_0206904c:
      FUN_00100250(PTR__string_04379718,PTR_DAT_04384248,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04384240);
      return PTR_DAT_04384248;
    }
  }
  *plVar11 = lVar2;
  iVar1 = FUN_00154450(param_1,pbVar12);
  if (iVar1 == 1) {
    memset(auStack_240,0,0x200);
    local_34 = 0;
    FUN_020699d0(auStack_240,&local_34);
    FUN_00155a20(param_1,auStack_240,0);
    FUN_00151fe0(param_1,0,2);
    pbVar12 = (byte *)FUN_020690f0();
    if ((*pbVar12 & 1) == 0) {
      pbVar3 = pbVar12 + 1;
      uVar10 = (ulong)(*pbVar12 >> 1);
    }
    else {
      uVar10 = *(ulong *)(pbVar12 + 8);
      pbVar3 = *(byte **)(pbVar12 + 0x10);
    }
    FUN_001514f0(param_1,pbVar3,uVar10);
    FUN_00152550(param_1,0xfffffffe,&DAT_038f8fce);
    FUN_001516f0(param_1,&LAB_02069980,0);
    FUN_00152550(param_1,0xfffffffe,&DAT_0397bfcb);
    lVar2 = FUN_008cca50();
    if ((*(byte *)(lVar2 + 0x2d0) & 1) == 0) {
      lVar2 = lVar2 + 0x2d1;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x2e0);
    }
    FUN_00152550(param_1,0xfffffffe,lVar2);
  }
  puVar5 = (undefined *)FUN_00152ae0(param_1,0xfffffffe);
  return puVar5;
}


