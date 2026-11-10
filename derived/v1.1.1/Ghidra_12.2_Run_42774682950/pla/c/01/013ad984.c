/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ad984; name: FUN_013ad984
 */


ulong FUN_013ad984(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_28;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0:
    uVar3 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),2);
    if ((uVar3 & 1) == 0) goto LAB_013adad4;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    uVar5 = 1;
    break;
  case 1:
    uVar3 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),2);
    if ((uVar3 & 1) == 0) goto LAB_013adad4;
    uVar3 = FUN_013afd24();
    uVar5 = 2;
    if ((uVar3 & 1) != 0) {
      uVar5 = 3;
    }
    break;
  case 2:
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379678), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    uVar2 = *(undefined8 *)PTR_DAT_04379680;
    *(undefined8 *)PTR_DAT_04379688 = uVar2;
    local_28 = 0x2a587ac03253f2d6;
    FUN_014a7fb4(uVar2,&local_28);
    uVar5 = 3;
    break;
  case 3:
    uVar4 = 1;
    uVar3 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar3 & 1) != 0) {
      uVar3 = 0xf00000000;
      goto LAB_013ada34;
    }
    uVar3 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),2);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = FUN_013c6230(*(undefined8 *)(param_1 + 0xc0)), (uVar3 & 0xff) != 0)) {
      iVar1 = (int)(uVar3 >> 0x20);
      if (iVar1 == 2) {
        uVar3 = 0xd00000000;
        uVar4 = 1;
      }
      else {
        if (iVar1 == 1) {
          *(undefined4 *)(param_1 + 0xb4) = 1;
        }
        else {
          if (iVar1 != 0) goto switchD_013ad9b8_default;
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
        uVar4 = 1;
        *(undefined1 *)(param_1 + 0xb0) = 1;
        uVar3 = 0x200000000;
      }
      goto LAB_013ada34;
    }
LAB_013adad4:
    uVar4 = 0;
    uVar3 = 0;
    goto LAB_013ada34;
  default:
switchD_013ad9b8_default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar4 = 0;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xac) = uVar5;
LAB_013ada34:
  return uVar3 | uVar4;
}


