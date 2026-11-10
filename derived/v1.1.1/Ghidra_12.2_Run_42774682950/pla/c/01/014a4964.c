/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a4964; name: FUN_014a4964
 */


void FUN_014a4964(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  code *local_78;
  undefined8 uStack_70;
  
  iVar2 = FUN_014a4fd8();
  if (iVar2 == 0) {
    FUN_014a53f8(param_1);
    return;
  }
  local_80 = param_1;
  if (iVar2 == 2) {
    lVar3 = FUN_014a4824(param_1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_78 = FUN_014a4ab4;
    uStack_70 = 0;
    local_a0 = &LAB_014a57ec;
    local_98 = FUN_014a5808;
    local_90 = &LAB_014a580c;
    puStack_88 = &LAB_014a5820;
    piVar4 = (int *)FUN_014a32f0();
    uVar5 = 0x3332689220e24038;
    if (*piVar4 != 0) {
      uVar5 = 0x33326c9220e24704;
    }
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    local_78 = FUN_014a4ab4;
    uStack_70 = 0;
    local_a0 = &LAB_014a57ec;
    local_98 = FUN_014a5808;
    uVar5 = 0x33326b9220e24551;
    local_90 = &LAB_014a580c;
    puStack_88 = &LAB_014a5820;
  }
  FUN_014a4f24(param_1,uVar5,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


