/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008443dc; name: FUN_008443dc
 */


void FUN_008443dc(long *param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar5 = (**(code **)(*param_1 + 0x80))();
  puVar4 = PTR_DAT_043773c0;
  if ((uVar5 & 1) != 0) {
    FUN_00848850(param_1 + 10);
    return;
  }
  plVar1 = param_1 + 10;
LAB_00844448:
  do {
    lVar6 = FUN_00845d68(param_1[9],*(undefined4 *)((long)param_1 + 0xcc));
    if (*(char *)(lVar6 + 0x648) == '\0') {
      FUN_00848850(plVar1);
      if (*plVar1 != 0) goto LAB_00844500;
LAB_00844428:
      *(int *)((long)param_1 + 0xcc) = *(int *)((long)param_1 + 0xcc) + 1;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      uVar5 = (**(code **)(*param_1 + 0x80))(param_1);
    }
    else {
      uVar2 = 0;
      if (*(byte *)(lVar6 + 0x14) + 0x1c <= *(uint *)(lVar6 + 0x5f8)) {
        uVar2 = (*(uint *)(lVar6 + 0x5f8) - (uint)*(byte *)(lVar6 + 0x14)) - 0x1c;
      }
      if (*(uint *)(param_1 + 0x1a) < uVar2) {
        FUN_008484cc();
        lVar6 = *plVar1;
      }
      else {
        FUN_00848850(plVar1,lVar6);
        lVar6 = *plVar1;
      }
      if (lVar6 == 0) goto LAB_00844428;
      bVar3 = *(byte *)(param_1 + 0xf);
      iVar8 = 1;
      if ((bVar3 & 1) != 0) {
        iVar8 = 2;
      }
      if ((bVar3 & 2) != 0) {
        iVar8 = iVar8 + 2;
      }
      if ((bVar3 & 4) != 0) {
        iVar8 = iVar8 + 4;
      }
      if ((bVar3 & 8) != 0) {
        iVar8 = iVar8 + 8;
      }
      *(uint *)(param_1 + 0x1a) =
           (int)param_1[0x1a] + (uint)*(ushort *)((long)param_1 + 0x7a) + iVar8;
LAB_00844500:
      uVar5 = (**(code **)(*param_1 + 0x90))(param_1);
      if ((*(long *)puVar4 == 0) || ((uVar5 & 1) == 0)) goto LAB_00844448;
      if ((*(byte *)((long)param_1 + 0x79) & 1) == 0) {
        if ((*(byte *)((long)param_1 + 0x79) >> 3 & 1) == 0) {
          uVar5 = (**(code **)(*param_1 + 0xb0))(param_1,param_1 + 0x12);
          if ((uVar5 & 1) == 0) goto LAB_00844448;
          uVar5 = FUN_00848874(plVar1);
        }
        else {
          uVar7 = FUN_00848874(plVar1);
          uVar5 = (**(code **)(*param_1 + 0xb8))(param_1,uVar7);
          uVar5 = uVar5 & 1;
        }
        if (uVar5 == 0) goto LAB_00844448;
      }
      uVar5 = (**(code **)(*param_1 + 0xa8))(param_1,plVar1);
    }
    if ((uVar5 & 1) != 0) {
      return;
    }
  } while( true );
}


