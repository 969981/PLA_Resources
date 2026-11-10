/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120b72c; name: FUN_0120b72c
 */


undefined8 FUN_0120b72c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)FUN_0120ca1c();
  uVar5 = *puVar1;
  *(undefined8 *)PTR_DAT_0437e8f8 = uVar5;
  switch(*(undefined4 *)(param_1 + 0xb4)) {
  case 0:
    uVar3 = FUN_0120bc6c(param_1);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar4 = 1;
    goto LAB_0120b784;
  case 1:
    *(undefined1 *)(param_1 + 0x288) = 1;
    nn::os::GetSystemTick();
    uVar2 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0x278) = uVar2;
    FUN_027be890(uVar5);
    FUN_027d9e90(*(undefined8 *)(param_1 + 0x270));
    *(undefined4 *)(param_1 + 0xb4) = 2;
switchD_0120b770_caseD_2:
    FUN_0120bd20(param_1 + 0x278);
    if (((3.0 <= (double)*(long *)(param_1 + 0x280) / 1000000000.0) &&
        (uVar3 = FUN_027bdc94(uVar5), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_027d9cf0(*(undefined8 *)(param_1 + 0x270)), (uVar3 & 1) == 0)) {
      FUN_027bcfc0(param_1 + 0xc0);
      uVar4 = 3;
LAB_0120b784:
      *(undefined4 *)(param_1 + 0xb4) = uVar4;
    }
switchD_0120b770_default:
    return 0;
  case 2:
    goto switchD_0120b770_caseD_2;
  case 3:
    uVar5 = FUN_027bc6a4(param_1 + 0xc0);
    return uVar5;
  default:
    goto switchD_0120b770_default;
  }
}


