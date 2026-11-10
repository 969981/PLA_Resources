/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ecfe4; name: FUN_010ecfe4
 */


void FUN_010ecfe4(long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  undefined1 *puVar1;
  
  switch(param_2) {
  case 0:
    if (param_4 < 200) {
      puVar1 = (undefined1 *)(param_1 + (ulong)param_4 + 0x68);
LAB_010ed098:
      *puVar1 = 1;
      return;
    }
    break;
  case 1:
    if (param_4 < 200) {
      puVar1 = (undefined1 *)(param_1 + (ulong)param_4 + 0x130);
      goto LAB_010ed098;
    }
    break;
  case 2:
    if (param_4 < 200) {
      puVar1 = (undefined1 *)(param_1 + (ulong)param_4 + 0x1f8);
      goto LAB_010ed098;
    }
    break;
  case 3:
    if (param_4 < 100) {
      puVar1 = (undefined1 *)(param_1 + (ulong)param_4 + 0x2c0);
      goto LAB_010ed098;
    }
    break;
  case 4:
    if (param_4 < 4) {
      puVar1 = (undefined1 *)(param_1 + (ulong)param_4 + 0x324);
      goto LAB_010ed098;
    }
    break;
  case 5:
    if (param_4 < 200) {
      puVar1 = (undefined1 *)(param_1 + (ulong)param_4 + 0x328);
      goto LAB_010ed098;
    }
    break;
  case 6:
    if (param_4 < 100) {
      puVar1 = (undefined1 *)(param_1 + (ulong)param_4 + 0x3f0);
      goto LAB_010ed098;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


