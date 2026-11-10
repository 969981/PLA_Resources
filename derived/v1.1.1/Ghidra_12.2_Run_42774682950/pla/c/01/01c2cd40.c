/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2cd40; name: FUN_01c2cd40
 */


undefined1  [16] FUN_01c2cd40(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 in_q3 [16];
  undefined8 uVar11;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  uVar11 = in_q3._8_8_;
  uVar10 = in_q3._0_8_;
  local_40 = (long *)&DAT_471b26c9ac42475c;
  pcStack_38 = "ringuma";
  local_30 = 7;
  local_28 = (long *)0x0;
  local_60 = 0x6bd88f26f29dc6e8;
  pcStack_58 = "is_search_ceneter_head";
  local_50 = 0x16;
  local_48 = (long *)0x0;
  uVar7 = FUN_00e9e50c(&local_40,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if ((uVar7 & 1) == 0) {
    FUN_009c69bc(&local_40,param_1);
    (**(code **)(*local_40 + 0x40))();
    auVar6._8_8_ = uVar11;
    auVar6._0_8_ = uVar10;
    auVar5._8_8_ = uVar11;
    auVar5._0_8_ = uVar10;
    auVar9._8_8_ = uVar11;
    auVar9._0_8_ = uVar10;
    if (local_40 != (long *)0x0) {
      lVar8 = local_40[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      auVar9 = auVar5;
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
        auVar9 = auVar6;
      }
    }
  }
  else {
    auVar9 = FUN_01c2e2d4(param_1);
  }
  return auVar9;
}


