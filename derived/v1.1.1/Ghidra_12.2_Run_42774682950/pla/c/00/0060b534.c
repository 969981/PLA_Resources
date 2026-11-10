/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b534; name: FUN_0060b534
 */


void FUN_0060b534(undefined4 *param_1,void *param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 2);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if (param_2 == (void *)0x0) {
    FUN_0060b82c(puVar1,param_3,0);
  }
  else {
                    /* try { // try from 0060b558 to 0060b563 has its CatchHandler @ 0060b5dc */
    FUN_0060b82c(puVar1,param_3,1);
    memcpy((void *)(*(long *)(param_1 + 6) + *(long *)(param_1 + 2)),param_2,param_3);
    *(ulong *)(param_1 + 2) = param_3;
    if ((*(ulong *)(param_1 + 4) < param_3) ||
       (*(long *)(param_1 + 6) == 0 && *(ulong *)(param_1 + 4) != 0)) {
                    /* try { // try from 0060b5a4 to 0060b5cf has its CatchHandler @ 0060b5dc */
                    /* WARNING: Subroutine does not return */
      FUN_00607c30("external/webrtc\\rtc_base/buffer.h",0x109,"IsConsistent()",PTR_DAT_043752a0);
    }
  }
  return;
}


