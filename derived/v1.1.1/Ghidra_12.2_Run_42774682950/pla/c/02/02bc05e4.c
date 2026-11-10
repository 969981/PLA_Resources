/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc05e4; name: FUN_02bc05e4
 */


void FUN_02bc05e4(long *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  
  switch(*(uint *)(param_1 + 0xb) ^ (int)*(uint *)(param_1 + 0xb) >> 0x1f) {
  case 0:
    plVar7 = param_1 + 0xe;
    cVar2 = (char)*plVar7;
    break;
  case 1:
    uVar1 = *(uint *)(param_1 + 0x14);
    uVar6 = (uint)*(ulong *)(param_1[0x13] + 0x138);
    if (uVar1 < 3) {
      uVar6 = uVar6 & uVar1 - 1;
    }
    else {
      iVar3 = 0;
      if ((ulong)uVar1 != 0) {
        iVar3 = (int)(*(ulong *)(param_1[0x13] + 0x138) / (ulong)uVar1);
      }
      uVar6 = uVar6 - iVar3 * uVar1;
    }
    uVar8 = (param_1[0xd] - param_1[0xc] >> 3) * -0x5555555555555555;
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = (ulong)(long)(int)(uVar6 + param_2) / uVar8;
    }
    plVar7 = (long *)(param_1[0xc] + ((long)(int)(uVar6 + param_2) - uVar4 * uVar8) * 0x18 + 0x10);
    cVar2 = *(char *)plVar7;
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
    pcVar5 = (code *)UndefinedInstructionException(0,0x2bc06a4);
    (*pcVar5)();
  }
  if (cVar2 == '\0') {
    return;
  }
  *(char *)plVar7 = '\0';
                    /* WARNING: Could not recover jumptable at 0x02bc0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


