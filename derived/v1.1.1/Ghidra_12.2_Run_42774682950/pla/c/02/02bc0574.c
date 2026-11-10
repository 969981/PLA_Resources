/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc0574; name: FUN_02bc0574
 */


void FUN_02bc0574(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [12];
  
  switch(*(uint *)(param_1 + 0x58) ^ (int)*(uint *)(param_1 + 0x58) >> 0x1f) {
  case 0:
    *(undefined1 *)(param_1 + 0x70) = 1;
    return;
  case 1:
    lVar2 = *(long *)(param_1 + 0x68);
    for (lVar1 = *(long *)(param_1 + 0x60); lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
      *(undefined1 *)(lVar1 + 0x10) = 1;
    }
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_02bc0e30();
  }
  auVar13 = FUN_02bc0e40();
  plVar8 = auVar13._0_8_;
  switch(*(uint *)(plVar8 + 0xb) ^ (int)*(uint *)(plVar8 + 0xb) >> 0x1f) {
  case 0:
    plVar11 = plVar8 + 0xe;
    cVar4 = (char)*plVar11;
    break;
  case 1:
    uVar3 = *(uint *)(plVar8 + 0x14);
    uVar9 = (uint)*(ulong *)(plVar8[0x13] + 0x138);
    if (uVar3 < 3) {
      uVar9 = uVar9 & uVar3 - 1;
    }
    else {
      iVar5 = 0;
      if ((ulong)uVar3 != 0) {
        iVar5 = (int)(*(ulong *)(plVar8[0x13] + 0x138) / (ulong)uVar3);
      }
      uVar9 = uVar9 - iVar5 * uVar3;
    }
    uVar12 = (plVar8[0xd] - plVar8[0xc] >> 3) * -0x5555555555555555;
    uVar10 = (ulong)(int)(uVar9 + auVar13._8_4_);
    uVar6 = 0;
    if (uVar12 != 0) {
      uVar6 = uVar10 / uVar12;
    }
    plVar11 = (long *)(plVar8[0xc] + (uVar10 - uVar6 * uVar12) * 0x18 + 0x10);
    cVar4 = *(char *)plVar11;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_02bc0e50();
  default:
    FUN_02bc0e60();
                    /* WARNING: Does not return */
    pcVar7 = (code *)UndefinedInstructionException(0,0x2bc06a4);
    (*pcVar7)();
  }
  if (cVar4 == '\0') {
    return;
  }
  *(char *)plVar11 = '\0';
                    /* WARNING: Could not recover jumptable at 0x02bc0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x28))();
  return;
}


