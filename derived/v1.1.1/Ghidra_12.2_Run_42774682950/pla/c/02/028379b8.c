/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028379b8; name: FUN_028379b8
 */


void FUN_028379b8(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  
  FUN_02837abc();
  *(bool *)(param_1[0x15] + 0x178) = (int)param_1[0x10] != 4 && (int)param_1[0x10] != 1;
  iVar1 = (**(code **)(*(long *)param_1[0x15] + 0x50))();
  if ((char)param_1[0x1b] == '\0') goto switchD_02837a68_default;
  if (iVar1 == 0) {
    switch(*(undefined4 *)((long)param_1 + 0xdc)) {
    case 0:
      pcVar3 = *(code **)(*param_1 + 0xc0);
      goto LAB_02837aa0;
    case 1:
      pcVar3 = *(code **)(*param_1 + 0xc0);
      goto LAB_02837a38;
    case 2:
      lVar4 = *param_1;
      uVar2 = 1;
      break;
    case 3:
      lVar4 = *param_1;
      uVar2 = 0;
      break;
    default:
      goto switchD_02837a68_default;
    }
    (**(code **)(lVar4 + 0xc0))(param_1,uVar2);
    *(undefined4 *)((long)param_1 + 0xdc) = 4;
  }
  else {
    pcVar3 = *(code **)(*param_1 + 0xc0);
    if (iVar1 == 2) {
LAB_02837aa0:
      uVar2 = 1;
    }
    else {
LAB_02837a38:
      uVar2 = 0;
    }
    (*pcVar3)(param_1,uVar2);
  }
switchD_02837a68_default:
  *(int *)(param_1 + 0x17) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x02837a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1);
  return;
}


