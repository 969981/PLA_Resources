/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02728014; name: FUN_02728014
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02728014(undefined8 param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long *plVar7;
  int extraout_var;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  char local_1070 [8];
  ulong local_1068;
  undefined1 *local_1060;
  code *local_1058;
  undefined1 *local_1050;
  undefined1 *puStack_1048;
  long local_1040;
  int local_1038;
  undefined8 local_1034;
  
  plVar7 = (long *)FUN_0272851c();
  lVar11 = *plVar7;
  if (lVar11 == 0) {
    DAT_043ea4e0 = lVar11;
    return;
  }
  DAT_043ea4e0 = lVar11;
  FUN_02727c7c(&local_1060,param_1);
  if (local_1060._0_1_ != (ApplicationErrorArg)0x0) {
    FUN_02728374(lVar11,(ulong)&local_1060 | 4);
    return;
  }
  FUN_02727c9c(&local_1060,param_1);
  if (local_1060._0_1_ != (ApplicationErrorArg)0x0) {
    FUN_027283f0(lVar11,(ulong)&local_1060 | 4);
    return;
  }
  FUN_02727c5c(&local_1060,param_1);
  if (local_1060._0_1_ != (ApplicationErrorArg)0x0) {
    FUN_02728460(lVar11,(ulong)&local_1060 | 4);
    return;
  }
  FUN_02727cd8(local_1070,param_1);
  if (local_1070[0] == '\0') {
    return;
  }
  FUN_02727cf8(param_1);
  plVar7 = *(long **)(*(long *)(lVar11 + 0x58) + 0x68);
  if (plVar7 == (long *)0x0) {
    if (_DAT_000000b0 != 0) {
      plVar7 = *(long **)(_DAT_000000b0 + 0x270);
      if (plVar7 != *(long **)(_DAT_000000b0 + 0x278)) {
        iVar6 = 0;
        do {
          puVar2 = (ulong *)PTR_DAT_04379c88;
          if (*plVar7 != 0) {
            puVar2 = (ulong *)(*plVar7 + 0x58);
          }
          if (*puVar2 == local_1068) goto LAB_02728368;
          plVar7 = plVar7 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(_DAT_000000b0 + 0x278) != plVar7);
      }
    }
    iVar6 = 0;
LAB_02728368:
    FUN_02c2e33c(0,iVar6,*(undefined8 *)(lVar11 + 0x60));
  }
  else {
    plVar1 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = plVar7[0x16];
    if (lVar9 != 0) {
      plVar8 = *(long **)(lVar9 + 0x270);
      if (plVar8 != *(long **)(lVar9 + 0x278)) {
        iVar6 = 0;
        do {
          puVar2 = (ulong *)PTR_DAT_04379c88;
          if (*plVar8 != 0) {
            puVar2 = (ulong *)(*plVar8 + 0x58);
          }
          if (*puVar2 == local_1068) goto LAB_02728190;
          plVar8 = plVar8 + 1;
          iVar6 = iVar6 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar8);
      }
    }
    iVar6 = 0;
LAB_02728190:
    FUN_02c2e33c(plVar7,iVar6,*(undefined8 *)(lVar11 + 0x60));
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  memset((char *)(lVar11 + 0x68),0,0x800);
  iVar6 = nn::util::ConvertStringUtf16NativeToUtf8
                    ((char *)(lVar11 + 0x68),0x800,*(ushort **)(*(long *)(lVar11 + 0x60) + 0x58));
  if (iVar6 != 0) {
    return;
  }
  FUN_00d155b0();
  local_1034 = nn::settings::LanguageCode::Make();
  if (extraout_var == 10) {
    uVar10 = 0xa99a0ca0ea20;
  }
  else {
    if (extraout_var != 9) goto LAB_02728288;
    uVar10 = 0xaa9a0ca0ebd3;
  }
  if (local_1068 == (uVar10 | 0xf02a000000000000)) {
    nn::err::ApplicationErrorArg::ApplicationErrorArg((ApplicationErrorArg *)&local_1060);
    nn::err::ApplicationErrorArg::SetApplicationErrorCodeNumber((uint)&local_1060);
    nn::err::ApplicationErrorArg::SetDialogMessage((char *)&local_1060);
    nn::err::ApplicationErrorArg::SetFullScreenMessage((char *)&local_1060);
    nn::err::ApplicationErrorArg::SetLanguageCode((LanguageCode *)&local_1060);
    nn::err::ShowApplicationError((ApplicationErrorArg *)&local_1060);
    return;
  }
LAB_02728288:
  local_1060 = &LAB_02728818;
  local_1058 = FUN_0272889c;
  local_1050 = &LAB_027288a0;
  puStack_1048 = &LAB_027288b4;
  local_1040 = lVar11;
  local_1038 = extraout_var;
  FUN_0275eeb0(*(undefined8 *)(lVar11 + 0x50),&local_1060);
  pcVar5 = local_1058;
  if (local_1058 != (code *)0x0) {
    local_1050 = (undefined1 *)0x0;
    puStack_1048 = (undefined1 *)0x0;
    local_1060 = (undefined1 *)0x0;
    local_1058 = (code *)0x0;
    (*pcVar5)(&local_1040);
  }
  return;
}


