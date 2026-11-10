/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a897a0; name: FUN_02a897a0
 */


void FUN_02a897a0(byte *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  long *plVar9;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_00e1bd48(&local_48);
  uVar7 = local_48 >> 1 & 0x7f;
  uVar4 = (ulong)&local_48 | 1;
  if ((local_48 & 1) != 0) {
    uVar7 = local_40;
    uVar4 = local_38;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (param_1,*(long **)(param_2 + 0x10),uVar4,uVar4 + uVar7);
  uVar4 = local_38;
  bVar2 = *param_1;
  uVar7 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  plVar5 = DAT_043f1798;
  if (uVar7 != 1) {
    if (uVar7 == 0xc) {
      pbVar8 = *(byte **)(param_1 + 0x10);
      bVar6 = (bVar2 & 1) != 0;
      pbVar1 = param_1 + 4;
      if (bVar6) {
        pbVar1 = pbVar8 + 3;
      }
      if (!bVar6) {
        pbVar8 = param_1 + 1;
      }
      pbVar8[0xb] = *pbVar1;
      plVar5 = DAT_043f1798;
    }
    else if ((bVar2 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      plVar5 = DAT_043f1798;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      plVar5 = DAT_043f1798;
    }
  }
  DAT_043f1798 = plVar5;
  if (((local_48 & 1) != 0) && (local_38 != 0)) {
    lVar3 = tpidr_el0;
    plVar9 = *(long **)(lVar3 + 0x20);
    if (*(long **)(lVar3 + 0x20) == (long *)0x0) {
      *(long **)(lVar3 + 0x20) = plVar5;
      plVar9 = plVar5;
    }
    uVar7 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar7 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar9,uVar4,0,8);
        return;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,uVar4,0,8);
  }
  return;
}


